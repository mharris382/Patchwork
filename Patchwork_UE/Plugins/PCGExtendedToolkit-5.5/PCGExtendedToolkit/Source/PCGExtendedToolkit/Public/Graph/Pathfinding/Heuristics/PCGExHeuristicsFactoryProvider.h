﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExPointsProcessor.h"

#include "PCGExHeuristicsFactoryProvider.generated.h"

#define PCGEX_FORWARD_HEURISTIC_FACTORY \
	NewFactory->WeightFactor = Config.WeightFactor; \
	NewFactory->Config = Config; \
	PCGEX_LOAD_SOFTOBJECT(UCurveFloat, NewFactory->Config.ScoreCurve, NewFactory->Config.ScoreCurveObj, PCGEx::WeightDistributionLinear)

#define PCGEX_FORWARD_HEURISTIC_CONFIG \
	NewOperation->WeightFactor = Config.WeightFactor; \
	NewOperation->bInvert = Config.bInvert; \
	NewOperation->UVWSeed = Config.UVWSeed; \
	NewOperation->UVWGoal = Config.UVWGoal; \
	NewOperation->ScoreCurveObj = Config.ScoreCurveObj; \
	NewOperation->bUseLocalWeightMultiplier = Config.bUseLocalWeightMultiplier; \
	NewOperation->LocalWeightMultiplierSource = Config.LocalWeightMultiplierSource; \
	NewOperation->WeightMultiplierAttribute = Config.WeightMultiplierAttribute;

class UPCGExHeuristicOperation;

USTRUCT(BlueprintType)
struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExHeuristicConfigBase
{
	GENERATED_BODY()

	FPCGExHeuristicConfigBase():
		ScoreCurve(PCGEx::WeightDistributionLinear)
	{
	}

	~FPCGExHeuristicConfigBase()
	{
	}

	/** The weight factor for this heuristic.*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayPriority=-1))
	double WeightFactor = 1;

	/** Invert the final heuristics score. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayPriority=-1))
	bool bInvert = false;

	/** Curve the value will be remapped over. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayPriority=-1))
	TSoftObjectPtr<UCurveFloat> ScoreCurve;

	UPROPERTY(Transient)
	TObjectPtr<UCurveFloat> ScoreCurveObj;

	/** Use a local attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Local Weight", meta=(PCG_Overridable))
	bool bUseLocalWeightMultiplier = false;

	/** Bound-relative seed position used when this heuristic is used in a "roaming" context */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Roaming", meta=(PCG_Overridable))
	FVector UVWSeed = FVector::ZeroVector;

	/** Bound-relative goal position used when this heuristic is used in a "roaming" context */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Roaming", meta=(PCG_Overridable))
	FVector UVWGoal = FVector::ZeroVector;

	/** Local multiplier attribute source */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Local Weight", meta=(PCG_Overridable, EditCondition="bUseLocalWeightMultiplier", EditConditionHides))
	EPCGExClusterComponentSource LocalWeightMultiplierSource = EPCGExClusterComponentSource::Vtx;

	/** Attribute to read multiplier value from. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Local Weight", meta=(PCG_Overridable, EditCondition="bUseLocalWeightMultiplier", EditConditionHides))
	FPCGAttributePropertyInputSelector WeightMultiplierAttribute;
};

UCLASS(Abstract, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExHeuristicsFactoryBase : public UPCGExParamFactoryBase
{
	GENERATED_BODY()

public:
	virtual PCGExFactories::EType GetFactoryType() const override { return PCGExFactories::EType::Heuristics; }
	virtual UPCGExHeuristicOperation* CreateOperation(FPCGExContext* InContext) const;
	double WeightFactor = 1;
};

UCLASS(Abstract, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Graph|Params")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExHeuristicsFactoryProviderSettings : public UPCGExFactoryProviderSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS(AbstractHeuristics, "Heuristics Definition", "Creates a single heuristic computational node, to be used with pathfinding nodes.")
	virtual FLinearColor GetNodeTitleColor() const override { return GetDefault<UPCGExGlobalSettings>()->NodeColorHeuristics; }
#endif
	//~End UPCGSettings

	virtual FName GetMainOutputPin() const override { return PCGExGraph::OutputHeuristicsLabel; }
	virtual UPCGExParamFactoryBase* CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const override;
};
