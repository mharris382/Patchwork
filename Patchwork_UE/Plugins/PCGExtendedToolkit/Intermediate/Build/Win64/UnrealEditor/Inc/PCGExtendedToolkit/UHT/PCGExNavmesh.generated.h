// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/PCGExNavmesh.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExNavmesh_generated_h
#error "PCGExNavmesh.generated.h already included, missing '#pragma once' in PCGExNavmesh.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExNavmesh_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h

// ********** Begin Enum EPCGExPathfindingNavmeshMode **********************************************
#define FOREACH_ENUM_EPCGEXPATHFINDINGNAVMESHMODE(op) \
	op(EPCGExPathfindingNavmeshMode::Regular) \
	op(EPCGExPathfindingNavmeshMode::Hierarchical) 

enum class EPCGExPathfindingNavmeshMode : uint8;
template<> struct TIsUEnumClass<EPCGExPathfindingNavmeshMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathfindingNavmeshMode>();
// ********** End Enum EPCGExPathfindingNavmeshMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
