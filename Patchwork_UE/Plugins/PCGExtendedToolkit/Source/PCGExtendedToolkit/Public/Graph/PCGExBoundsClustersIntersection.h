﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExCluster.h"
#include "PCGExDetailsData.h"
#include "PCGExEdgesProcessor.h"
#include "PCGExIntersections.h"

#include "PCGExBoundsClustersIntersection.generated.h"


UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Clusters", Hidden)
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExBoundsClustersIntersectionSettings : public UPCGExEdgesProcessorSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS(PointsClusterIntersection, "Clusters × Bounds Intersection", "Ensure the input set of vertex and edges outputs clean, interconnected clusters. May create new clusters, but does not creates nor deletes points/edges.");
	virtual FLinearColor GetNodeTitleColor() const override { return GetDefault<UPCGExGlobalSettings>()->NodeColorCluster; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings

	//~Begin UPCGExEdgesProcessorSettings interface
public:
	virtual PCGExData::EIOInit GetMainOutputInitMode() const override;
	virtual PCGExData::EIOInit GetEdgeOutputInitMode() const override;
	//~End UPCGExEdgesProcessorSettings interface

	/** */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, ShowOnlyInnerProperties))
	FPCGExBoxIntersectionDetails IntersectionDetails;
};

struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExBoundsClustersIntersectionContext final : FPCGExEdgesProcessorContext
{
	friend class UPCGExBoundsClustersIntersectionSettings;
	friend class FPCGExBoundsClustersIntersectionElement;

	TSharedPtr<PCGExData::FFacade> BoundsDataFacade;
};

class /*PCGEXTENDEDTOOLKIT_API*/ FPCGExBoundsClustersIntersectionElement final : public FPCGExEdgesProcessorElement
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
