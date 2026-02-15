// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExTopology.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "Data/PCGExDataFilter.h"
#include "GeometryScript/MeshNormalsFunctions.h"
#include "GeometryScript/MeshPrimitiveFunctions.h"
#include "GeometryScript/MeshRepairFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTopology() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTopologyDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTopologyOutputType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTopologyOutputType;
static UEnum* EPCGExTopologyOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTopologyOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTopologyOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTopologyOutputType"));
	}
	return Z_Registration_Info_UEnum_EPCGExTopologyOutputType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTopologyOutputType>()
{
	return EPCGExTopologyOutputType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Merged.DisplayName", "Merged Geometry" },
		{ "Merged.Name", "EPCGExTopologyOutputType::Merged" },
		{ "Merged.Tooltip", "Output a single geometry that merges all generated topologies" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PerItem.DisplayName", "Per-item Geometry" },
		{ "PerItem.Name", "EPCGExTopologyOutputType::PerItem" },
		{ "PerItem.Tooltip", "Output a geometry object per-item" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTopologyOutputType::PerItem", (int64)EPCGExTopologyOutputType::PerItem },
		{ "EPCGExTopologyOutputType::Merged", (int64)EPCGExTopologyOutputType::Merged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTopologyOutputType",
	"EPCGExTopologyOutputType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType()
{
	if (!Z_Registration_Info_UEnum_EPCGExTopologyOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTopologyOutputType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTopologyOutputType.InnerSingleton;
}
// ********** End Enum EPCGExTopologyOutputType ****************************************************

// ********** Begin Enum EPCGExCellOutputOrientation ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCellOutputOrientation;
static UEnum* EPCGExCellOutputOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCellOutputOrientation"));
	}
	return Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellOutputOrientation>()
{
	return EPCGExCellOutputOrientation_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CCW.DisplayName", "Clockwise" },
		{ "CCW.Name", "EPCGExCellOutputOrientation::CCW" },
		{ "CCW.Tooltip", "..." },
		{ "CW.DisplayName", "Counter Clockwise" },
		{ "CW.Name", "EPCGExCellOutputOrientation::CW" },
		{ "CW.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCellOutputOrientation::CCW", (int64)EPCGExCellOutputOrientation::CCW },
		{ "EPCGExCellOutputOrientation::CW", (int64)EPCGExCellOutputOrientation::CW },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCellOutputOrientation",
	"EPCGExCellOutputOrientation",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellOutputOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCellOutputOrientation.InnerSingleton;
}
// ********** End Enum EPCGExCellOutputOrientation *************************************************

// ********** Begin Enum EPCGExCellShapeTypeOutput *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput;
static UEnum* EPCGExCellShapeTypeOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCellShapeTypeOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellShapeTypeOutput>()
{
	return EPCGExCellShapeTypeOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Both.DisplayName", "Convex & Concave" },
		{ "Both.Name", "EPCGExCellShapeTypeOutput::Both" },
		{ "Both.ToolTip", "Output both convex and concave cells" },
		{ "ConcaveOnly.DisplayName", "Concave Only" },
		{ "ConcaveOnly.Name", "EPCGExCellShapeTypeOutput::ConcaveOnly" },
		{ "ConcaveOnly.ToolTip", "Output only concave cells" },
		{ "ConvexOnly.DisplayName", "Convex Only" },
		{ "ConvexOnly.Name", "EPCGExCellShapeTypeOutput::ConvexOnly" },
		{ "ConvexOnly.ToolTip", "Output only convex cells" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCellShapeTypeOutput::Both", (int64)EPCGExCellShapeTypeOutput::Both },
		{ "EPCGExCellShapeTypeOutput::ConvexOnly", (int64)EPCGExCellShapeTypeOutput::ConvexOnly },
		{ "EPCGExCellShapeTypeOutput::ConcaveOnly", (int64)EPCGExCellShapeTypeOutput::ConcaveOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCellShapeTypeOutput",
	"EPCGExCellShapeTypeOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput.InnerSingleton;
}
// ********** End Enum EPCGExCellShapeTypeOutput ***************************************************

// ********** Begin Enum EPCGExCellSeedLocation ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCellSeedLocation;
static UEnum* EPCGExCellSeedLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellSeedLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCellSeedLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCellSeedLocation"));
	}
	return Z_Registration_Info_UEnum_EPCGExCellSeedLocation.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellSeedLocation>()
{
	return EPCGExCellSeedLocation_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Centroid.DisplayName", "Centroid" },
		{ "Centroid.Name", "EPCGExCellSeedLocation::Centroid" },
		{ "Centroid.ToolTip", "Place the seed at the centroid of the path" },
		{ "FirstNode.DisplayName", "First Node" },
		{ "FirstNode.Name", "EPCGExCellSeedLocation::FirstNode" },
		{ "FirstNode.ToolTip", "Place the seed on the position of the node that started the cell." },
		{ "LastNode.DisplayName", "Last Node" },
		{ "LastNode.Name", "EPCGExCellSeedLocation::LastNode" },
		{ "LastNode.ToolTip", "Place the seed on the position of the node that ends the cell." },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "Original.DisplayName", "Original" },
		{ "Original.Name", "EPCGExCellSeedLocation::Original" },
		{ "Original.ToolTip", "Seed position is unchanged" },
		{ "PathBoundsCenter.DisplayName", "Path bounds center" },
		{ "PathBoundsCenter.Name", "EPCGExCellSeedLocation::PathBoundsCenter" },
		{ "PathBoundsCenter.ToolTip", "Place the seed at the center of the path' bounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCellSeedLocation::Original", (int64)EPCGExCellSeedLocation::Original },
		{ "EPCGExCellSeedLocation::Centroid", (int64)EPCGExCellSeedLocation::Centroid },
		{ "EPCGExCellSeedLocation::PathBoundsCenter", (int64)EPCGExCellSeedLocation::PathBoundsCenter },
		{ "EPCGExCellSeedLocation::FirstNode", (int64)EPCGExCellSeedLocation::FirstNode },
		{ "EPCGExCellSeedLocation::LastNode", (int64)EPCGExCellSeedLocation::LastNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCellSeedLocation",
	"EPCGExCellSeedLocation",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellSeedLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCellSeedLocation.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCellSeedLocation.InnerSingleton;
}
// ********** End Enum EPCGExCellSeedLocation ******************************************************

// ********** Begin Enum EPCGExCellSeedBounds ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCellSeedBounds;
static UEnum* EPCGExCellSeedBounds_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellSeedBounds.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCellSeedBounds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCellSeedBounds"));
	}
	return Z_Registration_Info_UEnum_EPCGExCellSeedBounds.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellSeedBounds>()
{
	return EPCGExCellSeedBounds_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MatchCell.DisplayName", "Match Cell" },
		{ "MatchCell.Name", "EPCGExCellSeedBounds::MatchCell" },
		{ "MatchCell.ToolTip", "Seed bounds match cell bounds" },
		{ "MatchPathResetQuat.DisplayName", "Match Cell (with rotation reset)" },
		{ "MatchPathResetQuat.Name", "EPCGExCellSeedBounds::MatchPathResetQuat" },
		{ "MatchPathResetQuat.ToolTip", "Seed bounds match cell bounds, and rotation is reset" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "Original.DisplayName", "Original" },
		{ "Original.Name", "EPCGExCellSeedBounds::Original" },
		{ "Original.ToolTip", "Seed bounds is unchanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCellSeedBounds::Original", (int64)EPCGExCellSeedBounds::Original },
		{ "EPCGExCellSeedBounds::MatchCell", (int64)EPCGExCellSeedBounds::MatchCell },
		{ "EPCGExCellSeedBounds::MatchPathResetQuat", (int64)EPCGExCellSeedBounds::MatchPathResetQuat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCellSeedBounds",
	"EPCGExCellSeedBounds",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellSeedBounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCellSeedBounds.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedBounds_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCellSeedBounds.InnerSingleton;
}
// ********** End Enum EPCGExCellSeedBounds ********************************************************

// ********** Begin ScriptStruct FPCGExCellConstraintsDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCellConstraintsDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCellConstraintsDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedForPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputWinding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bUsedForPaths" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepCellsWithLeaves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to keep cells that include dead ends wrapping */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to keep cells that include dead ends wrapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDuplicateLeafPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to duplicate dead end points */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Duplicate Leaf points" },
		{ "EditCondition", "bKeepCellsWithLeaves && bUsedForPaths" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to duplicate dead end points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitWrappingBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrapperClassificationTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells with areas that closely match the computed wrapper. 0 to disable. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Classification Tolerance" },
		{ "EditCondition", "bOmitWrappingBounds" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells with areas that closely match the computed wrapper. 0 to disable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepWrapperIfSolePath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Keep if Sole" },
		{ "EditCondition", "bOmitWrappingBounds" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowBoundsSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBoundsSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose bounds size.length is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Bounds Size" },
		{ "EditCondition", "bOmitBelowBoundsSize" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose bounds size.length is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAboveBoundsSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBoundsSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose bounds size.length is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Bounds Size" },
		{ "EditCondition", "bOmitAboveBoundsSize" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose bounds size.length is larger than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose point count is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Point Count" },
		{ "EditCondition", "bOmitBelowPointCount" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose point count is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAbovePointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose point count is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Point Count" },
		{ "EditCondition", "bOmitAbovePointCount" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose point count is larger than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose area is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Area" },
		{ "EditCondition", "bOmitBelowArea" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose area is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAboveArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose area is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Area" },
		{ "EditCondition", "bOmitAboveArea" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose area is larger than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowPerimeter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPerimeter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose perimeter is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Perimeter" },
		{ "EditCondition", "bOmitBelowPerimeter" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose perimeter is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAbovePerimeter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerimeter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells whose perimeter is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Perimeter" },
		{ "EditCondition", "bOmitAbovePerimeter" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells whose perimeter is larger than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowSegmentLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSegmentLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells that contains any segment which length is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Segment Length" },
		{ "EditCondition", "bOmitBelowSegmentLength" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells that contains any segment which length is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAboveSegmentLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSegmentLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells that contains any segment which length is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Segment Length" },
		{ "EditCondition", "bOmitAboveSegmentLength" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells that contains any segment which length is larger than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitBelowCompactness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCompactness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells that contains any segment which length is smaller than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Compactness" },
		{ "EditCondition", "bOmitBelowCompactness" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells that contains any segment which length is smaller than the specified amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAboveCompactness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCompactness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Omit cells that contains any segment which length is larger than the specified amount */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Compactness" },
		{ "EditCondition", "bOmitAboveCompactness" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Omit cells that contains any segment which length is larger than the specified amount" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCellConstraintsDetails constinit property declarations ******
	static void NewProp_bUsedForPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedForPaths;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputWinding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputWinding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AspectFilter;
	static void NewProp_bKeepCellsWithLeaves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepCellsWithLeaves;
	static void NewProp_bDuplicateLeafPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDuplicateLeafPoints;
	static void NewProp_bOmitWrappingBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitWrappingBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WrapperClassificationTolerance;
	static void NewProp_bKeepWrapperIfSolePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepWrapperIfSolePath;
	static void NewProp_bOmitBelowBoundsSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowBoundsSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinBoundsSize;
	static void NewProp_bOmitAboveBoundsSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAboveBoundsSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxBoundsSize;
	static void NewProp_bOmitBelowPointCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowPointCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bOmitAbovePointCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAbovePointCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static void NewProp_bOmitBelowArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowArea;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinArea;
	static void NewProp_bOmitAboveArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAboveArea;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxArea;
	static void NewProp_bOmitBelowPerimeter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowPerimeter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinPerimeter;
	static void NewProp_bOmitAbovePerimeter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAbovePerimeter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxPerimeter;
	static void NewProp_bOmitBelowSegmentLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowSegmentLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSegmentLength;
	static void NewProp_bOmitAboveSegmentLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAboveSegmentLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSegmentLength;
	static void NewProp_bOmitBelowCompactness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitBelowCompactness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinCompactness;
	static void NewProp_bOmitAboveCompactness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAboveCompactness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxCompactness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCellConstraintsDetails constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCellConstraintsDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails;
class UScriptStruct* FPCGExCellConstraintsDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCellConstraintsDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCellConstraintsDetails Property Definitions *****************
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bUsedForPaths_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bUsedForPaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bUsedForPaths = { "bUsedForPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bUsedForPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedForPaths_MetaData), NewProp_bUsedForPaths_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_OutputWinding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_OutputWinding = { "OutputWinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, OutputWinding), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputWinding_MetaData), NewProp_OutputWinding_MetaData) }; // 57580146
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_AspectFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_AspectFilter = { "AspectFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, AspectFilter), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectFilter_MetaData), NewProp_AspectFilter_MetaData) }; // 2127529398
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepCellsWithLeaves_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bKeepCellsWithLeaves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepCellsWithLeaves = { "bKeepCellsWithLeaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepCellsWithLeaves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepCellsWithLeaves_MetaData), NewProp_bKeepCellsWithLeaves_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bDuplicateLeafPoints_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bDuplicateLeafPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bDuplicateLeafPoints = { "bDuplicateLeafPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bDuplicateLeafPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDuplicateLeafPoints_MetaData), NewProp_bDuplicateLeafPoints_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitWrappingBounds_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitWrappingBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitWrappingBounds = { "bOmitWrappingBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitWrappingBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitWrappingBounds_MetaData), NewProp_bOmitWrappingBounds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_WrapperClassificationTolerance = { "WrapperClassificationTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, WrapperClassificationTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrapperClassificationTolerance_MetaData), NewProp_WrapperClassificationTolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepWrapperIfSolePath_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bKeepWrapperIfSolePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepWrapperIfSolePath = { "bKeepWrapperIfSolePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepWrapperIfSolePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepWrapperIfSolePath_MetaData), NewProp_bKeepWrapperIfSolePath_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowBoundsSize_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowBoundsSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowBoundsSize = { "bOmitBelowBoundsSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowBoundsSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowBoundsSize_MetaData), NewProp_bOmitBelowBoundsSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinBoundsSize = { "MinBoundsSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinBoundsSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBoundsSize_MetaData), NewProp_MinBoundsSize_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveBoundsSize_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAboveBoundsSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveBoundsSize = { "bOmitAboveBoundsSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveBoundsSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAboveBoundsSize_MetaData), NewProp_bOmitAboveBoundsSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxBoundsSize = { "MaxBoundsSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxBoundsSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBoundsSize_MetaData), NewProp_MaxBoundsSize_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPointCount_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowPointCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPointCount = { "bOmitBelowPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPointCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowPointCount_MetaData), NewProp_bOmitBelowPointCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePointCount_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAbovePointCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePointCount = { "bOmitAbovePointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePointCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAbovePointCount_MetaData), NewProp_bOmitAbovePointCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowArea_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowArea = { "bOmitBelowArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowArea_MetaData), NewProp_bOmitBelowArea_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinArea = { "MinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinArea_MetaData), NewProp_MinArea_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveArea_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAboveArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveArea = { "bOmitAboveArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAboveArea_MetaData), NewProp_bOmitAboveArea_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxArea = { "MaxArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArea_MetaData), NewProp_MaxArea_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPerimeter_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowPerimeter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPerimeter = { "bOmitBelowPerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPerimeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowPerimeter_MetaData), NewProp_bOmitBelowPerimeter_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinPerimeter = { "MinPerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinPerimeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPerimeter_MetaData), NewProp_MinPerimeter_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePerimeter_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAbovePerimeter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePerimeter = { "bOmitAbovePerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePerimeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAbovePerimeter_MetaData), NewProp_bOmitAbovePerimeter_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxPerimeter = { "MaxPerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxPerimeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPerimeter_MetaData), NewProp_MaxPerimeter_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowSegmentLength_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowSegmentLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowSegmentLength = { "bOmitBelowSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowSegmentLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowSegmentLength_MetaData), NewProp_bOmitBelowSegmentLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinSegmentLength = { "MinSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSegmentLength_MetaData), NewProp_MinSegmentLength_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveSegmentLength_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAboveSegmentLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveSegmentLength = { "bOmitAboveSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveSegmentLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAboveSegmentLength_MetaData), NewProp_bOmitAboveSegmentLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxSegmentLength = { "MaxSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSegmentLength_MetaData), NewProp_MaxSegmentLength_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowCompactness_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitBelowCompactness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowCompactness = { "bOmitBelowCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowCompactness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitBelowCompactness_MetaData), NewProp_bOmitBelowCompactness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinCompactness = { "MinCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MinCompactness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCompactness_MetaData), NewProp_MinCompactness_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveCompactness_SetBit(void* Obj)
{
	((FPCGExCellConstraintsDetails*)Obj)->bOmitAboveCompactness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveCompactness = { "bOmitAboveCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellConstraintsDetails), &Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveCompactness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAboveCompactness_MetaData), NewProp_bOmitAboveCompactness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxCompactness = { "MaxCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellConstraintsDetails, MaxCompactness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCompactness_MetaData), NewProp_MaxCompactness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bUsedForPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_OutputWinding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_OutputWinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_AspectFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_AspectFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepCellsWithLeaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bDuplicateLeafPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitWrappingBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_WrapperClassificationTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bKeepWrapperIfSolePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowBoundsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinBoundsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveBoundsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxBoundsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowPerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinPerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAbovePerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxPerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitBelowCompactness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MinCompactness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_bOmitAboveCompactness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewProp_MaxCompactness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCellConstraintsDetails Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCellConstraintsDetails",
	Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::PropPointers),
	sizeof(FPCGExCellConstraintsDetails),
	alignof(FPCGExCellConstraintsDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCellConstraintsDetails ****************************************

// ********** Begin ScriptStruct FPCGExCellSeedMutationDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCellSeedMutationDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCellSeedMutationDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedForPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Change the good seed position */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Change the good seed position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchCellBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompactnessTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCellSeedMutationDetails constinit property declarations *****
	static void NewProp_bUsedForPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedForPaths;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AspectFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static void NewProp_bMatchCellBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchCellBounds;
	static void NewProp_bResetScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetScale;
	static void NewProp_bResetRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AreaTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AreaTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PerimeterTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PerimeterTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompactnessTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompactnessTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCellSeedMutationDetails constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCellSeedMutationDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails;
class UScriptStruct* FPCGExCellSeedMutationDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCellSeedMutationDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCellSeedMutationDetails Property Definitions ****************
void Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bUsedForPaths_SetBit(void* Obj)
{
	((FPCGExCellSeedMutationDetails*)Obj)->bUsedForPaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bUsedForPaths = { "bUsedForPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellSeedMutationDetails), &Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bUsedForPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedForPaths_MetaData), NewProp_bUsedForPaths_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AspectFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AspectFilter = { "AspectFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellSeedMutationDetails, AspectFilter), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellShapeTypeOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectFilter_MetaData), NewProp_AspectFilter_MetaData) }; // 2127529398
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellSeedMutationDetails, Location), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellSeedLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1653594797
void Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bMatchCellBounds_SetBit(void* Obj)
{
	((FPCGExCellSeedMutationDetails*)Obj)->bMatchCellBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bMatchCellBounds = { "bMatchCellBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellSeedMutationDetails), &Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bMatchCellBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchCellBounds_MetaData), NewProp_bMatchCellBounds_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetScale_SetBit(void* Obj)
{
	((FPCGExCellSeedMutationDetails*)Obj)->bResetScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetScale = { "bResetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellSeedMutationDetails), &Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetScale_MetaData), NewProp_bResetScale_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetRotation_SetBit(void* Obj)
{
	((FPCGExCellSeedMutationDetails*)Obj)->bResetRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetRotation = { "bResetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellSeedMutationDetails), &Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetRotation_MetaData), NewProp_bResetRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AreaTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AreaTo = { "AreaTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellSeedMutationDetails, AreaTo), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaTo_MetaData), NewProp_AreaTo_MetaData) }; // 4165579650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_PerimeterTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_PerimeterTo = { "PerimeterTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellSeedMutationDetails, PerimeterTo), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterTo_MetaData), NewProp_PerimeterTo_MetaData) }; // 4165579650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_CompactnessTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_CompactnessTo = { "CompactnessTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellSeedMutationDetails, CompactnessTo), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompactnessTo_MetaData), NewProp_CompactnessTo_MetaData) }; // 4165579650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bUsedForPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AspectFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AspectFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bMatchCellBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_bResetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AreaTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_AreaTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_PerimeterTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_PerimeterTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_CompactnessTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewProp_CompactnessTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCellSeedMutationDetails Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCellSeedMutationDetails",
	Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::PropPointers),
	sizeof(FPCGExCellSeedMutationDetails),
	alignof(FPCGExCellSeedMutationDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCellSeedMutationDetails ***************************************

// ********** Begin ScriptStruct FPCGExTopologyDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTopologyDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTopologyDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVertexColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveOptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangulationOptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTriangulationError_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeldEdges_MetaData[] = {
		{ "Category", "Settings|Geometry Script" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldEdgesOptions_MetaData[] = {
		{ "Category", "Settings|Geometry Script" },
		{ "EditCondition", "bWeldEdges" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeNormals_MetaData[] = {
		{ "Category", "Settings|Geometry Script" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalsOptions_MetaData[] = {
		{ "Category", "Settings|Geometry Script" },
		{ "EditCondition", "bComputeNormals" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTopologyDetails constinit property declarations *************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultVertexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangulationOptions;
	static void NewProp_bQuietTriangulationError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTriangulationError;
	static void NewProp_bWeldEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeldEdgesOptions;
	static void NewProp_bComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalsOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateDescriptor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTopologyDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTopologyDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails;
class UScriptStruct* FPCGExTopologyDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTopologyDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTopologyDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTopologyDetails Property Definitions ************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_DefaultVertexColor = { "DefaultVertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, DefaultVertexColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVertexColor_MetaData), NewProp_DefaultVertexColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveOptions_MetaData), NewProp_PrimitiveOptions_MetaData) }; // 1684291829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_TriangulationOptions = { "TriangulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, TriangulationOptions), Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangulationOptions_MetaData), NewProp_TriangulationOptions_MetaData) }; // 1351023731
void Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bQuietTriangulationError_SetBit(void* Obj)
{
	((FPCGExTopologyDetails*)Obj)->bQuietTriangulationError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bQuietTriangulationError = { "bQuietTriangulationError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTopologyDetails), &Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bQuietTriangulationError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTriangulationError_MetaData), NewProp_bQuietTriangulationError_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bWeldEdges_SetBit(void* Obj)
{
	((FPCGExTopologyDetails*)Obj)->bWeldEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bWeldEdges = { "bWeldEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTopologyDetails), &Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bWeldEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeldEdges_MetaData), NewProp_bWeldEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_WeldEdgesOptions = { "WeldEdgesOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, WeldEdgesOptions), Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldEdgesOptions_MetaData), NewProp_WeldEdgesOptions_MetaData) }; // 2065969778
void Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
{
	((FPCGExTopologyDetails*)Obj)->bComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTopologyDetails), &Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeNormals_MetaData), NewProp_bComputeNormals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_NormalsOptions = { "NormalsOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, NormalsOptions), Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalsOptions_MetaData), NewProp_NormalsOptions_MetaData) }; // 2349644171
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_TemplateDescriptor = { "TemplateDescriptor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTopologyDetails, TemplateDescriptor), Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateDescriptor_MetaData), NewProp_TemplateDescriptor_MetaData) }; // 2595669215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_DefaultVertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_PrimitiveOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_TriangulationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bQuietTriangulationError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bWeldEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_WeldEdgesOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_bComputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_NormalsOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewProp_TemplateDescriptor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTopologyDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTopologyDetails",
	Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::PropPointers),
	sizeof(FPCGExTopologyDetails),
	alignof(FPCGExTopologyDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTopologyDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTopologyDetails ***********************************************

// ********** Begin ScriptStruct FPCGExCellArtifactsDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCellArtifactsDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCellArtifactsDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCellHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHashAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write cell unique hash as a @Data attribute */" },
		{ "DisplayName", "Cell Hash" },
		{ "EditCondition", "bWriteCellHash" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write cell unique hash as a @Data attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write cell area as a @Data attribute */" },
		{ "DisplayName", "Cell Area" },
		{ "EditCondition", "bWriteArea" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write cell area as a @Data attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCompactness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompactnessAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write cell compactness as a @Data attribute */" },
		{ "DisplayName", "Cell Compactness" },
		{ "EditCondition", "bWriteCompactness" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write cell compactness as a @Data attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteVtxId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxIdAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the vtx index of its point to. This is useful if you want to find contours, mutate the cluster it comes from and remap the updated cluster positions onto the original cell. */" },
		{ "DisplayName", "Vtx ID" },
		{ "EditCondition", "bWriteVtxId" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the vtx index of its point to. This is useful if you want to find contours, mutate the cluster it comes from and remap the updated cluster positions onto the original cell." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagTerminalPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalFlagAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flag terminal points */" },
		{ "DisplayName", "Flag Terminal" },
		{ "EditCondition", "bFlagTerminalPoint" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Flag terminal points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumRepeat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRepeatAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Number of time a point is repeated in the cell */" },
		{ "DisplayName", "Repeat" },
		{ "EditCondition", "bWriteNumRepeat" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Number of time a point is repeated in the cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagConcave_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcaveTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "EditCondition", "bTagConcave" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagConvex_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "EditCondition", "bTagConvex" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Tags to be forwarded from clusters */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopology.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to be forwarded from clusters" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCellArtifactsDetails constinit property declarations ********
	static void NewProp_bWriteCellHash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCellHash;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CellHashAttributeName;
	static void NewProp_bWriteArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteArea;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AreaAttributeName;
	static void NewProp_bWriteCompactness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCompactness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompactnessAttributeName;
	static void NewProp_bWriteVtxId_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteVtxId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxIdAttributeName;
	static void NewProp_bFlagTerminalPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagTerminalPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TerminalFlagAttributeName;
	static void NewProp_bWriteNumRepeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumRepeat;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumRepeatAttributeName;
	static void NewProp_bTagConcave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagConcave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConcaveTag;
	static void NewProp_bTagConvex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagConvex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConvexTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCellArtifactsDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCellArtifactsDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails;
class UScriptStruct* FPCGExCellArtifactsDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCellArtifactsDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCellArtifactsDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCellHash_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bWriteCellHash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCellHash = { "bWriteCellHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCellHash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCellHash_MetaData), NewProp_bWriteCellHash_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_CellHashAttributeName = { "CellHashAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, CellHashAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHashAttributeName_MetaData), NewProp_CellHashAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteArea_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bWriteArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteArea = { "bWriteArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteArea_MetaData), NewProp_bWriteArea_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_AreaAttributeName = { "AreaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, AreaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaAttributeName_MetaData), NewProp_AreaAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCompactness_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bWriteCompactness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCompactness = { "bWriteCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCompactness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCompactness_MetaData), NewProp_bWriteCompactness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_CompactnessAttributeName = { "CompactnessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, CompactnessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompactnessAttributeName_MetaData), NewProp_CompactnessAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteVtxId_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bWriteVtxId = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteVtxId = { "bWriteVtxId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteVtxId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteVtxId_MetaData), NewProp_bWriteVtxId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_VtxIdAttributeName = { "VtxIdAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, VtxIdAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxIdAttributeName_MetaData), NewProp_VtxIdAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bFlagTerminalPoint_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bFlagTerminalPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bFlagTerminalPoint = { "bFlagTerminalPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bFlagTerminalPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagTerminalPoint_MetaData), NewProp_bFlagTerminalPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_TerminalFlagAttributeName = { "TerminalFlagAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, TerminalFlagAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalFlagAttributeName_MetaData), NewProp_TerminalFlagAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteNumRepeat_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bWriteNumRepeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteNumRepeat = { "bWriteNumRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteNumRepeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumRepeat_MetaData), NewProp_bWriteNumRepeat_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_NumRepeatAttributeName = { "NumRepeatAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, NumRepeatAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRepeatAttributeName_MetaData), NewProp_NumRepeatAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConcave_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bTagConcave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConcave = { "bTagConcave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConcave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagConcave_MetaData), NewProp_bTagConcave_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_ConcaveTag = { "ConcaveTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, ConcaveTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcaveTag_MetaData), NewProp_ConcaveTag_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConvex_SetBit(void* Obj)
{
	((FPCGExCellArtifactsDetails*)Obj)->bTagConvex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConvex = { "bTagConvex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCellArtifactsDetails), &Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConvex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagConvex_MetaData), NewProp_bTagConvex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_ConvexTag = { "ConvexTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, ConvexTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexTag_MetaData), NewProp_ConvexTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_TagForwarding = { "TagForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCellArtifactsDetails, TagForwarding), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagForwarding_MetaData), NewProp_TagForwarding_MetaData) }; // 1913362378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCellHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_CellHashAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_AreaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteCompactness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_CompactnessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteVtxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_VtxIdAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bFlagTerminalPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_TerminalFlagAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bWriteNumRepeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_NumRepeatAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConcave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_ConcaveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_bTagConvex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_ConvexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewProp_TagForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCellArtifactsDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCellArtifactsDetails",
	Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::PropPointers),
	sizeof(FPCGExCellArtifactsDetails),
	alignof(FPCGExCellArtifactsDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCellArtifactsDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTopologyOutputType_StaticEnum, TEXT("EPCGExTopologyOutputType"), &Z_Registration_Info_UEnum_EPCGExTopologyOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2304422540U) },
		{ EPCGExCellOutputOrientation_StaticEnum, TEXT("EPCGExCellOutputOrientation"), &Z_Registration_Info_UEnum_EPCGExCellOutputOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3583375016U) },
		{ EPCGExCellShapeTypeOutput_StaticEnum, TEXT("EPCGExCellShapeTypeOutput"), &Z_Registration_Info_UEnum_EPCGExCellShapeTypeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2127529398U) },
		{ EPCGExCellSeedLocation_StaticEnum, TEXT("EPCGExCellSeedLocation"), &Z_Registration_Info_UEnum_EPCGExCellSeedLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1653594797U) },
		{ EPCGExCellSeedBounds_StaticEnum, TEXT("EPCGExCellSeedBounds"), &Z_Registration_Info_UEnum_EPCGExCellSeedBounds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470361746U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExCellConstraintsDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails_Statics::NewStructOps, TEXT("PCGExCellConstraintsDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCellConstraintsDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCellConstraintsDetails), 200512390U) },
		{ FPCGExCellSeedMutationDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails_Statics::NewStructOps, TEXT("PCGExCellSeedMutationDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCellSeedMutationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCellSeedMutationDetails), 2763279262U) },
		{ FPCGExTopologyDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTopologyDetails_Statics::NewStructOps, TEXT("PCGExTopologyDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTopologyDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTopologyDetails), 4263416702U) },
		{ FPCGExCellArtifactsDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails_Statics::NewStructOps, TEXT("PCGExCellArtifactsDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCellArtifactsDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCellArtifactsDetails), 2617001955U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_1692577693{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopology_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
