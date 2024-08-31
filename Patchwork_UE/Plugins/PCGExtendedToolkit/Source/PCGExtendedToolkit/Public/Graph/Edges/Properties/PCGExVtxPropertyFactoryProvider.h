﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "PCGExFactoryProvider.h"
#include "Graph/PCGExCluster.h"
#include "Graph/PCGExGraph.h"
#include "PCGExOperation.h"

#include "PCGExVtxPropertyFactoryProvider.generated.h"

#define PCGEX_VTX_EXTRA_CREATE \
	NewOperation->Config = Config;

namespace PCGExVtxProperty
{
	const FName SourcePropertyLabel = TEXT("Properties");
	const FName OutputPropertyLabel = TEXT("Property");
}

USTRUCT(BlueprintType)
struct PCGEXTENDEDTOOLKIT_API FPCGExSimpleEdgeOutputSettings
{
	GENERATED_BODY()
	virtual ~FPCGExSimpleEdgeOutputSettings() = default;

	FPCGExSimpleEdgeOutputSettings()
	{
	}

	explicit FPCGExSimpleEdgeOutputSettings(const FString& Name)
		: DirectionAttribute(FName(FText::Format(FText::FromString(TEXT("{0}Dir")), FText::FromString(Name)).ToString())),
		  LengthAttribute(FName(FText::Format(FText::FromString(TEXT("{0}Len")), FText::FromString(Name)).ToString()))
	{
	}

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bWriteDirection = false;

	/** Name of the attribute to output the direction to. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteDirection"))
	FName DirectionAttribute = "Direction";
	PCGEx::TFAttributeWriter<FVector>* DirWriter = nullptr;

	/** Invert the direction */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteDirection"))
	bool bInvertDirection = false;

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bWriteLength = false;

	/** Name of the attribute to output the length to. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteLength"))
	FName LengthAttribute = "Length";
	PCGEx::TFAttributeWriter<double>* LengthWriter = nullptr;

	virtual bool Validate(const FPCGContext* InContext) const
	{
		if (bWriteDirection) { PCGEX_VALIDATE_NAME_C(InContext, DirectionAttribute); }
		if (bWriteLength) { PCGEX_VALIDATE_NAME_C(InContext, LengthAttribute); }
		return true;
	}

	virtual void Init(PCGExData::FFacade* InFacade)
	{
		if (bWriteDirection) { DirWriter = InFacade->GetWriter<FVector>(DirectionAttribute, true); }
		if (bWriteLength) { LengthWriter = InFacade->GetWriter<double>(LengthAttribute, true); }
	}

	void Set(const int32 EntryIndex, const double InLength, const FVector& InDir)
	{
		if (DirWriter) { DirWriter->Values[EntryIndex] = bInvertDirection ? InDir * -1 : InDir; }
		if (LengthWriter) { LengthWriter->Values[EntryIndex] = InLength; }
	}

	virtual void Set(const int32 EntryIndex, const PCGExCluster::FAdjacencyData& Data)
	{
		if (DirWriter) { DirWriter->Values[EntryIndex] = bInvertDirection ? Data.Direction * -1 : Data.Direction; }
		if (LengthWriter) { LengthWriter->Values[EntryIndex] = Data.Length; }
	}
};

USTRUCT(BlueprintType)
struct PCGEXTENDEDTOOLKIT_API FPCGExEdgeOutputWithIndexSettings : public FPCGExSimpleEdgeOutputSettings
{
	GENERATED_BODY()

	FPCGExEdgeOutputWithIndexSettings()
		: FPCGExSimpleEdgeOutputSettings()
	{
	}

	explicit FPCGExEdgeOutputWithIndexSettings(const FString& Name)
		: FPCGExSimpleEdgeOutputSettings(Name),
		  EdgeIndexAttribute(FName(FText::Format(FText::FromString(TEXT("{0}EdgeIndex")), FText::FromString(Name)).ToString())),
		  VtxIndexAttribute(FName(FText::Format(FText::FromString(TEXT("{0}VtxIndex")), FText::FromString(Name)).ToString())),
		  NeighborCountAttribute(FName(FText::Format(FText::FromString(TEXT("{0}NeighborCount")), FText::FromString(Name)).ToString()))
	{
	}

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle, DisplayAfter="LengthAttribute"))
	bool bWriteEdgeIndex = false;

	/** TBD */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteEdgeIndex", DisplayAfter="bWriteEdgeIndex"))
	FName EdgeIndexAttribute = "EdgeIndex";
	PCGEx::TFAttributeWriter<int32>* EIdxWriter = nullptr;

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle, DisplayAfter="EdgeIndexAttribute"))
	bool bWriteVtxIndex = false;

	/** TBD */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteVtxIndex", DisplayAfter="bWriteVtxIndex"))
	FName VtxIndexAttribute = "VtxIndex";
	PCGEx::TFAttributeWriter<int32>* VIdxWriter = nullptr;

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle, DisplayAfter="VtxIndexAttribute"))
	bool bWriteNeighborCount = false;

	/** TBD */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, EditCondition="bWriteNeighborCount", DisplayAfter="bWriteNeighborCount"))
	FName NeighborCountAttribute = "Count";
	PCGEx::TFAttributeWriter<int32>* NCountWriter = nullptr;

	virtual bool Validate(const FPCGContext* InContext) const override
	{
		if (!FPCGExSimpleEdgeOutputSettings::Validate(InContext)) { return false; }
		if (bWriteEdgeIndex) { PCGEX_VALIDATE_NAME_C(InContext, EdgeIndexAttribute); }
		if (bWriteVtxIndex) { PCGEX_VALIDATE_NAME_C(InContext, VtxIndexAttribute); }
		if (bWriteNeighborCount) { PCGEX_VALIDATE_NAME_C(InContext, NeighborCountAttribute); }
		return true;
	}

	virtual void Init(PCGExData::FFacade* InFacade) override
	{
		FPCGExSimpleEdgeOutputSettings::Init(InFacade);
		if (bWriteEdgeIndex) { EIdxWriter = InFacade->GetWriter<int32>(EdgeIndexAttribute, true); }
		if (bWriteVtxIndex) { VIdxWriter = InFacade->GetWriter<int32>(VtxIndexAttribute, true); }
		if (bWriteNeighborCount) { NCountWriter = InFacade->GetWriter<int32>(NeighborCountAttribute, true); }
	}

	void Set(const int32 EntryIndex, const double InLength, const FVector& InDir, const int32 EIndex, const int32 VIndex, const int32 NeighborCount)
	{
		FPCGExSimpleEdgeOutputSettings::Set(EntryIndex, InLength, InDir);
		if (EIdxWriter) { EIdxWriter->Values[EntryIndex] = EIndex; }
		if (VIdxWriter) { VIdxWriter->Values[EntryIndex] = VIndex; }
		if (NCountWriter) { NCountWriter->Values[EntryIndex] = NeighborCount; }
	}

	virtual void Set(const int32 EntryIndex, const PCGExCluster::FAdjacencyData& Data) override
	{
		FPCGExSimpleEdgeOutputSettings::Set(EntryIndex, Data);
		if (EIdxWriter) { EIdxWriter->Values[EntryIndex] = Data.EdgeIndex; }
		if (VIdxWriter) { VIdxWriter->Values[EntryIndex] = Data.NodePointIndex; }
	}

	virtual void Set(const int32 EntryIndex, const PCGExCluster::FAdjacencyData& Data, const int32 NeighborCount)
	{
		Set(EntryIndex, Data);
		if (NCountWriter) { NCountWriter->Values[EntryIndex] = NeighborCount; }
	}
};

