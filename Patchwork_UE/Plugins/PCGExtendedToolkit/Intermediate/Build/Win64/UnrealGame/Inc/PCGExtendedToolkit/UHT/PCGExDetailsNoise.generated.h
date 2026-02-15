// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsNoise.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsNoise_generated_h
#error "PCGExDetailsNoise.generated.h already included, missing '#pragma once' in PCGExDetailsNoise.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsNoise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExRandomRatioDetails ******************************************
struct Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExRandomRatioDetails;
// ********** End ScriptStruct FPCGExRandomRatioDetails ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h

// ********** Begin Enum PCGExSpatialNoiseMode *****************************************************
#define FOREACH_ENUM_PCGEXSPATIALNOISEMODE(op) \
	op(PCGExSpatialNoiseMode::Perlin) \
	op(PCGExSpatialNoiseMode::Caustic) \
	op(PCGExSpatialNoiseMode::Voronoi) \
	op(PCGExSpatialNoiseMode::FractionalBrownian) \
	op(PCGExSpatialNoiseMode::EdgeMask) 

enum class PCGExSpatialNoiseMode : uint8;
template<> struct TIsUEnumClass<PCGExSpatialNoiseMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGExSpatialNoiseMode>();
// ********** End Enum PCGExSpatialNoiseMode *******************************************************

// ********** Begin Enum PCGExSpatialNoiseMask2DMode ***********************************************
#define FOREACH_ENUM_PCGEXSPATIALNOISEMASK2DMODE(op) \
	op(PCGExSpatialNoiseMask2DMode::Perlin) \
	op(PCGExSpatialNoiseMask2DMode::Caustic) \
	op(PCGExSpatialNoiseMask2DMode::FractionalBrownian) 

enum class PCGExSpatialNoiseMask2DMode : uint8;
template<> struct TIsUEnumClass<PCGExSpatialNoiseMask2DMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGExSpatialNoiseMask2DMode>();
// ********** End Enum PCGExSpatialNoiseMask2DMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
