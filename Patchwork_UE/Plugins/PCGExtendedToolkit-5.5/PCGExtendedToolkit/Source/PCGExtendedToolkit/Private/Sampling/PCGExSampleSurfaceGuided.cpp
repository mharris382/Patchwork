﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Sampling/PCGExSampleSurfaceGuided.h"


#define LOCTEXT_NAMESPACE "PCGExSampleSurfaceGuidedElement"
#define PCGEX_NAMESPACE SampleSurfaceGuided

TArray<FPCGPinProperties> UPCGExSampleSurfaceGuidedSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties = Super::InputPinProperties();
	if (SurfaceSource == EPCGExSurfaceSource::ActorReferences) { PCGEX_PIN_POINT(PCGExSampling::SourceActorReferencesLabel, "Points with actor reference paths.", Required, {}) }
	return PinProperties;
}

PCGExData::EIOInit UPCGExSampleSurfaceGuidedSettings::GetMainOutputInitMode() const { return PCGExData::EIOInit::Duplicate; }

int32 UPCGExSampleSurfaceGuidedSettings::GetPreferredChunkSize() const { return PCGExMT::GAsyncLoop_L; }

PCGEX_INITIALIZE_ELEMENT(SampleSurfaceGuided)

bool FPCGExSampleSurfaceGuidedElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExPointsProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(SampleSurfaceGuided)

	PCGEX_FOREACH_FIELD_SURFACEGUIDED(PCGEX_OUTPUT_VALIDATE_NAME)

	Context->bUseInclude = Settings->SurfaceSource == EPCGExSurfaceSource::ActorReferences;
	if (Context->bUseInclude)
	{
		PCGEX_VALIDATE_NAME(Settings->ActorReference)
		Context->ActorReferenceDataFacade = PCGExData::TryGetSingleFacade(Context, PCGExSampling::SourceActorReferencesLabel, true);
		if (!Context->ActorReferenceDataFacade) { return false; }

		if (!PCGExSampling::GetIncludedActors(
			Context, Context->ActorReferenceDataFacade.ToSharedRef(),
			Settings->ActorReference, Context->IncludedActors))
		{
			return false;
		}
	}

	Context->CollisionSettings = Settings->CollisionSettings;
	Context->CollisionSettings.Init(Context);

	return true;
}

bool FPCGExSampleSurfaceGuidedElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExSampleSurfaceGuidedElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(SampleSurfaceGuided)
	PCGEX_EXECUTION_CHECK
	PCGEX_ON_INITIAL_EXECUTION
	{
		if (!Context->StartBatchProcessingPoints<PCGExPointsMT::TBatch<PCGExSampleSurfaceGuided::FProcessor>>(
			[&](const TSharedPtr<PCGExData::FPointIO>& Entry) { return true; },
			[&](const TSharedPtr<PCGExPointsMT::TBatch<PCGExSampleSurfaceGuided::FProcessor>>& NewBatch)
			{
				if (Settings->bPruneFailedSamples) { NewBatch->bRequiresWriteStep = true; }
			}))
		{
			return Context->CancelExecution(TEXT("Could not find any points to sample."));
		}
	}

	PCGEX_POINTS_BATCH_PROCESSING(PCGEx::State_Done)

	Context->MainPoints->StageOutputs();

	return Context->TryComplete();
}

namespace PCGExSampleSurfaceGuided
{
	FProcessor::~FProcessor()
	{
	}

