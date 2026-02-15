// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExAttributesToTags.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributesToTags() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributesToTagsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributesToTagsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAttributeToTagsAction ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction;
static UEnum* EPCGExAttributeToTagsAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttributeToTagsAction"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeToTagsAction>()
{
	return EPCGExAttributeToTagsAction_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddTags.DisplayName", "Hoist to Tags" },
		{ "AddTags.Name", "EPCGExAttributeToTagsAction::AddTags" },
		{ "AddTags.ToolTip", "Hoist element attribute value as data tags" },
		{ "Attribute.DisplayName", "Hoist to Attribute Set" },
		{ "Attribute.Name", "EPCGExAttributeToTagsAction::Attribute" },
		{ "Attribute.ToolTip", "Output to a new attribute set" },
		{ "Data.DisplayName", "Hoist to @Data" },
		{ "Data.Name", "EPCGExAttributeToTagsAction::Data" },
		{ "Data.ToolTip", "Hoist element attribute values to @Data domain" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttributeToTagsAction::AddTags", (int64)EPCGExAttributeToTagsAction::AddTags },
		{ "EPCGExAttributeToTagsAction::Attribute", (int64)EPCGExAttributeToTagsAction::Attribute },
		{ "EPCGExAttributeToTagsAction::Data", (int64)EPCGExAttributeToTagsAction::Data },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttributeToTagsAction",
	"EPCGExAttributeToTagsAction",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction.InnerSingleton;
}
// ********** End Enum EPCGExAttributeToTagsAction *************************************************

// ********** Begin Enum EPCGExAttributeToTagsResolution *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution;
static UEnum* EPCGExAttributeToTagsResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttributeToTagsResolution"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeToTagsResolution>()
{
	return EPCGExAttributeToTagsResolution_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CollectionToCollection.DisplayName", "Collection to Collection" },
		{ "CollectionToCollection.Name", "EPCGExAttributeToTagsResolution::CollectionToCollection" },
		{ "CollectionToCollection.ToolTip", "Matches a single entry per source to matching collection (requires the same number of collections in both pins)" },
		{ "EntryToCollection.DisplayName", "Entry to Collection" },
		{ "EntryToCollection.Name", "EPCGExAttributeToTagsResolution::EntryToCollection" },
		{ "EntryToCollection.ToolTip", "Matches a Source entries to each input collection" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "Self.DisplayName", "Self" },
		{ "Self.Name", "EPCGExAttributeToTagsResolution::Self" },
		{ "Self.ToolTip", "Matches a single entry to each input collection, from itself" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttributeToTagsResolution::Self", (int64)EPCGExAttributeToTagsResolution::Self },
		{ "EPCGExAttributeToTagsResolution::EntryToCollection", (int64)EPCGExAttributeToTagsResolution::EntryToCollection },
		{ "EPCGExAttributeToTagsResolution::CollectionToCollection", (int64)EPCGExAttributeToTagsResolution::CollectionToCollection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttributeToTagsResolution",
	"EPCGExAttributeToTagsResolution",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution.InnerSingleton;
}
// ********** End Enum EPCGExAttributeToTagsResolution *********************************************

// ********** Begin Enum EPCGExCollectionEntrySelection ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection;
static UEnum* EPCGExCollectionEntrySelection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCollectionEntrySelection"));
	}
	return Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCollectionEntrySelection>()
{
	return EPCGExCollectionEntrySelection_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FirstIndex.DisplayName", "First Entry" },
		{ "FirstIndex.Name", "EPCGExCollectionEntrySelection::FirstIndex" },
		{ "FirstIndex.ToolTip", "Uses the first entry in the matching collection" },
		{ "LastIndex.DisplayName", "Last Entry" },
		{ "LastIndex.Name", "EPCGExCollectionEntrySelection::LastIndex" },
		{ "LastIndex.ToolTip", "Uses the last entry in the matching collection" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "Picker.DisplayName", "Picker" },
		{ "Picker.Name", "EPCGExCollectionEntrySelection::Picker" },
		{ "Picker.ToolTip", "Uses pickers to select indices that will be turned into tags" },
		{ "PickerFirst.DisplayName", "Picker (First)" },
		{ "PickerFirst.Name", "EPCGExCollectionEntrySelection::PickerFirst" },
		{ "PickerFirst.ToolTip", "Uses the first valid index using pickers" },
		{ "PickerLast.DisplayName", "Picker (Last)" },
		{ "PickerLast.Name", "EPCGExCollectionEntrySelection::PickerLast" },
		{ "PickerLast.ToolTip", "Uses the last valid index using pickers" },
		{ "RandomIndex.DisplayName", "Random Entry" },
		{ "RandomIndex.Name", "EPCGExCollectionEntrySelection::RandomIndex" },
		{ "RandomIndex.ToolTip", "Uses a random entry in the matching collection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCollectionEntrySelection::FirstIndex", (int64)EPCGExCollectionEntrySelection::FirstIndex },
		{ "EPCGExCollectionEntrySelection::LastIndex", (int64)EPCGExCollectionEntrySelection::LastIndex },
		{ "EPCGExCollectionEntrySelection::RandomIndex", (int64)EPCGExCollectionEntrySelection::RandomIndex },
		{ "EPCGExCollectionEntrySelection::Picker", (int64)EPCGExCollectionEntrySelection::Picker },
		{ "EPCGExCollectionEntrySelection::PickerFirst", (int64)EPCGExCollectionEntrySelection::PickerFirst },
		{ "EPCGExCollectionEntrySelection::PickerLast", (int64)EPCGExCollectionEntrySelection::PickerLast },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCollectionEntrySelection",
	"EPCGExCollectionEntrySelection",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection.InnerSingleton;
}
// ********** End Enum EPCGExCollectionEntrySelection **********************************************

// ********** Begin Class UPCGExAttributesToTagsSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings;
UClass* UPCGExAttributesToTagsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributesToTagsSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributesToTagsSettings"),
			Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributesToTagsSettings,
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
	return Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributesToTagsSettings_NoRegister()
{
	return UPCGExAttributesToTagsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExAttributesToTags.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "PCGExNodeLibraryDoc", "misc/attributes-to-tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Action. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "ToolTip", "Action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Resolution mode. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "ToolTip", "Resolution mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Selection mode. */" },
		{ "EditCondition", "Resolution != EPCGExAttributeToTagsResolution::EntryToCollection" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "ToolTip", "Selection mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrefixWithAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, prefix the attribute value with the attribute name  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "ToolTip", "If enabled, prefix the attribute value with the attribute name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes which value will be used as tags. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "ToolTip", "Attributes which value will be used as tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedAttributeSelectors_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of selectors separated by a comma, for easy overrides. Will be appended to the existing array.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A list of selectors separated by a comma, for easy overrides. Will be appended to the existing array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTooManyCollectionsWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributesToTags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributesToTagsSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Selection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Selection;
	static void NewProp_bPrefixWithAttributeName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefixWithAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedAttributeSelectors;
	static void NewProp_bQuietTooManyCollectionsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTooManyCollectionsWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributesToTagsSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributesToTagsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics

// ********** Begin Class UPCGExAttributesToTagsSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributesToTagsSettings, Action), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) }; // 1821384386
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributesToTagsSettings, Resolution), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeToTagsResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) }; // 2503818415
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Selection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributesToTagsSettings, Selection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionEntrySelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) }; // 3173545912
void Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bPrefixWithAttributeName_SetBit(void* Obj)
{
	((UPCGExAttributesToTagsSettings*)Obj)->bPrefixWithAttributeName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bPrefixWithAttributeName = { "bPrefixWithAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributesToTagsSettings), &Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bPrefixWithAttributeName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrefixWithAttributeName_MetaData), NewProp_bPrefixWithAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 3844583698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributesToTagsSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 3844583698
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_CommaSeparatedAttributeSelectors = { "CommaSeparatedAttributeSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributesToTagsSettings, CommaSeparatedAttributeSelectors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedAttributeSelectors_MetaData), NewProp_CommaSeparatedAttributeSelectors_MetaData) };
void Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bQuietTooManyCollectionsWarning_SetBit(void* Obj)
{
	((UPCGExAttributesToTagsSettings*)Obj)->bQuietTooManyCollectionsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bQuietTooManyCollectionsWarning = { "bQuietTooManyCollectionsWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributesToTagsSettings), &Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bQuietTooManyCollectionsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTooManyCollectionsWarning_MetaData), NewProp_bQuietTooManyCollectionsWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Selection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Selection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bPrefixWithAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_CommaSeparatedAttributeSelectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::NewProp_bQuietTooManyCollectionsWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributesToTagsSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::ClassParams = {
	&UPCGExAttributesToTagsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributesToTagsSettings::StaticRegisterNativesUPCGExAttributesToTagsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributesToTagsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings.OuterSingleton;
}
UPCGExAttributesToTagsSettings::UPCGExAttributesToTagsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributesToTagsSettings);
UPCGExAttributesToTagsSettings::~UPCGExAttributesToTagsSettings() {}
// ********** End Class UPCGExAttributesToTagsSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAttributeToTagsAction_StaticEnum, TEXT("EPCGExAttributeToTagsAction"), &Z_Registration_Info_UEnum_EPCGExAttributeToTagsAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1821384386U) },
		{ EPCGExAttributeToTagsResolution_StaticEnum, TEXT("EPCGExAttributeToTagsResolution"), &Z_Registration_Info_UEnum_EPCGExAttributeToTagsResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2503818415U) },
		{ EPCGExCollectionEntrySelection_StaticEnum, TEXT("EPCGExCollectionEntrySelection"), &Z_Registration_Info_UEnum_EPCGExCollectionEntrySelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3173545912U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributesToTagsSettings, UPCGExAttributesToTagsSettings::StaticClass, TEXT("UPCGExAttributesToTagsSettings"), &Z_Registration_Info_UClass_UPCGExAttributesToTagsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributesToTagsSettings), 2801025649U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_484901500{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
