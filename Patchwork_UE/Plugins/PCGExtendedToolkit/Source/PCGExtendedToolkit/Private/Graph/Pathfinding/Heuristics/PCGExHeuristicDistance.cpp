﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/


#include "Graph/Pathfinding/Heuristics/PCGExHeuristicDistance.h"


void UPCGExHeuristicDistance::PrepareForCluster(const TSharedPtr<const PCGExCluster::FCluster>& InCluster)
{
	Super::PrepareForCluster(InCluster);
	BoundsSize = InCluster->Bounds.GetSize().Length();
}

UPCGExHeuristicOperation* UPCGExHeuristicsFactoryShortestDistance::CreateOperation(FPCGExContext* InContext) const
{
	UPCGExHeuristicDistance* NewOperation = InContext->ManagedObjects->New<UPCGExHeuristicDistance>();
	PCGEX_FORWARD_HEURISTIC_CONFIG
	return NewOperation;
}

UPCGExParamFactoryBase* UPCGExHeuristicsShortestDistanceProviderSettings::CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const
{
	UPCGExHeuristicsFactoryShortestDistance* NewFactory = InContext->ManagedObjects->New<UPCGExHeuristicsFactoryShortestDistance>();
	PCGEX_FORWARD_HEURISTIC_FACTORY
	return Super::CreateFactory(InContext, NewFactory);
}

#if WITH_EDITOR
FString UPCGExHeuristicsShortestDistanceProviderSettings::GetDisplayName() const
{
	return GetDefaultNodeTitle().ToString().Replace(TEXT("PCGEx | Heuristics"), TEXT("HX"))
		+ TEXT(" @ ")
		+ FString::Printf(TEXT("%.3f"), (static_cast<int32>(1000 * Config.WeightFactor) / 1000.0));
}
#endif
