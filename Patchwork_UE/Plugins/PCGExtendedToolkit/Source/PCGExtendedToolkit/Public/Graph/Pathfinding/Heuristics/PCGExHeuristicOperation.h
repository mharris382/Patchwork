﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExOperation.h"
#include "Graph/PCGExCluster.h"
#include "UObject/Object.h"
#include "PCGExHeuristicOperation.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PCGEXTENDEDTOOLKIT_API UPCGExHeuristicOperation : public UPCGExOperation
{
	GENERATED_BODY()

public:
	bool bInvert = false;
	double ReferenceWeight = 1;
	double WeightFactor = 1;
	bool bUseLocalWeightMultiplier = false;
	EPCGExGraphValueSource LocalWeightMultiplierSource = EPCGExGraphValueSource::Vtx;
	FPCGAttributePropertyInputSelector WeightMultiplierAttribute;
	TObjectPtr<UCurveFloat> ScoreCurveObj;

	bool bHasCustomLocalWeightMultiplier = false;

	virtual void PrepareForCluster(const PCGExCluster::FCluster* InCluster);

	FORCEINLINE virtual double GetGlobalScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal) const
	{
		return 0;
	}

	FORCEINLINE virtual double GetEdgeScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& To,
		const PCGExGraph::FIndexedEdge& Edge,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal) const
	{
		return 0;
	}

	FORCEINLINE double GetCustomWeightMultiplier(const int32 PointIndex, const int32 EdgeIndex) const
	{
		//TODO Rewrite this
		if (!bUseLocalWeightMultiplier || LocalWeightMultiplier.IsEmpty()) { return 1; }
		return FMath::Abs(LocalWeightMultiplier[LocalWeightMultiplierSource == EPCGExGraphValueSource::Vtx ? PointIndex : EdgeIndex]);
	}

	virtual void Cleanup() override;

protected:
	const PCGExCluster::FCluster* Cluster = nullptr;
	TArray<double> LocalWeightMultiplier;

	FORCEINLINE virtual double SampleCurve(const double InTime) const
	{
		return FMath::Max(0, ScoreCurveObj->GetFloatValue(bInvert ? 1 - InTime : InTime));
	}
};
