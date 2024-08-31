﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/


#include "Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h"

UPCGExHeuristicOperation* UPCGHeuristicsFactoryLeastNodes::CreateOperation() const
{
	PCGEX_NEW_TRANSIENT(UPCGExHeuristicNodeCount, NewOperation)
	PCGEX_FORWARD_HEURISTIC_CONFIG
	return NewOperation;
}

UPCGExParamFactoryBase* UPCGExHeuristicsLeastNodesProviderSettings::CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const
{
	UPCGHeuristicsFactoryLeastNodes* NewFactory = NewObject<UPCGHeuristicsFactoryLeastNodes>();
	PCGEX_FORWARD_HEURISTIC_FACTORY
	return Super::CreateFactory(InContext, NewFactory);
}

#if WITH_EDITOR
FString UPCGExHeuristicsLeastNodesProviderSettings::GetDisplayName() const
{
	return GetDefaultNodeName().ToString()
		+ TEXT(" @ ")
		+ FString::Printf(TEXT("%.3f"), (static_cast<int32>(1000 * Config.WeightFactor) / 1000.0));
}
#endif
