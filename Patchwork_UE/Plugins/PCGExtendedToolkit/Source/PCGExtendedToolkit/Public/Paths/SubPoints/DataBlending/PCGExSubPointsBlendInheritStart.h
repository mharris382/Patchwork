﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExSubPointsBlendOperation.h"
#include "PCGExSubPointsBlendInheritStart.generated.h"

/**
 * 
 */
UCLASS(DisplayName = "Inherit First")
class PCGEXTENDEDTOOLKIT_API UPCGExSubPointsBlendInheritStart : public UPCGExSubPointsBlendOperation
{
	GENERATED_BODY()

public:
	virtual void BlendSubPoints(
		const PCGExData::FPointRef& StartPoint,
		const PCGExData::FPointRef& EndPoint,
		const TArrayView<FPCGPoint>& SubPoints,
		const PCGExMath::FPathMetricsSquared& Metrics,
		PCGExDataBlending::FMetadataBlender* InBlender) const override;
};
