// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectCore/Public/PCArchitectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCArchitectBase() {}

// Begin Cross Module References
ARCHITECTCORE_API UClass* Z_Construct_UClass_APCArchitectBase();
ARCHITECTCORE_API UClass* Z_Construct_UClass_APCArchitectBase_NoRegister();
ARCHITECTCORE_API UEnum* Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectMaterialOptions();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectMaterialOverride();
ARCHITECTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArchitectOverrides();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArchitectCore();
// End Cross Module References

// Begin ScriptStruct FArchitectMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride;
class UScriptStruct* FArchitectMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectMaterialOverride, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectMaterialOverride>()
{
	return FArchitectMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Single override material, always visible\n" },
#endif
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single override material, always visible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultiple_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boolean to toggle usage of multiple materials\n" },
#endif
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boolean to toggle usage of multiple materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of override materials, only visible if bUseMultiple is true\n" },
#endif
		{ "EditCondition", "bUseMultiple" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of override materials, only visible if bUseMultiple is true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static void NewProp_bUseMultiple_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultiple;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectMaterialOverride, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
void Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_bUseMultiple_SetBit(void* Obj)
{
	((FArchitectMaterialOverride*)Obj)->bUseMultiple = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_bUseMultiple = { "bUseMultiple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectMaterialOverride), &Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_bUseMultiple_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMultiple_MetaData), NewProp_bUseMultiple_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectMaterialOverride, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_bUseMultiple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewProp_OverrideMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectMaterialOverride",
	Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::PropPointers),
	sizeof(FArchitectMaterialOverride),
	alignof(FArchitectMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride.InnerSingleton;
}
// End ScriptStruct FArchitectMaterialOverride

// Begin ScriptStruct FArchitectMaterialOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions;
class UScriptStruct* FArchitectMaterialOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectMaterialOptions, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectMaterialOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectMaterialOptions>()
{
	return FArchitectMaterialOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Priority of this material override. Higher priority materials override lower priority ones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledOnWalls_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Enable material override on walls. When enabled, shared material settings are applied on walls, doors, windows, and corners." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Material override settings for walls, doors, windows, and corners." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledOnFloors_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Enable material override on floors. When enabled, shared material settings are applied on floors and ceilings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Material override settings for floors and ceilings." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bEnabledOnWalls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledOnWalls;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallMaterial;
	static void NewProp_bEnabledOnFloors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledOnFloors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectMaterialOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectMaterialOptions, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnWalls_SetBit(void* Obj)
{
	((FArchitectMaterialOptions*)Obj)->bEnabledOnWalls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnWalls = { "bEnabledOnWalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectMaterialOptions), &Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnWalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledOnWalls_MetaData), NewProp_bEnabledOnWalls_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_WallMaterial = { "WallMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectMaterialOptions, WallMaterial), Z_Construct_UScriptStruct_FArchitectMaterialOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallMaterial_MetaData), NewProp_WallMaterial_MetaData) }; // 1475036131
void Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnFloors_SetBit(void* Obj)
{
	((FArchitectMaterialOptions*)Obj)->bEnabledOnFloors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnFloors = { "bEnabledOnFloors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectMaterialOptions), &Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnFloors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledOnFloors_MetaData), NewProp_bEnabledOnFloors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_FloorMaterial = { "FloorMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectMaterialOptions, FloorMaterial), Z_Construct_UScriptStruct_FArchitectMaterialOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorMaterial_MetaData), NewProp_FloorMaterial_MetaData) }; // 1475036131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_WallMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_bEnabledOnFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewProp_FloorMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectMaterialOptions",
	Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::PropPointers),
	sizeof(FArchitectMaterialOptions),
	alignof(FArchitectMaterialOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectMaterialOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.InnerSingleton, Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions.InnerSingleton;
}
// End ScriptStruct FArchitectMaterialOptions

