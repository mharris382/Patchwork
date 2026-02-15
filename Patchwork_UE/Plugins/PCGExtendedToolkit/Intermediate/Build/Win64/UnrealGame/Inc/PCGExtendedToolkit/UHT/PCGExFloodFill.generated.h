// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/FloodFill/PCGExFloodFill.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFloodFill_generated_h
#error "PCGExFloodFill.generated.h already included, missing '#pragma once' in PCGExFloodFill.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFloodFill_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExFloodFillFlowDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExFloodFillFlowDetails;
// ********** End ScriptStruct FPCGExFloodFillFlowDetails ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h

// ********** Begin Enum EPCGExFloodFillSettingSource **********************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLSETTINGSOURCE(op) \
	op(EPCGExFloodFillSettingSource::Seed) \
	op(EPCGExFloodFillSettingSource::Vtx) 

enum class EPCGExFloodFillSettingSource : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillSettingSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillSettingSource>();
// ********** End Enum EPCGExFloodFillSettingSource ************************************************

// ********** Begin Enum EPCGExFloodFillPrioritization *********************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLPRIORITIZATION(op) \
	op(EPCGExFloodFillPrioritization::Heuristics) \
	op(EPCGExFloodFillPrioritization::Depth) 

enum class EPCGExFloodFillPrioritization : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillPrioritization> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPrioritization>();
// ********** End Enum EPCGExFloodFillPrioritization ***********************************************

// ********** Begin Enum EPCGExFloodFillControlStepsFlags ******************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLCONTROLSTEPSFLAGS(op) \
	op(EPCGExFloodFillControlStepsFlags::None) \
	op(EPCGExFloodFillControlStepsFlags::Capture) \
	op(EPCGExFloodFillControlStepsFlags::Probing) \
	op(EPCGExFloodFillControlStepsFlags::Candidate) 

enum class EPCGExFloodFillControlStepsFlags : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillControlStepsFlags> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillControlStepsFlags>();
// ********** End Enum EPCGExFloodFillControlStepsFlags ********************************************

// ********** Begin Enum EPCGExFloodFillHeuristicFlags *********************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLHEURISTICFLAGS(op) \
	op(EPCGExFloodFillHeuristicFlags::None) \
	op(EPCGExFloodFillHeuristicFlags::LocalScore) \
	op(EPCGExFloodFillHeuristicFlags::GlobalScore) \
	op(EPCGExFloodFillHeuristicFlags::PreviousScore) 

enum class EPCGExFloodFillHeuristicFlags : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillHeuristicFlags> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillHeuristicFlags>();
// ********** End Enum EPCGExFloodFillHeuristicFlags ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
