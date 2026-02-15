// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Geometry/PCGExGeo.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGeo_generated_h
#error "PCGExGeo.generated.h already included, missing '#pragma once' in PCGExGeo.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGeo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExGeo2DProjectionDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h_234_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExGeo2DProjectionDetails;
// ********** End ScriptStruct FPCGExGeo2DProjectionDetails ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h

// ********** Begin Enum EPCGExProjectionMethod ****************************************************
#define FOREACH_ENUM_EPCGEXPROJECTIONMETHOD(op) \
	op(EPCGExProjectionMethod::Normal) \
	op(EPCGExProjectionMethod::BestFit) 

enum class EPCGExProjectionMethod : uint8;
template<> struct TIsUEnumClass<EPCGExProjectionMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExProjectionMethod>();
// ********** End Enum EPCGExProjectionMethod ******************************************************

// ********** Begin Enum EPCGExCellCenter **********************************************************
#define FOREACH_ENUM_EPCGEXCELLCENTER(op) \
	op(EPCGExCellCenter::Balanced) \
	op(EPCGExCellCenter::Circumcenter) \
	op(EPCGExCellCenter::Centroid) 

enum class EPCGExCellCenter : uint8;
template<> struct TIsUEnumClass<EPCGExCellCenter> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellCenter>();
// ********** End Enum EPCGExCellCenter ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
