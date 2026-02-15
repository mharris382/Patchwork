// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Matching/PCGExMatching.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMatching_generated_h
#error "PCGExMatching.generated.h already included, missing '#pragma once' in PCGExMatching.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMatching_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExMatchingDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExMatchingDetails;
// ********** End ScriptStruct FPCGExMatchingDetails ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h

// ********** Begin Enum EPCGExMapMatchMode ********************************************************
#define FOREACH_ENUM_EPCGEXMAPMATCHMODE(op) \
	op(EPCGExMapMatchMode::Disabled) \
	op(EPCGExMapMatchMode::All) \
	op(EPCGExMapMatchMode::Any) 

enum class EPCGExMapMatchMode : uint8;
template<> struct TIsUEnumClass<EPCGExMapMatchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMapMatchMode>();
// ********** End Enum EPCGExMapMatchMode **********************************************************

// ********** Begin Enum EPCGExMatchStrictness *****************************************************
#define FOREACH_ENUM_EPCGEXMATCHSTRICTNESS(op) \
	op(EPCGExMatchStrictness::Required) \
	op(EPCGExMatchStrictness::Any) 

enum class EPCGExMatchStrictness : uint8;
template<> struct TIsUEnumClass<EPCGExMatchStrictness> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMatchStrictness>();
// ********** End Enum EPCGExMatchStrictness *******************************************************

// ********** Begin Enum EPCGExClusterComponentTagMatchMode ****************************************
#define FOREACH_ENUM_EPCGEXCLUSTERCOMPONENTTAGMATCHMODE(op) \
	op(EPCGExClusterComponentTagMatchMode::Vtx) \
	op(EPCGExClusterComponentTagMatchMode::Edges) \
	op(EPCGExClusterComponentTagMatchMode::Any) \
	op(EPCGExClusterComponentTagMatchMode::Both) \
	op(EPCGExClusterComponentTagMatchMode::Separated) 

enum class EPCGExClusterComponentTagMatchMode : uint8;
template<> struct TIsUEnumClass<EPCGExClusterComponentTagMatchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterComponentTagMatchMode>();
// ********** End Enum EPCGExClusterComponentTagMatchMode ******************************************

// ********** Begin Enum EPCGExMatchingDetailsUsage ************************************************
#define FOREACH_ENUM_EPCGEXMATCHINGDETAILSUSAGE(op) \
	op(EPCGExMatchingDetailsUsage::Default) \
	op(EPCGExMatchingDetailsUsage::Cluster) \
	op(EPCGExMatchingDetailsUsage::Sampling) 

enum class EPCGExMatchingDetailsUsage : uint8;
template<> struct TIsUEnumClass<EPCGExMatchingDetailsUsage> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMatchingDetailsUsage>();
// ********** End Enum EPCGExMatchingDetailsUsage **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
