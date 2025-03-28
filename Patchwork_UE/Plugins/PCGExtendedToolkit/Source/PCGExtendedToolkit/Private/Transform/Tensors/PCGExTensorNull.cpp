﻿// Copyright 2025 Timothé Lapetite and contributors
// Released under the MIT license https://opensource.org/license/MIT/

#include "Transform/Tensors/PCGExTensorNull.h"

#define LOCTEXT_NAMESPACE "PCGExCreateTensorNull"
#define PCGEX_NAMESPACE CreateTensorNull

bool UPCGExTensorNull::Init(FPCGExContext* InContext, const UPCGExTensorFactoryData* InFactory)
{
	if (!Super::Init(InContext, InFactory)) { return false; }
	return true;
}

PCGExTensor::FTensorSample UPCGExTensorNull::Sample(const FTransform& InProbe) const
{
	const FVector& InPosition = InProbe.GetLocation();
	const FBoxCenterAndExtent BCAE = FBoxCenterAndExtent(InPosition, FVector::One());

	PCGExTensor::FEffectorSamples Samples = PCGExTensor::FEffectorSamples();

	auto ProcessNeighbor = [&](const FPCGPointRef& InEffector)
	{
		PCGExTensor::FEffectorMetrics Metrics;
		if (!ComputeFactor(InPosition, InEffector, Metrics)) { return; }
		Samples.Emplace_GetRef(FVector::ZeroVector, 1, 1);
	};

	Octree->FindElementsWithBoundsTest(BCAE, ProcessNeighbor);
	return Samples.Flatten(Samples.TotalPotency * Config.TensorWeight);
}

PCGEX_TENSOR_BOILERPLATE(Null, {}, {})

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
