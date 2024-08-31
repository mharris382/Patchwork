﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "Graph/PCGExCluster.h"
#include "UObject/Object.h"
#include "PCGExHeuristicOperation.h"
#include "PCGExHeuristicsFactoryProvider.h"
#include "PCGExHeuristicDistance.generated.h"

USTRUCT(BlueprintType)
struct PCGEXTENDEDTOOLKIT_API FPCGExHeuristicConfigShortestDistance : public FPCGExHeuristicConfigBase
{
	GENERATED_BODY()

	FPCGExHeuristicConfigShortestDistance() :
		FPCGExHeuristicConfigBase()
	{
	}
};

/**
 * 
 */
UCLASS(DisplayName = "Shortest Distance")
class PCGEXTENDEDTOOLKIT_API UPCGExHeuristicDistance : public UPCGExHeuristicOperation
{
	GENERATED_BODY()

public:
	virtual void PrepareForCluster(const PCGExCluster::FCluster* InCluster) override;

	FORCEINLINE virtual double GetGlobalScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal) const override
	{
		return SampleCurve(Cluster->GetDistSquared(From, Goal) / MaxDistSquared) * ReferenceWeight;
	}

	FORCEINLINE virtual double GetEdgeScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& To,
		const PCGExGraph::FIndexedEdge& Edge,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal) const override
	{
		return SampleCurve((*Cluster->EdgeLengths)[Edge.EdgeIndex]) * ReferenceWeight;
	}

protected:
	double MaxDistSquared = 0;
};

////

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGHeuristicsFactoryShortestDistance : public UPCGExHeuristicsFactoryBase
{
	GENERATED_BODY()

public:
	FPCGExHeuristicConfigShortestDistance Config;

	virtual UPCGExHeuristicOperation* CreateOperation() const override;
};

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Graph|Params")
class PCGEXTENDEDTOOLKIT_API UPCGExHeuristicsShortestDistanceProviderSettings : public UPCGExHeuristicsFactoryProviderSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS_CUSTOM_SUBTITLE(
		HeuristicsDistance, "Heuristics : Shortest Distance", "Heuristics based on distance.",
		FName(GetDisplayName()))
#endif
	//~End UPCGSettings

	/** Filter Config.*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, ShowOnlyInnerProperties))
	FPCGExHeuristicConfigShortestDistance Config;

	virtual UPCGExParamFactoryBase* CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const override;

#if WITH_EDITOR
	virtual FString GetDisplayName() const override;
#endif
};
