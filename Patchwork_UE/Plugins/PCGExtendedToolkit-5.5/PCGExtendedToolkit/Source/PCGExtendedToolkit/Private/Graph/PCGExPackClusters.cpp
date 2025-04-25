﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/PCGExPackClusters.h"

#include "Data/PCGExPointIOMerger.h"


#include "Geometry/PCGExGeoDelaunay.h"

#define LOCTEXT_NAMESPACE "PCGExPackClusters"
#define PCGEX_NAMESPACE PackClusters

PCGExData::EIOInit UPCGExPackClustersSettings::GetMainOutputInitMode() const { return PCGExData::EIOInit::None; }

PCGExData::EIOInit UPCGExPackClustersSettings::GetEdgeOutputInitMode() const { return PCGExData::EIOInit::None; }

TArray<FPCGPinProperties> UPCGExPackClustersSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PCGEX_PIN_POINTS(PCGExGraph::OutputPackedClustersLabel, "Individually packed clusters", Required, {})
	return PinProperties;
}

PCGEX_INITIALIZE_ELEMENT(PackClusters)

bool FPCGExPackClustersElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExEdgesProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(PackClusters)

	PCGEX_FWD(CarryOverDetails)
	Context->CarryOverDetails.Init();

	Context->PackedClusters = MakeShared<PCGExData::FPointIOCollection>(Context);
	Context->PackedClusters->OutputPin = PCGExGraph::OutputPackedClustersLabel;

	return true;
}

bool FPCGExPackClustersElement::ExecuteInternal(
	FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExPackClustersElement::Execute);

	PCGEX_CONTEXT(PackClusters)
	PCGEX_EXECUTION_CHECK

	PCGEX_ON_INITIAL_EXECUTION
	{
		Context->SetState(PCGEx::State_ReadyForNextPoints);
	}

	PCGEX_ON_STATE(PCGEx::State_ReadyForNextPoints)
	{
		int32 IOIndex = 0;
		while (Context->AdvancePointsIO(false))
		{
			if (!Context->TaggedEdges) { continue; }

			for (const TSharedRef<PCGExData::FPointIO>& EdgeIO : Context->TaggedEdges->Entries)
			{
				Context->GetAsyncManager()->Start<FPCGExPackClusterTask>(IOIndex++, Context->CurrentIO, EdgeIO, Context->EndpointsLookup);
			}
		}

		Context->SetAsyncState(PCGEx::State_WaitingOnAsyncWork);
	}

	PCGEX_ON_ASYNC_STATE_READY(PCGEx::State_WaitingOnAsyncWork)
	{
		Context->Done();
		Context->PackedClusters->StageOutputs();
	}

	return Context->TryComplete();
}

bool FPCGExPackClusterTask::ExecuteTask(const TSharedPtr<PCGExMT::FTaskManager>& AsyncManager)
{
	FPCGExPackClustersContext* Context = AsyncManager->GetContext<FPCGExPackClustersContext>();
	PCGEX_SETTINGS(PackClusters)

	const TSharedPtr<PCGEx::FAttributesInfos> VtxAttributes = PCGEx::FAttributesInfos::Get(PointIO->GetIn()->Metadata);

	const TSharedPtr<PCGExData::FPointIO> PackedIO = Context->PackedClusters->Emplace_GetRef(InEdges);
	PackedIO->InitializeOutput<UPCGPointData>(PCGExData::EIOInit::Duplicate);

	int32 NumEdges = 0;
	TArray<int32> ReducedVtxIndices;

	if (!PCGExGraph::GetReducedVtxIndices(InEdges, &EndpointsLookup, ReducedVtxIndices, NumEdges)) { return false; }

	TArray<FPCGPoint>& MutablePoints = PackedIO->GetOut()->GetMutablePoints();
	MutablePoints.SetNum(NumEdges + ReducedVtxIndices.Num());

	PackedIO->CleanupKeys();

	const TArrayView<const int32> View = MakeArrayView(ReducedVtxIndices);
	PCGEx::CopyPoints(PointIO.Get(), PackedIO.Get(), View, NumEdges);

	for (const PCGEx::FAttributeIdentity& Identity : VtxAttributes->Identities)
	{
		CopyValues(AsyncManager, Identity, PointIO, PackedIO, View, NumEdges);
	}

	WriteMark(PackedIO.ToSharedRef(), PCGExGraph::Tag_PackedClusterEdgeCount, NumEdges);

	PCGExGraph::CleanupClusterTags(PackedIO);

	FString OutPairId;
	PackedIO->Tags->Add(PCGExGraph::TagStr_ClusterPair, InEdges->GetIn()->GetUniqueID(), OutPairId);

	InEdges->CleanupKeys();

	Context->CarryOverDetails.Filter(PointIO->Tags.Get());
	Context->CarryOverDetails.Filter(InEdges->Tags.Get());

	return true;
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
