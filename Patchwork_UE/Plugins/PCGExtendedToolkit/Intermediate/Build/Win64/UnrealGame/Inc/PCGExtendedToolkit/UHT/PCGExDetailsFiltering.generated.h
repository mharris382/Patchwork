// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsFiltering.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsFiltering_generated_h
#error "PCGExDetailsFiltering.generated.h already included, missing '#pragma once' in PCGExDetailsFiltering.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsFiltering_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExFilterResultDetails *****************************************
struct Z_Construct_UScriptStruct_FPCGExFilterResultDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFiltering_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExFilterResultDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExFilterResultDetails;
// ********** End ScriptStruct FPCGExFilterResultDetails *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFiltering_h

// ********** Begin Enum EPCGExFilterDataAction ****************************************************
#define FOREACH_ENUM_EPCGEXFILTERDATAACTION(op) \
	op(EPCGExFilterDataAction::Keep) \
	op(EPCGExFilterDataAction::Omit) \
	op(EPCGExFilterDataAction::Tag) 

enum class EPCGExFilterDataAction : uint8;
template<> struct TIsUEnumClass<EPCGExFilterDataAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFilterDataAction>();
// ********** End Enum EPCGExFilterDataAction ******************************************************

// ********** Begin Enum EPCGExTagsToDataAction ****************************************************
#define FOREACH_ENUM_EPCGEXTAGSTODATAACTION(op) \
	op(EPCGExTagsToDataAction::Ignore) \
	op(EPCGExTagsToDataAction::ToData) \
	op(EPCGExTagsToDataAction::ToElements) 

enum class EPCGExTagsToDataAction : uint8;
template<> struct TIsUEnumClass<EPCGExTagsToDataAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTagsToDataAction>();
// ********** End Enum EPCGExTagsToDataAction ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
