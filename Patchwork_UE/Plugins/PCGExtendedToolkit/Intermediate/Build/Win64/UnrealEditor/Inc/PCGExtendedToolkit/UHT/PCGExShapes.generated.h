// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shapes/PCGExShapes.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExShapes_generated_h
#error "PCGExShapes.generated.h already included, missing '#pragma once' in PCGExShapes.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExShapes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExShapeConfigBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExShapeConfigBase;
// ********** End ScriptStruct FPCGExShapeConfigBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h

// ********** Begin Enum EPCGExShapeOutputMode *****************************************************
#define FOREACH_ENUM_EPCGEXSHAPEOUTPUTMODE(op) \
	op(EPCGExShapeOutputMode::PerDataset) \
	op(EPCGExShapeOutputMode::PerSeed) \
	op(EPCGExShapeOutputMode::PerShape) 

enum class EPCGExShapeOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExShapeOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapeOutputMode>();
// ********** End Enum EPCGExShapeOutputMode *******************************************************

// ********** Begin Enum EPCGExShapeResolutionMode *************************************************
#define FOREACH_ENUM_EPCGEXSHAPERESOLUTIONMODE(op) \
	op(EPCGExShapeResolutionMode::Absolute) \
	op(EPCGExShapeResolutionMode::Scaled) 

enum class EPCGExShapeResolutionMode : uint8;
template<> struct TIsUEnumClass<EPCGExShapeResolutionMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapeResolutionMode>();
// ********** End Enum EPCGExShapeResolutionMode ***************************************************

// ********** Begin Enum EPCGExShapePointLookAt ****************************************************
#define FOREACH_ENUM_EPCGEXSHAPEPOINTLOOKAT(op) \
	op(EPCGExShapePointLookAt::None) \
	op(EPCGExShapePointLookAt::Seed) 

enum class EPCGExShapePointLookAt : uint8;
template<> struct TIsUEnumClass<EPCGExShapePointLookAt> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapePointLookAt>();
// ********** End Enum EPCGExShapePointLookAt ******************************************************

// ********** Begin Enum EPCGExResolutionMode ******************************************************
#define FOREACH_ENUM_EPCGEXRESOLUTIONMODE(op) \
	op(EPCGExResolutionMode::Distance) \
	op(EPCGExResolutionMode::Fixed) 

enum class EPCGExResolutionMode : uint8;
template<> struct TIsUEnumClass<EPCGExResolutionMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExResolutionMode>();
// ********** End Enum EPCGExResolutionMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
