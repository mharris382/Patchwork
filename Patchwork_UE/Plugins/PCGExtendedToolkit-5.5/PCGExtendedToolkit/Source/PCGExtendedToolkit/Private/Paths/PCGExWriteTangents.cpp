﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Paths/PCGExWriteTangents.h"


#include "Paths/Tangents/PCGExZeroTangents.h"

#define LOCTEXT_NAMESPACE "PCGExWriteTangentsElement"
#define PCGEX_NAMESPACE BuildCustomGraph

TArray<FPCGPinProperties> UPCGExWriteTangentsSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties = Super::InputPinProperties();
	PCGEX_PIN_OPERATION_OVERRIDES(PCGExWriteTangents::SourceOverridesTangents)
	PCGEX_PIN_OPERATION_OVERRIDES(PCGExWriteTangents::SourceOverridesTangentsStart)
	PCGEX_PIN_OPERATION_OVERRIDES(PCGExWriteTangents::SourceOverridesTangentsEnd)
	return PinProperties;
}

PCGEX_INITIALIZE_ELEMENT(WriteTangents)

FName UPCGExWriteTangentsSettings::GetPointFilterPin() const
{
	return PCGExPointFilter::SourcePointFiltersLabel;
}

UPCGExWriteTangentsSettings::UPCGExWriteTangentsSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	if (ArriveScaleAttribute.GetName() == FName("@Last")) { ArriveScaleAttribute.Update(TEXT("$Scale")); }
	if (LeaveScaleAttribute.GetName() == FName("@Last")) { LeaveScaleAttribute.Update(TEXT("$Scale")); }
#endif
}

bool FPCGExWriteTangentsElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExPathProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(WriteTangents)

	PCGEX_VALIDATE_NAME(Settings->ArriveName)
	PCGEX_VALIDATE_NAME(Settings->LeaveName)

	PCGEX_OPERATION_BIND(Tangents, UPCGExTangentsOperation, PCGExWriteTangents::SourceOverridesTangents)
	if (Settings->StartTangents) { Context->StartTangents = Context->RegisterOperation<UPCGExTangentsOperation>(Settings->StartTangents, PCGExWriteTangents::SourceOverridesTangentsStart); }
	if (Settings->EndTangents) { Context->EndTangents = Context->RegisterOperation<UPCGExTangentsOperation>(Settings->EndTangents, PCGExWriteTangents::SourceOverridesTangentsEnd); }

	return true;
}


bool FPCGExWriteTangentsElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExWriteTangentsElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(WriteTangents)
	PCGEX_EXECUTION_CHECK
	PCGEX_ON_INITIAL_EXECUTION
	{
		PCGEX_ON_INVALILD_INPUTS(FTEXT("Some inputs have less than 2 points and won't be processed."))

		if (!Context->StartBatchProcessingPoints<PCGExPointsMT::TBatch<PCGExWriteTangents::FProcessor>>(
			[&](const TSharedPtr<PCGExData::FPointIO>& Entry)
			{
				if (Entry->GetNum() < 2)
				{
					bHasInvalidInputs = true;
					Entry->InitializeOutput(PCGExData::EIOInit::Forward);
					return false;
				}
				return true;
			},
			[&](const TSharedPtr<PCGExPointsMT::TBatch<PCGExWriteTangents::FProcessor>>& NewBatch)
			{
				NewBatch->PrimaryOperation = Context->Tangents;
			}))
		{
			return Context->CancelExecution(TEXT("Could not find any paths to write tangents to."));
		}
	}

	PCGEX_POINTS_BATCH_PROCESSING(PCGEx::State_Done)

	Context->MainPoints->StageOutputs();

	return Context->TryComplete();
}

namespace PCGExWriteTangents
{
	FProcessor::~FProcessor()
	{
	}

