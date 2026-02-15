// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Topology/PCGExTopology.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTopology_generated_h
#error "PCGExTopology.generated.h already included, missing '#pragma once' in PCGExTopology.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTopology_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExCellConstraintsDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCellConstraintsDetails;
// ********** End ScriptStruct FPCGExCellConstraintsDetails ****************************************

// ********** Begin ScriptStruct FPCGExCellSeedMutationDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h_227_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCellSeedMutationDetails;
// ********** End ScriptStruct FPCGExCellSeedMutationDetails ***************************************

// ********** Begin ScriptStruct FPCGExTopologyDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h_279_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExTopologyDetails;
// ********** End ScriptStruct FPCGExTopologyDetails ***********************************************

// ********** Begin ScriptStruct FPCGExCellArtifactsDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h_549_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCellArtifactsDetails;
// ********** End ScriptStruct FPCGExCellArtifactsDetails ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h

// ********** Begin Enum EPCGExTopologyOutputType **************************************************
#define FOREACH_ENUM_EPCGEXTOPOLOGYOUTPUTTYPE(op) \
	op(EPCGExTopologyOutputType::PerItem) \
	op(EPCGExTopologyOutputType::Merged) 

enum class EPCGExTopologyOutputType : uint8;
template<> struct TIsUEnumClass<EPCGExTopologyOutputType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTopologyOutputType>();
// ********** End Enum EPCGExTopologyOutputType ****************************************************

// ********** Begin Enum EPCGExCellOutputOrientation ***********************************************
#define FOREACH_ENUM_EPCGEXCELLOUTPUTORIENTATION(op) \
	op(EPCGExCellOutputOrientation::CCW) \
	op(EPCGExCellOutputOrientation::CW) 

enum class EPCGExCellOutputOrientation : uint8;
template<> struct TIsUEnumClass<EPCGExCellOutputOrientation> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellOutputOrientation>();
// ********** End Enum EPCGExCellOutputOrientation *************************************************

// ********** Begin Enum EPCGExCellShapeTypeOutput *************************************************
#define FOREACH_ENUM_EPCGEXCELLSHAPETYPEOUTPUT(op) \
	op(EPCGExCellShapeTypeOutput::Both) \
	op(EPCGExCellShapeTypeOutput::ConvexOnly) \
	op(EPCGExCellShapeTypeOutput::ConcaveOnly) 

enum class EPCGExCellShapeTypeOutput : uint8;
template<> struct TIsUEnumClass<EPCGExCellShapeTypeOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellShapeTypeOutput>();
// ********** End Enum EPCGExCellShapeTypeOutput ***************************************************

// ********** Begin Enum EPCGExCellSeedLocation ****************************************************
#define FOREACH_ENUM_EPCGEXCELLSEEDLOCATION(op) \
	op(EPCGExCellSeedLocation::Original) \
	op(EPCGExCellSeedLocation::Centroid) \
	op(EPCGExCellSeedLocation::PathBoundsCenter) \
	op(EPCGExCellSeedLocation::FirstNode) \
	op(EPCGExCellSeedLocation::LastNode) 

enum class EPCGExCellSeedLocation : uint8;
template<> struct TIsUEnumClass<EPCGExCellSeedLocation> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellSeedLocation>();
// ********** End Enum EPCGExCellSeedLocation ******************************************************

// ********** Begin Enum EPCGExCellSeedBounds ******************************************************
#define FOREACH_ENUM_EPCGEXCELLSEEDBOUNDS(op) \
	op(EPCGExCellSeedBounds::Original) \
	op(EPCGExCellSeedBounds::MatchCell) \
	op(EPCGExCellSeedBounds::MatchPathResetQuat) 

enum class EPCGExCellSeedBounds : uint8;
template<> struct TIsUEnumClass<EPCGExCellSeedBounds> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellSeedBounds>();
// ********** End Enum EPCGExCellSeedBounds ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
