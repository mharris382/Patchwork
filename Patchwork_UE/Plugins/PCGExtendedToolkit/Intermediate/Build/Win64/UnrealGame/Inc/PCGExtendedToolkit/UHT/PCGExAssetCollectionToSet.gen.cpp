// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetStaging/PCGExAssetCollectionToSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAssetCollectionToSet() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollectionToSetSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSubCollectionToSet **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSubCollectionToSet;
static UEnum* EPCGExSubCollectionToSet_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSubCollectionToSet"));
	}
	return Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubCollectionToSet>()
{
	return EPCGExSubCollectionToSet_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Expand.DisplayName", "Expand" },
		{ "Expand.Name", "EPCGExSubCollectionToSet::Expand" },
		{ "Expand.Tooltip", "Expand the entire sub-collection" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EPCGExSubCollectionToSet::Ignore" },
		{ "Ignore.Tooltip", "Ignore sub-collections" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PickFirstItem.DisplayName", "First item" },
		{ "PickFirstItem.Name", "EPCGExSubCollectionToSet::PickFirstItem" },
		{ "PickFirstItem.Tooltip", "Pick the first item" },
		{ "PickLastItem.DisplayName", "Last item" },
		{ "PickLastItem.Name", "EPCGExSubCollectionToSet::PickLastItem" },
		{ "PickLastItem.Tooltip", "Pick the last item" },
		{ "PickRandom.DisplayName", "Random" },
		{ "PickRandom.Name", "EPCGExSubCollectionToSet::PickRandom" },
		{ "PickRandom.Tooltip", "Pick one at random" },
		{ "PickRandomWeighted.DisplayName", "Random weighted" },
		{ "PickRandomWeighted.Name", "EPCGExSubCollectionToSet::PickRandomWeighted" },
		{ "PickRandomWeighted.Tooltip", "Pick one at random, weighted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSubCollectionToSet::Ignore", (int64)EPCGExSubCollectionToSet::Ignore },
		{ "EPCGExSubCollectionToSet::Expand", (int64)EPCGExSubCollectionToSet::Expand },
		{ "EPCGExSubCollectionToSet::PickRandom", (int64)EPCGExSubCollectionToSet::PickRandom },
		{ "EPCGExSubCollectionToSet::PickRandomWeighted", (int64)EPCGExSubCollectionToSet::PickRandomWeighted },
		{ "EPCGExSubCollectionToSet::PickFirstItem", (int64)EPCGExSubCollectionToSet::PickFirstItem },
		{ "EPCGExSubCollectionToSet::PickLastItem", (int64)EPCGExSubCollectionToSet::PickLastItem },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSubCollectionToSet",
	"EPCGExSubCollectionToSet",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSubCollectionToSet.InnerSingleton;
}
// ********** End Enum EPCGExSubCollectionToSet ****************************************************

// ********** Begin Class UPCGExAssetCollectionToSetSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings;
UClass* UPCGExAssetCollectionToSetSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAssetCollectionToSetSettings;
	if (!Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAssetCollectionToSetSettings"),
			Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAssetCollectionToSetSettings,
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
	return Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_NoRegister()
{
	return UPCGExAssetCollectionToSetSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCGExNodeLibraryDoc", "assets-management/asset-collection-to-set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The asset collection to convert to an attribute set */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The asset collection to convert to an attribute set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCollectionHandling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute names */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows duplicate entries (duplicate is same object path & category) */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, allows duplicate entries (duplicate is same object path & category)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitInvalidAndEmpty_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invalid or empty entries are removed from the output */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invalid or empty entries are removed from the output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAssetPath_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAssetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset path to be staged */" },
		{ "DisplayName", "Asset Path" },
		{ "EditCondition", "bWriteAssetPath" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset path to be staged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteWeight_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset weight, if any. */" },
		{ "DisplayName", "Weight" },
		{ "EditCondition", "bWriteWeight" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset weight, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCategory_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset category, if any. */" },
		{ "DisplayName", "Category" },
		{ "EditCondition", "bWriteCategory" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset category, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteExtents_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentsAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset bounds' Extents, if any. Otherwise 0 */" },
		{ "DisplayName", "Extents" },
		{ "EditCondition", "bWriteExtents" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset bounds' Extents, if any. Otherwise 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundsMin_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMinAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset BoundsMin, if any. Otherwise 0 */" },
		{ "DisplayName", "BoundsMin" },
		{ "EditCondition", "bWriteBoundsMin" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset BoundsMin, if any. Otherwise 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundsMax_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaxAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset BoundsMax, if any. Otherwise 0 */" },
		{ "DisplayName", "BoundsMax" },
		{ "EditCondition", "bWriteBoundsMax" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset BoundsMax, if any. Otherwise 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNestingDepth_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NestingDepthAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset depth, if any. Otherwise -1 */" },
		{ "DisplayName", "Nesting Depth" },
		{ "EditCondition", "bWriteNestingDepth" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetCollectionToSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset depth, if any. Otherwise -1" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAssetCollectionToSetSettings constinit property declarations *******
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetCollection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubCollectionHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubCollectionHandling;
	static void NewProp_bAllowDuplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
	static void NewProp_bOmitInvalidAndEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitInvalidAndEmpty;
	static void NewProp_bWriteAssetPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAssetPath;
	static void NewProp_bWriteAssetClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAssetClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetClassAttributeName;
	static void NewProp_bWriteWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightAttributeName;
	static void NewProp_bWriteCategory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCategory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryAttributeName;
	static void NewProp_bWriteExtents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteExtents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExtentsAttributeName;
	static void NewProp_bWriteBoundsMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundsMin;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundsMinAttributeName;
	static void NewProp_bWriteBoundsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundsMax;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundsMaxAttributeName;
	static void NewProp_bWriteNestingDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNestingDepth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NestingDepthAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAssetCollectionToSetSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAssetCollectionToSetSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics

// ********** Begin Class UPCGExAssetCollectionToSetSettings Property Definitions ******************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, AssetCollection), Z_Construct_UClass_UPCGExAssetCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCollection_MetaData), NewProp_AssetCollection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_SubCollectionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_SubCollectionHandling = { "SubCollectionHandling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, SubCollectionHandling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubCollectionToSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCollectionHandling_MetaData), NewProp_SubCollectionHandling_MetaData) }; // 2641349688
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bAllowDuplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDuplicates_MetaData), NewProp_bAllowDuplicates_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bOmitInvalidAndEmpty_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bOmitInvalidAndEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bOmitInvalidAndEmpty = { "bOmitInvalidAndEmpty", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bOmitInvalidAndEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitInvalidAndEmpty_MetaData), NewProp_bOmitInvalidAndEmpty_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetPath_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteAssetPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetPath = { "bWriteAssetPath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAssetPath_MetaData), NewProp_bWriteAssetPath_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetClass_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteAssetClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetClass = { "bWriteAssetClass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAssetClass_MetaData), NewProp_bWriteAssetClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetClassAttributeName = { "AssetClassAttributeName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, AssetClassAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClassAttributeName_MetaData), NewProp_AssetClassAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteWeight_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteWeight = { "bWriteWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteWeight_MetaData), NewProp_bWriteWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_WeightAttributeName = { "WeightAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, WeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttributeName_MetaData), NewProp_WeightAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteCategory_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteCategory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteCategory = { "bWriteCategory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteCategory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCategory_MetaData), NewProp_bWriteCategory_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_CategoryAttributeName = { "CategoryAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, CategoryAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryAttributeName_MetaData), NewProp_CategoryAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteExtents_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteExtents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteExtents = { "bWriteExtents", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteExtents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteExtents_MetaData), NewProp_bWriteExtents_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_ExtentsAttributeName = { "ExtentsAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, ExtentsAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentsAttributeName_MetaData), NewProp_ExtentsAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMin_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteBoundsMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMin = { "bWriteBoundsMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundsMin_MetaData), NewProp_bWriteBoundsMin_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_BoundsMinAttributeName = { "BoundsMinAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, BoundsMinAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMinAttributeName_MetaData), NewProp_BoundsMinAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMax_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteBoundsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMax = { "bWriteBoundsMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundsMax_MetaData), NewProp_bWriteBoundsMax_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_BoundsMaxAttributeName = { "BoundsMaxAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, BoundsMaxAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMaxAttributeName_MetaData), NewProp_BoundsMaxAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteNestingDepth_SetBit(void* Obj)
{
	((UPCGExAssetCollectionToSetSettings*)Obj)->bWriteNestingDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteNestingDepth = { "bWriteNestingDepth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetCollectionToSetSettings), &Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteNestingDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNestingDepth_MetaData), NewProp_bWriteNestingDepth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_NestingDepthAttributeName = { "NestingDepthAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetCollectionToSetSettings, NestingDepthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NestingDepthAttributeName_MetaData), NewProp_NestingDepthAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_SubCollectionHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_SubCollectionHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bAllowDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bOmitInvalidAndEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteAssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_AssetClassAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_WeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_CategoryAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_ExtentsAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_BoundsMinAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteBoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_BoundsMaxAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_bWriteNestingDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::NewProp_NestingDepthAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAssetCollectionToSetSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::ClassParams = {
	&UPCGExAssetCollectionToSetSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::Class_MetaDataParams)
};
void UPCGExAssetCollectionToSetSettings::StaticRegisterNativesUPCGExAssetCollectionToSetSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAssetCollectionToSetSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.OuterSingleton, Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings.OuterSingleton;
}
UPCGExAssetCollectionToSetSettings::UPCGExAssetCollectionToSetSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAssetCollectionToSetSettings);
UPCGExAssetCollectionToSetSettings::~UPCGExAssetCollectionToSetSettings() {}
// ********** End Class UPCGExAssetCollectionToSetSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSubCollectionToSet_StaticEnum, TEXT("EPCGExSubCollectionToSet"), &Z_Registration_Info_UEnum_EPCGExSubCollectionToSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2641349688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAssetCollectionToSetSettings, UPCGExAssetCollectionToSetSettings::StaticClass, TEXT("UPCGExAssetCollectionToSetSettings"), &Z_Registration_Info_UClass_UPCGExAssetCollectionToSetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAssetCollectionToSetSettings), 1143271788U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_2077120162{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
