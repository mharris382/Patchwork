﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExEdgeRefineOperation.h"
#include "Graph/PCGExCluster.h"
#include "PCGExEdgeRefineRemoveLongest.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Remove Longest"))
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExEdgeRemoveLongest : public UPCGExEdgeRefineOperation
{
	GENERATED_BODY()

public:
	virtual bool RequiresIndividualNodeProcessing() override { return true; }

	virtual void ProcessNode(PCGExCluster::FNode& Node) override
	{
		int32 BestIndex = -1;
		double LongestDist = 0;

		for (const PCGExGraph::FLink Lk : Node.Links)
		{
			const double Dist = Cluster->GetDistSquared(Node.Index, Lk.Node);
			if (Dist > LongestDist)
			{
				LongestDist = Dist;
				BestIndex = Lk.Edge;
			}
		}

		if (BestIndex == -1) { return; }
		//if (!*(EdgesFilters->GetData() + BestIndex)) { return; }

		FPlatformAtomics::InterlockedExchange(&Cluster->GetEdge(BestIndex)->bValid, 0);
	}
};
