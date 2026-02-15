// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExWriteIndex.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWriteIndex() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteIndexSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteIndexSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExNumericOutput();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExWriteIndexSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWriteIndexSettings;
UClass* UPCGExWriteIndexSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWriteIndexSettings;
	if (!Z_Registration_Info_UClass_UPCGExWriteIndexSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWriteIndexSettings"),
			Z_Registration_Info_UClass_UPCGExWriteIndexSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWriteIndexSettings,
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
	return Z_Registration_Info_UClass_UPCGExWriteIndexSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWriteIndexSettings_NoRegister()
{
	return UPCGExWriteIndexSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWriteIndexSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExWriteIndex.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCGExNodeLibraryDoc", "metadata/write-index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputPointIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to write the index of the point on the point. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to write the index of the point on the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write its index to.*/" },
		{ "EditCondition", "bOutputPointIndex" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write its index to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneMinus_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 One Minus" },
		{ "EditCondition", "bOutputPointIndex" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizedEntryIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to write the index as a normalized output value */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Normalized" },
		{ "EditCondition", "bOutputPointIndex" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to write the index as a normalized output value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputCollectionIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output the collection index. .*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output the collection index. ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionIndexAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute/tag to write the collection index to.*/" },
		{ "DisplayName", "Collection Index" },
		{ "EditCondition", "bOutputCollectionIndex" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute/tag to write the collection index to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionIndexOutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Type" },
		{ "EditCondition", "bOutputCollectionIndex" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputCollectionIndexToTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, output the collection index as a tag */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Output to tags" },
		{ "EditCondition", "bOutputCollectionIndex" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, output the collection index as a tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputCollectionNumEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output the collection number of entries .*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output the collection number of entries ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEntriesAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute/tag to write the collection num entries to.*/" },
		{ "DisplayName", "Num Entries" },
		{ "EditCondition", "bOutputCollectionNumEntries" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute/tag to write the collection num entries to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEntriesOutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Type" },
		{ "EditCondition", "bOutputCollectionNumEntries" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeNumEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, output the normalized collection num entries to the points */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Normalized" },
		{ "EditCondition", "bOutputCollectionNumEntries" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, output the normalized collection num entries to the points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputNumEntriesToTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, output the collection num entries as a tag */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Output to tags" },
		{ "EditCondition", "bOutputCollectionNumEntries" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, output the collection num entries as a tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterpolation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the created attributes allows interpolation or not.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether the created attributes allows interpolation or not." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWriteIndexSettings constinit property declarations *****************
	static void NewProp_bOutputPointIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputPointIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
	static void NewProp_bOneMinus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneMinus;
	static void NewProp_bNormalizedEntryIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizedEntryIndex;
	static void NewProp_bOutputCollectionIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputCollectionIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollectionIndexAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollectionIndexOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollectionIndexOutputType;
	static void NewProp_bOutputCollectionIndexToTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputCollectionIndexToTags;
	static void NewProp_bOutputCollectionNumEntries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputCollectionNumEntries;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumEntriesAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumEntriesOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumEntriesOutputType;
	static void NewProp_bNormalizeNumEntries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeNumEntries;
	static void NewProp_bOutputNumEntriesToTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputNumEntriesToTags;
	static void NewProp_bAllowInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWriteIndexSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWriteIndexSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWriteIndexSettings_Statics

// ********** Begin Class UPCGExWriteIndexSettings Property Definitions ****************************
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputPointIndex_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOutputPointIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputPointIndex = { "bOutputPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputPointIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputPointIndex_MetaData), NewProp_bOutputPointIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteIndexSettings, OutputAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputAttributeName_MetaData), NewProp_OutputAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOneMinus_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOneMinus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOneMinus = { "bOneMinus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOneMinus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneMinus_MetaData), NewProp_bOneMinus_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizedEntryIndex_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bNormalizedEntryIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizedEntryIndex = { "bNormalizedEntryIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizedEntryIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizedEntryIndex_MetaData), NewProp_bNormalizedEntryIndex_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndex_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOutputCollectionIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndex = { "bOutputCollectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputCollectionIndex_MetaData), NewProp_bOutputCollectionIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexAttributeName = { "CollectionIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteIndexSettings, CollectionIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionIndexAttributeName_MetaData), NewProp_CollectionIndexAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexOutputType = { "CollectionIndexOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteIndexSettings, CollectionIndexOutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExNumericOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionIndexOutputType_MetaData), NewProp_CollectionIndexOutputType_MetaData) }; // 3660870052
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndexToTags_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOutputCollectionIndexToTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndexToTags = { "bOutputCollectionIndexToTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndexToTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputCollectionIndexToTags_MetaData), NewProp_bOutputCollectionIndexToTags_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionNumEntries_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOutputCollectionNumEntries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionNumEntries = { "bOutputCollectionNumEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionNumEntries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputCollectionNumEntries_MetaData), NewProp_bOutputCollectionNumEntries_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesAttributeName = { "NumEntriesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteIndexSettings, NumEntriesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEntriesAttributeName_MetaData), NewProp_NumEntriesAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesOutputType = { "NumEntriesOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteIndexSettings, NumEntriesOutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExNumericOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEntriesOutputType_MetaData), NewProp_NumEntriesOutputType_MetaData) }; // 3660870052
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizeNumEntries_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bNormalizeNumEntries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizeNumEntries = { "bNormalizeNumEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizeNumEntries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeNumEntries_MetaData), NewProp_bNormalizeNumEntries_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputNumEntriesToTags_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bOutputNumEntriesToTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputNumEntriesToTags = { "bOutputNumEntriesToTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputNumEntriesToTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNumEntriesToTags_MetaData), NewProp_bOutputNumEntriesToTags_MetaData) };
void Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bAllowInterpolation_SetBit(void* Obj)
{
	((UPCGExWriteIndexSettings*)Obj)->bAllowInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bAllowInterpolation = { "bAllowInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteIndexSettings), &Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bAllowInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInterpolation_MetaData), NewProp_bAllowInterpolation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_OutputAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOneMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizedEntryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_CollectionIndexOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionIndexToTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputCollectionNumEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_NumEntriesOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bNormalizeNumEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bOutputNumEntriesToTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::NewProp_bAllowInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWriteIndexSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::ClassParams = {
	&UPCGExWriteIndexSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::Class_MetaDataParams)
};
void UPCGExWriteIndexSettings::StaticRegisterNativesUPCGExWriteIndexSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWriteIndexSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWriteIndexSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWriteIndexSettings.OuterSingleton, Z_Construct_UClass_UPCGExWriteIndexSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWriteIndexSettings.OuterSingleton;
}
UPCGExWriteIndexSettings::UPCGExWriteIndexSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWriteIndexSettings);
UPCGExWriteIndexSettings::~UPCGExWriteIndexSettings() {}
// ********** End Class UPCGExWriteIndexSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteIndex_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWriteIndexSettings, UPCGExWriteIndexSettings::StaticClass, TEXT("UPCGExWriteIndexSettings"), &Z_Registration_Info_UClass_UPCGExWriteIndexSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWriteIndexSettings), 3548133537U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteIndex_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteIndex_h__Script_PCGExtendedToolkit_2555447330{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
