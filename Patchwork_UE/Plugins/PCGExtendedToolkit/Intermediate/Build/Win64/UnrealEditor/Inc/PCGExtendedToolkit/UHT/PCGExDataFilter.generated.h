// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGExDataFilter.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDataFilter_generated_h
#error "PCGExDataFilter.generated.h already included, missing '#pragma once' in PCGExDataFilter.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDataFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExNameFiltersDetails ******************************************
struct Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExNameFiltersDetails;
// ********** End ScriptStruct FPCGExNameFiltersDetails ********************************************

// ********** Begin ScriptStruct FPCGExAttributeGatherDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExNameFiltersDetails Super;


struct FPCGExAttributeGatherDetails;
// ********** End ScriptStruct FPCGExAttributeGatherDetails ****************************************

// ********** Begin ScriptStruct FPCGExCarryOverDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCarryOverDetails;
// ********** End ScriptStruct FPCGExCarryOverDetails **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h

// ********** Begin Enum EPCGExAttributeFilter *****************************************************
#define FOREACH_ENUM_EPCGEXATTRIBUTEFILTER(op) \
	op(EPCGExAttributeFilter::All) \
	op(EPCGExAttributeFilter::Exclude) \
	op(EPCGExAttributeFilter::Include) 

enum class EPCGExAttributeFilter : uint8;
template<> struct TIsUEnumClass<EPCGExAttributeFilter> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeFilter>();
// ********** End Enum EPCGExAttributeFilter *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
