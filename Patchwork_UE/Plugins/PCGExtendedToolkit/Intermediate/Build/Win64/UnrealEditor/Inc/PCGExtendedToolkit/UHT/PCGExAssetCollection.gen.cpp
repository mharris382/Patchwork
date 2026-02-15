// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collections/PCGExAssetCollection.h"
#include "Transform/PCGExFitting.h"
#include "Transform/PCGExTransform.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAssetCollection() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetStagingData();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariations();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocket();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExAssetStagingData ********************************************
struct Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetStagingData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetStagingData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Asset Staging Data" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of socket attached to this entry. Maintained automatically, but support user-defined entries. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "A list of socket attached to this entry. Maintained automatically, but support user-defined entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The bounds of this entry. This is computed automatically and cannot be edited. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "The bounds of this entry. This is computed automatically and cannot be edited." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetStagingData constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InternalIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetStagingData constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetStagingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData;
class UScriptStruct* FPCGExAssetStagingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetStagingData, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetStagingData"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetStagingData Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_InternalIndex = { "InternalIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetStagingData, InternalIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalIndex_MetaData), NewProp_InternalIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetStagingData, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) }; // 2425717601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExSocket, METADATA_PARAMS(0, nullptr) }; // 61619117
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetStagingData, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sockets_MetaData), NewProp_Sockets_MetaData) }; // 61619117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetStagingData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_InternalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Sockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Sockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetStagingData Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetStagingData",
	Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::PropPointers),
	sizeof(FPCGExAssetStagingData),
	alignof(FPCGExAssetStagingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetStagingData()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetStagingData **********************************************

// ********** Begin ScriptStruct FPCGExAssetCollectionEntryMisc ************************************
struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetCollectionEntryMisc); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetCollectionEntryMisc); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Asset Collection Entry Misc" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetCollectionEntryMisc constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetCollectionEntryMisc constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetCollectionEntryMisc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc;
class UScriptStruct* FPCGExAssetCollectionEntryMisc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetCollectionEntryMisc"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetCollectionEntryMisc Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::NewProp_ColorKey = { "ColorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntryMisc, ColorKey), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorKey_MetaData), NewProp_ColorKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::NewProp_ColorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetCollectionEntryMisc Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetCollectionEntryMisc",
	Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::PropPointers),
	sizeof(FPCGExAssetCollectionEntryMisc),
	alignof(FPCGExAssetCollectionEntryMisc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetCollectionEntryMisc **************************************

// ********** Begin ScriptStruct FPCGExAssetCollectionEntry ****************************************
struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetCollectionEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetCollectionEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Asset Collection Entry" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSubCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Variations" },
		{ "EditCondition", "!bIsSubCollection && VariationMode == EPCGExEntryVariationMode::Local" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Staging_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalSubCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetCollectionEntry constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static void NewProp_bIsSubCollection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSubCollection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VariationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VariationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Staging;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalSubCollection;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetCollectionEntry constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetCollectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry;
class UScriptStruct* FPCGExAssetCollectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetCollectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetCollectionEntry Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_bIsSubCollection_SetBit(void* Obj)
{
	((FPCGExAssetCollectionEntry*)Obj)->bIsSubCollection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_bIsSubCollection = { "bIsSubCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAssetCollectionEntry), &Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_bIsSubCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSubCollection_MetaData), NewProp_bIsSubCollection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_VariationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_VariationMode = { "VariationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, VariationMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationMode_MetaData), NewProp_VariationMode_MetaData) }; // 906909742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, Variations), Z_Construct_UScriptStruct_FPCGExFittingVariations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variations_MetaData), NewProp_Variations_MetaData) }; // 3894520958
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Staging = { "Staging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, Staging), Z_Construct_UScriptStruct_FPCGExAssetStagingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Staging_MetaData), NewProp_Staging_MetaData) }; // 3751599692
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_InternalSubCollection = { "InternalSubCollection", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, InternalSubCollection), Z_Construct_UClass_UPCGExAssetCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalSubCollection_MetaData), NewProp_InternalSubCollection_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetCollectionEntry, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_bIsSubCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_VariationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_VariationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Variations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Tags_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_Staging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_InternalSubCollection,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetCollectionEntry Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetCollectionEntry",
	Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::PropPointers),
	sizeof(FPCGExAssetCollectionEntry),
	alignof(FPCGExAssetCollectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetCollectionEntry ******************************************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_AddBrowserSelection ****************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Add Content Browser selection to this collection. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Add Content Browser selection to this collection." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_AddBrowserSelection constinit property declarations ************
// ********** End Function EDITOR_AddBrowserSelection constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_AddBrowserSelection", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_AddBrowserSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_AddBrowserSelection();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_AddBrowserSelection ******************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_MultWeight10 ***********************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Multiplies all weights by 10 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Multiplies all weights by 10" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_MultWeight10 constinit property declarations *******************
// ********** End Function EDITOR_MultWeight10 constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_MultWeight10", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_MultWeight10)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_MultWeight10();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_MultWeight10 *************************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_MultWeight2 ************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Multiplies all weights by 2 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Multiplies all weights by 2" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_MultWeight2 constinit property declarations ********************
// ********** End Function EDITOR_MultWeight2 constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_MultWeight2", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_MultWeight2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_MultWeight2();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_MultWeight2 **************************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_NormalizedWeightToSum **************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Normalize weight sum to 100 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Normalize weight sum to 100" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_NormalizedWeightToSum constinit property declarations **********
// ********** End Function EDITOR_NormalizedWeightToSum constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_NormalizedWeightToSum", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_NormalizedWeightToSum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_NormalizedWeightToSum();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_NormalizedWeightToSum ****************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_PadWeight **************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Add 1 to all weights so it's easier to weight down some assets */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Add 1 to all weights so it's easier to weight down some assets" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_PadWeight constinit property declarations **********************
// ********** End Function EDITOR_PadWeight constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_PadWeight", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_PadWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_PadWeight();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_PadWeight ****************************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_RebuildStagingData *****************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Rebuild Staging data just for this collection. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Rebuild Staging data just for this collection." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_RebuildStagingData constinit property declarations *************
// ********** End Function EDITOR_RebuildStagingData constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_RebuildStagingData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_RebuildStagingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_RebuildStagingData();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_RebuildStagingData *******************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_RebuildStagingData_Project *********
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Rebuild Staging data for all collection within this project. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Rebuild Staging data for all collection within this project." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_RebuildStagingData_Project constinit property declarations *****
// ********** End Function EDITOR_RebuildStagingData_Project constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_RebuildStagingData_Project", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_RebuildStagingData_Project)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_RebuildStagingData_Project();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_RebuildStagingData_Project ***********

// ********** Begin Class UPCGExAssetCollection Function EDITOR_RebuildStagingData_Recursive *******
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Rebuild Staging data for this collection and its sub-collections, recursively. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Rebuild Staging data for this collection and its sub-collections, recursively." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_RebuildStagingData_Recursive constinit property declarations ***
// ********** End Function EDITOR_RebuildStagingData_Recursive constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_RebuildStagingData_Recursive", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_RebuildStagingData_Recursive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_RebuildStagingData_Recursive();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_RebuildStagingData_Recursive *********

// ********** Begin Class UPCGExAssetCollection Function EDITOR_SetWeightIndex *********************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Sort collection by weights in descending order. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Sort collection by weights in descending order." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_SetWeightIndex constinit property declarations *****************
// ********** End Function EDITOR_SetWeightIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_SetWeightIndex", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_SetWeightIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_SetWeightIndex();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_SetWeightIndex ***********************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_SortByWeightAscending **************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sort collection by weights in ascending order. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Sort collection by weights in ascending order." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_SortByWeightAscending constinit property declarations **********
// ********** End Function EDITOR_SortByWeightAscending constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_SortByWeightAscending", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_SortByWeightAscending)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_SortByWeightAscending();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_SortByWeightAscending ****************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_SortByWeightDescending *************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sort collection by weights in descending order. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Sort collection by weights in descending order." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_SortByWeightDescending constinit property declarations *********
// ********** End Function EDITOR_SortByWeightDescending constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_SortByWeightDescending", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_SortByWeightDescending)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_SortByWeightDescending();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_SortByWeightDescending ***************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_WeightOne **************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reset all weights to 100 */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Reset all weights to 100" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_WeightOne constinit property declarations **********************
// ********** End Function EDITOR_WeightOne constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_WeightOne", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_WeightOne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_WeightOne();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_WeightOne ****************************

// ********** Begin Class UPCGExAssetCollection Function EDITOR_WeightRandom ***********************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Assign random weights to items */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Assign random weights to items" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_WeightRandom constinit property declarations *******************
// ********** End Function EDITOR_WeightRandom constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExAssetCollection, nullptr, "EDITOR_WeightRandom", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExAssetCollection::execEDITOR_WeightRandom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_WeightRandom();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExAssetCollection Function EDITOR_WeightRandom *************************

// ********** Begin Class UPCGExAssetCollection ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAssetCollection;
UClass* UPCGExAssetCollection::GetPrivateStaticClass()
{
	using TClass = UPCGExAssetCollection;
	if (!Z_Registration_Info_UClass_UPCGExAssetCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAssetCollection"),
			Z_Registration_Info_UClass_UPCGExAssetCollection.InnerSingleton,
			StaticRegisterNativesUPCGExAssetCollection,
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
	return Z_Registration_Info_UClass_UPCGExAssetCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister()
{
	return UPCGExAssetCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAssetCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Asset Collection" },
		{ "IncludePath", "Collections/PCGExAssetCollection.h" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dev notes/comments. Editor-only data.  */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "MultiLine", "" },
		{ "ToolTip", "Dev notes/comments. Editor-only data." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Collection tags */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Collection tags" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRebuildStaging_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Global variations rule. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Global variations rule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Global variation settings. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "Global variation settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotIgnoreInvalidEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, empty mesh will still be weighted and picked as valid entries, instead of being ignored. */" },
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
		{ "ToolTip", "If enabled, empty mesh will still be weighted and picked as valid entries, instead of being ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheNeedsRebuild_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collections/PCGExAssetCollection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAssetCollection constinit property declarations ********************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollectionTags_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CollectionTags;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAutoRebuildStaging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRebuildStaging;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalVariationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalVariationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariations;
	static void NewProp_bDoNotIgnoreInvalidEntries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotIgnoreInvalidEntries;
	static void NewProp_bCacheNeedsRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheNeedsRebuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAssetCollection constinit property declarations **********************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EDITOR_AddBrowserSelection"), .Pointer = &UPCGExAssetCollection::execEDITOR_AddBrowserSelection },
		{ .NameUTF8 = UTF8TEXT("EDITOR_MultWeight10"), .Pointer = &UPCGExAssetCollection::execEDITOR_MultWeight10 },
		{ .NameUTF8 = UTF8TEXT("EDITOR_MultWeight2"), .Pointer = &UPCGExAssetCollection::execEDITOR_MultWeight2 },
		{ .NameUTF8 = UTF8TEXT("EDITOR_NormalizedWeightToSum"), .Pointer = &UPCGExAssetCollection::execEDITOR_NormalizedWeightToSum },
		{ .NameUTF8 = UTF8TEXT("EDITOR_PadWeight"), .Pointer = &UPCGExAssetCollection::execEDITOR_PadWeight },
		{ .NameUTF8 = UTF8TEXT("EDITOR_RebuildStagingData"), .Pointer = &UPCGExAssetCollection::execEDITOR_RebuildStagingData },
		{ .NameUTF8 = UTF8TEXT("EDITOR_RebuildStagingData_Project"), .Pointer = &UPCGExAssetCollection::execEDITOR_RebuildStagingData_Project },
		{ .NameUTF8 = UTF8TEXT("EDITOR_RebuildStagingData_Recursive"), .Pointer = &UPCGExAssetCollection::execEDITOR_RebuildStagingData_Recursive },
		{ .NameUTF8 = UTF8TEXT("EDITOR_SetWeightIndex"), .Pointer = &UPCGExAssetCollection::execEDITOR_SetWeightIndex },
		{ .NameUTF8 = UTF8TEXT("EDITOR_SortByWeightAscending"), .Pointer = &UPCGExAssetCollection::execEDITOR_SortByWeightAscending },
		{ .NameUTF8 = UTF8TEXT("EDITOR_SortByWeightDescending"), .Pointer = &UPCGExAssetCollection::execEDITOR_SortByWeightDescending },
		{ .NameUTF8 = UTF8TEXT("EDITOR_WeightOne"), .Pointer = &UPCGExAssetCollection::execEDITOR_WeightOne },
		{ .NameUTF8 = UTF8TEXT("EDITOR_WeightRandom"), .Pointer = &UPCGExAssetCollection::execEDITOR_WeightRandom },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_AddBrowserSelection, "EDITOR_AddBrowserSelection" }, // 3749885234
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight10, "EDITOR_MultWeight10" }, // 74503634
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_MultWeight2, "EDITOR_MultWeight2" }, // 3711039018
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_NormalizedWeightToSum, "EDITOR_NormalizedWeightToSum" }, // 592680099
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_PadWeight, "EDITOR_PadWeight" }, // 4203142275
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData, "EDITOR_RebuildStagingData" }, // 2296155068
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Project, "EDITOR_RebuildStagingData_Project" }, // 4113712130
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_RebuildStagingData_Recursive, "EDITOR_RebuildStagingData_Recursive" }, // 2931299433
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SetWeightIndex, "EDITOR_SetWeightIndex" }, // 4246879272
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightAscending, "EDITOR_SortByWeightAscending" }, // 3117814836
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_SortByWeightDescending, "EDITOR_SortByWeightDescending" }, // 2725787098
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightOne, "EDITOR_WeightOne" }, // 745630636
		{ &Z_Construct_UFunction_UPCGExAssetCollection_EDITOR_WeightRandom, "EDITOR_WeightRandom" }, // 2270679696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAssetCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAssetCollection_Statics

