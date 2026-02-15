// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Geometry/PCGExGeoMesh.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGeoMesh_generated_h
#error "PCGExGeoMesh.generated.h already included, missing '#pragma once' in PCGExGeoMesh.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGeoMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExGeoMeshImportDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExGeoMeshImportDetails;
// ********** End ScriptStruct FPCGExGeoMeshImportDetails ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h

// ********** Begin Enum EPCGExTriangulationType ***************************************************
#define FOREACH_ENUM_EPCGEXTRIANGULATIONTYPE(op) \
	op(EPCGExTriangulationType::Raw) \
	op(EPCGExTriangulationType::Dual) \
	op(EPCGExTriangulationType::Hollow) \
	op(EPCGExTriangulationType::Boundaries) \
	op(EPCGExTriangulationType::NoTriangulation) 

enum class EPCGExTriangulationType : uint8;
template<> struct TIsUEnumClass<EPCGExTriangulationType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTriangulationType>();
// ********** End Enum EPCGExTriangulationType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
