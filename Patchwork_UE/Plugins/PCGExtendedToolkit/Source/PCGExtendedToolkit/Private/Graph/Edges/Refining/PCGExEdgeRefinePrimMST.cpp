﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/


#include "Graph/Edges/Refining/PCGExEdgeRefinePrimMST.h"

#include "Graph/PCGExCluster.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristics.h"
#include "Graph/Pathfinding/Search/PCGExScoredQueue.h"

void UPCGExEdgeRefinePrimMST::Process()
{
	const PCGExCluster::FNode* NoNode = new PCGExCluster::FNode();
	const int32 NumNodes = Cluster->Nodes->Num();

	TSet<int32> Visited;
	Visited.Reserve(NumNodes);

	PCGExSearch::TScoredQueue* ScoredQueue = new PCGExSearch::TScoredQueue(NumNodes, 0, 0);

	TArray<uint64> Parent;
	Parent.SetNum(NumNodes);

	for (int i = 0; i < NumNodes; i++)
	{
		ScoredQueue->Scores[i] = TNumericLimits<double>::Max();
		Parent[i] = 0;
	}

	ScoredQueue->Scores[0] = 0;

	int32 CurrentNodeIndex;
	double CurrentNodeScore;
	while (ScoredQueue->Dequeue(CurrentNodeIndex, CurrentNodeScore))
	{
		const PCGExCluster::FNode& Current = *(Cluster->Nodes->GetData() + CurrentNodeIndex);
		Visited.Add(CurrentNodeIndex);

		for (const uint64 AdjacencyHash : Current.Adjacency)
		{
			uint32 NeighborIndex;
			uint32 EdgeIndex;
			PCGEx::H64(AdjacencyHash, NeighborIndex, EdgeIndex);

			if (Visited.Contains(NeighborIndex)) { continue; } // Exit early

			const PCGExCluster::FNode& AdjacentNode = *(Cluster->Nodes->GetData() + NeighborIndex);
			PCGExGraph::FIndexedEdge& Edge = *(Cluster->Edges->GetData() + EdgeIndex);

			const double Score = Heuristics->GetEdgeScore(Current, AdjacentNode, Edge, *NoNode, *NoNode);

			if (Score >= ScoredQueue->Scores[NeighborIndex]) { continue; }

			ScoredQueue->Scores[NeighborIndex] = Score;
			Parent[NeighborIndex] = PCGEx::H64(CurrentNodeIndex, EdgeIndex);

			ScoredQueue->Enqueue(NeighborIndex, Score);
		}
	}

	for (int32 i = 0; i < NumNodes; i++)
	{
		uint32 NeighborIndex;
		uint32 EdgeIndex;

		PCGEx::H64(Parent[i], NeighborIndex, EdgeIndex);

		if (NeighborIndex == i) { continue; }

		(Cluster->Edges->GetData() + EdgeIndex)->bValid = true;
	}

	Visited.Empty();
	Parent.Empty();
	PCGEX_DELETE(ScoredQueue)
	PCGEX_DELETE(NoNode)
}
