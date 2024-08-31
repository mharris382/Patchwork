﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/PCGExMakeClustersUnique.h"


#define LOCTEXT_NAMESPACE "PCGExGraphSettings"

#pragma region UPCGSettings interface

PCGExData::EInit UPCGExMakeClustersUniqueSettings::GetMainOutputInitMode() const { return PCGExData::EInit::Forward; }
PCGExData::EInit UPCGExMakeClustersUniqueSettings::GetEdgeOutputInitMode() const { return PCGExData::EInit::Forward; }

#pragma endregion

FPCGExMakeClustersUniqueContext::~FPCGExMakeClustersUniqueContext()
{
	PCGEX_TERMINATE_ASYNC
}

PCGEX_INITIALIZE_ELEMENT(MakeClustersUnique)

bool FPCGExMakeClustersUniqueElement::Boot(FPCGExContext* InContext) const
{
	if (!FPCGExEdgesProcessorElement::Boot(InContext)) { return false; }

	PCGEX_CONTEXT_AND_SETTINGS(MakeClustersUnique)

	return true;
}

bool FPCGExMakeClustersUniqueElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGExMakeClustersUniqueElement::Execute);

	PCGEX_CONTEXT_AND_SETTINGS(MakeClustersUnique)

	if (Context->IsSetup())
	{
		if (!Boot(Context)) { return true; }
		Context->SetState(PCGExMT::State_ReadyForNextPoints);
	}

	while (Context->AdvancePointsIO(false))
	{
		FString OutId;
		PCGExGraph::SetClusterVtx(Context->CurrentIO, OutId);

		if (!Context->TaggedEdges) { continue; }

		PCGExGraph::MarkClusterEdges(Context->TaggedEdges->Entries, OutId);
	}

	Context->OutputPointsAndEdges();

	return Context->TryComplete();
}

#undef LOCTEXT_NAMESPACE
