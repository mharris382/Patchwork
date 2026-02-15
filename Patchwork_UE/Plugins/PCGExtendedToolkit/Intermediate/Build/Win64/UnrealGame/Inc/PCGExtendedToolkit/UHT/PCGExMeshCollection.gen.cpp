// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collections/PCGExMeshCollection.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "ISMPartition/ISMComponentDescriptor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMeshCollection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshCollection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMaterialVariantsMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode;
static UEnum* EPCGExMaterialVariantsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMaterialVariantsMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMaterialVariantsMode>()
{
	return EPCGExMaterialVariantsMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "Multi.ActionIcon", "MultiMat" },
		{ "Multi.DisplayName", "Multi Slots" },
		{ "Multi.Name", "EPCGExMaterialVariantsMode::Multi" },
		{ "Multi.ToolTip", "Multi-slot variants, more admin, for when there is multiple material slots for the entry." },
		{ "None.ActionIcon", "STF_None" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExMaterialVariantsMode::None" },
		{ "None.ToolTip", "No variants." },
		{ "Single.ActionIcon", "SingleMat" },
		{ "Single.DisplayName", "Single Slot" },
		{ "Single.Name", "EPCGExMaterialVariantsMode::Single" },
		{ "Single.ToolTip", "Single-slot variants, for when there is only a single material slot override." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMaterialVariantsMode::None", (int64)EPCGExMaterialVariantsMode::None },
		{ "EPCGExMaterialVariantsMode::Single", (int64)EPCGExMaterialVariantsMode::Single },
		{ "EPCGExMaterialVariantsMode::Multi", (int64)EPCGExMaterialVariantsMode::Multi },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMaterialVariantsMode",
	"EPCGExMaterialVariantsMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode.InnerSingleton;
}
// ********** End Enum EPCGExMaterialVariantsMode **************************************************

// ********** Begin ScriptStruct FPCGExMaterialOverrideEntry ***************************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMaterialOverrideEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMaterialOverrideEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Material Override Entry" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Material slot index. -1 uses the index inside the container. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Material slot index. -1 uses the index inside the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMaterialOverrideEntry constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMaterialOverrideEntry constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMaterialOverrideEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry;
class UScriptStruct* FPCGExMaterialOverrideEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMaterialOverrideEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMaterialOverrideEntry Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideEntry, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideEntry, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMaterialOverrideEntry Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMaterialOverrideEntry",
	Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::PropPointers),
	sizeof(FPCGExMaterialOverrideEntry),
	alignof(FPCGExMaterialOverrideEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMaterialOverrideEntry *****************************************

// ********** Begin ScriptStruct FPCGExMaterialOverrideCollection **********************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMaterialOverrideCollection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMaterialOverrideCollection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Material Override Collection" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMaterialOverrideCollection constinit property declarations **
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMaterialOverrideCollection constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMaterialOverrideCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection;
class UScriptStruct* FPCGExMaterialOverrideCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMaterialOverrideCollection"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMaterialOverrideCollection Property Definitions *************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideCollection, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry, METADATA_PARAMS(0, nullptr) }; // 3652816459
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideCollection, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) }; // 3652816459
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideCollection, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Overrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_Overrides,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMaterialOverrideCollection Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMaterialOverrideCollection",
	Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::PropPointers),
	sizeof(FPCGExMaterialOverrideCollection),
	alignof(FPCGExMaterialOverrideCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMaterialOverrideCollection ************************************

// ********** Begin ScriptStruct FPCGExMaterialOverrideSingleEntry *********************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMaterialOverrideSingleEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMaterialOverrideSingleEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Material Override Single Entry" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMaterialOverrideSingleEntry constinit property declarations *
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMaterialOverrideSingleEntry constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMaterialOverrideSingleEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry;
class UScriptStruct* FPCGExMaterialOverrideSingleEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMaterialOverrideSingleEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMaterialOverrideSingleEntry Property Definitions ************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideSingleEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideSingleEntry, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMaterialOverrideSingleEntry, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMaterialOverrideSingleEntry Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMaterialOverrideSingleEntry",
	Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::PropPointers),
	sizeof(FPCGExMaterialOverrideSingleEntry),
	alignof(FPCGExMaterialOverrideSingleEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMaterialOverrideSingleEntry ***********************************

// ********** Begin ScriptStruct FPCGExMeshCollectionEntry *****************************************
struct Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMeshCollectionEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMeshCollectionEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Mesh Collection Entry" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "bIsSubCollection" },
		{ "EditCondition", "bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVariants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of material variants */" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "A list of material variants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Material slot index. -1 uses the index inside the container. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Slot Index" },
		{ "EditCondition", "!bIsSubCollection && MaterialVariants == EPCGExMaterialVariantsMode::Single" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Material slot index. -1 uses the index inside the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrideVariants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of single material variants */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Variants" },
		{ "EditCondition", "!bIsSubCollection && MaterialVariants == EPCGExMaterialVariantsMode::Single" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "TitleProperty", "DisplayName" },
		{ "ToolTip", "A list of single material variants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrideVariantsList_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of material variants */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Variants" },
		{ "EditCondition", "!bIsSubCollection && MaterialVariants == EPCGExMaterialVariantsMode::Multi" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "TitleProperty", "DisplayName" },
		{ "ToolTip", "A list of material variants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptorSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Descriptor source. */" },
		{ "DisplayAfter", "Variations" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Descriptor source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config used when this entry is consumed as an instanced static mesh */" },
		{ "DisplayAfter", "DescriptorSource" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 ISM Settings" },
		{ "EditCondition", "!bIsSubCollection && DescriptorSource == EPCGExEntryVariationMode::Local" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Config used when this entry is consumed as an instanced static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SMDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config used when this entry is consumed as a regular static mesh primitive (i.e Spline Mesh)*/" },
		{ "DisplayAfter", "ISMDescriptor" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 SM Settings" },
		{ "EditCondition", "!bIsSubCollection && DescriptorSource == EPCGExEntryVariationMode::Local" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Config used when this entry is consumed as a regular static mesh primitive (i.e Spline Mesh)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVariantsCumulativeWeight_MetaData[] = {
		{ "Comment", "// DEPRECATED -- Moved to macro cache instead.\n" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "DEPRECATED -- Moved to macro cache instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVariantsOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVariantsWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMeshCollectionEntry constinit property declarations *********
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubCollection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialVariants_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialVariants;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrideVariants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrideVariants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrideVariantsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrideVariantsList;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DescriptorSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DescriptorSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ISMDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SMDescriptor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariantsCumulativeWeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariantsOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariantsOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariantsWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariantsWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMeshCollectionEntry constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMeshCollectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics
static_assert(std::is_polymorphic<FPCGExMeshCollectionEntry>() == std::is_polymorphic<FPCGExAssetCollectionEntry>(), "USTRUCT FPCGExMeshCollectionEntry cannot be polymorphic unless super FPCGExAssetCollectionEntry is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry;
class UScriptStruct* FPCGExMeshCollectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMeshCollectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMeshCollectionEntry Property Definitions ********************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SubCollection = { "SubCollection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, SubCollection), Z_Construct_UClass_UPCGExMeshCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCollection_MetaData), NewProp_SubCollection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariants_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariants = { "MaterialVariants", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialVariants), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMaterialVariantsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialVariants_MetaData), NewProp_MaterialVariants_MetaData) }; // 1041849184
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariants_Inner = { "MaterialOverrideVariants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry, METADATA_PARAMS(0, nullptr) }; // 3673829170
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariants = { "MaterialOverrideVariants", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialOverrideVariants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrideVariants_MetaData), NewProp_MaterialOverrideVariants_MetaData) }; // 3673829170
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariantsList_Inner = { "MaterialOverrideVariantsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection, METADATA_PARAMS(0, nullptr) }; // 3618511744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariantsList = { "MaterialOverrideVariantsList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialOverrideVariantsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrideVariantsList_MetaData), NewProp_MaterialOverrideVariantsList_MetaData) }; // 3618511744
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_DescriptorSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_DescriptorSource = { "DescriptorSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, DescriptorSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptorSource_MetaData), NewProp_DescriptorSource_MetaData) }; // 906909742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_ISMDescriptor = { "ISMDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, ISMDescriptor), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMDescriptor_MetaData), NewProp_ISMDescriptor_MetaData) }; // 154448738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SMDescriptor = { "SMDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, SMDescriptor), Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SMDescriptor_MetaData), NewProp_SMDescriptor_MetaData) }; // 3445229925
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsCumulativeWeight = { "MaterialVariantsCumulativeWeight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialVariantsCumulativeWeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialVariantsCumulativeWeight_MetaData), NewProp_MaterialVariantsCumulativeWeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsOrder_Inner = { "MaterialVariantsOrder", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsOrder = { "MaterialVariantsOrder", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialVariantsOrder_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialVariantsOrder_MetaData), NewProp_MaterialVariantsOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsWeights_Inner = { "MaterialVariantsWeights", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsWeights = { "MaterialVariantsWeights", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeshCollectionEntry, MaterialVariantsWeights_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialVariantsWeights_MetaData), NewProp_MaterialVariantsWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SubCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariants_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariantsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialOverrideVariantsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_DescriptorSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_DescriptorSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_ISMDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_SMDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsCumulativeWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewProp_MaterialVariantsWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMeshCollectionEntry Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry,
	&NewStructOps,
	"PCGExMeshCollectionEntry",
	Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::PropPointers),
	sizeof(FPCGExMeshCollectionEntry),
	alignof(FPCGExMeshCollectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMeshCollectionEntry *******************************************

// ********** Begin Class UPCGExMeshCollection Function EDITOR_DisableCollisions *******************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Disable collision on all entries. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Disable collision on all entries." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_DisableCollisions constinit property declarations **************
// ********** End Function EDITOR_DisableCollisions constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExMeshCollection, nullptr, "EDITOR_DisableCollisions", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExMeshCollection::execEDITOR_DisableCollisions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_DisableCollisions();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExMeshCollection Function EDITOR_DisableCollisions *********************

// ********** Begin Class UPCGExMeshCollection Function EDITOR_SetDescriptorSourceAll **************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics
{
	struct PCGExMeshCollection_eventEDITOR_SetDescriptorSourceAll_Parms
	{
		EPCGExEntryVariationMode DescriptorSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Set Descriptor source on all entries. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Set Descriptor source on all entries." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_SetDescriptorSourceAll constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_DescriptorSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DescriptorSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EDITOR_SetDescriptorSourceAll constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EDITOR_SetDescriptorSourceAll Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::NewProp_DescriptorSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::NewProp_DescriptorSource = { "DescriptorSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExMeshCollection_eventEDITOR_SetDescriptorSourceAll_Parms, DescriptorSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode, METADATA_PARAMS(0, nullptr) }; // 906909742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::NewProp_DescriptorSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::NewProp_DescriptorSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PropPointers) < 2048);
// ********** End Function EDITOR_SetDescriptorSourceAll Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExMeshCollection, nullptr, "EDITOR_SetDescriptorSourceAll", 	Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PCGExMeshCollection_eventEDITOR_SetDescriptorSourceAll_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::PCGExMeshCollection_eventEDITOR_SetDescriptorSourceAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExMeshCollection::execEDITOR_SetDescriptorSourceAll)
{
	P_GET_ENUM(EPCGExEntryVariationMode,Z_Param_DescriptorSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_SetDescriptorSourceAll(EPCGExEntryVariationMode(Z_Param_DescriptorSource));
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExMeshCollection Function EDITOR_SetDescriptorSourceAll ****************

// ********** Begin Class UPCGExMeshCollection *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMeshCollection;
UClass* UPCGExMeshCollection::GetPrivateStaticClass()
{
	using TClass = UPCGExMeshCollection;
	if (!Z_Registration_Info_UClass_UPCGExMeshCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMeshCollection"),
			Z_Registration_Info_UClass_UPCGExMeshCollection.InnerSingleton,
			StaticRegisterNativesUPCGExMeshCollection,
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
	return Z_Registration_Info_UClass_UPCGExMeshCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMeshCollection_NoRegister()
{
	return UPCGExMeshCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMeshCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Mesh Collection" },
		{ "IncludePath", "Collections/PCGExMeshCollection.h" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDescriptorMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Global descriptor rule. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Global descriptor rule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalISMDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config used when this entry is consumed as an instanced static mesh */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Global ISM Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Config used when this entry is consumed as an instanced static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSMDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config used when this entry is consumed as a regular static mesh primitive (i.e Spline Mesh)*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Global SM Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "ToolTip", "Config used when this entry is consumed as a regular static mesh primitive (i.e Spline Mesh)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExMeshCollection.h" },
		{ "TitleProperty", "DisplayName" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMeshCollection constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalDescriptorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalDescriptorMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalISMDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSMDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMeshCollection constinit property declarations ***********************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EDITOR_DisableCollisions"), .Pointer = &UPCGExMeshCollection::execEDITOR_DisableCollisions },
		{ .NameUTF8 = UTF8TEXT("EDITOR_SetDescriptorSourceAll"), .Pointer = &UPCGExMeshCollection::execEDITOR_SetDescriptorSourceAll },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_DisableCollisions, "EDITOR_DisableCollisions" }, // 1594516937
		{ &Z_Construct_UFunction_UPCGExMeshCollection_EDITOR_SetDescriptorSourceAll, "EDITOR_SetDescriptorSourceAll" }, // 4283296402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMeshCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMeshCollection_Statics

// ********** Begin Class UPCGExMeshCollection Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalDescriptorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalDescriptorMode = { "GlobalDescriptorMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshCollection, GlobalDescriptorMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDescriptorMode_MetaData), NewProp_GlobalDescriptorMode_MetaData) }; // 2170414203
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalISMDescriptor = { "GlobalISMDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshCollection, GlobalISMDescriptor), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalISMDescriptor_MetaData), NewProp_GlobalISMDescriptor_MetaData) }; // 154448738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalSMDescriptor = { "GlobalSMDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshCollection, GlobalSMDescriptor), Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSMDescriptor_MetaData), NewProp_GlobalSMDescriptor_MetaData) }; // 3445229925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry, METADATA_PARAMS(0, nullptr) }; // 3034091139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshCollection, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3034091139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMeshCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalDescriptorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalDescriptorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalISMDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_GlobalSMDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshCollection_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshCollection_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMeshCollection Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPCGExMeshCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExAssetCollection,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMeshCollection_Statics::ClassParams = {
	&UPCGExMeshCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExMeshCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMeshCollection_Statics::Class_MetaDataParams)
};
void UPCGExMeshCollection::StaticRegisterNativesUPCGExMeshCollection()
{
	UClass* Class = UPCGExMeshCollection::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExMeshCollection_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExMeshCollection()
{
	if (!Z_Registration_Info_UClass_UPCGExMeshCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMeshCollection.OuterSingleton, Z_Construct_UClass_UPCGExMeshCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMeshCollection.OuterSingleton;
}
UPCGExMeshCollection::UPCGExMeshCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMeshCollection);
UPCGExMeshCollection::~UPCGExMeshCollection() {}
// ********** End Class UPCGExMeshCollection *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMaterialVariantsMode_StaticEnum, TEXT("EPCGExMaterialVariantsMode"), &Z_Registration_Info_UEnum_EPCGExMaterialVariantsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1041849184U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMaterialOverrideEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics::NewStructOps, TEXT("PCGExMaterialOverrideEntry"),&Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMaterialOverrideEntry), 3652816459U) },
		{ FPCGExMaterialOverrideCollection::StaticStruct, Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics::NewStructOps, TEXT("PCGExMaterialOverrideCollection"),&Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMaterialOverrideCollection), 3618511744U) },
		{ FPCGExMaterialOverrideSingleEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics::NewStructOps, TEXT("PCGExMaterialOverrideSingleEntry"),&Z_Registration_Info_UScriptStruct_FPCGExMaterialOverrideSingleEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMaterialOverrideSingleEntry), 3673829170U) },
		{ FPCGExMeshCollectionEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics::NewStructOps, TEXT("PCGExMeshCollectionEntry"),&Z_Registration_Info_UScriptStruct_FPCGExMeshCollectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMeshCollectionEntry), 3034091139U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMeshCollection, UPCGExMeshCollection::StaticClass, TEXT("UPCGExMeshCollection"), &Z_Registration_Info_UClass_UPCGExMeshCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMeshCollection), 1736617856U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_776650106{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
