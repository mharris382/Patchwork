﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/Pathfinding/PCGExPathfindingFindContours.h"

#include "PCGExCompare.h"


#define LOCTEXT_NAMESPACE "PCGExFindContours"
#define PCGEX_NAMESPACE FindContours

TArray<FPCGPinProperties> UPCGExFindContoursSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties = Super::InputPinProperties();
	PCGEX_PIN_POINT(PCGExGraph::SourceSeedsLabel, "Seeds associated with the main input points", Required, {})
	return PinProperties;
}

TArray<FPCGPinProperties> UPCGExFindContoursSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PCGEX_PIN_POINTS(PCGExGraph::OutputPathsLabel, "Contours", Required, {})
	if (bOutputFilteredSeeds)
	{
		PCGEX_PIN_POINT(PCGExFindContours::OutputGoodSeedsLabel, "GoodSeeds", Required, {})
		PCGEX_PIN_POINT(PCGExFindContours::OutputBadSeedsLabel, "BadSeeds", Required, {})
	}
	return PinProperties;
}

PCGExData::EIOInit UPCGExFindContoursSettings::GetEdgeOutputInitMode() const { return PCGExData::EIOInit::None; }
PCGExData::EIOInit UPCGExFindContoursSettings::GetMainOutputInitMode() const { return PCGExData::EIOInit::None; }

PCGEX_INITIALIZE_ELEMENT(FindContours)

bool FPCGExFindContoursElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExEdgesProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(FindContours)

	PCGEX_FWD(ProjectionDetails)
	PCGEX_FWD(Artifacts)
	if (!Context->Artifacts.Init(Context)) { return false; }

	Context->SeedsDataFacade = PCGExData::TryGetSingleFacade(Context, PCGExGraph::SourceSeedsLabel, true);
	if (!Context->SeedsDataFacade) { return false; }

	if (!Context->ProjectionDetails.Init(Context, Context->SeedsDataFacade)) { return false; }

	PCGEX_FWD(SeedAttributesToPathTags)
	if (!Context->SeedAttributesToPathTags.Init(Context, Context->SeedsDataFacade)) { return false; }
	Context->SeedForwardHandler = Settings->SeedForwarding.GetHandler(Context->SeedsDataFacade);

	Context->Paths = MakeShared<PCGExData::FPointIOCollection>(Context);
	Context->Paths->OutputPin = PCGExGraph::OutputPathsLabel;

	if (Settings->bOutputFilteredSeeds)
	{
		const int32 NumSeeds = Context->SeedsDataFacade->GetNum();

		Context->SeedQuality.Init(false, NumSeeds);
		PCGEx::InitArray(Context->UdpatedSeedPoints, NumSeeds);

		Context->GoodSeeds = NewPointIO(Context->SeedsDataFacade->Source, PCGExFindContours::OutputGoodSeedsLabel);
		Context->GoodSeeds->InitializeOutput(PCGExData::EIOInit::New);
		Context->GoodSeeds->GetOut()->GetMutablePoints().Reserve(NumSeeds);

		Context->BadSeeds = NewPointIO(Context->SeedsDataFacade->Source, PCGExFindContours::OutputBadSeedsLabel);
		Context->BadSeeds->InitializeOutput(PCGExData::EIOInit::New);
		Context->BadSeeds->GetOut()->GetMutablePoints().Reserve(NumSeeds);
	}

	return true;
}

bool FPCGExFindContoursElement::ExecuteInternal(
	FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExFindContoursElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(FindContours)
	PCGEX_EXECUTION_CHECK
	PCGEX_ON_INITIAL_EXECUTION
	{
		if (!Context->StartProcessingClusters<PCGExFindContours::FBatch>(
			[](const TSharedPtr<PCGExData::FPointIOTaggedEntries>& Entries) { return true; },
			[&](const TSharedPtr<PCGExFindContours::FBatch>& NewBatch)
			{
				//NewBatch->bRequiresWriteStep = Settings->Artifacts.WriteAny();
			}))
		{
			return Context->CancelExecution(TEXT("Could not build any clusters."));
		}
	}

	PCGEX_CLUSTER_BATCH_PROCESSING(PCGEx::State_Done)

	if (Settings->bOutputFilteredSeeds)
	{
		const TArray<FPCGPoint>& InSeeds = Context->SeedsDataFacade->Source->GetIn()->GetPoints();
		TArray<FPCGPoint>& GoodSeeds = Context->GoodSeeds->GetOut()->GetMutablePoints();
		TArray<FPCGPoint>& BadSeeds = Context->BadSeeds->GetOut()->GetMutablePoints();

		for (int i = 0; i < Context->SeedQuality.Num(); i++)
		{
			if (Context->SeedQuality[i]) { GoodSeeds.Add(Context->UdpatedSeedPoints[i]); }
			else { BadSeeds.Add(InSeeds[i]); }
		}

		Context->GoodSeeds->StageOutput();
		Context->BadSeeds->StageOutput();
	}

	Context->Paths->StageOutputs();

	return Context->TryComplete();
}


namespace PCGExFindContours
{
	FProcessor::~FProcessor()
	{
	}

