// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/ArchitectRecipe.h"
#include "PCArchitectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeArchitectRecipe() {}

// ********** Begin Cross Module References ********************************************************
ARCHITECTCORE_API UClass* Z_Construct_UClass_UArchitectRecipe();
ARCHITECTCORE_API UClass* Z_Construct_UClass_UArchitectRecipe_NoRegister();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectCornerAsset();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectOverrides();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchitectCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAssetSpawnMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetSpawnMode;
static UEnum* EAssetSpawnMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("EAssetSpawnMode"));
	}
	return Z_Registration_Info_UEnum_EAssetSpawnMode.OuterSingleton;
}
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetSpawnMode>()
{
	return EAssetSpawnMode_StaticEnum();
}
struct Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssemblyOnly.DisplayName", "Assembly" },
		{ "AssemblyOnly.Name", "AssemblyOnly" },
		{ "BlueprintType", "true" },
		{ "Combined.DisplayName", "Mesh & Assembly" },
		{ "Combined.Name", "Combined" },
		{ "DoNotSpawn.Name", "DoNotSpawn" },
		{ "MeshCollection.DisplayName", "Mesh Collection" },
		{ "MeshCollection.Name", "MeshCollection" },
		{ "MeshOnly.DisplayName", "Mesh" },
		{ "MeshOnly.Name", "MeshOnly" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DoNotSpawn", (int64)DoNotSpawn },
		{ "MeshOnly", (int64)MeshOnly },
		{ "AssemblyOnly", (int64)AssemblyOnly },
		{ "Combined", (int64)Combined },
		{ "MeshCollection", (int64)MeshCollection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode_Statics 
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
// ********** End Enum EAssetSpawnMode *************************************************************

// ********** Begin Enum ECornerSpawnMode **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECornerSpawnMode;
static UEnum* ECornerSpawnMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECornerSpawnMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECornerSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ECornerSpawnMode"));
	}
	return Z_Registration_Info_UEnum_ECornerSpawnMode.OuterSingleton;
}
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECornerSpawnMode>()
{
	return ECornerSpawnMode_StaticEnum();
}
struct Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EdgeCorner.DisplayName", "Edge" },
		{ "EdgeCorner.Name", "EdgeCorner" },
		{ "EdgeCorner.ToolTip", "Single Asset is spawned, but walls are not shifted." },
		{ "FullCorner.DisplayName", "Full" },
		{ "FullCorner.Name", "FullCorner" },
		{ "FullCorner.ToolTip", "Single Asset is spawned, walls are bounds are shifted" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "NoCorner.DisplayName", "None" },
		{ "NoCorner.Name", "NoCorner" },
		{ "NoCorner.ToolTip", "Not Spawned" },
		{ "SplitCorner.DisplayName", "Split" },
		{ "SplitCorner.Name", "SplitCorner" },
		{ "SplitCorner.ToolTip", "Dual Assets (right and left) are spawned, walls are bounds are shifted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NoCorner", (int64)NoCorner },
		{ "EdgeCorner", (int64)EdgeCorner },
		{ "FullCorner", (int64)FullCorner },
		{ "SplitCorner", (int64)SplitCorner },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	"ECornerSpawnMode",
	"ECornerSpawnMode",
	Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode()
{
	if (!Z_Registration_Info_UEnum_ECornerSpawnMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECornerSpawnMode.InnerSingleton, Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECornerSpawnMode.InnerSingleton;
}
// ********** End Enum ECornerSpawnMode ************************************************************

// ********** Begin ScriptStruct FArchitectAsset_AssemblyOptions ***********************************
struct Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FArchitectAsset_AssemblyOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FArchitectAsset_AssemblyOptions); }
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

// ********** Begin ScriptStruct FArchitectAsset_AssemblyOptions constinit property declarations ***
	static void NewProp_EnableCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCollisions;
	static void NewProp_UseScalableDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseScalableDetails;
	static void NewProp_UseTopBottomMiddleTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTopBottomMiddleTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FArchitectAsset_AssemblyOptions constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset_AssemblyOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions;
class UScriptStruct* FArchitectAsset_AssemblyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset_AssemblyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FArchitectAsset_AssemblyOptions Property Definitions **************
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
// ********** End ScriptStruct FArchitectAsset_AssemblyOptions Property Definitions ****************
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
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions.InnerSingleton);
}
// ********** End ScriptStruct FArchitectAsset_AssemblyOptions *************************************

// ********** Begin ScriptStruct FArchitectAsset_TransformationOptions *****************************
struct Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FArchitectAsset_TransformationOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FArchitectAsset_TransformationOptions); }
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

