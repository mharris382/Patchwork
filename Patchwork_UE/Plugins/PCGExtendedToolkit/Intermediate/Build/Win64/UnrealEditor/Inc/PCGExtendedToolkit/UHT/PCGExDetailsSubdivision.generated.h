// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsSubdivision.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsSubdivision_generated_h
#error "PCGExDetailsSubdivision.generated.h already included, missing '#pragma once' in PCGExDetailsSubdivision.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsSubdivision_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExManhattanDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExManhattanDetails;
// ********** End ScriptStruct FPCGExManhattanDetails **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h

// ********** Begin Enum EPCGExSubdivideMode *******************************************************
#define FOREACH_ENUM_EPCGEXSUBDIVIDEMODE(op) \
	op(EPCGExSubdivideMode::Distance) \
	op(EPCGExSubdivideMode::Count) \
	op(EPCGExSubdivideMode::Manhattan) 

enum class EPCGExSubdivideMode : uint8;
template<> struct TIsUEnumClass<EPCGExSubdivideMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubdivideMode>();
// ********** End Enum EPCGExSubdivideMode *********************************************************

// ********** Begin Enum EPCGExManhattanMethod *****************************************************
#define FOREACH_ENUM_EPCGEXMANHATTANMETHOD(op) \
	op(EPCGExManhattanMethod::Simple) \
	op(EPCGExManhattanMethod::GridDistance) \
	op(EPCGExManhattanMethod::GridCount) 

enum class EPCGExManhattanMethod : uint8;
template<> struct TIsUEnumClass<EPCGExManhattanMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExManhattanMethod>();
// ********** End Enum EPCGExManhattanMethod *******************************************************

// ********** Begin Enum EPCGExManhattanAlign ******************************************************
#define FOREACH_ENUM_EPCGEXMANHATTANALIGN(op) \
	op(EPCGExManhattanAlign::World) \
	op(EPCGExManhattanAlign::Custom) \
	op(EPCGExManhattanAlign::SegmentX) \
	op(EPCGExManhattanAlign::SegmentY) \
	op(EPCGExManhattanAlign::SegmentZ) 

enum class EPCGExManhattanAlign : uint8;
template<> struct TIsUEnumClass<EPCGExManhattanAlign> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExManhattanAlign>();
// ********** End Enum EPCGExManhattanAlign ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
