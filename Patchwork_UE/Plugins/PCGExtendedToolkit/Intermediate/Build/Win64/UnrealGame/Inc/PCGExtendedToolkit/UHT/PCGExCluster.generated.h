// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExCluster.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCluster_generated_h
#error "PCGExCluster.generated.h already included, missing '#pragma once' in PCGExCluster.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCluster_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExNodeSelectionDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExNodeSelectionDetails;
// ********** End ScriptStruct FPCGExNodeSelectionDetails ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h

// ********** Begin Enum EPCGExClusterClosestSearchMode ********************************************
#define FOREACH_ENUM_EPCGEXCLUSTERCLOSESTSEARCHMODE(op) \
	op(EPCGExClusterClosestSearchMode::Vtx) \
	op(EPCGExClusterClosestSearchMode::Edge) 

enum class EPCGExClusterClosestSearchMode : uint8;
template<> struct TIsUEnumClass<EPCGExClusterClosestSearchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterClosestSearchMode>();
// ********** End Enum EPCGExClusterClosestSearchMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
