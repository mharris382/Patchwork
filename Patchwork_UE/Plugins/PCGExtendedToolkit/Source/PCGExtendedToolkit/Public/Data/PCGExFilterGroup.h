// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGExData.h"
#include "PCGExFactoryProvider.h"

#include "PCGExPointFilter.h"
#include "Graph/Filters/PCGExClusterFilter.h"
#include "PCGExFilterGroup.generated.h"

UENUM(BlueprintType, meta=(DisplayName="[PCGEx] Filter Group Mode"))
enum class EPCGExFilterGroupMode : uint8
{
	AND UMETA(DisplayName = "And", ToolTip="All connected filters must pass."),
	OR UMETA(DisplayName = "Or", ToolTip="Only a single connected filter must pass.")
};

/**
 * 
 */
UCLASS(Abstract, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGExFilterGroupFactoryBase : public UPCGExClusterFilterFactoryBase
{
	GENERATED_BODY()

public:
	TArray<UPCGExFilterFactoryBase*> FilterFactories;

	virtual PCGExFactories::EType GetFactoryType() const override { return PCGExFactories::EType::FilterGroup; }
	virtual PCGExPointFilter::TFilter* CreateFilter() const override { return nullptr; }
};

/**
 * 
 */
UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGExFilterGroupFactoryBaseAND : public UPCGExFilterGroupFactoryBase
{
	GENERATED_BODY()

public:
	virtual PCGExFactories::EType GetFactoryType() const override { return PCGExFactories::EType::FilterGroup; }
	virtual PCGExPointFilter::TFilter* CreateFilter() const override;
};

/**
 * 
 */
UCLASS(BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Data")
class PCGEXTENDEDTOOLKIT_API UPCGExFilterGroupFactoryBaseOR : public UPCGExFilterGroupFactoryBase
{
	GENERATED_BODY()

public:
	virtual PCGExFactories::EType GetFactoryType() const override { return PCGExFactories::EType::FilterGroup; }
	virtual PCGExPointFilter::TFilter* CreateFilter() const override;
};

namespace PCGExFilterGroup
{
	class PCGEXTENDEDTOOLKIT_API TFilterGroup : public PCGExClusterFilter::TFilter
	{
	public:
		explicit TFilterGroup(const UPCGExFilterGroupFactoryBase* InFactory, const TArray<UPCGExFilterFactoryBase*>* InFilterFactories):
			TFilter(InFactory), GroupFactory(InFactory), ManagedFactories(InFilterFactories)
		{
		}

		bool bValid = false;
		const UPCGExFilterGroupFactoryBase* GroupFactory;
		const TArray<UPCGExFilterFactoryBase*>* ManagedFactories;

		PCGExCluster::FCluster* Cluster = nullptr;
		PCGExData::FFacade* EdgeDataCache = nullptr;


		virtual PCGExFilters::EType GetFilterType() const override { return PCGExFilters::EType::Group; }

		virtual bool Init(const FPCGContext* InContext, PCGExData::FFacade* InPointDataFacade) override;
		virtual bool Init(const FPCGContext* InContext, PCGExCluster::FCluster* InCluster, PCGExData::FFacade* InPointDataFacade, PCGExData::FFacade* InEdgeDataFacade) override;

		virtual void PostInit() override;

		virtual bool Test(const int32 Index) const override = 0;
		virtual bool Test(const PCGExCluster::FNode& Node) const override = 0;
		virtual bool Test(const PCGExGraph::FIndexedEdge& Edge) const override = 0;

		virtual ~TFilterGroup() override
		{
			Results.Empty();
			PCGEX_DELETE_TARRAY(ManagedFilters)
		}

	protected:
		TArray<PCGExPointFilter::TFilter*> ManagedFilters;

		virtual bool InitManaged(const FPCGContext* InContext);
		bool InitManagedFilter(const FPCGContext* InContext, PCGExPointFilter::TFilter* Filter);
		virtual bool PostInitManaged(const FPCGContext* InContext);
		virtual void PostInitManagedFilter(const FPCGContext* InContext, PCGExPointFilter::TFilter* InFilter);
	};

	class PCGEXTENDEDTOOLKIT_API TFilterGroupAND : public TFilterGroup
	{
	public:
		explicit TFilterGroupAND(const UPCGExFilterGroupFactoryBase* InFactory, const TArray<UPCGExFilterFactoryBase*>* InFilterFactories):
			TFilterGroup(InFactory, InFilterFactories)
		{
		}

		FORCEINLINE virtual bool Test(const int32 Index) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (!Filter->Test(Index)) { return false; } }
			return true;
		}

		FORCEINLINE virtual bool Test(const PCGExCluster::FNode& Node) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (!Filter->Test(Node)) { return false; } }
			return true;
		}

		FORCEINLINE virtual bool Test(const PCGExGraph::FIndexedEdge& Edge) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (!Filter->Test(Edge)) { return false; } }
			return true;
		}
	};

	class PCGEXTENDEDTOOLKIT_API TFilterGroupOR : public TFilterGroup
	{
	public:
		explicit TFilterGroupOR(const UPCGExFilterGroupFactoryBase* InFactory, const TArray<UPCGExFilterFactoryBase*>* InFilterFactories):
			TFilterGroup(InFactory, InFilterFactories)
		{
		}

		FORCEINLINE virtual bool Test(const int32 Index) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (Filter->Test(Index)) { return true; } }
			return false;
		}

		FORCEINLINE virtual bool Test(const PCGExCluster::FNode& Node) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (Filter->Test(Node)) { return true; } }
			return false;
		}

		FORCEINLINE virtual bool Test(const PCGExGraph::FIndexedEdge& Edge) const override
		{
			for (const PCGExPointFilter::TFilter* Filter : ManagedFilters) { if (Filter->Test(Edge)) { return true; } }
			return false;
		}
	};
}
