﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/


#include "Graph/Data/PCGExClusterData.h"

#include "Data/PCGExPointIO.h"
#include "PCGExGlobalSettings.h"
#include "Graph/PCGExCluster.h"

void UPCGExClusterNodesData::InitializeFromPCGExData(const UPCGExPointData* InPCGExPointData, const PCGExData::EIOInit InitMode)
{
	Super::InitializeFromPCGExData(InPCGExPointData, InitMode);
	if (const UPCGExClusterNodesData* InNodeData = Cast<UPCGExClusterNodesData>(InPCGExPointData))
	{
	}
}

void UPCGExClusterNodesData::AddBoundCluster(PCGExCluster::FCluster* InCluster)
{
	// Vtx cannot own bound clusters
	FWriteScopeLock WriteScopeLock(BoundClustersLock);
	BoundClusters.Add(InCluster);
}

void UPCGExClusterNodesData::BeginDestroy()
{
	Super::BeginDestroy();
	BoundClusters.Empty();
}

#if PCGEX_ENGINE_VERSION < 505
UPCGSpatialData* UPCGExClusterNodesData::CopyInternal() const
{
	UPCGExClusterNodesData* NewNodeData = nullptr;
	{
		FGCScopeGuard GCGuard;
		NewNodeData = NewObject<UPCGExClusterNodesData>();
	}
	NewNodeData->CopyFrom(this);
	return NewNodeData;
}
#else
UPCGSpatialData* UPCGExClusterNodesData::CopyInternal(FPCGContext* Context) const
{
	UPCGExClusterNodesData* NewNodeData = FPCGContext::NewObject_AnyThread<UPCGExClusterNodesData>(Context);
	NewNodeData->CopyFrom(this);
	return NewNodeData;
}
#endif


void UPCGExClusterEdgesData::InitializeFromPCGExData(const UPCGExPointData* InPCGExPointData, const PCGExData::EIOInit InitMode)
{
	Super::InitializeFromPCGExData(InPCGExPointData, InitMode);
	if (const UPCGExClusterEdgesData* InEdgeData = Cast<UPCGExClusterEdgesData>(InPCGExPointData))
	{
		if (GetDefault<UPCGExGlobalSettings>()->bCacheClusters)
		{
			if (InitMode != PCGExData::EIOInit::None &&
				InitMode != PCGExData::EIOInit::New)
			{
				SetBoundCluster(InEdgeData->Cluster);
			}
		}
	}
}

void UPCGExClusterEdgesData::SetBoundCluster(const TSharedPtr<PCGExCluster::FCluster>& InCluster)
{
	Cluster = InCluster;
}

const TSharedPtr<PCGExCluster::FCluster>& UPCGExClusterEdgesData::GetBoundCluster() const
{
	return Cluster;
}

#if PCGEX_ENGINE_VERSION < 505
UPCGSpatialData* UPCGExClusterEdgesData::CopyInternal() const
{
	UPCGExClusterEdgesData* NewEdgeData = nullptr;
	{
		FGCScopeGuard GCGuard;
		NewEdgeData = NewObject<UPCGExClusterEdgesData>();
	}
	NewEdgeData->CopyFrom(this);
	return NewEdgeData;
}
#else
UPCGSpatialData* UPCGExClusterEdgesData::CopyInternal(FPCGContext* Context) const
{
	UPCGExClusterEdgesData* NewEdgeData = FPCGContext::NewObject_AnyThread<UPCGExClusterEdgesData>(Context);
	NewEdgeData->CopyFrom(this);
	return NewEdgeData;
}
#endif


void UPCGExClusterEdgesData::BeginDestroy()
{
	Super::BeginDestroy();
	Cluster.Reset();
}