	bool FProcessor::Process(TSharedPtr<PCGExMT::FTaskManager> InAsyncManager)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGExFindContours::Process);


		if (!FClusterProcessor::Process(InAsyncManager)) { return false; }

		if (Settings->bUseOctreeSearch) { Cluster->RebuildOctree(Settings->SeedPicking.PickingMethod); }
		Cluster->RebuildOctree(EPCGExClusterClosestSearchMode::Edge); // We need edge octree anyway

		CellsConstraints = MakeShared<PCGExTopology::FCellConstraints>(Settings->Constraints);
		if (Settings->Constraints.bOmitWrappingBounds) { CellsConstraints->BuildWrapperCell(Cluster.ToSharedRef(), *ProjectedPositions); }

		StartParallelLoopForRange(Context->SeedsDataFacade->Source->GetNum(), 64);

		return true;
	}

	void FProcessor::ProcessSingleRangeIteration(int32 Iteration, const int32 LoopIdx, const int32 Count)
	{
		const FVector SeedWP = Context->SeedsDataFacade->Source->GetInPoint(Iteration).Transform.GetLocation();

		const TSharedPtr<PCGExTopology::FCell> Cell = MakeShared<PCGExTopology::FCell>(CellsConstraints.ToSharedRef());
		const PCGExTopology::ECellResult Result = Cell->BuildFromCluster(SeedWP, Cluster.ToSharedRef(), *ProjectedPositions, &Settings->SeedPicking);

		if (Result != PCGExTopology::ECellResult::Success)
		{
			if (Result == PCGExTopology::ECellResult::WrapperCell ||
				(CellsConstraints->WrapperCell && CellsConstraints->WrapperCell->GetCellHash() == Cell->GetCellHash()))
			{
				FPlatformAtomics::InterlockedExchange(&WrapperSeed, Iteration);
			}
			return;
		}

		ProcessCell(Iteration, Cell);
	}

	void FProcessor::ProcessCell(const int32 SeedIndex, const TSharedPtr<PCGExTopology::FCell>& InCell) const
	{
		TSharedRef<PCGExData::FPointIO> PathIO = Context->Paths->Emplace_GetRef<UPCGPointData>(VtxDataFacade->Source, PCGExData::EIOInit::New).ToSharedRef();
		PathIO->Tags->Reset(); // Tag forwarding handled by artifacts
		PathIO->IOIndex = SeedIndex; // Enforce seed order for collection output

		PCGExGraph::CleanupClusterTags(PathIO, true);
		PCGExGraph::CleanupVtxData(PathIO);

		TSharedPtr<PCGExData::FFacade> PathDataFacade = MakeShared<PCGExData::FFacade>(PathIO);

		TArray<FPCGPoint> MutablePoints;
		MutablePoints.Reserve(InCell->Nodes.Num());

		const TArray<FPCGPoint>& InPoints = PathIO->GetIn()->GetPoints();
		for (int i = 0; i < InCell->Nodes.Num(); i++) { MutablePoints.Add(InPoints[Cluster->GetNode(InCell->Nodes[i])->PointIndex]); }
		InCell->PostProcessPoints(MutablePoints);

		PathIO->GetOut()->SetPoints(MutablePoints);

		Context->SeedAttributesToPathTags.Tag(SeedIndex, PathIO);
		Context->SeedForwardHandler->Forward(SeedIndex, PathDataFacade);

		Context->Artifacts.Process(Cluster, PathDataFacade, InCell);
		PathDataFacade->Write(AsyncManager);

		if (Settings->bOutputFilteredSeeds)
		{
			Context->SeedQuality[SeedIndex] = true;
			FPCGPoint SeedPoint = Context->SeedsDataFacade->Source->GetInPoint(SeedIndex);
			Settings->SeedMutations.ApplyToPoint(InCell.Get(), SeedPoint, MutablePoints);
			Context->UdpatedSeedPoints[SeedIndex] = SeedPoint;
		}
	}

	void FProcessor::CompleteWork()
	{
		if (!CellsConstraints->WrapperCell) { return; }
		if (Context->Paths->IsEmpty() && WrapperSeed != -1 && Settings->Constraints.bKeepWrapperIfSolePath) { ProcessCell(WrapperSeed, CellsConstraints->WrapperCell); }
	}

	void FProcessor::Cleanup()
	{
		TProcessor<FPCGExFindContoursContext, UPCGExFindContoursSettings>::Cleanup();
		CellsConstraints->Cleanup();
	}

	void FBatch::Process()
	{
		PCGEX_TYPED_CONTEXT_AND_SETTINGS(FindContours)

		// Project positions
		ProjectionDetails = Settings->ProjectionDetails;
		if (!ProjectionDetails.Init(Context, VtxDataFacade)) { return; }
		PCGEx::InitArray(ProjectedPositions, VtxDataFacade->GetNum());

		PCGEX_ASYNC_GROUP_CHKD_VOID(AsyncManager, ProjectionTaskGroup)

		ProjectionTaskGroup->OnCompleteCallback =
			[WeakThis = TWeakPtr<FBatch>(SharedThis(this))]()
			{
				if (TSharedPtr<FBatch> This = WeakThis.Pin()) { This->OnProjectionComplete(); }
			};

		ProjectionTaskGroup->OnSubLoopStartCallback =
			[WeakThis = TWeakPtr<FBatch>(SharedThis(this))]
			(const int32 StartIndex, const int32 Count, const int32 LoopIdx)
			{
				TSharedPtr<FBatch> This = WeakThis.Pin();
				if (!This) { return; }

				TArray<FVector>& PP = *This->ProjectedPositions;
				This->ProjectionDetails.ProjectFlat(This->VtxDataFacade, PP, StartIndex, Count);
			};

		ProjectionTaskGroup->StartSubLoops(VtxDataFacade->GetNum(), GetDefault<UPCGExGlobalSettings>()->GetPointsBatchChunkSize());
	}

	bool FBatch::PrepareSingle(const TSharedPtr<FProcessor>& ClusterProcessor)
	{
		ClusterProcessor->ProjectedPositions = ProjectedPositions;
		TBatch<FProcessor>::PrepareSingle(ClusterProcessor);
		return true;
	}

	void FBatch::OnProjectionComplete()
	{
		TBatch<FProcessor>::Process();
	}
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