/**
 * 
 */
UCLASS()
class PCGEXTENDEDTOOLKIT_API UPCGExVtxPropertyOperation : public UPCGExOperation
{
	GENERATED_BODY()

public:
	virtual void CopySettingsFrom(const UPCGExOperation* Other) override;

	virtual bool PrepareForVtx(const FPCGContext* InContext, PCGExData::FFacade* InVtxDataFacade);

	virtual void ClusterReserve(const int32 NumClusters);
	virtual void PrepareForCluster(const FPCGContext* InContext, const int32 ClusterIdx, PCGExCluster::FCluster* Cluster, PCGExData::FFacade* VtxDataFacade, PCGExData::FFacade* EdgeDataFacade);

	virtual bool IsOperationValid();

	virtual void ProcessNode(const int32 ClusterIdx, const PCGExCluster::FCluster* Cluster, PCGExCluster::FNode& Node, const TArray<PCGExCluster::FAdjacencyData>& Adjacency);

	virtual void Cleanup() override;

protected:
	bool bIsValidOperation = true;
};

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGExVtxPropertyFactoryBase : public UPCGExParamFactoryBase
{
	GENERATED_BODY()

public:
	virtual PCGExFactories::EType GetFactoryType() const override { return PCGExFactories::EType::VtxProperty; }
	virtual UPCGExVtxPropertyOperation* CreateOperation() const;
};

UCLASS(Abstract, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|VtxProperty")
class PCGEXTENDEDTOOLKIT_API UPCGExVtxPropertyProviderSettings : public UPCGExFactoryProviderSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS(VtxPropertyAttribute, "Vtx : Abstract", "Abstract vtx extra settings.")
	virtual FLinearColor GetNodeTitleColor() const override { return GetDefault<UPCGExGlobalSettings>()->NodeColorSamplerNeighbor; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	//~End UPCGSettings

public:
	virtual FName GetMainOutputLabel() const override { return PCGExVtxProperty::OutputPropertyLabel; }
	virtual UPCGExParamFactoryBase* CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const override;

#if WITH_EDITOR
	virtual FString GetDisplayName() const override;
#endif

	/** Priority for sampling order. Higher values are processed last. */
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayPriority=-1))
	//int32 Priority = 0;
};
