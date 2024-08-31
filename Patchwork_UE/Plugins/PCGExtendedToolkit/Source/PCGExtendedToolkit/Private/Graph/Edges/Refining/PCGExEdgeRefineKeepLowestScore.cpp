﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/


#include "Graph/Edges/Refining/PCGExEdgeRefineKeepLowestScore.h"

#include "Graph/PCGExCluster.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristics.h"

void UPCGExEdgeKeepLowestScore::ProcessNode(PCGExCluster::FNode& Node)
{
	int32 BestIndex = -1;
	double LowestScore = TNumericLimits<double>::Max();

	for (const uint64 AdjacencyHash : Node.Adjacency)
	{
		uint32 OtherNodeIndex;
		uint32 EdgeIndex;
		PCGEx::H64(AdjacencyHash, OtherNodeIndex, EdgeIndex);

		const double Score = Heuristics->GetEdgeScore(Node, *(Cluster->Nodes->GetData() + OtherNodeIndex), *(Cluster->Edges->GetData() + EdgeIndex), Node, *(Cluster->Nodes->GetData() + OtherNodeIndex));
		if (Score < LowestScore)
		{
			LowestScore = Score;
			BestIndex = EdgeIndex;
		}
	}

	if (BestIndex == -1) { return; }

	{
		FWriteScopeLock WriteScopeLock(EdgeLock);
		(Cluster->Edges->GetData() + BestIndex)->bValid = true;
	}
}