	bool FProcessor::Process(const TSharedPtr<PCGExMT::FTaskManager> InAsyncManager)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGExSampleSurfaceGuided::Process);

		SurfacesForward = Context->bUseInclude ? Settings->AttributesForwarding.TryGetHandler(Context->ActorReferenceDataFacade, PointDataFacade) : nullptr;

		// Must be set before process for filters
		PointDataFacade->bSupportsScopedGet = Context->bScopedAttributeGet;

		if (!FPointsProcessor::Process(InAsyncManager)) { return false; }

		SampleState.SetNumUninitialized(PointDataFacade->GetNum());

		DirectionGetter = PointDataFacade->GetScopedBroadcaster<FVector>(Settings->Direction);

		if (!DirectionGetter)
		{
			PCGE_LOG_C(Error, GraphAndLog, ExecutionContext, FTEXT("Some inputs don't have the required Direction data."));
			return false;
		}

		{
			const TSharedRef<PCGExData::FFacade>& OutputFacade = PointDataFacade;
			PCGEX_FOREACH_FIELD_SURFACEGUIDED(PCGEX_OUTPUT_INIT)
		}

		if (Settings->bUseLocalMaxDistance)
		{
			MaxDistanceGetter = PointDataFacade->GetScopedBroadcaster<double>(Settings->LocalMaxDistance);
			if (!MaxDistanceGetter)
			{
				PCGE_LOG_C(Error, GraphAndLog, ExecutionContext, FTEXT("LocalMaxDistance missing"));
				return false;
			}
		}

		World = Context->SourceComponent->GetWorld();
		StartParallelLoopForPoints();

		return true;
	}

	void FProcessor::PrepareSingleLoopScopeForPoints(const uint32 StartIndex, const int32 Count)
	{
		PointDataFacade->Fetch(StartIndex, Count);
		FilterScope(StartIndex, Count);
	}

	void FProcessor::ProcessSinglePoint(const int32 Index, FPCGPoint& Point, const int32 LoopIdx, const int32 Count)
	{
		const double MaxDistance = MaxDistanceGetter ? MaxDistanceGetter->Read(Index) : Settings->MaxDistance;
		const FVector Direction = DirectionGetter->Read(Index).GetSafeNormal();

		auto SamplingFailed = [&]()
		{
			SampleState[Index] = false;

			PCGEX_OUTPUT_VALUE(Location, Index, Point.Transform.GetLocation())
			PCGEX_OUTPUT_VALUE(Normal, Index, Direction*-1)
			PCGEX_OUTPUT_VALUE(LookAt, Index, Direction)
			PCGEX_OUTPUT_VALUE(Distance, Index, MaxDistance)
			//PCGEX_OUTPUT_VALUE(IsInside, Index, false)
			//PCGEX_OUTPUT_VALUE(Success, Index, false)
			//PCGEX_OUTPUT_VALUE(ActorReference, Index, TEXT(""))
			//PCGEX_OUTPUT_VALUE(PhysMat, Index, TEXT(""))
		};

		if (!PointFilterCache[Index])
		{
			if (Settings->bProcessFilteredOutAsFails) { SamplingFailed(); }
			return;
		}

		const FVector Origin = Point.Transform.GetLocation();

		FCollisionQueryParams CollisionParams;
		Context->CollisionSettings.Update(CollisionParams);
		CollisionParams.bReturnPhysicalMaterial = PhysMatWriter ? true : false;

		const FVector Trace = Direction * MaxDistance;
		const FVector End = Origin + Trace;

		bool bSuccess = false;
		int32* HitIndex = nullptr;
		FHitResult HitResult;
		TArray<FHitResult> HitResults;

		auto ProcessTraceResult = [&]()
		{
			bSuccess = true;

			PCGEX_OUTPUT_VALUE(Location, Index, HitResult.ImpactPoint)
			PCGEX_OUTPUT_VALUE(LookAt, Index, Direction)
			PCGEX_OUTPUT_VALUE(Normal, Index, HitResult.ImpactNormal)
			PCGEX_OUTPUT_VALUE(Distance, Index, FVector::Distance(HitResult.ImpactPoint, Origin))
			PCGEX_OUTPUT_VALUE(IsInside, Index, FVector::DotProduct(Direction, HitResult.Normal) > 0)
			PCGEX_OUTPUT_VALUE(Success, Index, bSuccess)

			SampleState[Index] = bSuccess;

#if PCGEX_ENGINE_VERSION <= 503
			if (const AActor* HitActor = HitResult.GetActor())
			{
				HitIndex = Context->IncludedActors.Find(HitActor);
				PCGEX_OUTPUT_VALUE(ActorReference, Index, HitActor->GetPathName())
			}

			if (const UPhysicalMaterial* PhysMat = HitResult.PhysMaterial.Get()) { PCGEX_OUTPUT_VALUE(PhysMat, Index, PhysMat->GetPathName()) }
#else
			if (const AActor* HitActor = HitResult.GetActor())
			{
				HitIndex = Context->IncludedActors.Find(HitActor);
				PCGEX_OUTPUT_VALUE(ActorReference, Index, FSoftObjectPath(HitActor->GetPathName()))
			}

			if (const UPhysicalMaterial* PhysMat = HitResult.PhysMaterial.Get()) { PCGEX_OUTPUT_VALUE(PhysMat, Index, FSoftObjectPath(PhysMat->GetPathName())) }
#endif

			if (SurfacesForward && HitIndex) { SurfacesForward->Forward(*HitIndex, Index); }

			FPlatformAtomics::InterlockedExchange(&bAnySuccess, 1);
		};

		auto ProcessMultipleTraceResult = [&]()
		{
			for (const FHitResult& Hit : HitResults)
			{
				if (Context->IncludedActors.Contains(Hit.GetActor()))
				{
					HitResult = Hit;
					ProcessTraceResult();
					return;
				}
			}
		};

		switch (Context->CollisionSettings.CollisionType)
		{
		case EPCGExCollisionFilterType::Channel:
			if (Context->bUseInclude)
			{
				if (World->LineTraceMultiByChannel(
					HitResults, Origin, End,
					Context->CollisionSettings.CollisionChannel, CollisionParams))
				{
					ProcessMultipleTraceResult();
				}
			}
			else
			{
				if (World->LineTraceSingleByChannel(
					HitResult, Origin, End,
					Context->CollisionSettings.CollisionChannel, CollisionParams))
				{
					ProcessTraceResult();
				}
			}
			break;
		case EPCGExCollisionFilterType::ObjectType:
			if (Context->bUseInclude)
			{
				if (World->LineTraceMultiByObjectType(
					HitResults, Origin, End,
					FCollisionObjectQueryParams(Context->CollisionSettings.CollisionObjectType), CollisionParams))
				{
					ProcessMultipleTraceResult();
				}
			}
			else
			{
				if (World->LineTraceSingleByObjectType(
					HitResult, Origin, End,
					FCollisionObjectQueryParams(Context->CollisionSettings.CollisionObjectType), CollisionParams)) { ProcessTraceResult(); }
			}
			break;
		case EPCGExCollisionFilterType::Profile:
			if (Context->bUseInclude)
			{
				if (World->LineTraceMultiByProfile(
					HitResults, Origin, End,
					Context->CollisionSettings.CollisionProfileName, CollisionParams))
				{
					ProcessMultipleTraceResult();
				}
			}
			else
			{
				if (World->LineTraceSingleByProfile(
					HitResult, Origin, End,
					Context->CollisionSettings.CollisionProfileName, CollisionParams)) { ProcessTraceResult(); }
			}
			break;
		default:
			break;
		}

		if (!bSuccess) { SamplingFailed(); }
	}

	void FProcessor::CompleteWork()
	{
		PointDataFacade->Write(AsyncManager);

		if (Settings->bTagIfHasSuccesses && bAnySuccess) { PointDataFacade->Source->Tags->Add(Settings->HasSuccessesTag); }
		if (Settings->bTagIfHasNoSuccesses && !bAnySuccess) { PointDataFacade->Source->Tags->Add(Settings->HasNoSuccessesTag); }
	}

	void FProcessor::Write()
	{
		PCGExSampling::PruneFailedSamples(PointDataFacade->GetMutablePoints(), SampleState);
	}
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
