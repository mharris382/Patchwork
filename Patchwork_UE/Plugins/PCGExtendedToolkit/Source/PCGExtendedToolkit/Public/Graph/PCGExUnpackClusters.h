﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "Graph/PCGExEdgesProcessor.h"
#include "PCGExUnpackClusters.generated.h"

UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Edges")
class PCGEXTENDEDTOOLKIT_API UPCGExUnpackClustersSettings : public UPCGExPointsProcessorSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS(UnpackClusters, "Cluster : Unpack", "Restores vtx/edge clusters from packed dataset.");
	virtual FLinearColor GetNodeTitleColor() const override { return GetDefault<UPCGExGlobalSettings>()->NodeColorCluster; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings

	//~Begin UPCGExPointsProcessorSettings
public:
	virtual FName GetMainInputLabel() const override { return PCGExGraph::SourcePackedClustersLabel; }
	virtual FName GetMainOutputLabel() const override { return PCGExGraph::OutputVerticesLabel; }
	virtual PCGExData::EInit GetMainOutputInitMode() const override;
	//~End UPCGExPointsProcessorSettings

	/** Flatten unpacked metadata \n Depending on your setup this is a tradeoff between memory and speed.*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	bool bFlatten = false;

private:
	friend class FPCGExUnpackClustersElement;
};

struct PCGEXTENDEDTOOLKIT_API FPCGExUnpackClustersContext final : public FPCGExPointsProcessorContext
{
	friend class FPCGExUnpackClustersElement;

	virtual ~FPCGExUnpackClustersContext() override;

	PCGExData::FPointIOCollection* OutPoints = nullptr;
	PCGExData::FPointIOCollection* OutEdges = nullptr;
};

class PCGEXTENDEDTOOLKIT_API FPCGExUnpackClustersElement final : public FPCGExPointsProcessorElement
{
public:
	virtual FPCGContext* Initialize(
		const FPCGDataCollection& InputData,
		TWeakObjectPtr<UPCGComponent> SourceComponent,
		const UPCGNode* Node) override;

protected:
	virtual bool Boot(FPCGExContext* InContext) const override;
	virtual bool ExecuteInternal(FPCGContext* InContext) const override;
};

class PCGEXTENDEDTOOLKIT_API FPCGExUnpackClusterTask final : public PCGExMT::FPCGExTask
{
public:
	FPCGExUnpackClusterTask(PCGExData::FPointIO* InPointIO) :
		FPCGExTask(InPointIO)
	{
	}

	virtual bool ExecuteTask() override;
};
