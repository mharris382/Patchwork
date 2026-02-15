// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geometry/PCGExGeoMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGeoMesh() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTriangulationType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTriangulationType;
static UEnum* EPCGExTriangulationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTriangulationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTriangulationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTriangulationType"));
	}
	return Z_Registration_Info_UEnum_EPCGExTriangulationType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTriangulationType>()
{
	return EPCGExTriangulationType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boundaries.DisplayName", "Boundaries" },
		{ "Boundaries.Name", "EPCGExTriangulationType::Boundaries" },
		{ "Boundaries.ToolTip", "Outputs edges that are on the boundaries of the mesh (open spaces)" },
		{ "Dual.DisplayName", "Dual Graph" },
		{ "Dual.Name", "EPCGExTriangulationType::Dual" },
		{ "Dual.ToolTip", "Dual graph of the triangles (using triangle centroids and adjacency)." },
		{ "Hollow.DisplayName", "Hollow Graph" },
		{ "Hollow.Name", "EPCGExTriangulationType::Hollow" },
		{ "Hollow.ToolTip", "Connects centroid to vertices but remove triangles edges" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
		{ "NoTriangulation.Hidden", "" },
		{ "NoTriangulation.Name", "EPCGExTriangulationType::NoTriangulation" },
		{ "Raw.DisplayName", "Raw Triangles" },
		{ "Raw.Name", "EPCGExTriangulationType::Raw" },
		{ "Raw.ToolTip", "Make a graph from raw triangles." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTriangulationType::Raw", (int64)EPCGExTriangulationType::Raw },
		{ "EPCGExTriangulationType::Dual", (int64)EPCGExTriangulationType::Dual },
		{ "EPCGExTriangulationType::Hollow", (int64)EPCGExTriangulationType::Hollow },
		{ "EPCGExTriangulationType::Boundaries", (int64)EPCGExTriangulationType::Boundaries },
		{ "EPCGExTriangulationType::NoTriangulation", (int64)EPCGExTriangulationType::NoTriangulation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTriangulationType",
	"EPCGExTriangulationType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType()
{
	if (!Z_Registration_Info_UEnum_EPCGExTriangulationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTriangulationType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTriangulationType.InnerSingleton;
}
// ********** End Enum EPCGExTriangulationType *****************************************************

// ********** Begin ScriptStruct FPCGExGeoMeshImportDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExGeoMeshImportDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExGeoMeshImportDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportVertexColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportUVs_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannels_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of mapping channel in the format [Output Attribute Name]::[Channel Index]. You can output the same UV channel to different attributes. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 UV Channels Mapping" },
		{ "EditCondition", "bImportUVs" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
		{ "ToolTip", "A list of mapping channel in the format [Output Attribute Name]::[Channel Index]. You can output the same UV channel to different attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePlaceholders_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will create placeholder attributes if a listed UV channel is missing. This is useful if the rest of your graph expects those attribute to exist, even if invalid. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Create placeholders" },
		{ "EditCondition", "bImportUVs" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
		{ "ToolTip", "If enabled, will create placeholder attributes if a listed UV channel is missing. This is useful if the rest of your graph expects those attribute to exist, even if invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Placeholder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Placeholder UV value */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Placeholder Value" },
		{ "EditCondition", "bImportUVs && bCreatePlaceholders" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoMesh.h" },
		{ "ToolTip", "Placeholder UV value" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExGeoMeshImportDetails constinit property declarations ********
	static void NewProp_bImportVertexColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVertexColor;
	static void NewProp_bImportUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportUVs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannels_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UVChannels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UVChannels;
	static void NewProp_bCreatePlaceholders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePlaceholders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Placeholder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExGeoMeshImportDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExGeoMeshImportDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails;
class UScriptStruct* FPCGExGeoMeshImportDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExGeoMeshImportDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExGeoMeshImportDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportVertexColor_SetBit(void* Obj)
{
	((FPCGExGeoMeshImportDetails*)Obj)->bImportVertexColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportVertexColor = { "bImportVertexColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGeoMeshImportDetails), &Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportVertexColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportVertexColor_MetaData), NewProp_bImportVertexColor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportUVs_SetBit(void* Obj)
{
	((FPCGExGeoMeshImportDetails*)Obj)->bImportUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportUVs = { "bImportUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGeoMeshImportDetails), &Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportUVs_MetaData), NewProp_bImportUVs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels_ValueProp = { "UVChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels_Key_KeyProp = { "UVChannels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels = { "UVChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGeoMeshImportDetails, UVChannels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannels_MetaData), NewProp_UVChannels_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bCreatePlaceholders_SetBit(void* Obj)
{
	((FPCGExGeoMeshImportDetails*)Obj)->bCreatePlaceholders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bCreatePlaceholders = { "bCreatePlaceholders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGeoMeshImportDetails), &Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bCreatePlaceholders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatePlaceholders_MetaData), NewProp_bCreatePlaceholders_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_Placeholder = { "Placeholder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGeoMeshImportDetails, Placeholder), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Placeholder_MetaData), NewProp_Placeholder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportVertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bImportUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_UVChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_bCreatePlaceholders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewProp_Placeholder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExGeoMeshImportDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExGeoMeshImportDetails",
	Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::PropPointers),
	sizeof(FPCGExGeoMeshImportDetails),
	alignof(FPCGExGeoMeshImportDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExGeoMeshImportDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTriangulationType_StaticEnum, TEXT("EPCGExTriangulationType"), &Z_Registration_Info_UEnum_EPCGExTriangulationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1411639293U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExGeoMeshImportDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails_Statics::NewStructOps, TEXT("PCGExGeoMeshImportDetails"),&Z_Registration_Info_UScriptStruct_FPCGExGeoMeshImportDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExGeoMeshImportDetails), 2907180939U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_133448965{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoMesh_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
