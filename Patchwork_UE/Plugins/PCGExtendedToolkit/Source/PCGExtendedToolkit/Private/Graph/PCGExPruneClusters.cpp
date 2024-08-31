﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/PCGExPruneClusters.h"


#include "Geometry/PCGExGeoPointBox.h"

#pragma region UPCGSettings interface

PCGExData::EInit UPCGExPruneClustersSettings::GetMainOutputInitMode() const { return PCGExData::EInit::NoOutput; }
PCGExData::EInit UPCGExPruneClustersSettings::GetEdgeOutputInitMode() const { return PCGExData::EInit::NoOutput; }

#pragma endregion

FPCGExPruneClustersContext::~FPCGExPruneClustersContext()
{
	PCGEX_TERMINATE_ASYNC

	IndexedEdges.Empty();
	ClusterState.Empty();

	PCGEX_DELETE(BoxCloud)
}

PCGEX_INITIALIZE_ELEMENT(PruneClusters)

bool FPCGExPruneClustersElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExEdgesProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(PruneClusters)

	const PCGExData::FPointIO* Bounds = PCGExData::TryGetSingleInput(Context, PCGEx::SourceBoundsLabel, true);
	if (!Bounds) { return false; }

	Context->BoxCloud = new PCGExGeo::FPointBoxCloud(Bounds->GetIn(), Settings->BoundsSource, Settings->InsideEpsilon);

	PCGEX_DELETE(Bounds)

	Context->ClusterState.SetNumUninitialized(Context->MainEdges->Num());
	for (bool& State : Context->ClusterState) { State = false; }

	return true;
}

bool FPCGExPruneClustersElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExPruneClustersElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(PruneClusters)

	if (Context->IsSetup())
	{
		if (!Boot(Context)) { return true; }
		Context->SetState(PCGExMT::State_ReadyForNextPoints);
	}

	if (Context->IsState(PCGExMT::State_ReadyForNextPoints))
	{
		while (Context->AdvancePointsIO(false))
		{
			if (!Context->TaggedEdges) { continue; }
			for (PCGExData::FPointIO* EdgeIO : Context->TaggedEdges->Entries)
			{
				Context->GetAsyncManager()->Start<FPCGExPruneClusterTask>(EdgeIO->IOIndex, Context->CurrentIO, EdgeIO);
			}
		}

		Context->SetAsyncState(PCGExMT::State_WaitingOnAsyncWork);
	}

	if (Context->IsState(PCGExGraph::State_WritingClusters))
	{
		PCGEX_ASYNC_WAIT

		TSet<PCGExData::FPointIO*> KeepList;
		TSet<PCGExData::FPointIO*> OmitList;

		// TODO : Omit/Keep/Tag

		Context->Done();
	}

	if (Context->IsDone())
	{
		Context->OutputPointsAndEdges();
	}

	return Context->TryComplete();
}

bool FPCGExPruneClusterTask::ExecuteTask()
{
	const FPCGExPruneClustersContext* Context = Manager->GetContext<FPCGExPruneClustersContext>();
	PCGEX_SETTINGS(PruneClusters)

	// TODO : Check against BoxCloud

	return true;
}