// ********** Begin ScriptStruct FArchitectAsset_TransformationOptions constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FArchitectAsset_TransformationOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset_TransformationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions;
class UScriptStruct* FArchitectAsset_TransformationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset_TransformationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FArchitectAsset_TransformationOptions Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset_TransformationOptions, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FArchitectAsset_TransformationOptions Property Definitions **********
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
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions.InnerSingleton);
}
// ********** End ScriptStruct FArchitectAsset_TransformationOptions *******************************

// ********** Begin ScriptStruct FArchitectAsset ***************************************************
struct Z_Construct_UScriptStruct_FArchitectAsset_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FArchitectAsset); }
	static inline consteval int16 GetStructAlignment() { return alignof(FArchitectAsset); }
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
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Static mesh to use in static mesh spawn mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assembly_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode == EAssetSpawnMode::Combined || SpawnMode == EAssetSpawnMode::AssemblyOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "PCG data asset to use in assembly mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Override Material to apply to slot 1 on static mesh.  It will also be applied to any assembly points tagged with StaticMeshMaterial" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssemblyOptions_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn && SpawnMode != EAssetSpawnMode::MeshOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Assembly options for the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGraphs_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Override Graphs to override specific spawning behaviors using custom PCG graphs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformOptions_MetaData[] = {
		{ "Category", "Spawn Options" },
		{ "EditCondition", "SpawnMode != EAssetSpawnMode::DoNotSpawn" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
		{ "Tooltip", "Transformation options for the asset." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FArchitectAsset constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Assembly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssemblyOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FArchitectAsset constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FArchitectAsset_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FArchitectAsset;
class UScriptStruct* FArchitectAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FArchitectAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectAsset, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectAsset"));
	}
	return Z_Registration_Info_UScriptStruct_FArchitectAsset.OuterSingleton;
	}

// ********** Begin ScriptStruct FArchitectAsset Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, SpawnMode), Z_Construct_UEnum_ArchitectCore_EAssetSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMode_MetaData), NewProp_SpawnMode_MetaData) }; // 1340470380
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Assembly = { "Assembly", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, Assembly), Z_Construct_UClass_UPCGDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assembly_MetaData), NewProp_Assembly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_AssemblyOptions = { "AssemblyOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, AssemblyOptions), Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssemblyOptions_MetaData), NewProp_AssemblyOptions_MetaData) }; // 2805662094
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_OverrideGraphs = { "OverrideGraphs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, OverrideGraphs), Z_Construct_UScriptStruct_FArchitectOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGraphs_MetaData), NewProp_OverrideGraphs_MetaData) }; // 1304736050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_TransformOptions = { "TransformOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectAsset, TransformOptions), Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformOptions_MetaData), NewProp_TransformOptions_MetaData) }; // 2080654111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_SpawnMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Assembly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_AssemblyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_OverrideGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewProp_TransformOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectAsset_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FArchitectAsset Property Definitions ********************************
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
	if (!Z_Registration_Info_UScriptStruct_FArchitectAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FArchitectAsset.InnerSingleton, Z_Construct_UScriptStruct_FArchitectAsset_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FArchitectAsset.InnerSingleton);
}
// ********** End ScriptStruct FArchitectAsset *****************************************************

