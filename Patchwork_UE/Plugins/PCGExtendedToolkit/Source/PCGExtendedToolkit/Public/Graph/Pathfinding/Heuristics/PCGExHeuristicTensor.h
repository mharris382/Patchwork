﻿// Copyright 2025 Timothé Lapetite and contributors
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExHeuristicDistance.h"
#include "UObject/Object.h"
#include "PCGExHeuristicOperation.h"
#include "Graph/PCGExCluster.h"
#include "Transform/Tensors/PCGExTensor.h"
#include "Transform/Tensors/PCGExTensorHandler.h"
#include "PCGExHeuristicTensor.generated.h"

USTRUCT(BlueprintType)
struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExHeuristicConfigTensor : public FPCGExHeuristicConfigBase
{
	GENERATED_BODY()

	FPCGExHeuristicConfigTensor() :
		FPCGExHeuristicConfigBase()
	{
	}

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	bool bAbsolute = true;

	/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, DisplayName="Tensor Sampling Settings"))
	FPCGExTensorHandlerDetails TensorHandlerDetails;
};

/**
 * 
 */
UCLASS(MinimalAPI, DisplayName = "Tensor")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExHeuristicTensor : public UPCGExHeuristicOperation
{
	GENERATED_BODY()

	friend class UPCGExHeuristicsFactoryTensor;

public:
	virtual void PrepareForCluster(const TSharedPtr<const PCGExCluster::FCluster>& InCluster) override;

	FORCEINLINE virtual double GetGlobalScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal) const override
	{
		return GetScoreInternal(GetDot(Cluster->GetPos(From), Cluster->GetPos(Goal)));
	}

	FORCEINLINE virtual double GetEdgeScore(
		const PCGExCluster::FNode& From,
		const PCGExCluster::FNode& To,
		const PCGExGraph::FEdge& Edge,
		const PCGExCluster::FNode& Seed,
		const PCGExCluster::FNode& Goal,
		const TSharedPtr<PCGEx::FHashLookup> TravelStack) const override
	{
		return GetScoreInternal(GetDot(Cluster->GetPos(From), Cluster->GetPos(To)));
	}

protected:
	TSharedPtr<PCGExTensor::FTensorsHandler> TensorsHandler;
	FPCGExTensorHandlerDetails TensorHandlerDetails;
	const TArray<TObjectPtr<const UPCGExTensorFactoryData>>* TensorFactories = nullptr;
	bool bAbsoluteTensor = true;

	FORCEINLINE double GetDot(const FVector& From, const FVector& To) const
	{
		bool bSuccess = false;
		const PCGExTensor::FTensorSample Sample = TensorsHandler->Sample(FTransform(FRotationMatrix::MakeFromX((To - From).GetSafeNormal()).ToQuat(), From), bSuccess);
		if (!bSuccess) { return 0; }
		const double Dot = FVector::DotProduct((To - From).GetSafeNormal(), Sample.DirectionAndSize.GetSafeNormal());
		return bAbsoluteTensor ? 1 - FMath::Abs(Dot) : 1 - PCGExMath::Remap(Dot, -1, 1);
	}
};

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExHeuristicsFactoryTensor : public UPCGExHeuristicsFactoryData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FPCGExHeuristicConfigTensor Config;

	UPROPERTY()
	TArray<TObjectPtr<const UPCGExTensorFactoryData>> TensorFactories;

	virtual UPCGExHeuristicOperation* CreateOperation(FPCGExContext* InContext) const override;
	PCGEX_HEURISTIC_FACTORY_BOILERPLATE

	virtual bool GetRequiresPreparation(FPCGExContext* InContext) override { return true; }
	virtual bool Prepare(FPCGExContext* InContext) override;
};

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Graph|Params")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExHeuristicsTensorProviderSettings : public UPCGExHeuristicsFactoryProviderSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS_CUSTOM_SUBTITLE(
		HeuristicsTensor, "Heuristics : Tensor", "Heuristics based on tensors.",
		FName(GetDisplayName()))
#endif
	//~End UPCGSettings

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;

public:
	/** Filter Config.*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, ShowOnlyInnerProperties))
	FPCGExHeuristicConfigTensor Config;

	virtual UPCGExFactoryData* CreateFactory(FPCGExContext* InContext, UPCGExFactoryData* InFactory) const override;

#if WITH_EDITOR
	virtual FString GetDisplayName() const override;
#endif

protected:
	virtual bool IsCacheable() const override { return false; } // can't cache tensors yet
};
