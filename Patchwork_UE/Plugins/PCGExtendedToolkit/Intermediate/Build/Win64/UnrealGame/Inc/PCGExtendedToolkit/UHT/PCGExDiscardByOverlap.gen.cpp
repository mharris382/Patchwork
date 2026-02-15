// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExDiscardByOverlap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDiscardByOverlap() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardByOverlapSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardByOverlapSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOverlapTestMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOverlapTestMode;
static UEnum* EPCGExOverlapTestMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOverlapTestMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOverlapTestMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOverlapTestMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExOverlapTestMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOverlapTestMode>()
{
	return EPCGExOverlapTestMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EPCGExOverlapTestMode::Box" },
		{ "Box.ToolTip", "Test every points' bounds as transformed box. May not detect some overlaps." },
		{ "Fast.DisplayName", "Fast" },
		{ "Fast.Name", "EPCGExOverlapTestMode::Fast" },
		{ "Fast.ToolTip", "Only test using datasets' overall bounds" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EPCGExOverlapTestMode::Sphere" },
		{ "Sphere.ToolTip", "Test every points' bounds as spheres. Will have some false positve." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOverlapTestMode::Fast", (int64)EPCGExOverlapTestMode::Fast },
		{ "EPCGExOverlapTestMode::Box", (int64)EPCGExOverlapTestMode::Box },
		{ "EPCGExOverlapTestMode::Sphere", (int64)EPCGExOverlapTestMode::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOverlapTestMode",
	"EPCGExOverlapTestMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExOverlapTestMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOverlapTestMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOverlapTestMode.InnerSingleton;
}
// ********** End Enum EPCGExOverlapTestMode *******************************************************

// ********** Begin Enum EPCGExOverlapPruningLogic *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic;
static UEnum* EPCGExOverlapPruningLogic_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOverlapPruningLogic"));
	}
	return Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOverlapPruningLogic>()
{
	return EPCGExOverlapPruningLogic_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HighFirst.DisplayName", "High to Low" },
		{ "HighFirst.Name", "EPCGExOverlapPruningLogic::HighFirst" },
		{ "HighFirst.ToolTip", "Higher weights are pruned first." },
		{ "LowFirst.DisplayName", "Low to High" },
		{ "LowFirst.Name", "EPCGExOverlapPruningLogic::LowFirst" },
		{ "LowFirst.ToolTip", "Lower weights are pruned first." },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOverlapPruningLogic::LowFirst", (int64)EPCGExOverlapPruningLogic::LowFirst },
		{ "EPCGExOverlapPruningLogic::HighFirst", (int64)EPCGExOverlapPruningLogic::HighFirst },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOverlapPruningLogic",
	"EPCGExOverlapPruningLogic",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic()
{
	if (!Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic.InnerSingleton;
}
// ********** End Enum EPCGExOverlapPruningLogic ***************************************************

// ********** Begin ScriptStruct FPCGExOverlapScoresWeighting **************************************
struct Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExOverlapScoresWeighting); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExOverlapScoresWeighting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBalance_MetaData[] = {
		{ "Category", "Settings|Dynamic Weights" },
		{ "Comment", "/** How much of the dynamic weights to account for vs. static ones */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How much of the dynamic weights to account for vs. static ones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapCount_MetaData[] = {
		{ "Category", "Settings|Dynamic Weights" },
		{ "Comment", "/** Overlap count weight (how many sets overlap) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap count weight (how many sets overlap)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapSubCount_MetaData[] = {
		{ "Category", "Settings|Dynamic Weights" },
		{ "Comment", "/** Overlap Sub-Count weight (how many points overlap) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap Sub-Count weight (how many points overlap)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapVolume_MetaData[] = {
		{ "Category", "Settings|Dynamic Weights" },
		{ "Comment", "/** Overlap volume weight (cumulative volume overlap)  Note that each sub point adds its own intersection volume whether or not it occupies an already computed volume in space. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap volume weight (cumulative volume overlap)  Note that each sub point adds its own intersection volume whether or not it occupies an already computed volume in space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapVolumeDensity_MetaData[] = {
		{ "Category", "Settings|Dynamic Weights" },
		{ "Comment", "/** Overlap volume density weight (cumulative volume overlap / number of overlapping points) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap volume density weight (cumulative volume overlap / number of overlapping points)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticBalance_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** How much of the static weights to account for vs. dynamic ones */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How much of the static weights to account for vs. dynamic ones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Number of points weight (points in a given set) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Number of points weight (points in a given set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Volume weight  Note that each sub point adds its own intersection volume whether or not it occupies an already computed volume in space. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Volume weight  Note that each sub point adds its own intersection volume whether or not it occupies an already computed volume in space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeDensity_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Volume density. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Volume density." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTagWeight_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Weight of custom tags scores, if any. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight of custom tags scores, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagScores_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Lets you add custom 'score' by tags. If the tag is found on the collection, its score will be added to the computation, letting you have more granular control. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Lets you add custom 'score' by tags. If the tag is found on the collection, its score will be added to the computation, letting you have more granular control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataScoreWeight_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Weight of custom tags scores, if any. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight of custom tags scores, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataScores_MetaData[] = {
		{ "Category", "Settings|Static Weights" },
		{ "Comment", "/** Lets you add extra custom 'score' using @Data attributes. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Lets you add extra custom 'score' using @Data attributes." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExOverlapScoresWeighting constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DynamicBalance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverlapCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverlapSubCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverlapVolume;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverlapVolumeDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StaticBalance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Volume;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VolumeDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CustomTagWeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TagScores_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagScores_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagScores;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DataScoreWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataScores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataScores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExOverlapScoresWeighting constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExOverlapScoresWeighting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting;
class UScriptStruct* FPCGExOverlapScoresWeighting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExOverlapScoresWeighting"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExOverlapScoresWeighting Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DynamicBalance = { "DynamicBalance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, DynamicBalance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBalance_MetaData), NewProp_DynamicBalance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapCount = { "OverlapCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, OverlapCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapCount_MetaData), NewProp_OverlapCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapSubCount = { "OverlapSubCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, OverlapSubCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapSubCount_MetaData), NewProp_OverlapSubCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapVolume = { "OverlapVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, OverlapVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapVolume_MetaData), NewProp_OverlapVolume_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapVolumeDensity = { "OverlapVolumeDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, OverlapVolumeDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapVolumeDensity_MetaData), NewProp_OverlapVolumeDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_StaticBalance = { "StaticBalance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, StaticBalance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticBalance_MetaData), NewProp_StaticBalance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_VolumeDensity = { "VolumeDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, VolumeDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeDensity_MetaData), NewProp_VolumeDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_CustomTagWeight = { "CustomTagWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, CustomTagWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTagWeight_MetaData), NewProp_CustomTagWeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores_ValueProp = { "TagScores", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores_Key_KeyProp = { "TagScores_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores = { "TagScores", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, TagScores), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagScores_MetaData), NewProp_TagScores_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScoreWeight = { "DataScoreWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, DataScoreWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataScoreWeight_MetaData), NewProp_DataScoreWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScores_Inner = { "DataScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScores = { "DataScores", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExOverlapScoresWeighting, DataScores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataScores_MetaData), NewProp_DataScores_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DynamicBalance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapSubCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_OverlapVolumeDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_StaticBalance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_VolumeDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_CustomTagWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_TagScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScoreWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewProp_DataScores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExOverlapScoresWeighting Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExOverlapScoresWeighting",
	Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::PropPointers),
	sizeof(FPCGExOverlapScoresWeighting),
	alignof(FPCGExOverlapScoresWeighting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.InnerSingleton, Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting.InnerSingleton);
}
// ********** End ScriptStruct FPCGExOverlapScoresWeighting ****************************************

// ********** Begin Class UPCGExDiscardByOverlapSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings;
UClass* UPCGExDiscardByOverlapSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDiscardByOverlapSettings;
	if (!Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDiscardByOverlapSettings"),
			Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDiscardByOverlapSettings,
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
	return Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDiscardByOverlapSettings_NoRegister()
{
	return UPCGExDiscardByOverlapSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExDiscardByOverlap.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCGExNodeLibraryDoc", "filters/discard-by-overlap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Overlap test mode */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap test mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Point bounds to be used to compute overlaps */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point bounds to be used to compute overlaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expansion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Expand bounds by that amount to account for a margin of error due to multiple layers of transformation and lack of OBB */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Expand bounds by that amount to account for a margin of error due to multiple layers of transformation and lack of OBB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scores weighting */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scores weighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logic_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pruning order & prioritization */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Pruning order & prioritization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum amount two sub-points must overlap to be added to the comparison.  The higher, the more \"overlap\" there must be. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The minimum amount two sub-points must overlap to be added to the comparison.  The higher, the more \"overlap\" there must be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdMeasure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to interpret the min overlap value.  Discrete means distance in world space  Relative means uses percentage (0-1) of the averaged radius. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to interpret the min overlap value.  Discrete means distance in world space  Relative means uses percentage (0-1) of the averaged radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFilteredInMetrics_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that are filtered out from overlap detection are still accounted for in static metrics/maths. i.e they still participate to the overall bounds shape etc instead of being thoroughly ignored. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, points that are filtered out from overlap detection are still accounted for in static metrics/maths. i.e they still participate to the overall bounds shape etc instead of being thoroughly ignored." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDiscardByOverlapSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Expansion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weighting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Logic_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Logic;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdMeasure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdMeasure;
	static void NewProp_bIncludeFilteredInMetrics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFilteredInMetrics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDiscardByOverlapSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDiscardByOverlapSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics

// ********** Begin Class UPCGExDiscardByOverlapSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, TestMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 932059669
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Expansion = { "Expansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, Expansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expansion_MetaData), NewProp_Expansion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Weighting = { "Weighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, Weighting), Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weighting_MetaData), NewProp_Weighting_MetaData) }; // 2693608957
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Logic_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Logic = { "Logic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, Logic), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapPruningLogic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logic_MetaData), NewProp_Logic_MetaData) }; // 2670979723
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_MinThreshold = { "MinThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, MinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThreshold_MetaData), NewProp_MinThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_ThresholdMeasure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_ThresholdMeasure = { "ThresholdMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByOverlapSettings, ThresholdMeasure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdMeasure_MetaData), NewProp_ThresholdMeasure_MetaData) }; // 356721050
void Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_bIncludeFilteredInMetrics_SetBit(void* Obj)
{
	((UPCGExDiscardByOverlapSettings*)Obj)->bIncludeFilteredInMetrics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_bIncludeFilteredInMetrics = { "bIncludeFilteredInMetrics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardByOverlapSettings), &Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_bIncludeFilteredInMetrics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFilteredInMetrics_MetaData), NewProp_bIncludeFilteredInMetrics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_TestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Expansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Weighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Logic_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_Logic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_MinThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_ThresholdMeasure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_ThresholdMeasure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::NewProp_bIncludeFilteredInMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDiscardByOverlapSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::ClassParams = {
	&UPCGExDiscardByOverlapSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::Class_MetaDataParams)
};
void UPCGExDiscardByOverlapSettings::StaticRegisterNativesUPCGExDiscardByOverlapSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDiscardByOverlapSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.OuterSingleton, Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings.OuterSingleton;
}
UPCGExDiscardByOverlapSettings::UPCGExDiscardByOverlapSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDiscardByOverlapSettings);
UPCGExDiscardByOverlapSettings::~UPCGExDiscardByOverlapSettings() {}
// ********** End Class UPCGExDiscardByOverlapSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOverlapTestMode_StaticEnum, TEXT("EPCGExOverlapTestMode"), &Z_Registration_Info_UEnum_EPCGExOverlapTestMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 932059669U) },
		{ EPCGExOverlapPruningLogic_StaticEnum, TEXT("EPCGExOverlapPruningLogic"), &Z_Registration_Info_UEnum_EPCGExOverlapPruningLogic, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2670979723U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExOverlapScoresWeighting::StaticStruct, Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics::NewStructOps, TEXT("PCGExOverlapScoresWeighting"),&Z_Registration_Info_UScriptStruct_FPCGExOverlapScoresWeighting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExOverlapScoresWeighting), 2693608957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDiscardByOverlapSettings, UPCGExDiscardByOverlapSettings::StaticClass, TEXT("UPCGExDiscardByOverlapSettings"), &Z_Registration_Info_UClass_UPCGExDiscardByOverlapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDiscardByOverlapSettings), 2697343612U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_3126865256{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
