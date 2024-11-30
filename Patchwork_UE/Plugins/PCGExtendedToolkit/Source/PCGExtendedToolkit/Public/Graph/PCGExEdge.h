﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGEx.h"
#include "PCGExContext.h"
#include "Data/PCGExPointIO.h"
#include "PCGExEdge.generated.h"

UENUM()
enum class EPCGExEdgeDirectionMethod : uint8
{
	EndpointsOrder   = 0 UMETA(DisplayName = "Endpoints Order", ToolTip="Uses the edge' Start & End properties"),
	EndpointsIndices = 1 UMETA(DisplayName = "Endpoints Indices", ToolTip="Uses the edge' Start & End indices"),
	EndpointsSort    = 2 UMETA(DisplayName = "Endpoints Sort", ToolTip="Uses sorting rules to check endpoint is the Start or End."),
	EdgeDotAttribute = 3 UMETA(DisplayName = "Edge Dot Attribute", ToolTip="Chooses the highest dot product against a vector property or attribute on the edge point"),
};

UENUM()
enum class EPCGExEdgeDirectionChoice : uint8
{
	SmallestToGreatest = 0 UMETA(DisplayName = "Smallest to Greatest", ToolTip="Direction points from smallest to greatest value"),
	GreatestToSmallest = 1 UMETA(DisplayName = "Greatest to Smallest", ToolTip="Direction points from the greatest to smallest value")
};

namespace PCGExGraph
{
	const FName SourcePickersLabel = TEXT("Pickers");

	const FName SourceEdgesLabel = TEXT("Edges");
	const FName OutputEdgesLabel = TEXT("Edges");
	const FName OutputSitesLabel = TEXT("Sites");

	const FName OutputKeptEdgesLabel = TEXT("Kept Edges");
	const FName OutputRemovedEdgesLabel = TEXT("Removed Edges");

	const FName SourcePackedClustersLabel = TEXT("Packed Clusters");
	const FName SourceEdgeSortingRules = TEXT("Edge Sorting Rules");
	const FName OutputPackedClustersLabel = TEXT("Packed Clusters");

	const FName Tag_EdgeEndpoints = FName(PCGEx::PCGExPrefix + TEXT("EdgeEndpoints"));
	const FName Tag_VtxEndpoint = FName(PCGEx::PCGExPrefix + TEXT("VtxEndpoint"));
	const FName Tag_ClusterIndex = FName(PCGEx::PCGExPrefix + TEXT("ClusterIndex"));

	const FName Tag_ClusterPair = FName(PCGEx::PCGExPrefix + TEXT("ClusterPair"));
	const FString TagStr_ClusterPair = Tag_ClusterPair.ToString();

	const FName Tag_PCGExVtx = FName(PCGEx::PCGExPrefix + TEXT("ClusterVtx"));
	const FString TagStr_PCGExVtx = Tag_PCGExVtx.ToString();
	const FName Tag_PCGExEdges = FName(PCGEx::PCGExPrefix + TEXT("ClusterEdges"));
	const FString TagStr_PCGExEdges = Tag_PCGExEdges.ToString();

	PCGEX_ASYNC_STATE(State_ReadyForNextEdges)

	FORCEINLINE static uint32 NodeGUID(const uint32 Base, const int32 Index)
	{
		uint32 A;
		uint32 B;
		PCGEx::H64(Base, A, B);
		return HashCombineFast(A == 0 ? B : A, Index);
	}

	struct FLink
	{
		int32 Node = -1;
		int32 Edge = -1;

		constexpr FLink(const uint64 Hash) : Node(PCGEx::H64A(Hash)), Edge(PCGEx::H64A(Hash))
		{
		}

		constexpr FLink(const uint32 InNode, const uint32 InEdge) : Node(InNode), Edge(InEdge)
		{
		}

		FORCEINLINE uint64 H64() const { return PCGEx::H64U(Node, Edge); }

		bool operator==(const FLink& Other) const { return Node == Other.Node && Edge == Other.Edge; }
		FORCEINLINE friend uint32 GetTypeHash(const FLink& Key) { return HashCombineFast(Key.Node, Key.Edge); }
	};

	struct /*PCGEXTENDEDTOOLKIT_API*/ FEdge
	{
		uint32 Start = 0;
		uint32 End = 0;
		int32 Index = -1;
		int32 PointIndex = -1;
		int32 IOIndex = -1;
		int8 bValid = 1;

		FEdge() = default;

		FEdge(const int32 InIndex, const uint32 InStart, const uint32 InEnd, const int32 InPointIndex = -1, const int32 InIOIndex = -1)
			: Start(InStart), End(InEnd), Index(InIndex), PointIndex(InPointIndex), IOIndex(InIOIndex)
		{
		}

		FORCEINLINE uint32 Other(const int32 InIndex) const
		{
			check(InIndex == Start || InIndex == End)
			return InIndex == Start ? End : Start;
		}

		bool Contains(const int32 InIndex) const { return Start == InIndex || End == InIndex; }

		bool operator==(const FEdge& Other) const { return PCGEx::H64U(Start, End) == PCGEx::H64U(Other.Start, Other.End); }
		FORCEINLINE uint64 H64U() const { return PCGEx::H64U(Start, End); }

		FORCEINLINE uint32 GetTypeHash(const FLink& Key) { return HashCombineFast(Key.Node, Key.Edge); }
	};

	static void SetClusterVtx(const TSharedPtr<PCGExData::FPointIO>& IO, FString& OutId)
	{
		IO->Tags->Add(TagStr_ClusterPair, IO->GetOutIn()->GetUniqueID(), OutId);
		IO->Tags->Add(TagStr_PCGExVtx);
		IO->Tags->Remove(TagStr_PCGExEdges);
	}

	static void MarkClusterVtx(const TSharedPtr<PCGExData::FPointIO>& IO, const FString& Id)
	{
		IO->Tags->Add(TagStr_ClusterPair, Id);
		IO->Tags->Add(TagStr_PCGExVtx);
		IO->Tags->Remove(TagStr_PCGExEdges);
	}

	static void MarkClusterEdges(const TSharedPtr<PCGExData::FPointIO>& IO, const FString& Id)
	{
		IO->Tags->Add(TagStr_ClusterPair, Id);
		IO->Tags->Add(TagStr_PCGExEdges);
		IO->Tags->Remove(TagStr_PCGExVtx);
	}

	static void MarkClusterEdges(const TArrayView<TSharedRef<PCGExData::FPointIO>> Edges, const FString& Id)
	{
		for (const TSharedRef<PCGExData::FPointIO>& IO : Edges) { MarkClusterEdges(IO, Id); }
	}

	static void CleanupClusterTags(const TSharedPtr<PCGExData::FPointIO>& IO, const bool bKeepPairTag = false)
	{
		IO->Tags->Remove(TagStr_ClusterPair);
		IO->Tags->Remove(TagStr_PCGExEdges);
		if (!bKeepPairTag) { IO->Tags->Remove(TagStr_PCGExVtx); }
	}

	static void CleanupClusterTags(const TArrayView<TSharedPtr<PCGExData::FPointIO>> IOs, const bool bKeepPairTag = false)
	{
		for (const TSharedPtr<PCGExData::FPointIO>& IO : IOs) { CleanupClusterTags(IO, bKeepPairTag); }
	}
}
