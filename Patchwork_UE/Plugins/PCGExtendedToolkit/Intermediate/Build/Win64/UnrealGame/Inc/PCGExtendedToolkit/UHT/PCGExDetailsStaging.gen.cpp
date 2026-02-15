// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsStaging.h"
#include "Data/PCGExDataFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsStaging() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketOutputDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCollectionSource ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCollectionSource;
static UEnum* EPCGExCollectionSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollectionSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCollectionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCollectionSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExCollectionSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCollectionSource>()
{
	return EPCGExCollectionSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset.DisplayName", "Asset" },
		{ "Asset.Name", "EPCGExCollectionSource::Asset" },
		{ "Asset.Tooltip", "Use a single collection reference" },
		{ "Attribute.DisplayName", "Path Attribute" },
		{ "Attribute.Name", "EPCGExCollectionSource::Attribute" },
		{ "Attribute.Tooltip", "Use an attribute that's a path reference to an asset collection" },
		{ "AttributeSet.DisplayName", "Attribute Set" },
		{ "AttributeSet.Name", "EPCGExCollectionSource::AttributeSet" },
		{ "AttributeSet.Tooltip", "Use a single attribute set that will be converted to a dynamic collection on the fly" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCollectionSource::Asset", (int64)EPCGExCollectionSource::Asset },
		{ "EPCGExCollectionSource::AttributeSet", (int64)EPCGExCollectionSource::AttributeSet },
		{ "EPCGExCollectionSource::Attribute", (int64)EPCGExCollectionSource::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCollectionSource",
	"EPCGExCollectionSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollectionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCollectionSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCollectionSource.InnerSingleton;
}
// ********** End Enum EPCGExCollectionSource ******************************************************

// ********** Begin Enum EPCGExIndexPickMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIndexPickMode;
static UEnum* EPCGExIndexPickMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexPickMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIndexPickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIndexPickMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExIndexPickMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIndexPickMode>()
{
	return EPCGExIndexPickMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ascending.DisplayName", "Collection order (Ascending)" },
		{ "Ascending.Name", "EPCGExIndexPickMode::Ascending" },
		{ "Ascending.Tooltip", "..." },
		{ "Descending.DisplayName", "Collection order (Descending)" },
		{ "Descending.Name", "EPCGExIndexPickMode::Descending" },
		{ "Descending.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "WeightAscending.DisplayName", "Weight (Descending)" },
		{ "WeightAscending.Name", "EPCGExIndexPickMode::WeightAscending" },
		{ "WeightAscending.Tooltip", "..." },
		{ "WeightDescending.DisplayName", "Weight (Ascending)" },
		{ "WeightDescending.Name", "EPCGExIndexPickMode::WeightDescending" },
		{ "WeightDescending.Tooltip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIndexPickMode::Ascending", (int64)EPCGExIndexPickMode::Ascending },
		{ "EPCGExIndexPickMode::Descending", (int64)EPCGExIndexPickMode::Descending },
		{ "EPCGExIndexPickMode::WeightAscending", (int64)EPCGExIndexPickMode::WeightAscending },
		{ "EPCGExIndexPickMode::WeightDescending", (int64)EPCGExIndexPickMode::WeightDescending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIndexPickMode",
	"EPCGExIndexPickMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexPickMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIndexPickMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIndexPickMode.InnerSingleton;
}
// ********** End Enum EPCGExIndexPickMode *********************************************************

// ********** Begin Enum EPCGExDistribution ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDistribution;
static UEnum* EPCGExDistribution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDistribution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDistribution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDistribution"));
	}
	return Z_Registration_Info_UEnum_EPCGExDistribution.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDistribution>()
{
	return EPCGExDistribution_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EPCGExDistribution::Index" },
		{ "Index.ToolTip", "Distribution by index" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EPCGExDistribution::Random" },
		{ "Random.ToolTip", "Update the point scale so final asset matches the existing point' bounds" },
		{ "WeightedRandom.DisplayName", "Weighted random" },
		{ "WeightedRandom.Name", "EPCGExDistribution::WeightedRandom" },
		{ "WeightedRandom.ToolTip", "Update the point bounds so it reflects the bounds of the final asset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDistribution::Index", (int64)EPCGExDistribution::Index },
		{ "EPCGExDistribution::Random", (int64)EPCGExDistribution::Random },
		{ "EPCGExDistribution::WeightedRandom", (int64)EPCGExDistribution::WeightedRandom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDistribution",
	"EPCGExDistribution",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution()
{
	if (!Z_Registration_Info_UEnum_EPCGExDistribution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDistribution.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDistribution.InnerSingleton;
}
// ********** End Enum EPCGExDistribution **********************************************************

// ********** Begin Enum EPCGExWeightOutputMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExWeightOutputMode;
static UEnum* EPCGExWeightOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExWeightOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExWeightOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExWeightOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExWeightOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExWeightOutputMode>()
{
	return EPCGExWeightOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "NoOutput.DisplayName", "No Output" },
		{ "NoOutput.Name", "EPCGExWeightOutputMode::NoOutput" },
		{ "NoOutput.ToolTip", "Don't output weight as an attribute" },
		{ "Normalized.DisplayName", "Normalized" },
		{ "Normalized.Name", "EPCGExWeightOutputMode::Normalized" },
		{ "Normalized.ToolTip", "Normalized weight value (Weight / WeightSum)" },
		{ "NormalizedInverted.DisplayName", "Normalized (Inverted)" },
		{ "NormalizedInverted.Name", "EPCGExWeightOutputMode::NormalizedInverted" },
		{ "NormalizedInverted.ToolTip", "One Minus normalized weight value (1 - (Weight / WeightSum))" },
		{ "NormalizedInvertedToDensity.DisplayName", "Normalized (Inverted) to Density" },
		{ "NormalizedInvertedToDensity.Name", "EPCGExWeightOutputMode::NormalizedInvertedToDensity" },
		{ "NormalizedInvertedToDensity.ToolTip", "One Minus normalized weight value (1 - (Weight / WeightSum))" },
		{ "NormalizedToDensity.DisplayName", "Normalized to Density" },
		{ "NormalizedToDensity.Name", "EPCGExWeightOutputMode::NormalizedToDensity" },
		{ "NormalizedToDensity.ToolTip", "Normalized weight value (Weight / WeightSum)" },
		{ "Raw.DisplayName", "Raw" },
		{ "Raw.Name", "EPCGExWeightOutputMode::Raw" },
		{ "Raw.ToolTip", "Raw integer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExWeightOutputMode::NoOutput", (int64)EPCGExWeightOutputMode::NoOutput },
		{ "EPCGExWeightOutputMode::Raw", (int64)EPCGExWeightOutputMode::Raw },
		{ "EPCGExWeightOutputMode::Normalized", (int64)EPCGExWeightOutputMode::Normalized },
		{ "EPCGExWeightOutputMode::NormalizedInverted", (int64)EPCGExWeightOutputMode::NormalizedInverted },
		{ "EPCGExWeightOutputMode::NormalizedToDensity", (int64)EPCGExWeightOutputMode::NormalizedToDensity },
		{ "EPCGExWeightOutputMode::NormalizedInvertedToDensity", (int64)EPCGExWeightOutputMode::NormalizedInvertedToDensity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExWeightOutputMode",
	"EPCGExWeightOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExWeightOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExWeightOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExWeightOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExWeightOutputMode ******************************************************

// ********** Begin Enum EPCGExAssetTagInheritance *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAssetTagInheritance;
static UEnum* EPCGExAssetTagInheritance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAssetTagInheritance"));
	}
	return Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAssetTagInheritance>()
{
	return EPCGExAssetTagInheritance_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset.DisplayName", "Asset" },
		{ "Asset.Name", "EPCGExAssetTagInheritance::Asset" },
		{ "Collection.DisplayName", "Collection" },
		{ "Collection.Name", "EPCGExAssetTagInheritance::Collection" },
		{ "Hierarchy.DisplayName", "Hierarchy" },
		{ "Hierarchy.Name", "EPCGExAssetTagInheritance::Hierarchy" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "None.Name", "EPCGExAssetTagInheritance::None" },
		{ "RootAsset.DisplayName", "Root Asset" },
		{ "RootAsset.Name", "EPCGExAssetTagInheritance::RootAsset" },
		{ "RootCollection.DisplayName", "Root Collection" },
		{ "RootCollection.Name", "EPCGExAssetTagInheritance::RootCollection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAssetTagInheritance::None", (int64)EPCGExAssetTagInheritance::None },
		{ "EPCGExAssetTagInheritance::Asset", (int64)EPCGExAssetTagInheritance::Asset },
		{ "EPCGExAssetTagInheritance::Hierarchy", (int64)EPCGExAssetTagInheritance::Hierarchy },
		{ "EPCGExAssetTagInheritance::Collection", (int64)EPCGExAssetTagInheritance::Collection },
		{ "EPCGExAssetTagInheritance::RootCollection", (int64)EPCGExAssetTagInheritance::RootCollection },
		{ "EPCGExAssetTagInheritance::RootAsset", (int64)EPCGExAssetTagInheritance::RootAsset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAssetTagInheritance",
	"EPCGExAssetTagInheritance",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance()
{
	if (!Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAssetTagInheritance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAssetTagInheritance.InnerSingleton;
}
// ********** End Enum EPCGExAssetTagInheritance ***************************************************

// ********** Begin Enum EPCGExEntryVariationMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEntryVariationMode;
static UEnum* EPCGExEntryVariationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEntryVariationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEntryVariationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEntryVariationMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExEntryVariationMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEntryVariationMode>()
{
	return EPCGExEntryVariationMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Global.ActionIcon", "CollectionRule" },
		{ "Global.DisplayName", "Global" },
		{ "Global.Name", "EPCGExEntryVariationMode::Global" },
		{ "Global.ToolTip", "Uses collections settings" },
		{ "Local.ActionIcon", "EntryRule" },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EPCGExEntryVariationMode::Local" },
		{ "Local.ToolTip", "This entry defines its own settings. This can be overruled in the collection settings." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEntryVariationMode::Local", (int64)EPCGExEntryVariationMode::Local },
		{ "EPCGExEntryVariationMode::Global", (int64)EPCGExEntryVariationMode::Global },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEntryVariationMode",
	"EPCGExEntryVariationMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExEntryVariationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEntryVariationMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEntryVariationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEntryVariationMode.InnerSingleton;
}
// ********** End Enum EPCGExEntryVariationMode ****************************************************

// ********** Begin Enum EPCGExGlobalVariationRule *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGlobalVariationRule;
static UEnum* EPCGExGlobalVariationRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGlobalVariationRule"));
	}
	return Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGlobalVariationRule>()
{
	return EPCGExGlobalVariationRule_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "Overrule.ActionIcon", "CollectionRule" },
		{ "Overrule.DisplayName", "Overrule" },
		{ "Overrule.Name", "EPCGExGlobalVariationRule::Overrule" },
		{ "Overrule.ToolTip", "Disregard the entry settings and enforce collection settings" },
		{ "PerEntry.ActionIcon", "EntryRule" },
		{ "PerEntry.DisplayName", "Per Entry" },
		{ "PerEntry.Name", "EPCGExGlobalVariationRule::PerEntry" },
		{ "PerEntry.ToolTip", "Let the entry choose whether it's using collection settings or its own" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGlobalVariationRule::PerEntry", (int64)EPCGExGlobalVariationRule::PerEntry },
		{ "EPCGExGlobalVariationRule::Overrule", (int64)EPCGExGlobalVariationRule::Overrule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGlobalVariationRule",
	"EPCGExGlobalVariationRule",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule()
{
	if (!Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGlobalVariationRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGlobalVariationRule.InnerSingleton;
}
// ********** End Enum EPCGExGlobalVariationRule ***************************************************

// ********** Begin ScriptStruct FPCGExAssetDistributionIndexDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetDistributionIndexDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetDistributionIndexDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index picking mode*/" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index picking mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index sanitization behavior */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index sanitization behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute index to read index selection from.*/" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute index to read index selection from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemapIndexToCollectionSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to remap index input value to collection size */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to remap index input value to collection size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TruncateRemap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to remap index input value to collection size */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to remap index input value to collection size" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetDistributionIndexDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexSource;
	static void NewProp_bRemapIndexToCollectionSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapIndexToCollectionSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TruncateRemap_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TruncateRemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetDistributionIndexDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetDistributionIndexDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails;
class UScriptStruct* FPCGExAssetDistributionIndexDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetDistributionIndexDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetDistributionIndexDetails Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_PickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_PickMode = { "PickMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionIndexDetails, PickMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexPickMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickMode_MetaData), NewProp_PickMode_MetaData) }; // 3191354707
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionIndexDetails, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSource = { "IndexSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionIndexDetails, IndexSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSource_MetaData), NewProp_IndexSource_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_bRemapIndexToCollectionSize_SetBit(void* Obj)
{
	((FPCGExAssetDistributionIndexDetails*)Obj)->bRemapIndexToCollectionSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_bRemapIndexToCollectionSize = { "bRemapIndexToCollectionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAssetDistributionIndexDetails), &Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_bRemapIndexToCollectionSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemapIndexToCollectionSize_MetaData), NewProp_bRemapIndexToCollectionSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_TruncateRemap_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_TruncateRemap = { "TruncateRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionIndexDetails, TruncateRemap), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TruncateRemap_MetaData), NewProp_TruncateRemap_MetaData) }; // 3854127603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_PickMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_PickMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_IndexSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_bRemapIndexToCollectionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_TruncateRemap_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewProp_TruncateRemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetDistributionIndexDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetDistributionIndexDetails",
	Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::PropPointers),
	sizeof(FPCGExAssetDistributionIndexDetails),
	alignof(FPCGExAssetDistributionIndexDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetDistributionIndexDetails *********************************

// ********** Begin ScriptStruct FPCGExComponentTaggingDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExComponentTaggingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExComponentTaggingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForwardInputDataTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExComponentTaggingDetails constinit property declarations *****
	static void NewProp_bForwardInputDataTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardInputDataTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExComponentTaggingDetails constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExComponentTaggingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails;
class UScriptStruct* FPCGExComponentTaggingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExComponentTaggingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExComponentTaggingDetails Property Definitions ****************
void Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::NewProp_bForwardInputDataTags_SetBit(void* Obj)
{
	((FPCGExComponentTaggingDetails*)Obj)->bForwardInputDataTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::NewProp_bForwardInputDataTags = { "bForwardInputDataTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExComponentTaggingDetails), &Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::NewProp_bForwardInputDataTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForwardInputDataTags_MetaData), NewProp_bForwardInputDataTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::NewProp_bForwardInputDataTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExComponentTaggingDetails Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExComponentTaggingDetails",
	Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::PropPointers),
	sizeof(FPCGExComponentTaggingDetails),
	alignof(FPCGExComponentTaggingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExComponentTaggingDetails ***************************************

// ********** Begin ScriptStruct FPCGExAssetTaggingDetails *****************************************
struct Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetTaggingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetTaggingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExAssetTagInheritance" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetTaggingDetails constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrabTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetTaggingDetails constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetTaggingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics
static_assert(std::is_polymorphic<FPCGExAssetTaggingDetails>() == std::is_polymorphic<FPCGExComponentTaggingDetails>(), "USTRUCT FPCGExAssetTaggingDetails cannot be polymorphic unless super FPCGExComponentTaggingDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails;
class UScriptStruct* FPCGExAssetTaggingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetTaggingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetTaggingDetails Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::NewProp_GrabTags = { "GrabTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetTaggingDetails, GrabTags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTags_MetaData), NewProp_GrabTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::NewProp_GrabTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetTaggingDetails Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails,
	&NewStructOps,
	"PCGExAssetTaggingDetails",
	Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::PropPointers),
	sizeof(FPCGExAssetTaggingDetails),
	alignof(FPCGExAssetTaggingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetTaggingDetails *******************************************

// ********** Begin ScriptStruct FPCGExAssetDistributionDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetDistributionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetDistributionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCategories_MetaData[] = {
		{ "Category", "Settings|Category" },
		{ "Comment", "/** If enabled, will limit pick to entries flagged with a specific category. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will limit pick to entries flagged with a specific category." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryInput_MetaData[] = {
		{ "Category", "Settings|Category" },
		{ "Comment", "/** Type of Category */" },
		{ "EditCondition", "bUseCategories" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryAttribute_MetaData[] = {
		{ "Category", "Settings|Category" },
		{ "Comment", "/** Attribute to read category name from. */" },
		{ "DisplayName", "Category (Attr)" },
		{ "EditCondition", "bUseCategories && CategoryInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read category name from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Settings|Category" },
		{ "Comment", "/** Constant category value. */" },
		{ "DisplayName", "Category" },
		{ "EditCondition", "bUseCategories && CategoryInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant category value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedComponents_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExSeedComponents" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distribution type */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distribution type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index settings */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Index Settings" },
		{ "EditCondition", "Distribution == EPCGExDistribution::Index" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Note that this is only accounted for if selected in the seed component. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Note that this is only accounted for if selected in the seed component." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetDistributionDetails constinit property declarations ****
	static void NewProp_bUseCategories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCategories;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CategoryInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CategoryInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Distribution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Distribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetDistributionDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetDistributionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails;
class UScriptStruct* FPCGExAssetDistributionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetDistributionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetDistributionDetails Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_bUseCategories_SetBit(void* Obj)
{
	((FPCGExAssetDistributionDetails*)Obj)->bUseCategories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_bUseCategories = { "bUseCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAssetDistributionDetails), &Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_bUseCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCategories_MetaData), NewProp_bUseCategories_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryInput = { "CategoryInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, CategoryInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryInput_MetaData), NewProp_CategoryInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryAttribute = { "CategoryAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, CategoryAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryAttribute_MetaData), NewProp_CategoryAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_SeedComponents = { "SeedComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, SeedComponents), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedComponents_MetaData), NewProp_SeedComponents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Distribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, Distribution), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distribution_MetaData), NewProp_Distribution_MetaData) }; // 1724187893
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_IndexSettings = { "IndexSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, IndexSettings), Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSettings_MetaData), NewProp_IndexSettings_MetaData) }; // 1202682927
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_LocalSeed = { "LocalSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetDistributionDetails, LocalSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSeed_MetaData), NewProp_LocalSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_bUseCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_CategoryAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_SeedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Distribution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_Distribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_IndexSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewProp_LocalSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetDistributionDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetDistributionDetails",
	Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::PropPointers),
	sizeof(FPCGExAssetDistributionDetails),
	alignof(FPCGExAssetDistributionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetDistributionDetails **************************************

// ********** Begin ScriptStruct FPCGExMicroCacheDistributionDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMicroCacheDistributionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMicroCacheDistributionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distribution type */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distribution type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index settings */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Index Settings" },
		{ "EditCondition", "Distribution == EPCGExDistribution::Index" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMicroCacheDistributionDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Distribution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Distribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMicroCacheDistributionDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMicroCacheDistributionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails;
class UScriptStruct* FPCGExMicroCacheDistributionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMicroCacheDistributionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMicroCacheDistributionDetails Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_Distribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMicroCacheDistributionDetails, Distribution), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distribution_MetaData), NewProp_Distribution_MetaData) }; // 1724187893
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_IndexSettings = { "IndexSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMicroCacheDistributionDetails, IndexSettings), Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSettings_MetaData), NewProp_IndexSettings_MetaData) }; // 1202682927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_Distribution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_Distribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewProp_IndexSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMicroCacheDistributionDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMicroCacheDistributionDetails",
	Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::PropPointers),
	sizeof(FPCGExMicroCacheDistributionDetails),
	alignof(FPCGExMicroCacheDistributionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMicroCacheDistributionDetails *********************************

// ********** Begin ScriptStruct FPCGExSocketOutputDetails *****************************************
struct Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSocketOutputDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSocketOutputDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTagFilters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Include or exclude sockets based on their tag */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Include or exclude sockets based on their tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameFilters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Include or exclude sockets based on their name */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Include or exclude sockets based on their name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSocketName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteSocketName" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSocketTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTagAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteSocketTag" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCategory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteCategory" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAssetPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteAssetPath" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which scale components from the sampled transform should be applied to the point.  */" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which scale components from the sampled transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings for socket points, as they naturally inherit from the original points. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings for socket points, as they naturally inherit from the original points." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSocketOutputDetails constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTagFilters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketNameFilters;
	static void NewProp_bWriteSocketName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameAttributeName;
	static void NewProp_bWriteSocketTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSocketTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketTagAttributeName;
	static void NewProp_bWriteCategory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCategory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryAttributeName;
	static void NewProp_bWriteAssetPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAssetPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSocketOutputDetails constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSocketOutputDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails;
class UScriptStruct* FPCGExSocketOutputDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSocketOutputDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSocketOutputDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSocketOutputDetails Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketTagFilters = { "SocketTagFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, SocketTagFilters), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTagFilters_MetaData), NewProp_SocketTagFilters_MetaData) }; // 1913362378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketNameFilters = { "SocketNameFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, SocketNameFilters), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameFilters_MetaData), NewProp_SocketNameFilters_MetaData) }; // 1913362378
void Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketName_SetBit(void* Obj)
{
	((FPCGExSocketOutputDetails*)Obj)->bWriteSocketName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketName = { "bWriteSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocketOutputDetails), &Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSocketName_MetaData), NewProp_bWriteSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketNameAttributeName = { "SocketNameAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, SocketNameAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameAttributeName_MetaData), NewProp_SocketNameAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketTag_SetBit(void* Obj)
{
	((FPCGExSocketOutputDetails*)Obj)->bWriteSocketTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketTag = { "bWriteSocketTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocketOutputDetails), &Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSocketTag_MetaData), NewProp_bWriteSocketTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketTagAttributeName = { "SocketTagAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, SocketTagAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTagAttributeName_MetaData), NewProp_SocketTagAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteCategory_SetBit(void* Obj)
{
	((FPCGExSocketOutputDetails*)Obj)->bWriteCategory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteCategory = { "bWriteCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocketOutputDetails), &Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteCategory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCategory_MetaData), NewProp_bWriteCategory_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_CategoryAttributeName = { "CategoryAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, CategoryAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryAttributeName_MetaData), NewProp_CategoryAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteAssetPath_SetBit(void* Obj)
{
	((FPCGExSocketOutputDetails*)Obj)->bWriteAssetPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteAssetPath = { "bWriteAssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocketOutputDetails), &Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteAssetPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAssetPath_MetaData), NewProp_bWriteAssetPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, TransformScale), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketOutputDetails, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketTagFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketNameFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketNameAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteSocketTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_SocketTagAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_CategoryAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_bWriteAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSocketOutputDetails Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSocketOutputDetails",
	Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::PropPointers),
	sizeof(FPCGExSocketOutputDetails),
	alignof(FPCGExSocketOutputDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketOutputDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSocketOutputDetails *******************************************

// ********** Begin ScriptStruct FPCGExAssetAttributeSetDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAssetAttributeSetDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAssetAttributeSetDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset path to be staged */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset path to be staged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset weight, if any. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset weight, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategorySourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute on the AttributeSet that contains the asset category, if any. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute on the AttributeSet that contains the asset category, if any." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAssetAttributeSetDetails constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathSourceAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightSourceAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategorySourceAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAssetAttributeSetDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAssetAttributeSetDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails;
class UScriptStruct* FPCGExAssetAttributeSetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAssetAttributeSetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAssetAttributeSetDetails Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_AssetPathSourceAttribute = { "AssetPathSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetAttributeSetDetails, AssetPathSourceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathSourceAttribute_MetaData), NewProp_AssetPathSourceAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_WeightSourceAttribute = { "WeightSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetAttributeSetDetails, WeightSourceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightSourceAttribute_MetaData), NewProp_WeightSourceAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_CategorySourceAttribute = { "CategorySourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAssetAttributeSetDetails, CategorySourceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategorySourceAttribute_MetaData), NewProp_CategorySourceAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_AssetPathSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_WeightSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewProp_CategorySourceAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAssetAttributeSetDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAssetAttributeSetDetails",
	Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::PropPointers),
	sizeof(FPCGExAssetAttributeSetDetails),
	alignof(FPCGExAssetAttributeSetDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAssetAttributeSetDetails **************************************

// ********** Begin ScriptStruct FPCGExRoamingAssetCollectionDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExRoamingAssetCollectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExRoamingAssetCollectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportCustomType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollectionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines what type of temp collection to build from input attribute set */" },
		{ "EditCondition", "bSupportCustomType" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines what type of temp collection to build from input attribute set" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExRoamingAssetCollectionDetails constinit property declarations 
	static void NewProp_bSupportCustomType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportCustomType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetCollectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExRoamingAssetCollectionDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExRoamingAssetCollectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics
static_assert(std::is_polymorphic<FPCGExRoamingAssetCollectionDetails>() == std::is_polymorphic<FPCGExAssetAttributeSetDetails>(), "USTRUCT FPCGExRoamingAssetCollectionDetails cannot be polymorphic unless super FPCGExAssetAttributeSetDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails;
class UScriptStruct* FPCGExRoamingAssetCollectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExRoamingAssetCollectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExRoamingAssetCollectionDetails Property Definitions **********
void Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_bSupportCustomType_SetBit(void* Obj)
{
	((FPCGExRoamingAssetCollectionDetails*)Obj)->bSupportCustomType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_bSupportCustomType = { "bSupportCustomType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRoamingAssetCollectionDetails), &Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_bSupportCustomType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportCustomType_MetaData), NewProp_bSupportCustomType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_AssetCollectionType = { "AssetCollectionType", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRoamingAssetCollectionDetails, AssetCollectionType), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPCGExAssetCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCollectionType_MetaData), NewProp_AssetCollectionType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_bSupportCustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewProp_AssetCollectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExRoamingAssetCollectionDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails,
	&NewStructOps,
	"PCGExRoamingAssetCollectionDetails",
	Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::PropPointers),
	sizeof(FPCGExRoamingAssetCollectionDetails),
	alignof(FPCGExRoamingAssetCollectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExRoamingAssetCollectionDetails *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCollectionSource_StaticEnum, TEXT("EPCGExCollectionSource"), &Z_Registration_Info_UEnum_EPCGExCollectionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1613534763U) },
		{ EPCGExIndexPickMode_StaticEnum, TEXT("EPCGExIndexPickMode"), &Z_Registration_Info_UEnum_EPCGExIndexPickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191354707U) },
		{ EPCGExDistribution_StaticEnum, TEXT("EPCGExDistribution"), &Z_Registration_Info_UEnum_EPCGExDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1724187893U) },
		{ EPCGExWeightOutputMode_StaticEnum, TEXT("EPCGExWeightOutputMode"), &Z_Registration_Info_UEnum_EPCGExWeightOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3422170499U) },
		{ EPCGExAssetTagInheritance_StaticEnum, TEXT("EPCGExAssetTagInheritance"), &Z_Registration_Info_UEnum_EPCGExAssetTagInheritance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1419178046U) },
		{ EPCGExEntryVariationMode_StaticEnum, TEXT("EPCGExEntryVariationMode"), &Z_Registration_Info_UEnum_EPCGExEntryVariationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 906909742U) },
		{ EPCGExGlobalVariationRule_StaticEnum, TEXT("EPCGExGlobalVariationRule"), &Z_Registration_Info_UEnum_EPCGExGlobalVariationRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2170414203U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAssetDistributionIndexDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetDistributionIndexDetails_Statics::NewStructOps, TEXT("PCGExAssetDistributionIndexDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionIndexDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetDistributionIndexDetails), 1202682927U) },
		{ FPCGExComponentTaggingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExComponentTaggingDetails_Statics::NewStructOps, TEXT("PCGExComponentTaggingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExComponentTaggingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExComponentTaggingDetails), 764167790U) },
		{ FPCGExAssetTaggingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails_Statics::NewStructOps, TEXT("PCGExAssetTaggingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAssetTaggingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetTaggingDetails), 1519111645U) },
		{ FPCGExAssetDistributionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails_Statics::NewStructOps, TEXT("PCGExAssetDistributionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAssetDistributionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetDistributionDetails), 2045492251U) },
		{ FPCGExMicroCacheDistributionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails_Statics::NewStructOps, TEXT("PCGExMicroCacheDistributionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExMicroCacheDistributionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMicroCacheDistributionDetails), 3760200020U) },
		{ FPCGExSocketOutputDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSocketOutputDetails_Statics::NewStructOps, TEXT("PCGExSocketOutputDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSocketOutputDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSocketOutputDetails), 3220705066U) },
		{ FPCGExAssetAttributeSetDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAssetAttributeSetDetails_Statics::NewStructOps, TEXT("PCGExAssetAttributeSetDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAssetAttributeSetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAssetAttributeSetDetails), 1106014941U) },
		{ FPCGExRoamingAssetCollectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails_Statics::NewStructOps, TEXT("PCGExRoamingAssetCollectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExRoamingAssetCollectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExRoamingAssetCollectionDetails), 127131122U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_2214185799{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
