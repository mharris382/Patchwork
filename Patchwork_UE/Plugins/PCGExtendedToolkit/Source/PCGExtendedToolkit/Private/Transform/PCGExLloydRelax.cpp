﻿// Copyright 2025 Timothé Lapetite and contributors
// Released under the MIT license https://opensource.org/license/MIT/

#include "Transform/PCGExLloydRelax.h"


#include "Geometry/PCGExGeoDelaunay.h"

#define LOCTEXT_NAMESPACE "PCGExLloydRelaxElement"
#define PCGEX_NAMESPACE LloydRelax

PCGExData::EIOInit UPCGExLloydRelaxSettings::GetMainOutputInitMode() const { return PCGExData::EIOInit::None; }

PCGEX_INITIALIZE_ELEMENT(LloydRelax)

bool FPCGExLloydRelaxElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExPointsProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(LloydRelax)

	return true;
}

bool FPCGExLloydRelaxElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExLloydRelaxElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(LloydRelax)
	PCGEX_EXECUTION_CHECK
	PCGEX_ON_INITIAL_EXECUTION
	{
		PCGEX_ON_INVALILD_INPUTS(FTEXT("Some inputs have less than 4 points and won't be processed."))

		if (!Context->StartBatchProcessingPoints<PCGExPointsMT::TBatch<PCGExLloydRelax::FProcessor>>(
			[&](const TSharedPtr<PCGExData::FPointIO>& Entry)
			{
				if (Entry->GetNum() <= 4)
				{
					Entry->InitializeOutput(PCGExData::EIOInit::Forward);
					bHasInvalidInputs = true;
					return false;
				}
				return true;
			},
			[&](const TSharedPtr<PCGExPointsMT::TBatch<PCGExLloydRelax::FProcessor>>& NewBatch)
			{
			}))
		{
			return Context->CancelExecution(TEXT("Could not find any paths to relax."));
		}
	}

	PCGEX_POINTS_BATCH_PROCESSING(PCGEx::State_Done)

	Context->MainPoints->StageOutputs();

	return Context->TryComplete();
}

namespace PCGExLloydRelax
{
	bool FProcessor::Process(const TSharedPtr<PCGExMT::FTaskManager> InAsyncManager)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGExLloydRelax::Process);

		if (!FPointsProcessor::Process(InAsyncManager)) { return false; }

		PCGEX_INIT_IO(PointDataFacade->Source, PCGExData::EIOInit::Duplicate)

		InfluenceDetails = Settings->InfluenceDetails;
		if (!InfluenceDetails.Init(ExecutionContext, PointDataFacade)) { return false; }

		PCGExGeo::PointsToPositions(PointDataFacade->GetIn()->GetPoints(), ActivePositions);

		PCGEX_SHARED_THIS_DECL
		PCGEX_LAUNCH(FLloydRelaxTask, 0, ThisPtr, &InfluenceDetails, Settings->Iterations)

		return true;
	}

	void FProcessor::ProcessSinglePoint(const int32 Index, FPCGPoint& Point, const PCGExMT::FScope& Scope)
	{
		Point.Transform.SetLocation(
			InfluenceDetails.bProgressiveInfluence ?
				ActivePositions[Index] :
				FMath::Lerp(Point.Transform.GetLocation(), ActivePositions[Index], InfluenceDetails.GetInfluence(Index)));
	}

	void FProcessor::CompleteWork()
	{
		StartParallelLoopForPoints();
	}

	void FLloydRelaxTask::ExecuteTask(const TSharedPtr<PCGExMT::FTaskManager>& AsyncManager)
	{
		NumIterations--;

		TUniquePtr<PCGExGeo::TDelaunay3> Delaunay = MakeUnique<PCGExGeo::TDelaunay3>();
		TArray<FVector>& Positions = Processor->ActivePositions;

		//FPCGExPointsProcessorContext* Context = static_cast<FPCGExPointsProcessorContext*>(Manager->Context);

		const TArrayView<FVector> View = MakeArrayView(Positions);
		if (!Delaunay->Process<false, false>(View)) { return; }

		const int32 NumPoints = Positions.Num();

		TArray<FVector> Sum;
		TArray<double> Counts;
		Sum.Append(Processor->ActivePositions);
		Counts.SetNum(NumPoints);
		for (int i = 0; i < NumPoints; i++) { Counts[i] = 1; }

		FVector Centroid;
		for (const PCGExGeo::FDelaunaySite3& Site : Delaunay->Sites)
		{
			PCGExGeo::GetCentroid(Positions, Site.Vtx, Centroid);
			for (const int32 PtIndex : Site.Vtx)
			{
				Counts[PtIndex] += 1;
				Sum[PtIndex] += Centroid;
			}
		}

		if (InfluenceSettings->bProgressiveInfluence)
		{
			for (int i = 0; i < NumPoints; i++) { Positions[i] = FMath::Lerp(Positions[i], Sum[i] / Counts[i], InfluenceSettings->GetInfluence(i)); }
		}

		Delaunay.Reset();

		if (NumIterations > 0)
		{
			PCGEX_LAUNCH_INTERNAL(FLloydRelaxTask, TaskIndex + 1, Processor, InfluenceSettings, NumIterations)
		}
	}
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
