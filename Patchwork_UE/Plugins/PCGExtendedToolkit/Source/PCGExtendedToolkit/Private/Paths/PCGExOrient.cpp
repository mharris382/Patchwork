﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Paths/PCGExOrient.h"

#include "Paths/Orient/PCGExOrientAverage.h"

#define LOCTEXT_NAMESPACE "PCGExOrientElement"
#define PCGEX_NAMESPACE Orient

PCGEX_INITIALIZE_ELEMENT(Orient)

FName UPCGExOrientSettings::GetPointFilterLabel() const { return FName("FlipOrientationConditions"); }

bool FPCGExOrientElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExPathProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(Orient)

	if (!Settings->Orientation)
	{
		PCGE_LOG(Error, GraphAndLog, FTEXT("Please select an orientation module in the detail panel."));
		return false;
	}

	if (Settings->Output == EPCGExOrientUsage::OutputToAttribute)
	{
		PCGEX_VALIDATE_NAME(Settings->OutputAttribute);
	}

	if (Settings->bOutputDot)
	{
		PCGEX_VALIDATE_NAME(Settings->DotAttribute);
	}

	PCGEX_OPERATION_BIND(Orientation, UPCGExOrientAverage)
	Context->Orientation->bClosedPath = Settings->bClosedPath;
	Context->Orientation->OrientAxis = Settings->OrientAxis;
	Context->Orientation->UpAxis = Settings->UpAxis;

	return true;
}

bool FPCGExOrientElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExOrientElement::Execute);

	PCGEX_CONTEXT(Orient)

	if (Context->IsSetup())
	{
		if (!Boot(Context)) { return true; }

		bool bInvalidInputs = false;

		if (!Context->StartBatchProcessingPoints<PCGExPointsMT::TBatch<PCGExOrient::FProcessor>>(
			[&](PCGExData::FPointIO* Entry)
			{
				if (Entry->GetNum() < 2)
				{
					bInvalidInputs = true;
					Entry->InitializeOutput(PCGExData::EInit::Forward);
					return false;
				}
				return true;
			},
			[&](PCGExPointsMT::TBatch<PCGExOrient::FProcessor>* NewBatch)
			{
				NewBatch->PrimaryOperation = Context->Orientation;
			},
			PCGExMT::State_Done))
		{
			PCGE_LOG(Error, GraphAndLog, FTEXT("Could not find any paths to orient."));
			return true;
		}

		if (bInvalidInputs)
		{
			PCGE_LOG(Warning, GraphAndLog, FTEXT("Some inputs have less than 2 points and won't be processed."));
		}
	}

	if (!Context->ProcessPointsBatch()) { return false; }

	Context->MainPoints->OutputToContext();

	return Context->TryComplete();
}

namespace PCGExOrient
{
	FProcessor::~FProcessor()
	{
	}

	bool FProcessor::Process(PCGExMT::FTaskManager* AsyncManager)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGExOrient::Process);
		PCGEX_TYPED_CONTEXT_AND_SETTINGS(Orient)

		DefaultPointFilterValue = Settings->bFlipDirection;
		PointDataFacade->bSupportsDynamic = true;

		if (!FPointsProcessor::Process(AsyncManager)) { return false; }

		LastIndex = PointIO->GetNum() - 1;
		Orient = Cast<UPCGExOrientOperation>(PrimaryOperation);
		if (!Orient->PrepareForData(PointDataFacade)) { return false; }

		if (Settings->Output == EPCGExOrientUsage::OutputToAttribute)
		{
			TransformWriter = PointDataFacade->GetWriter<FTransform>(Settings->OutputAttribute, true);
		}

		if (Settings->bOutputDot)
		{
			DotWriter = PointDataFacade->GetWriter<double>(Settings->DotAttribute, true);
		}

		StartParallelLoopForPoints();

		return true;
	}

	void FProcessor::PrepareSingleLoopScopeForPoints(const uint32 StartIndex, const int32 Count)
	{
		PointDataFacade->Fetch(StartIndex, Count);
	}

	void FProcessor::ProcessSinglePoint(const int32 Index, FPCGPoint& Point, const int32 LoopIdx, const int32 Count)
	{
		PCGEX_SETTINGS(Orient)

		FTransform OutT;

		PCGExData::FPointRef Current = PointIO->GetOutPointRef(Index);
		if (Orient->bClosedPath)
		{
			const PCGExData::FPointRef Previous = Index == 0 ? PointIO->GetInPointRef(LastIndex) : PointIO->GetInPointRef(Index - 1);
			const PCGExData::FPointRef Next = Index == LastIndex ? PointIO->GetInPointRef(0) : PointIO->GetInPointRef(Index + 1);
			OutT = Orient->ComputeOrientation(Current, Previous, Next, PointFilterCache[Index] ? -1 : 1);
			if (Settings->bOutputDot) { DotWriter->Values[Index] = DotProduct(Current, Previous, Next); }
		}
		else
		{
			const PCGExData::FPointRef Previous = Index == 0 ? Current : PointIO->GetInPointRef(Index - 1);
			const PCGExData::FPointRef Next = Index == LastIndex ? PointIO->GetInPointRef(LastIndex) : PointIO->GetInPointRef(Index + 1);
			OutT = Orient->ComputeOrientation(Current, Previous, Next, PointFilterCache[Index] ? -1 : 1);
			if (Settings->bOutputDot) { DotWriter->Values[Index] = DotProduct(Current, Previous, Next); }
		}

		if (TransformWriter) { TransformWriter->Values[Index] = OutT; }
		else { Point.Transform = OutT; }
	}

	void FProcessor::CompleteWork()
	{
		PointDataFacade->Write(AsyncManagerPtr, true);
	}
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