// ********** Begin ScriptStruct FArchitectCornerAsset *********************************************
struct Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FArchitectCornerAsset); }
	static inline consteval int16 GetStructAlignment() { return alignof(FArchitectCornerAsset); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMode_MetaData[] = {
		{ "Category", "Corners" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Corner_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "!UseRecipes && CornerMode==ECornerSpawnMode::EdgeCorner || CornerMode==ECornerSpawnMode::FullCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRight_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "!UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerLeft_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "!UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRecipes_MetaData[] = {
		{ "Category", "Corners" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRecipe_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "UseRecipes && CornerMode==ECornerSpawnMode::EdgeCorner || CornerMode==ECornerSpawnMode::FullCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRightRecipe_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerLeftRecipe_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "UseRecipes && CornerMode==ECornerSpawnMode::SplitCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRecipeFootprint_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "!UseRecipes && CornerMode!=ECornerSpawnMode::NoCorner && CornerMode!=ECornerSpawnMode::EdgeCorner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerFootprint_MetaData[] = {
		{ "Category", "Corners" },
		{ "EditCondition", "!UseRecipes && CornerMode!=ECornerSpawnMode::NoCorner && CornerMode!=ECornerSpawnMode::EdgeCorner && OverrideRecipeFootprint" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FArchitectCornerAsset constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CornerMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Corner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerLeft;
	static void NewProp_UseRecipes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseRecipes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerRecipe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerRightRecipe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerLeftRecipe;
	static void NewProp_OverrideRecipeFootprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideRecipeFootprint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerFootprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FArchitectCornerAsset constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectCornerAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FArchitectCornerAsset;
class UScriptStruct* FArchitectCornerAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectCornerAsset, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectCornerAsset"));
	}
	return Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.OuterSingleton;
	}

// ********** Begin ScriptStruct FArchitectCornerAsset Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerMode = { "CornerMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerMode), Z_Construct_UEnum_ArchitectCore_ECornerSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMode_MetaData), NewProp_CornerMode_MetaData) }; // 3624464809
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_Corner = { "Corner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, Corner), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Corner_MetaData), NewProp_Corner_MetaData) }; // 2594045179
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRight = { "CornerRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerRight), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRight_MetaData), NewProp_CornerRight_MetaData) }; // 2594045179
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerLeft = { "CornerLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerLeft), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerLeft_MetaData), NewProp_CornerLeft_MetaData) }; // 2594045179
void Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_UseRecipes_SetBit(void* Obj)
{
	((FArchitectCornerAsset*)Obj)->UseRecipes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_UseRecipes = { "UseRecipes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectCornerAsset), &Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_UseRecipes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRecipes_MetaData), NewProp_UseRecipes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRecipe = { "CornerRecipe", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerRecipe), Z_Construct_UClass_UArchitectRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRecipe_MetaData), NewProp_CornerRecipe_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRightRecipe = { "CornerRightRecipe", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerRightRecipe), Z_Construct_UClass_UArchitectRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRightRecipe_MetaData), NewProp_CornerRightRecipe_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerLeftRecipe = { "CornerLeftRecipe", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerLeftRecipe), Z_Construct_UClass_UArchitectRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerLeftRecipe_MetaData), NewProp_CornerLeftRecipe_MetaData) };
void Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_OverrideRecipeFootprint_SetBit(void* Obj)
{
	((FArchitectCornerAsset*)Obj)->OverrideRecipeFootprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_OverrideRecipeFootprint = { "OverrideRecipeFootprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectCornerAsset), &Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_OverrideRecipeFootprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRecipeFootprint_MetaData), NewProp_OverrideRecipeFootprint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerFootprint = { "CornerFootprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectCornerAsset, CornerFootprint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerFootprint_MetaData), NewProp_CornerFootprint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_Corner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_UseRecipes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRecipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerRightRecipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerLeftRecipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_OverrideRecipeFootprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewProp_CornerFootprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FArchitectCornerAsset Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectCornerAsset",
	Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::PropPointers),
	sizeof(FArchitectCornerAsset),
	alignof(FArchitectCornerAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectCornerAsset()
{
	if (!Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.InnerSingleton, Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FArchitectCornerAsset.InnerSingleton);
}
// ********** End ScriptStruct FArchitectCornerAsset ***********************************************

// ********** Begin Class UArchitectRecipe Function AutoCalculateFootprint *************************
struct Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AutoCalculateFootprint constinit property declarations ****************
// ********** End Function AutoCalculateFootprint constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UArchitectRecipe, nullptr, "AutoCalculateFootprint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArchitectRecipe::execAutoCalculateFootprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoCalculateFootprint();
	P_NATIVE_END;
}
// ********** End Class UArchitectRecipe Function AutoCalculateFootprint ***************************

// ********** Begin Class UArchitectRecipe *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UArchitectRecipe;
UClass* UArchitectRecipe::GetPrivateStaticClass()
{
	using TClass = UArchitectRecipe;
	if (!Z_Registration_Info_UClass_UArchitectRecipe.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ArchitectRecipe"),
			Z_Registration_Info_UClass_UArchitectRecipe.InnerSingleton,
			StaticRegisterNativesUArchitectRecipe,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UArchitectRecipe.InnerSingleton;
}
UClass* Z_Construct_UClass_UArchitectRecipe_NoRegister()
{
	return UArchitectRecipe::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UArchitectRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/ArchitectRecipe.h" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Footprint_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[] = {
		{ "Category", "Walls" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasDoorSlot_MetaData[] = {
		{ "Category", "Walls" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditCondition", "HasDoorSlot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasWindowSlot_MetaData[] = {
		{ "Category", "Walls" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Window_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditCondition", "HasWindowSlot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutCorner_MetaData[] = {
		{ "Category", "Corners" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCorner_MetaData[] = {
		{ "Category", "Corners" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[] = {
		{ "Category", "Floors" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFloorAsCeiling_MetaData[] = {
		{ "Category", "Floors" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ceiling_MetaData[] = {
		{ "Category", "Floors" },
		{ "EditCondition", "UseFloorAsCeiling==false" },
		{ "ModuleRelativePath", "Public/DataAssets/ArchitectRecipe.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UArchitectRecipe constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Footprint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wall;
	static void NewProp_HasDoorSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasDoorSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Door;
	static void NewProp_HasWindowSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWindowSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Window;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCorner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCorner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Floor;
	static void NewProp_UseFloorAsCeiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFloorAsCeiling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ceiling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UArchitectRecipe constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AutoCalculateFootprint"), .Pointer = &UArchitectRecipe::execAutoCalculateFootprint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchitectRecipe_AutoCalculateFootprint, "AutoCalculateFootprint" }, // 2866703111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchitectRecipe>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UArchitectRecipe_Statics

// ********** Begin Class UArchitectRecipe Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Footprint = { "Footprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Footprint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Footprint_MetaData), NewProp_Footprint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Wall = { "Wall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Wall), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wall_MetaData), NewProp_Wall_MetaData) }; // 2594045179
void Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasDoorSlot_SetBit(void* Obj)
{
	((UArchitectRecipe*)Obj)->HasDoorSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasDoorSlot = { "HasDoorSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchitectRecipe), &Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasDoorSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasDoorSlot_MetaData), NewProp_HasDoorSlot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Door), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Door_MetaData), NewProp_Door_MetaData) }; // 2594045179
void Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasWindowSlot_SetBit(void* Obj)
{
	((UArchitectRecipe*)Obj)->HasWindowSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasWindowSlot = { "HasWindowSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchitectRecipe), &Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasWindowSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasWindowSlot_MetaData), NewProp_HasWindowSlot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Window), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Window_MetaData), NewProp_Window_MetaData) }; // 2594045179
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_OutCorner = { "OutCorner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, OutCorner), Z_Construct_UScriptStruct_FArchitectCornerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutCorner_MetaData), NewProp_OutCorner_MetaData) }; // 922676130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_InCorner = { "InCorner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, InCorner), Z_Construct_UScriptStruct_FArchitectCornerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCorner_MetaData), NewProp_InCorner_MetaData) }; // 922676130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Floor), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floor_MetaData), NewProp_Floor_MetaData) }; // 2594045179
void Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling_SetBit(void* Obj)
{
	((UArchitectRecipe*)Obj)->UseFloorAsCeiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling = { "UseFloorAsCeiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchitectRecipe), &Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFloorAsCeiling_MetaData), NewProp_UseFloorAsCeiling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Ceiling = { "Ceiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchitectRecipe, Ceiling), Z_Construct_UScriptStruct_FArchitectAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ceiling_MetaData), NewProp_Ceiling_MetaData) }; // 2594045179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Footprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Wall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasDoorSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Door,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_HasWindowSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Window,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_OutCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_InCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Floor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_UseFloorAsCeiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchitectRecipe_Statics::NewProp_Ceiling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers) < 2048);
// ********** End Class UArchitectRecipe Property Definitions **************************************
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
	FuncInfo,
	Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchitectRecipe_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchitectRecipe_Statics::Class_MetaDataParams)
};
void UArchitectRecipe::StaticRegisterNativesUArchitectRecipe()
{
	UClass* Class = UArchitectRecipe::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UArchitectRecipe_Statics::Funcs));
}
UClass* Z_Construct_UClass_UArchitectRecipe()
{
	if (!Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton, Z_Construct_UClass_UArchitectRecipe_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchitectRecipe.OuterSingleton;
}
UArchitectRecipe::UArchitectRecipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UArchitectRecipe);
UArchitectRecipe::~UArchitectRecipe() {}
// ********** End Class UArchitectRecipe ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssetSpawnMode_StaticEnum, TEXT("EAssetSpawnMode"), &Z_Registration_Info_UEnum_EAssetSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1340470380U) },
		{ ECornerSpawnMode_StaticEnum, TEXT("ECornerSpawnMode"), &Z_Registration_Info_UEnum_ECornerSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3624464809U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArchitectAsset_AssemblyOptions::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics::NewStructOps, TEXT("ArchitectAsset_AssemblyOptions"),&Z_Registration_Info_UScriptStruct_FArchitectAsset_AssemblyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset_AssemblyOptions), 2805662094U) },
		{ FArchitectAsset_TransformationOptions::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics::NewStructOps, TEXT("ArchitectAsset_TransformationOptions"),&Z_Registration_Info_UScriptStruct_FArchitectAsset_TransformationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset_TransformationOptions), 2080654111U) },
		{ FArchitectAsset::StaticStruct, Z_Construct_UScriptStruct_FArchitectAsset_Statics::NewStructOps, TEXT("ArchitectAsset"),&Z_Registration_Info_UScriptStruct_FArchitectAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectAsset), 2594045179U) },
		{ FArchitectCornerAsset::StaticStruct, Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics::NewStructOps, TEXT("ArchitectCornerAsset"),&Z_Registration_Info_UScriptStruct_FArchitectCornerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectCornerAsset), 922676130U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchitectRecipe, UArchitectRecipe::StaticClass, TEXT("UArchitectRecipe"), &Z_Registration_Info_UClass_UArchitectRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchitectRecipe), 3654009285U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_3710442965{
	TEXT("/Script/ArchitectCore"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h__Script_ArchitectCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
