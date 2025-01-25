// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectCore/Public/DataAssets/ArchitectRecipe.h"
#include "ArchitectCore/Public/PCArchitectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchitectRecipe() {}

// Begin Cross Module References
ARCHITECTCORE_API UClass* Z_Construct_UClass_UArchitectRecipe();
ARCHITECTCORE_API UClass* Z_Construct_UClass_UArchitectRecipe_NoRegister();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectOverrides();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchitectCore();
// End Cross Module References

// Begin Enum EAssetSpawnMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetSpawnMode;
static UEnum* EAssetSpawnMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("EAssetSpawnMode"));
	}
	return Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton;
}
template<> ARCHITECTCORE_API UEnum* StaticEnum<EAssetSpawnMode>()
{
	return EAssetSpawnMode_StaticEnum();
}
struct Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssemblyOnly.Name", "AssemblyOnly" },
		{ "BlueprintType", "true" },
		{ "Combined.Name", "Combined" },
		{ "DoNotSpawn.Name", "DoNotSpawn" },
		{ "MeshOnly.Name", "MeshOnly" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MeshOnly", (int64)MeshOnly },
		{ "AssemblyOnly", (int64)AssemblyOnly },
		{ "Combined", (int64)Combined },
		{ "DoNotSpawn", (int64)DoNotSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	"EAssetSpawnMode",
	"EAssetSpawnMode",
	Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode()
{
	if (!Z_Registration_Info_UEnum_EAssetSpawnMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetSpawnMode.InnerSingleton, Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssetSpawnMode.InnerSingleton;
}
// End Enum EAssetSpawnMode

// Begin ScriptStruct FArchitectAsset_AssemblyOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions;
class UScriptStruct* FArchitectAsset_AssemblyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset_AssemblyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectAsset_AssemblyOptions>()
{
	return FArchitectAsset_AssemblyOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCollisions_MetaData[] = {
		{ "Category", "Assembly Options" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Enables collisions on non-detail meshes, note that collision tag will ignore this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseScalableDetails_MetaData[] = {
		{ "Category", "Assembly Options" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "If enabled, points tagged as details will be culled based on user graphics settings. This reduces the overall graphics load when running at (Effects) settings lower than Epic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTopBottomMiddleTags_MetaData[] = {
		{ "Category", "Assembly Options" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Allows tagging points so that they will be used if spawned at the top, middle, or bottom of the building." },
	};
#endif // WITH_METADATA
	static void NewProp_EnableCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCollisions;
	static void NewProp_UseScalableDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseScalableDetails;
	static void NewProp_UseTopBottomMiddleTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTopBottomMiddleTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset_AssemblyOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_EnableCollisions_SetBit(void* Obj)
{
	((FArchitectAsset_AssemblyOptions*)Obj)->EnableCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_EnableCollisions = { "EnableCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectAsset_AssemblyOptions), &Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_EnableCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCollisions_MetaData), NewProp_EnableCollisions_MetaData) };
void Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseScalableDetails_SetBit(void* Obj)
{
	((FArchitectAsset_AssemblyOptions*)Obj)->UseScalableDetails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseScalableDetails = { "UseScalableDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectAsset_AssemblyOptions), &Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseScalableDetails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseScalableDetails_MetaData), NewProp_UseScalableDetails_MetaData) };
void Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseTopBottomMiddleTags_SetBit(void* Obj)
{
	((FArchitectAsset_AssemblyOptions*)Obj)->UseTopBottomMiddleTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseTopBottomMiddleTags = { "UseTopBottomMiddleTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectAsset_AssemblyOptions), &Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseTopBottomMiddleTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTopBottomMiddleTags_MetaData), NewProp_UseTopBottomMiddleTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_EnableCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseScalableDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewProp_UseTopBottomMiddleTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectAsset_AssemblyOptions",
	Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::PropPointers),
	sizeof(FArchitectAsset_AssemblyOptions),
	alignof(FArchitectAsset_AssemblyOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions.InnerSingleton;
}
// End ScriptStruct FArchitectAsset_AssemblyOptions

// Begin ScriptStruct FArchitectAsset_TransformationOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions;
class UScriptStruct* FArchitectAsset_TransformationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset_TransformationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectAsset_TransformationOptions>()
{
	return FArchitectAsset_TransformationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Transformation Options" },
		{ "Comment", "// Offset transformation applied to the object.\n" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "ToolTip", "Offset transformation applied to the object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Transformation Options" },
		{ "Comment", "// Fixed rotation applied to the object.\n" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "ToolTip", "Fixed rotation applied to the object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Transformation Options" },
		{ "Comment", "// Scale transformation applied to the object.\n" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "ToolTip", "Scale transformation applied to the object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset_TransformationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectAsset_TransformationOptions",
	Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers),
	sizeof(FArchitectAsset_TransformationOptions),
	alignof(FArchitectAsset_TransformationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions.InnerSingleton;
}
// End ScriptStruct FArchitectAsset_TransformationOptions

// Begin ScriptStruct FArchitectAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectAsset;
class UScriptStruct* FArchitectAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectAsset>()
{
	return FArchitectAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for configuring spawn options, including mode, mesh, assembly, material, and transformation settings.\n */" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "ToolTip", "Struct for configuring spawn options, including mode, mesh, assembly, material, and transformation settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Specifies the spawn mode for the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Static mesh to use in static mesh spawn mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assembly_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshOnly" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "PCG data asset to use in assembly mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Override Material to apply to slot 1 on static mesh.  It will also be applied to any assembly points tagged with StaticMeshMaterial" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformOptions_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Transformation options for the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssemblyOptions_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshOnly" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Assembly options for the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGraphs_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Override Graphs to override specific spawning behaviors using custom PCG graphs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Assembly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssemblyOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, SpawnMode), Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMode_MetaData), NewProp_SpawnMode_MetaData) }; // 3937540574
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Assembly = { "Assembly", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, Assembly), Z_Construct_UClass_UPCGDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assembly_MetaData), NewProp_Assembly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_TransformOptions = { "TransformOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, TransformOptions), Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformOptions_MetaData), NewProp_TransformOptions_MetaData) }; // 3205105741
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_AssemblyOptions = { "AssemblyOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, AssemblyOptions), Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssemblyOptions_MetaData), NewProp_AssemblyOptions_MetaData) }; // 2575901120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_OverrideGraphs = { "OverrideGraphs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, OverrideGraphs), Z_Construct_UScriptStruct_FArchitectOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGraphs_MetaData), NewProp_OverrideGraphs_MetaData) }; // 2334706256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_SpawnMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Assembly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_TransformOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_AssemblyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_OverrideGraphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectAsset",
	Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers),
	sizeof(FArchitectAsset),
	alignof(FArchitectAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectAsset.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectAsset.InnerSingleton;
}
// End ScriptStruct FArchitectAsset

// Begin Class UArchitectRecipe
void UArchitectRecipe::StaticRegisterNativesUArchitectRecipe()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchitectRecipe);
UClass* Z_Construct_UClass_UArchitectRecipe_NoRegister()
{
	return UArchitectRecipe::StaticClass();
}
struct Z_Construct_UClass_UArchitectRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/ArchitectRecipe.h" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[] = {
		{ "Category", "Walls" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[] = {
		{ "Category", "Floors" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Walls\")\n//FArchitectAsset Door;\n//\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Walls\")\n//FArchitectAsset Window;\n" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Walls\")\nFArchitectAsset Door;\n\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Walls\")\nFArchitectAsset Window;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFloorAsCeiling_MetaData[] = {
		{ "Category", "Floors" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ceiling_MetaData[] = {
		{ "Category", "Floors" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wall;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Floor;
	static void NewProp_UseFloorAsCeiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFloorAsCeiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ceiling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchitectRecipe>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Wall = { "Wall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Wall), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wall_MetaData), NewProp_Wall_MetaData) }; // 1633489235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Floor), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floor_MetaData), NewProp_Floor_MetaData) }; // 1633489235
void Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling_SetBit(void* Obj)
{
	((UArchitectRecipe*)Obj)->UseFloorAsCeiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling = { "UseFloorAsCeiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchitectRecipe), &Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFloorAsCeiling_MetaData), NewProp_UseFloorAsCeiling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Ceiling = { "Ceiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Ceiling), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ceiling_MetaData), NewProp_Ceiling_MetaData) }; // 1633489235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Wall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Floor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Ceiling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArchitectRecipe_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchitectRecipe_Statics::ClassParams = {
	&UArchitectRecipe::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchitectRecipe_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchitectRecipe()
{
	if (!Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton, Z_Construct_UClass_UArchitectRecipe_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton;
}
template<> ARCHITECTCORE_API UClass* StaticClass<UArchitectRecipe>()
{
	return UArchitectRecipe::StaticClass();
}
UArchitectRecipe::UArchitectRecipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchitectRecipe);
UArchitectRecipe::~UArchitectRecipe() {}
// End Class UArchitectRecipe

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssetSpawnMode_StaticEnum, TEXT("EAssetSpawnMode"), &Z_Registration_Info_UEnum_EAssetSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3937540574U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArchitectAsset_AssemblyOptions::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewStructOps, TEXT("ArchitectAsset_AssemblyOptions"), &Z_Registration_Info_UScriptStruct_ArchitectAsset_AssemblyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset_AssemblyOptions), 2575901120U) },
		{ FArchitectAsset_TransformationOptions::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewStructOps, TEXT("ArchitectAsset_TransformationOptions"), &Z_Registration_Info_UScriptStruct_ArchitectAsset_TransformationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset_TransformationOptions), 3205105741U) },
		{ FArchitectAsset::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewStructOps, TEXT("ArchitectAsset"), &Z_Registration_Info_UScriptStruct_ArchitectAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset), 1633489235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchitectRecipe, UArchitectRecipe::StaticClass, TEXT("UArchitectRecipe"), &Z_Registration_Info_UClass_UArchitectRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchitectRecipe), 94703855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_1128254105(TEXT("/Script/ArchitectCore"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