	bool FProcessor::Process(const TSharedPtr<PCGExMT::FTaskManager> InAsyncManager)
	{
		PointDataFacade->bSupportsScopedGet = Context->bScopedAttributeGet;

		if (!FPointsProcessor::Process(InAsyncManager)) { return false; }

		bClosedLoop = Context->ClosedLoop.IsClosedLoop(PointDataFacade->Source);

		Tangents = Cast<UPCGExTangentsOperation>(PrimaryOperation);
		Tangents->bClosedLoop = bClosedLoop;
		Tangents->PrepareForData();

		ConstantArriveScale = FVector(Settings->ArriveScaleConstant);
		ConstantLeaveScale = FVector(Settings->LeaveScaleConstant);

		if (Settings->ArriveScaleInput == EPCGExInputValueType::Attribute)
		{
			ArriveScaleReader = PointDataFacade->GetScopedBroadcaster<FVector>(Settings->ArriveScaleAttribute);
			if (!ArriveScaleReader)
			{
				PCGE_LOG_C(Error, GraphAndLog, ExecutionContext, FTEXT("Invalid Arrive Scale attribute"));
				return false;
			}
		}

		if (Settings->LeaveScaleInput == EPCGExInputValueType::Attribute)
		{
			LeaveScaleReader = PointDataFacade->GetScopedBroadcaster<FVector>(Settings->LeaveScaleAttribute);
			if (!LeaveScaleReader)
			{
				PCGE_LOG_C(Error, GraphAndLog, ExecutionContext, FTEXT("Invalid Arrive Scale attribute"));
				return false;
			}
		}

		if (Context->StartTangents)
		{
			StartTangents = Context->StartTangents->CopyOperation<UPCGExTangentsOperation>();
			StartTangents->bClosedLoop = bClosedLoop;
			StartTangents->PrimaryDataFacade = PointDataFacade;
			StartTangents->PrepareForData();
		}
		else { StartTangents = Tangents; }

		if (Context->EndTangents)
		{
			EndTangents = Context->EndTangents->CopyOperation<UPCGExTangentsOperation>();
			EndTangents->bClosedLoop = bClosedLoop;
			EndTangents->PrimaryDataFacade = PointDataFacade;
			EndTangents->PrepareForData();
		}
		else { EndTangents = Tangents; }

		ArriveWriter = PointDataFacade->GetWritable(Settings->ArriveName, FVector::ZeroVector, true, PCGExData::EBufferInit::Inherit);
		LeaveWriter = PointDataFacade->GetWritable(Settings->LeaveName, FVector::ZeroVector, true, PCGExData::EBufferInit::Inherit);

		LastIndex = PointDataFacade->GetNum() - 1;

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
		if (!PointFilterCache[Index]) { return; }

		const TSharedRef<PCGExData::FPointIO>& PointIO = PointDataFacade->Source;

		int32 PrevIndex = Index - 1;
		int32 NextIndex = Index + 1;

		FVector OutArrive = FVector::ZeroVector;
		FVector OutLeave = FVector::ZeroVector;

		const FVector& ArriveScale = ArriveScaleReader ? ArriveScaleReader->Read(Index) : ConstantArriveScale;
		const FVector& LeaveScale = LeaveScaleReader ? LeaveScaleReader->Read(Index) : ConstantLeaveScale;

		if (bClosedLoop)
		{
			if (PrevIndex < 0) { PrevIndex = LastIndex; }
			if (NextIndex > LastIndex) { NextIndex = 0; }

			Tangents->ProcessPoint(PointIO->GetIn()->GetPoints(), Index, NextIndex, PrevIndex, ArriveScale, OutArrive, LeaveScale, OutLeave);
		}
		else
		{
			if (Index == 0)
			{
				StartTangents->ProcessFirstPoint(PointIO->GetIn()->GetPoints(), ArriveScale, OutArrive, LeaveScale, OutLeave);
			}
			else if (Index == LastIndex)
			{
				EndTangents->ProcessLastPoint(PointIO->GetIn()->GetPoints(), ArriveScale, OutArrive, LeaveScale, OutLeave);
			}
			else
			{
				Tangents->ProcessPoint(PointIO->GetIn()->GetPoints(), Index, NextIndex, PrevIndex, ArriveScale, OutArrive, LeaveScale, OutLeave);
			}
		}

		ArriveWriter->GetMutable(Index) = OutArrive;
		LeaveWriter->GetMutable(Index) = OutLeave;
	}

	void FProcessor::CompleteWork()
	{
		PointDataFacade->Write(AsyncManager);
	}
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
