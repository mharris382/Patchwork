﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h"
#include "Graph/PCGExGraph.h"

#define LOCTEXT_NAMESPACE "PCGExIsoEdgeDirectionFilter"
#define PCGEX_NAMESPACE IsoEdgeDirectionFilter

void UPCGExIsoEdgeDirectionFilterFactory::RegisterBuffersDependencies(FPCGExContext* InContext, PCGExData::FFacadePreloader& FacadePreloader) const
{
	Super::RegisterBuffersDependencies(InContext, FacadePreloader);
	Config.DirectionSettings.RegisterBuffersDependencies(InContext, FacadePreloader, &EdgeSortingRules);
}

TSharedPtr<PCGExPointFilter::FFilter> UPCGExIsoEdgeDirectionFilterFactory::CreateFilter() const
{
	return MakeShared<FIsoEdgeDirectionFilter>(this);
}

bool FIsoEdgeDirectionFilter::Init(FPCGExContext* InContext, const TSharedRef<PCGExCluster::FCluster>& InCluster, const TSharedRef<PCGExData::FFacade>& InPointDataFacade, const TSharedRef<PCGExData::FFacade>& InEdgeDataFacade)
{
	if (!FFilter::Init(InContext, InCluster, InPointDataFacade, InEdgeDataFacade)) { return false; }

	DirectionSettings = TypedFilterFactory->Config.DirectionSettings;

	if (!DirectionSettings.Init(InContext, InPointDataFacade, &TypedFilterFactory->EdgeSortingRules))
	{
		PCGE_LOG_C(Warning, GraphAndLog, InContext, FTEXT("Some vtx are missing the specified Direction attribute."));
		return false;
	}

	if (DirectionSettings.RequiresEndpointsMetadata())
	{
		// Fetch attributes while processors are searching for chains

		const int32 PLI = GetDefault<UPCGExGlobalSettings>()->GetClusterBatchChunkSize();
	}

	if (TypedFilterFactory->Config.CompareAgainst == EPCGExInputValueType::Attribute)
	{
		OperandDirection = PointDataFacade->GetBroadcaster<FVector>(TypedFilterFactory->Config.Direction);
		if (!OperandDirection)
		{
			PCGE_LOG_C(Error, GraphAndLog, InContext, FText::Format(FTEXT("Invalid Direction attribute: \"{0}\"."), FText::FromName(TypedFilterFactory->Config.Direction.GetName())));
			return false;
		}
	}

	if (TypedFilterFactory->Config.ComparisonQuality == EPCGExDirectionCheckMode::Dot)
	{
		if (!DotComparison.Init(InContext, PointDataFacade.ToSharedRef())) { return false; }
	}
	else
	{
		bUseDot = false;
		if (!HashComparison.Init(InContext, PointDataFacade.ToSharedRef())) { return false; }
	}

	return true;
}

bool FIsoEdgeDirectionFilter::Test(const PCGExGraph::FEdge& Edge) const
{
	PCGExGraph::FEdge MutableEdge = Edge;
	DirectionSettings.SortEndpoints(Cluster.Get(), MutableEdge);

	const FVector Direction = Cluster->GetEdgeDir(MutableEdge);

	return bUseDot ? TestDot(Edge.PointIndex, Direction) : TestHash(Edge.PointIndex, Direction);
}

bool FIsoEdgeDirectionFilter::TestDot(const int32 PtIndex, const FVector& EdgeDir) const
{
	const FPCGPoint& Point = PointDataFacade->Source->GetInPoint(PtIndex);

	FVector RefDir = OperandDirection ? OperandDirection->Read(PtIndex) : TypedFilterFactory->Config.DirectionConstant;
	if (TypedFilterFactory->Config.bTransformDirection) { RefDir = Point.Transform.TransformVectorNoScale(RefDir).GetSafeNormal(); }

	double B = 0;
	if (DotComparison.bUnsignedDot) { B = FMath::Abs(FVector::DotProduct(RefDir, EdgeDir)); }
	else { B = FVector::DotProduct(RefDir, EdgeDir); }

	return DotComparison.Test(DotComparison.GetDot(PtIndex), B);
}

bool FIsoEdgeDirectionFilter::TestHash(const int32 PtIndex, const FVector& EdgeDir) const
{
	const FPCGPoint& Point = PointDataFacade->Source->GetInPoint(PtIndex);

	FVector RefDir = OperandDirection ? OperandDirection->Read(PtIndex) : TypedFilterFactory->Config.DirectionConstant;
	if (TypedFilterFactory->Config.bTransformDirection) { RefDir = Point.Transform.TransformVectorNoScale(RefDir); }

	RefDir.Normalize();

	const FVector CWTolerance = HashComparison.GetCWTolerance(PtIndex);
	return PCGEx::I323(RefDir, CWTolerance) == PCGEx::I323(EdgeDir, CWTolerance);
}

TArray<FPCGPinProperties> UPCGExIsoEdgeDirectionFilterProviderSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties = Super::InputPinProperties();
	if (Config.DirectionSettings.DirectionMethod == EPCGExEdgeDirectionMethod::EndpointsSort)
	{
		PCGEX_PIN_PARAMS(PCGExGraph::SourceEdgeSortingRules, "Plug sorting rules here. Order is defined by each rule' priority value, in ascending order.", Required, {})
	}
	return PinProperties;
}

UPCGExParamFactoryBase* UPCGExIsoEdgeDirectionFilterProviderSettings::CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const
{
	UPCGExIsoEdgeDirectionFilterFactory* NewFactory = InContext->ManagedObjects->New<UPCGExIsoEdgeDirectionFilterFactory>();
	Super::CreateFactory(InContext, InFactory);
	NewFactory->Config = Config;

	if (Config.DirectionSettings.DirectionMethod == EPCGExEdgeDirectionMethod::EndpointsSort)
	{
		NewFactory->EdgeSortingRules = PCGExSorting::GetSortingRules(InContext, PCGExGraph::SourceEdgeSortingRules);
	}

	if (!NewFactory->Init(InContext)) { InContext->ManagedObjects->Destroy(NewFactory); }
	return NewFactory;
}

#if WITH_EDITOR
FString UPCGExIsoEdgeDirectionFilterProviderSettings::GetDisplayName() const
{
	FString DisplayName = TEXT("Edge Direction ") + PCGExCompare::ToString(Config.DotComparisonDetails.Comparison);

	UPCGExIsoEdgeDirectionFilterProviderSettings* MutableSelf = const_cast<UPCGExIsoEdgeDirectionFilterProviderSettings*>(this);
	MutableSelf->Config.DirectionConstant = Config.DirectionConstant.GetSafeNormal();

	DisplayName += PCGEx::GetSelectorDisplayName(Config.Direction);
	return DisplayName;
}
#endif

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
