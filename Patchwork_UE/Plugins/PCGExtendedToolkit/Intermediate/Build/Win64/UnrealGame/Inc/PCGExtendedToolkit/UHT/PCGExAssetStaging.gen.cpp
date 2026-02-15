// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetStaging/PCGExAssetStaging.h"
#include "Details/PCGExDetailsStaging.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAssetStaging() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetStagingSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetStagingSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExJustificationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExScaleToFitDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketOutputDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExStagingOutputMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStagingOutputMode;
static UEnum* EPCGExStagingOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStagingOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStagingOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStagingOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExStagingOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStagingOutputMode>()
{
	return EPCGExStagingOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attributes.DisplayName", "Point Attributes" },
		{ "Attributes.Name", "EPCGExStagingOutputMode::Attributes" },
		{ "Attributes.ToolTip", "Write asset data on the point" },
		{ "CollectionMap.DisplayName", "Collection Map" },
		{ "CollectionMap.Name", "EPCGExStagingOutputMode::CollectionMap" },
		{ "CollectionMap.ToolTip", "Write collection reference & pick for later use" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStagingOutputMode::Attributes", (int64)EPCGExStagingOutputMode::Attributes },
		{ "EPCGExStagingOutputMode::CollectionMap", (int64)EPCGExStagingOutputMode::CollectionMap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStagingOutputMode",
	"EPCGExStagingOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExStagingOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStagingOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStagingOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExStagingOutputMode *****************************************************

// ********** Begin Class UPCGExAssetStagingSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAssetStagingSettings;
UClass* UPCGExAssetStagingSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAssetStagingSettings;
	if (!Z_Registration_Info_UClass_UPCGExAssetStagingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAssetStagingSettings"),
			Z_Registration_Info_UClass_UPCGExAssetStagingSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAssetStagingSettings,
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
	return Z_Registration_Info_UClass_UPCGExAssetStagingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAssetStagingSettings_NoRegister()
{
	return UPCGExAssetStagingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAssetStagingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "AssetStaging/PCGExAssetStaging.h" },
		{ "Keywords", "stage prepare spawn proxy" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCGExNodeLibraryDoc", "assets-management/asset-staging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "CollectionSource == EPCGExCollectionSource::Asset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "CollectionSource == EPCGExCollectionSource::AttributeSet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write asset path to.*/" },
		{ "EditCondition", "OutputMode == EPCGExStagingOutputMode::Attributes" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write asset path to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distribution details */" },
		{ "DisplayName", "Distribution" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distribution details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryDistributionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distribution details that are specific to the picked entry -- what it picks depends on the type of collection being staged. For Mesh Collections, this let you control how materials are picked. */" },
		{ "DisplayName", "Distribution (Entry)" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distribution details that are specific to the picked entry -- what it picks depends on the type of collection being staged. For Mesh Collections, this let you control how materials are picked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneEmptyPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//** If enabled, filter output based on whether a staging has been applied or not (empty entry).  Current implementation is slow. */\n" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "/ If enabled, filter output based on whether a staging has been applied or not (empty entry).  Current implementation is slow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggingDetails_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Tagging details */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tagging details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightToAttribute_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Update point scale so staged asset fits within its bounds */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Update point scale so staged asset fits within its bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** The name of the attribute to write asset weight to.*/" },
		{ "EditCondition", "WeightToAttribute != EPCGExWeightOutputMode::NoOutput && WeightToAttribute != EPCGExWeightOutputMode::NormalizedToDensity && WeightToAttribute != EPCGExWeightOutputMode::NormalizedInvertedToDensity" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write asset weight to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputMaterialPicks_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "//** If enabled, will output mesh material picks. */\n" },
		{ "EditCondition", "OutputMode != EPCGExStagingOutputMode::CollectionMap" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "/ If enabled, will output mesh material picks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialPicks_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "ClampMin", "0" },
		{ "Comment", "//** If > 0 will create dummy attributes for missing material indices up to a maximum; in order to create a full, fixed-length list of valid (yet null) attributes for the static mesh spawner material overrides. Otherwise, will only create attribute for valid indices. */\n" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Fixed Max Index" },
		{ "EditCondition", "bOutputMaterialPicks && OutputMode != EPCGExStagingOutputMode::CollectionMap" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "/ If > 0 will create dummy attributes for missing material indices up to a maximum; in order to create a full, fixed-length list of valid (yet null) attributes for the static mesh spawner material overrides. Otherwise, will only create attribute for valid indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributePrefix_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Prefix to be used for material slot picks.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Prefix" },
		{ "EditCondition", "bOutputMaterialPicks && OutputMode != EPCGExStagingOutputMode::CollectionMap" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Prefix to be used for material slot picks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoOutputSockets_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSocketDetails_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Output Sockets" },
		{ "EditCondition", "bDoOutputSockets" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietEmptyCollectionError_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExAssetStaging.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAssetStagingSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollectionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollectionSource;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSetDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryDistributionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleToFit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Justification;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variations;
	static void NewProp_bPruneEmptyPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneEmptyPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggingDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightToAttribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightToAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightAttributeName;
	static void NewProp_bOutputMaterialPicks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputMaterialPicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMaterialPicks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialAttributePrefix;
	static void NewProp_bDoOutputSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoOutputSockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSocketDetails;
	static void NewProp_bQuietEmptyCollectionError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietEmptyCollectionError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAssetStagingSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAssetStagingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAssetStagingSettings_Statics

// ********** Begin Class UPCGExAssetStagingSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_CollectionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_CollectionSource = { "CollectionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, CollectionSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSource_MetaData), NewProp_CollectionSource_MetaData) }; // 1613534763
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, AssetCollection), Z_Construct_UClass_UPCGExAssetCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCollection_MetaData), NewProp_AssetCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AttributeSetDetails = { "AttributeSetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, AttributeSetDetails), Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetDetails_MetaData), NewProp_AttributeSetDetails_MetaData) }; // 127131122
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStagingOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 324714571
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_DistributionSettings = { "DistributionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, DistributionSettings), Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionSettings_MetaData), NewProp_DistributionSettings_MetaData) }; // 2045492251
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_EntryDistributionSettings = { "EntryDistributionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, EntryDistributionSettings), Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryDistributionSettings_MetaData), NewProp_EntryDistributionSettings_MetaData) }; // 3760200020
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_ScaleToFit = { "ScaleToFit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, ScaleToFit), Z_Construct_UScriptStruct_FPCGExScaleToFitDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFit_MetaData), NewProp_ScaleToFit_MetaData) }; // 344909932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, Justification), Z_Construct_UScriptStruct_FPCGExJustificationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 161038766
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, Variations), Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variations_MetaData), NewProp_Variations_MetaData) }; // 849686493
void Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bPruneEmptyPoints_SetBit(void* Obj)
{
	((UPCGExAssetStagingSettings*)Obj)->bPruneEmptyPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bPruneEmptyPoints = { "bPruneEmptyPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetStagingSettings), &Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bPruneEmptyPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneEmptyPoints_MetaData), NewProp_bPruneEmptyPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_TaggingDetails = { "TaggingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, TaggingDetails), Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggingDetails_MetaData), NewProp_TaggingDetails_MetaData) }; // 1519111645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightToAttribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightToAttribute = { "WeightToAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, WeightToAttribute), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightToAttribute_MetaData), NewProp_WeightToAttribute_MetaData) }; // 3422170499
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightAttributeName = { "WeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, WeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttributeName_MetaData), NewProp_WeightAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bOutputMaterialPicks_SetBit(void* Obj)
{
	((UPCGExAssetStagingSettings*)Obj)->bOutputMaterialPicks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bOutputMaterialPicks = { "bOutputMaterialPicks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetStagingSettings), &Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bOutputMaterialPicks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputMaterialPicks_MetaData), NewProp_bOutputMaterialPicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_MaxMaterialPicks = { "MaxMaterialPicks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, MaxMaterialPicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMaterialPicks_MetaData), NewProp_MaxMaterialPicks_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_MaterialAttributePrefix = { "MaterialAttributePrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, MaterialAttributePrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributePrefix_MetaData), NewProp_MaterialAttributePrefix_MetaData) };
void Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bDoOutputSockets_SetBit(void* Obj)
{
	((UPCGExAssetStagingSettings*)Obj)->bDoOutputSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bDoOutputSockets = { "bDoOutputSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetStagingSettings), &Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bDoOutputSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoOutputSockets_MetaData), NewProp_bDoOutputSockets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputSocketDetails = { "OutputSocketDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAssetStagingSettings, OutputSocketDetails), Z_Construct_UScriptStruct_FPCGExSocketOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSocketDetails_MetaData), NewProp_OutputSocketDetails_MetaData) }; // 3220705066
void Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bQuietEmptyCollectionError_SetBit(void* Obj)
{
	((UPCGExAssetStagingSettings*)Obj)->bQuietEmptyCollectionError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bQuietEmptyCollectionError = { "bQuietEmptyCollectionError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAssetStagingSettings), &Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bQuietEmptyCollectionError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietEmptyCollectionError_MetaData), NewProp_bQuietEmptyCollectionError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_CollectionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_CollectionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AssetCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AttributeSetDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_DistributionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_EntryDistributionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_ScaleToFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_Variations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bPruneEmptyPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_TaggingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightToAttribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightToAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_WeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bOutputMaterialPicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_MaxMaterialPicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_MaterialAttributePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bDoOutputSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_OutputSocketDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::NewProp_bQuietEmptyCollectionError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAssetStagingSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::ClassParams = {
	&UPCGExAssetStagingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::Class_MetaDataParams)
};
void UPCGExAssetStagingSettings::StaticRegisterNativesUPCGExAssetStagingSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAssetStagingSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAssetStagingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAssetStagingSettings.OuterSingleton, Z_Construct_UClass_UPCGExAssetStagingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAssetStagingSettings.OuterSingleton;
}
UPCGExAssetStagingSettings::UPCGExAssetStagingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAssetStagingSettings);
UPCGExAssetStagingSettings::~UPCGExAssetStagingSettings() {}
// ********** End Class UPCGExAssetStagingSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExStagingOutputMode_StaticEnum, TEXT("EPCGExStagingOutputMode"), &Z_Registration_Info_UEnum_EPCGExStagingOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 324714571U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAssetStagingSettings, UPCGExAssetStagingSettings::StaticClass, TEXT("UPCGExAssetStagingSettings"), &Z_Registration_Info_UClass_UPCGExAssetStagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAssetStagingSettings), 125697471U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_3311137351{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
