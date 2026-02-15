// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/PCGExPathfinding.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPathfinding_generated_h
#error "PCGExPathfinding.generated.h already included, missing '#pragma once' in PCGExPathfinding.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPathfinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExPathStatistics **********************************************
struct Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPathStatistics;
// ********** End ScriptStruct FPCGExPathStatistics ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h

// ********** Begin Enum EPCGExPathComposition *****************************************************
#define FOREACH_ENUM_EPCGEXPATHCOMPOSITION(op) \
	op(EPCGExPathComposition::Vtx) \
	op(EPCGExPathComposition::Edges) \
	op(EPCGExPathComposition::VtxAndEdges) 

enum class EPCGExPathComposition : uint8;
template<> struct TIsUEnumClass<EPCGExPathComposition> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathComposition>();
// ********** End Enum EPCGExPathComposition *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
