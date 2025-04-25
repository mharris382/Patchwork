﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h"


#define LOCTEXT_NAMESPACE "PCGExVtxPropertySpecialEdges"
#define PCGEX_NAMESPACE PCGExVtxPropertySpecialEdges

void UPCGExVtxPropertySpecialEdges::CopySettingsFrom(const UPCGExOperation* Other)
{
	Super::CopySettingsFrom(Other);
	const UPCGExVtxPropertySpecialEdges* TypedOther = Cast<UPCGExVtxPropertySpecialEdges>(Other);
	if (TypedOther)
	{
		Config = TypedOther->Config;
	}
}

bool UPCGExVtxPropertySpecialEdges::PrepareForCluster(const FPCGContext* InContext, TSharedPtr<PCGExCluster::FCluster> InCluster, const TSharedPtr<PCGExData::FFacade>& InVtxDataFacade, const TSharedPtr<PCGExData::FFacade>& InEdgeDataFacade)
{
	Super::PrepareForCluster(InContext, InCluster, InVtxDataFacade, InEdgeDataFacade);

	if (!Super::PrepareForCluster(InContext, InCluster, InVtxDataFacade, InEdgeDataFacade)) { return false; }

	if (!Config.ShortestEdge.Validate(InContext) ||
		!Config.LongestEdge.Validate(InContext) ||
		!Config.AverageEdge.Validate(InContext))
	{
		bIsValidOperation = false;
		return false;
	}

	Config.ShortestEdge.Init(InVtxDataFacade.ToSharedRef());
	Config.LongestEdge.Init(InVtxDataFacade.ToSharedRef());
	Config.AverageEdge.Init(InVtxDataFacade.ToSharedRef());

	return bIsValidOperation;
}

void UPCGExVtxPropertySpecialEdges::ProcessNode(PCGExCluster::FNode& Node, const TArray<PCGExCluster::FAdjacencyData>& Adjacency)
{
	double LLongest = 0;
	int32 ILongest = -1;

	double LShortest = MAX_dbl;
	int32 IShortest = -1;

	double LAverage = 0;
	FVector VAverage = FVector::Zero();

	for (int i = 0; i < Adjacency.Num(); i++)
	{
		const PCGExCluster::FAdjacencyData& A = Adjacency[i];

		if (A.Length > LLongest)
		{
			ILongest = i;
			LLongest = A.Length;
		}

		if (A.Length < LShortest)
		{
			IShortest = i;
			LShortest = A.Length;
		}

		LAverage += A.Length;
		VAverage += A.Direction;
	}

	LAverage /= Adjacency.Num();
	VAverage /= Adjacency.Num();

	Config.AverageEdge.Set(Node.PointIndex, LAverage, VAverage);

	if (ILongest != -1) { Config.LongestEdge.Set(Node.PointIndex, Adjacency[ILongest], Cluster->GetNode(Adjacency[ILongest].NodeIndex)->Num()); }
	else { Config.LongestEdge.Set(Node.PointIndex, 0, FVector::ZeroVector, -1, -1, 0); }

	if (IShortest != -1) { Config.ShortestEdge.Set(Node.PointIndex, Adjacency[IShortest], Cluster->GetNode(Adjacency[IShortest].NodeIndex)->Num()); }
	else { Config.ShortestEdge.Set(Node.PointIndex, 0, FVector::ZeroVector, -1, -1, 0); }
}

#if WITH_EDITOR
FString UPCGExVtxPropertySpecialEdgesSettings::GetDisplayName() const
{
	return TEXT("");
}
#endif

UPCGExVtxPropertyOperation* UPCGExVtxPropertySpecialEdgesFactory::CreateOperation(FPCGExContext* InContext) const
{
	UPCGExVtxPropertySpecialEdges* NewOperation = InContext->ManagedObjects->New<UPCGExVtxPropertySpecialEdges>();
	PCGEX_VTX_EXTRA_CREATE
	return NewOperation;
}

UPCGExParamFactoryBase* UPCGExVtxPropertySpecialEdgesSettings::CreateFactory(FPCGExContext* InContext, UPCGExParamFactoryBase* InFactory) const
{
	UPCGExVtxPropertySpecialEdgesFactory* NewFactory = InContext->ManagedObjects->New<UPCGExVtxPropertySpecialEdgesFactory>();
	NewFactory->Config = Config;
	return Super::CreateFactory(InContext, NewFactory);
}

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
