﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExSearchOperation.h"
#include "UObject/Object.h"
#include "PCGExSearchAStar.generated.h"

namespace PCGExHeuristics
{
	class THeuristicsHandler;
}

namespace PCGExCluster
{
	struct FCluster;
}

class UPCGExHeuristicOperation;
/**
 * 
 */
UCLASS(DisplayName = "A*", meta=(ToolTip ="A* Search. Returns early with the least possible amount of traversed nodes."))
class PCGEXTENDEDTOOLKIT_API UPCGExSearchAStar : public UPCGExSearchOperation
{
	GENERATED_BODY()

public:
	virtual bool FindPath(
		const FVector& SeedPosition,
		const FPCGExNodeSelectionDetails* SeedSelection,
		const FVector& GoalPosition,
		const FPCGExNodeSelectionDetails* GoalSelection,
		PCGExHeuristics::THeuristicsHandler* Heuristics,
		TArray<int32>& OutPath, PCGExHeuristics::FLocalFeedbackHandler* LocalFeedback) const override;
};
