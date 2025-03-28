﻿// Copyright 2025 Timothé Lapetite and contributors
// Released under the MIT license https://opensource.org/license/MIT/

#include "Transform/PCGExTensorsTransform.h"

#include "Data/PCGExData.h"


#define LOCTEXT_NAMESPACE "PCGExTensorsTransformElement"
#define PCGEX_NAMESPACE TensorsTransform

TArray<FPCGPinProperties> UPCGExTensorsTransformSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties = Super::InputPinProperties();
	PCGEX_PIN_FACTORIES(PCGExTensor::SourceTensorsLabel, "Tensors", Required, {})
	PCGEX_PIN_FACTORIES(PCGExPointFilter::SourceStopConditionLabel, "Transformed points will be tested against those filters, and transform will stop at first fail. Only a small subset of PCGEx are supported.", Normal, {})
	return PinProperties;
}

PCGExData::EIOInit UPCGExTensorsTransformSettings::GetMainOutputInitMode() const { return PCGExData::EIOInit::Duplicate; }

PCGEX_INITIALIZE_ELEMENT(TensorsTransform)

bool FPCGExTensorsTransformElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExPointsProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(TensorsTransform)

	if (!PCGExFactories::GetInputFactories(InContext, PCGExTensor::SourceTensorsLabel, Context->TensorFactories, {PCGExFactories::EType::Tensor}, true)) { return false; }
	if (Context->TensorFactories.IsEmpty())
	{
		PCGE_LOG_C(Error, GraphAndLog, InContext, FTEXT("Missing tensors."));
		return false;
	}

	PCGEX_FOREACH_FIELD_TRTENSOR(PCGEX_OUTPUT_VALIDATE_NAME)

	GetInputFactories(Context, PCGExPointFilter::SourceStopConditionLabel, Context->StopFilterFactories, PCGExFactories::PointFilters, false);
	PCGExPointFilter::PruneForDirectEvaluation(Context, Context->StopFilterFactories);

	return true;
}

bool FPCGExTensorsTransformElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExTensorsTransformElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(TensorsTransform)
	PCGEX_EXECUTION_CHECK
	PCGEX_ON_INITIAL_EXECUTION
	{
		if (!Context->StartBatchProcessingPoints<PCGExPointsMT::TBatch<PCGExTensorsTransform::FProcessor>>(
			[&](const TSharedPtr<PCGExData::FPointIO>& Entry) { return true; },
			[&](const TSharedPtr<PCGExPointsMT::TBatch<PCGExTensorsTransform::FProcessor>>& NewBatch)
			{
				//NewBatch->bRequiresWriteStep = true;
			}))
		{
			return Context->CancelExecution(TEXT("Could not find any paths to subdivide."));
		}
	}

	PCGEX_POINTS_BATCH_PROCESSING(PCGEx::State_Done)

	Context->MainPoints->StageOutputs();

	return Context->TryComplete();
}

namespace PCGExTensorsTransform
{
	FProcessor::~FProcessor()
	{
	}

	bool FProcessor::Process(const TSharedPtr<PCGExMT::FTaskManager> InAsyncManager)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGExTensorsTransform::Process);

		if (!FPointsProcessor::Process(InAsyncManager)) { return false; }

		if (!Context->StopFilterFactories.IsEmpty())
		{
			StopFilters = MakeShared<PCGExPointFilter::FManager>(PointDataFacade);
			if (!StopFilters->Init(Context, Context->StopFilterFactories)) { StopFilters.Reset(); }
		}

		TensorsHandler = MakeShared<PCGExTensor::FTensorsHandler>(Settings->TensorHandlerDetails);
		if (!TensorsHandler->Init(Context, Context->TensorFactories, PointDataFacade)) { return false; }

		{
			const TSharedRef<PCGExData::FFacade>& OutputFacade = PointDataFacade;
			PCGEX_FOREACH_FIELD_TRTENSOR(PCGEX_OUTPUT_INIT)
		}

		RemainingIterations = Settings->Iterations;
		Metrics.SetNum(PointDataFacade->GetNum());
		Pings.Init(0, PointDataFacade->GetNum());

		StartParallelLoopForPoints(PCGExData::ESource::Out, 64);

		return true;
	}

	void FProcessor::PrepareSingleLoopScopeForPoints(const PCGExMT::FScope& Scope)
	{
		if (bIteratedOnce) { return; }
		PointDataFacade->Fetch(Scope);
		FilterScope(Scope);
	}

	void FProcessor::ProcessSinglePoint(const int32 Index, FPCGPoint& Point, const PCGExMT::FScope& Scope)
	{
		if (!PointFilterCache[Index]) { return; }

		const FTransform Probe = Point.Transform;
		const FVector SamplePosition = Probe.GetLocation();

		bool bSuccess = false;
		const PCGExTensor::FTensorSample Sample = TensorsHandler->Sample(Probe, bSuccess);
		PointFilterCache[Index] = bSuccess;

		if (!bSuccess)
		{
			// TODO : Gracefully stopped
			// TODO : Max iterations not reached
			return;
		}

		if (StopFilters && StopFilters->Test(Point))
		{
			PointFilterCache[Index] = false;
			if (Settings->StopConditionHandling == EPCGExTensorStopConditionHandling::Exclude)
			{
				// TODO : Not gracefully stopped
				// TODO : Max iterations not reached
				return;
			}
		}

		Metrics[Index].Add(SamplePosition);
		Pings[Index] += Sample.Effectors;

		if (Settings->bTransformRotation)
		{
			if (Settings->Rotation == EPCGExTensorTransformMode::Absolute)
			{
				Point.Transform.SetRotation(Sample.Rotation);
			}
			else if (Settings->Rotation == EPCGExTensorTransformMode::Relative)
			{
				Point.Transform.SetRotation(Sample.Rotation * Point.Transform.GetRotation());
			}
			else if (Settings->Rotation == EPCGExTensorTransformMode::Align)
			{
				Point.Transform.SetRotation(PCGExMath::MakeDirection(Settings->AlignAxis, Sample.DirectionAndSize.GetSafeNormal() * -1, Point.Transform.GetRotation().GetUpVector()));
			}
		}

		if (Settings->bTransformPosition)
		{
			Point.Transform.SetLocation(Point.Transform.GetLocation() + Sample.DirectionAndSize);
		}
	}

	void FProcessor::OnPointsProcessingComplete()
	{
		bIteratedOnce = true;
		RemainingIterations--;
		if (RemainingIterations > 0) { StartParallelLoopForPoints(PCGExData::ESource::Out, 32); }
		else { StartParallelLoopForRange(PointDataFacade->GetNum()); }
	}

	void FProcessor::ProcessSingleRangeIteration(const int32 Iteration, const PCGExMT::FScope& Scope)
	{
		const PCGExPaths::FPathMetrics& Metric = Metrics[Iteration];
		const int32 UpdateCount = Metric.Count;

		PCGEX_OUTPUT_VALUE(EffectorsPings, Iteration, Pings[Iteration])
		PCGEX_OUTPUT_VALUE(UpdateCount, Iteration, UpdateCount)
		PCGEX_OUTPUT_VALUE(TraveledDistance, Iteration, Metric.Length)
		PCGEX_OUTPUT_VALUE(GracefullyStopped, Iteration, UpdateCount < Settings->Iterations)
		PCGEX_OUTPUT_VALUE(MaxIterationsReached, Iteration, UpdateCount == Settings->Iterations)
	}

	void FProcessor::CompleteWork()
	{
		PointDataFacade->Write(AsyncManager);
	}
}


#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