// Begin Enum EArchitectOverideModes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchitectOverideModes;
static UEnum* EArchitectOverideModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArchitectOverideModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArchitectOverideModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("EArchitectOverideModes"));
	}
	return Z_Registration_Info_UEnum_EArchitectOverideModes.OuterSingleton;
}
template<> ARCHITECTCORE_API UEnum* StaticEnum<EArchitectOverideModes>()
{
	return EArchitectOverideModes_StaticEnum();
}
struct Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DataAsset.Name", "DataAsset" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
		{ "None.Name", "None" },
		{ "SpecificSettings.Name", "SpecificSettings" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "DataAsset", (int64)DataAsset },
		{ "SpecificSettings", (int64)SpecificSettings },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	"EArchitectOverideModes",
	"EArchitectOverideModes",
	Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes()
{
	if (!Z_Registration_Info_UEnum_EArchitectOverideModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchitectOverideModes.InnerSingleton, Z_Construct_UEnum_ArchitectCore_EArchitectOverideModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArchitectOverideModes.InnerSingleton;
}
// End Enum EArchitectOverideModes

// Begin ScriptStruct FArchitectOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchitectOverrides;
class UScriptStruct* FArchitectOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchitectOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchitectOverrides, (UObject*)Z_Construct_UPackage__Script_ArchitectCore(), TEXT("ArchitectOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_ArchitectOverrides.OuterSingleton;
}
template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<FArchitectOverrides>()
{
	return FArchitectOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArchitectOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSSMGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SSMGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bEnableSSMGraph" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bEnableCAGraph" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bEnableFAGraph" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SAGraph_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bEnableSAGraph" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSSMGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSSMGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SSMGraph;
	static void NewProp_bEnableCAGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCAGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CAGraph;
	static void NewProp_bEnableFAGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFAGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FAGraph;
	static void NewProp_bEnableSAGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSAGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SAGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchitectOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSSMGraph_SetBit(void* Obj)
{
	((FArchitectOverrides*)Obj)->bEnableSSMGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSSMGraph = { "bEnableSSMGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectOverrides), &Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSSMGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSSMGraph_MetaData), NewProp_bEnableSSMGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_SSMGraph = { "SSMGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectOverrides, SSMGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SSMGraph_MetaData), NewProp_SSMGraph_MetaData) };
void Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableCAGraph_SetBit(void* Obj)
{
	((FArchitectOverrides*)Obj)->bEnableCAGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableCAGraph = { "bEnableCAGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectOverrides), &Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableCAGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCAGraph_MetaData), NewProp_bEnableCAGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_CAGraph = { "CAGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectOverrides, CAGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CAGraph_MetaData), NewProp_CAGraph_MetaData) };
void Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableFAGraph_SetBit(void* Obj)
{
	((FArchitectOverrides*)Obj)->bEnableFAGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableFAGraph = { "bEnableFAGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectOverrides), &Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableFAGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFAGraph_MetaData), NewProp_bEnableFAGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_FAGraph = { "FAGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectOverrides, FAGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FAGraph_MetaData), NewProp_FAGraph_MetaData) };
void Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSAGraph_SetBit(void* Obj)
{
	((FArchitectOverrides*)Obj)->bEnableSAGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSAGraph = { "bEnableSAGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FArchitectOverrides), &Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSAGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSAGraph_MetaData), NewProp_bEnableSAGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_SAGraph = { "SAGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchitectOverrides, SAGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SAGraph_MetaData), NewProp_SAGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchitectOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSSMGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_SSMGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableCAGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_CAGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableFAGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_FAGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_bEnableSAGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewProp_SAGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchitectOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
	nullptr,
	&NewStructOps,
	"ArchitectOverrides",
	Z_Construct_UScriptStruct_FArchitectOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectOverrides_Statics::PropPointers),
	sizeof(FArchitectOverrides),
	alignof(FArchitectOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchitectOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchitectOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArchitectOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_ArchitectOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchitectOverrides.InnerSingleton, Z_Construct_UScriptStruct_FArchitectOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArchitectOverrides.InnerSingleton;
}
// End ScriptStruct FArchitectOverrides

// Begin Class APCArchitectBase
void APCArchitectBase::StaticRegisterNativesAPCArchitectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCArchitectBase);
UClass* Z_Construct_UClass_APCArchitectBase_NoRegister()
{
	return APCArchitectBase::StaticClass();
}
struct Z_Construct_UClass_APCArchitectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCArchitectBase.h" },
		{ "ModuleRelativePath", "Public/PCArchitectBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCArchitectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APCArchitectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArchitectCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCArchitectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCArchitectBase_Statics::ClassParams = {
	&APCArchitectBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCArchitectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APCArchitectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCArchitectBase()
{
	if (!Z_Registration_Info_UClass_APCArchitectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCArchitectBase.OuterSingleton, Z_Construct_UClass_APCArchitectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCArchitectBase.OuterSingleton;
}
template<> ARCHITECTCORE_API UClass* StaticClass<APCArchitectBase>()
{
	return APCArchitectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCArchitectBase);
APCArchitectBase::~APCArchitectBase() {}
// End Class APCArchitectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArchitectOverideModes_StaticEnum, TEXT("EArchitectOverideModes"), &Z_Registration_Info_UEnum_EArchitectOverideModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439101868U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArchitectMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics::NewStructOps, TEXT("ArchitectMaterialOverride"), &Z_Registration_Info_UScriptStruct_ArchitectMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectMaterialOverride), 1475036131U) },
		{ FArchitectMaterialOptions::StaticStruct, Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics::NewStructOps, TEXT("ArchitectMaterialOptions"), &Z_Registration_Info_UScriptStruct_ArchitectMaterialOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectMaterialOptions), 2528555655U) },
		{ FArchitectOverrides::StaticStruct, Z_Construct_UScriptStruct_FArchitectOverrides_Statics::NewStructOps, TEXT("ArchitectOverrides"), &Z_Registration_Info_UScriptStruct_ArchitectOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchitectOverrides), 2334706256U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCArchitectBase, APCArchitectBase::StaticClass, TEXT("APCArchitectBase"), &Z_Registration_Info_UClass_APCArchitectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCArchitectBase), 3634546230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_302514145(TEXT("/Script/ArchitectCore"),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
