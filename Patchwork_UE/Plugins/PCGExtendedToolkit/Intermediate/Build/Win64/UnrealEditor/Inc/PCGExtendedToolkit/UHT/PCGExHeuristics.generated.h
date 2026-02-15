// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/Heuristics/PCGExHeuristics.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExHeuristics_generated_h
#error "PCGExHeuristics.generated.h already included, missing '#pragma once' in PCGExHeuristics.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExHeuristics_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h

// ********** Begin Enum EPCGExHeuristicScoreMode **************************************************
#define FOREACH_ENUM_EPCGEXHEURISTICSCOREMODE(op) \
	op(EPCGExHeuristicScoreMode::LowerIsBetter) \
	op(EPCGExHeuristicScoreMode::HigherIsBetter) 

enum class EPCGExHeuristicScoreMode : uint8;
template<> struct TIsUEnumClass<EPCGExHeuristicScoreMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExHeuristicScoreMode>();
// ********** End Enum EPCGExHeuristicScoreMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
