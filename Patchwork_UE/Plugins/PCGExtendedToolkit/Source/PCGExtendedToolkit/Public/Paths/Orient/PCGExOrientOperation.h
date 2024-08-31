﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "Data/PCGExAttributeHelpers.h"
#include "Paths/SubPoints/PCGExSubPointsOperation.h"
#include "PCGExOrientOperation.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PCGEXTENDEDTOOLKIT_API UPCGExOrientOperation : public UPCGExOperation
{
	GENERATED_BODY()

public:
	bool bClosedPath = false;
	EPCGExAxis OrientAxis = EPCGExAxis::Forward;
	EPCGExAxis UpAxis = EPCGExAxis::Up;

	virtual void CopySettingsFrom(const UPCGExOperation* Other) override;

	virtual bool PrepareForData(PCGExData::FFacade* InDataFacade);
	virtual FTransform ComputeOrientation(const PCGExData::FPointRef& Point, const PCGExData::FPointRef& Previous, const PCGExData::FPointRef& Next, const double DirectionMultiplier) const;
};
