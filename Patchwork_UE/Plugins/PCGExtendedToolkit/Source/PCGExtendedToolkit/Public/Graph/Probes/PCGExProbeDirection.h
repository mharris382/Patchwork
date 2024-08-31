﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "PCGExProbeFactoryProvider.h"
#include "PCGExProbeOperation.h"

#include "PCGExProbeDirection.generated.h"

UENUM(BlueprintType, meta=(DisplayName="[PCGEx] Transform Component Selector"))
enum class EPCGExProbeDirectionPriorization : uint8
{
	Dot UMETA(DisplayName = "Best alignment", ToolTip="Favor the candidates that best align with the direction, as opposed to closest ones."),
	Dist UMETA(DisplayName = "Closest position", ToolTip="Favor the candidates that are the closest, even if they were not the best aligned."),
};

USTRUCT(BlueprintType)
struct PCGEXTENDEDTOOLKIT_API FPCGExProbeConfigDirection : public FPCGExProbeConfigBase
{
	GENERATED_BODY()

	FPCGExProbeConfigDirection() :
		FPCGExProbeConfigBase()
	{
	}

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, ClampMin=0, ClampMax=180))
	bool bUseComponentWiseAngle = false;

	/** Max angle to search within. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, EditCondition="!bUseComponentWiseAngle"))
	double MaxAngle = 45;

	/** Max angle to search within. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, EditCondition="bUseComponentWiseAngle", ClampMin=0, ClampMax=180))
	FRotator MaxAngles = FRotator(45);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	EPCGExFetchType DirectionSource = EPCGExFetchType::Constant;

	/** Constant direction */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, ClampMin=0, EditCondition="DirectionSource==EPCGExFetchType::Constant", EditConditionHides))
	FVector DirectionConstant = FVector::ForwardVector;

	/** Attribute to read the direction from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, EditCondition="DirectionSource==EPCGExFetchType::Attribute", EditConditionHides))
	FPCGAttributePropertyInputSelector DirectionAttribute;

	/** Transform the direction with the point's */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	bool bTransformDirection = true;

	/** What matters more? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_NotOverridable))
	EPCGExProbeDirectionPriorization Favor = EPCGExProbeDirectionPriorization::Dist;

	/** This probe will sample candidates after the other. Can yield different results. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	bool bDoChainedProcessing = false;
};

/**
 * 
 */
UCLASS(DisplayName = "Direction")
class PCGEXTENDEDTOOLKIT_API UPCGExProbeDirection : public UPCGExProbeOperation
{
	GENERATED_BODY()

public:
	virtual bool RequiresChainProcessing() override;
	virtual bool PrepareForPoints(const PCGExData::FPointIO* InPointIO) override;
	virtual void ProcessCandidates(const int32 Index, const FPCGPoint& Point, TArray<PCGExProbing::FCandidate>& Candidates, TSet<uint64>* ConnectedSet, const FVector& ST, TSet<uint64>* OutEdges) override;

	virtual void PrepareBestCandidate(const int32 Index, const FPCGPoint& Point, PCGExProbing::FBestCandidate& InBestCandidate) override;
	virtual void ProcessCandidateChained(const int32 Index, const FPCGPoint& Point, const int32 CandidateIndex, PCGExProbing::FCandidate& Candidate, PCGExProbing::FBestCandidate& InBestCandidate) override;
	virtual void ProcessBestCandidate(const int32 Index, const FPCGPoint& Point, PCGExProbing::FBestCandidate& InBestCandidate, TArray<PCGExProbing::FCandidate>& Candidates, TSet<uint64>* Stacks, const FVector& ST, TSet<uint64>* OutEdges) override;

	FPCGExProbeConfigDirection Config;

protected:
	bool bUseConstantDir = false;
	double MaxDot = 0;
	bool bUseBestDot = false;
	FVector Direction = FVector::ForwardVector;
	PCGExData::FCache<FVector>* DirectionCache = nullptr;
};

////

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGExProbeFactoryDirection : public UPCGExProbeFactoryBase
{
	GENERATED_BODY()

public:
	FPCGExProbeConfigDirection Config;
	virtual UPCGExProbeOperation* CreateOperation() const override;
};

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Graph|Params")
class PCGEXTENDEDTOOLKIT_API UPCGExProbeDirectionProviderSettings : public UPCGExProbeFactoryProviderSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS_CUSTOM_SUBTITLE(
		ProbeDirection, "Probe : Direction", "Probe in a given direction.",
		FName(GetDisplayName()))
#endif
	//~End UPCGSettings

	virtual UPCGExParamFactoryBase* CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const override;

	/** Filter Config.*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, ShowOnlyInnerProperties))
	FPCGExProbeConfigDirection Config;


#if WITH_EDITOR
	virtual FString GetDisplayName() const override;
#endif
};