// ********** Begin Class UPCGExAssetCollection Property Definitions *******************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollection, Notes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notes_MetaData), NewProp_Notes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_CollectionTags_ElementProp = { "CollectionTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_CollectionTags = { "CollectionTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollection, CollectionTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionTags_MetaData), NewProp_CollectionTags_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bAutoRebuildStaging_SetBit(void* Obj)
{
	((UPCGExAssetCollection*)Obj)->bAutoRebuildStaging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bAutoRebuildStaging = { "bAutoRebuildStaging", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollection), &Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bAutoRebuildStaging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRebuildStaging_MetaData), NewProp_bAutoRebuildStaging_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariationMode = { "GlobalVariationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollection, GlobalVariationMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariationMode_MetaData), NewProp_GlobalVariationMode_MetaData) }; // 2170414203
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariations = { "GlobalVariations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollection, GlobalVariations), Z_Construct_UScriptStruct_FPCGExFittingVariations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariations_MetaData), NewProp_GlobalVariations_MetaData) }; // 3894520958
void Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bDoNotIgnoreInvalidEntries_SetBit(void* Obj)
{
	((UPCGExAssetCollection*)Obj)->bDoNotIgnoreInvalidEntries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bDoNotIgnoreInvalidEntries = { "bDoNotIgnoreInvalidEntries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollection), &Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bDoNotIgnoreInvalidEntries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotIgnoreInvalidEntries_MetaData), NewProp_bDoNotIgnoreInvalidEntries_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bCacheNeedsRebuild_SetBit(void* Obj)
{
	((UPCGExAssetCollection*)Obj)->bCacheNeedsRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bCacheNeedsRebuild = { "bCacheNeedsRebuild", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollection), &Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bCacheNeedsRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheNeedsRebuild_MetaData), NewProp_bCacheNeedsRebuild_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAssetCollection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_Notes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_CollectionTags_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_CollectionTags,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bAutoRebuildStaging,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_GlobalVariations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bDoNotIgnoreInvalidEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollection_Statics::NewProp_bCacheNeedsRebuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollection_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAssetCollection Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UPCGExAssetCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAssetCollection_Statics::ClassParams = {
	&UPCGExAssetCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExAssetCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollection_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAssetCollection_Statics::Class_MetaDataParams)
};
void UPCGExAssetCollection::StaticRegisterNativesUPCGExAssetCollection()
{
	UClass* Class = UPCGExAssetCollection::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExAssetCollection_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExAssetCollection()
{
	if (!Z_Registration_Info_UClass_UPCGExAssetCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAssetCollection.OuterSingleton, Z_Construct_UClass_UPCGExAssetCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAssetCollection.OuterSingleton;
}
UPCGExAssetCollection::UPCGExAssetCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAssetCollection);
UPCGExAssetCollection::~UPCGExAssetCollection() {}
// ********** End Class UPCGExAssetCollection ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAssetStagingData::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics::NewStructOps, TEXT("PCGExAssetStagingData"),&Z_Registration_Info_UScriptStruct_FPCGExAssetStagingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetStagingData), 3751599692U) },
		{ FPCGExAssetCollectionEntryMisc::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics::NewStructOps, TEXT("PCGExAssetCollectionEntryMisc"),&Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntryMisc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetCollectionEntryMisc), 3925530085U) },
		{ FPCGExAssetCollectionEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics::NewStructOps, TEXT("PCGExAssetCollectionEntry"),&Z_Registration_Info_UScriptStruct_FPCGExAssetCollectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetCollectionEntry), 2932114951U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAssetCollection, UPCGExAssetCollection::StaticClass, TEXT("UPCGExAssetCollection"), &Z_Registration_Info_UClass_UPCGExAssetCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAssetCollection), 1731785726U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_3671670163{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
