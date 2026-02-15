// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Filters/PCGExAdjacency.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAdjacency_generated_h
#error "PCGExAdjacency.generated.h already included, missing '#pragma once' in PCGExAdjacency.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAdjacency_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAdjacencySettings *******************************************
struct Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAdjacencySettings;
// ********** End ScriptStruct FPCGExAdjacencySettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h

// ********** Begin Enum EPCGExAdjacencyTestMode ***************************************************
#define FOREACH_ENUM_EPCGEXADJACENCYTESTMODE(op) \
	op(EPCGExAdjacencyTestMode::All) \
	op(EPCGExAdjacencyTestMode::Some) 

enum class EPCGExAdjacencyTestMode : uint8;
template<> struct TIsUEnumClass<EPCGExAdjacencyTestMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyTestMode>();
// ********** End Enum EPCGExAdjacencyTestMode *****************************************************

// ********** Begin Enum EPCGExAdjacencyGatherMode *************************************************
#define FOREACH_ENUM_EPCGEXADJACENCYGATHERMODE(op) \
	op(EPCGExAdjacencyGatherMode::Individual) \
	op(EPCGExAdjacencyGatherMode::Average) \
	op(EPCGExAdjacencyGatherMode::Min) \
	op(EPCGExAdjacencyGatherMode::Max) \
	op(EPCGExAdjacencyGatherMode::Sum) 

enum class EPCGExAdjacencyGatherMode : uint8;
template<> struct TIsUEnumClass<EPCGExAdjacencyGatherMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyGatherMode>();
// ********** End Enum EPCGExAdjacencyGatherMode ***************************************************

// ********** Begin Enum EPCGExAdjacencyThreshold **************************************************
#define FOREACH_ENUM_EPCGEXADJACENCYTHRESHOLD(op) \
	op(EPCGExAdjacencyThreshold::AtLeast) \
	op(EPCGExAdjacencyThreshold::AtMost) \
	op(EPCGExAdjacencyThreshold::Exactly) 

enum class EPCGExAdjacencyThreshold : uint8;
template<> struct TIsUEnumClass<EPCGExAdjacencyThreshold> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyThreshold>();
// ********** End Enum EPCGExAdjacencyThreshold ****************************************************

// ********** Begin Enum EPCGExRelativeThresholdRoundingMode ***************************************
#define FOREACH_ENUM_EPCGEXRELATIVETHRESHOLDROUNDINGMODE(op) \
	op(EPCGExRelativeThresholdRoundingMode::Round) \
	op(EPCGExRelativeThresholdRoundingMode::Floor) \
	op(EPCGExRelativeThresholdRoundingMode::Ceil) 

enum class EPCGExRelativeThresholdRoundingMode : uint8;
template<> struct TIsUEnumClass<EPCGExRelativeThresholdRoundingMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelativeThresholdRoundingMode>();
// ********** End Enum EPCGExRelativeThresholdRoundingMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
