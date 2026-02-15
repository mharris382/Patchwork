// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExAttributeStats.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeStats() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeStatsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeStatsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExStatsOutputToPoints *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints;
static UEnum* EPCGExStatsOutputToPoints_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStatsOutputToPoints"));
	}
	return Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStatsOutputToPoints>()
{
	return EPCGExStatsOutputToPoints_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "None.DisplayName", "No output" },
		{ "None.Name", "EPCGExStatsOutputToPoints::None" },
		{ "None.ToolTip", "None" },
		{ "Prefix.DisplayName", "Prefix" },
		{ "Prefix.Name", "EPCGExStatsOutputToPoints::Prefix" },
		{ "Prefix.ToolTip", "Uses specified name as a prefix to the attribute' name" },
		{ "Suffix.DisplayName", "Suffix" },
		{ "Suffix.Name", "EPCGExStatsOutputToPoints::Suffix" },
		{ "Suffix.ToolTip", "Uss specified name as a suffix to the attribute' name" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStatsOutputToPoints::None", (int64)EPCGExStatsOutputToPoints::None },
		{ "EPCGExStatsOutputToPoints::Prefix", (int64)EPCGExStatsOutputToPoints::Prefix },
		{ "EPCGExStatsOutputToPoints::Suffix", (int64)EPCGExStatsOutputToPoints::Suffix },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStatsOutputToPoints",
	"EPCGExStatsOutputToPoints",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints()
{
	if (!Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints.InnerSingleton;
}
// ********** End Enum EPCGExStatsOutputToPoints ***************************************************

// ********** Begin Class UPCGExAttributeStatsSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeStatsSettings;
UClass* UPCGExAttributeStatsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeStatsSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeStatsSettings"),
			Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeStatsSettings,
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
	return Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeStatsSettings_NoRegister()
{
	return UPCGExAttributeStatsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExAttributeStats.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCGExNodeLibraryDoc", "metadata/attribute-stats" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes to get. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attributes to get." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputPerUniqueValuesStats_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputToPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputToTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output to tags */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output to tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputIdentifier_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdentifierAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Identifier" },
		{ "EditCondition", "bOutputIdentifier" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDefaultValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Default" },
		{ "EditCondition", "bOutputDefaultValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputMinValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min" },
		{ "EditCondition", "bOutputMinValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputMaxValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Max" },
		{ "EditCondition", "bOutputMaxValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSetMinValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMinValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Non-Default Min" },
		{ "EditCondition", "bOutputSetMinValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSetMaxValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaxValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Non-Default Max" },
		{ "EditCondition", "bOutputSetMaxValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputAverageValue_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Average" },
		{ "EditCondition", "bOutputAverageValue" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputUniqueValuesNum_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueValuesNumAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Unique Values Num" },
		{ "EditCondition", "bOutputUniqueValuesNum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputUniqueSetValuesNum_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueSetValuesNumAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Unique Set Values Num" },
		{ "EditCondition", "bOutputUniqueSetValuesNum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDifferentValuesNum_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifferentValuesNumAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Different Values Num" },
		{ "EditCondition", "bOutputDifferentValuesNum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDifferentSetValuesNum_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifferentSetValuesNumAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Different Set Values Num" },
		{ "EditCondition", "bOutputDifferentSetValuesNum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDefaultValuesNum_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValuesNumAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Default Values Num" },
		{ "EditCondition", "bOutputDefaultValuesNum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputHasOnlyDefaultValues_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasOnlyDefaultValuesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Has only Default Values" },
		{ "EditCondition", "bOutputHasOnlyDefaultValues" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputHasOnlySetValues_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasOnlySetValuesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Has only Set Values" },
		{ "EditCondition", "bOutputHasOnlySetValues" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputHasOnlyUniqueValues_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasOnlyUniqueValuesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Has only Unique Values" },
		{ "EditCondition", "bOutputHasOnlyUniqueValues" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSamples_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Samples" },
		{ "EditCondition", "bOutputSamples" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputIsValid_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsValidAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Is Valid" },
		{ "EditCondition", "bOutputIsValid" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueValueAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs (Unique Values)" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Value Column" },
		{ "EditCondition", "bOutputPerUniqueValuesStats" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitDefaultValue_MetaData[] = {
		{ "Category", "Settings|Outputs (Unique Values)" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bOutputPerUniqueValuesStats" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs (Unique Values)" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Value Count" },
		{ "EditCondition", "bOutputPerUniqueValuesStats" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTypeMismatchWarning_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFeedbackLoopFailsafe_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeStats.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeStatsSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filters;
	static void NewProp_bOutputPerUniqueValuesStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputPerUniqueValuesStats;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputToPoints_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputToPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputToTags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputToTags;
	static void NewProp_bOutputIdentifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputIdentifier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IdentifierAttributeName;
	static void NewProp_bOutputDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDefaultValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValueAttributeName;
	static void NewProp_bOutputMinValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputMinValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MinValueAttributeName;
	static void NewProp_bOutputMaxValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputMaxValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxValueAttributeName;
	static void NewProp_bOutputSetMinValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSetMinValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SetMinValueAttributeName;
	static void NewProp_bOutputSetMaxValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSetMaxValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SetMaxValueAttributeName;
	static void NewProp_bOutputAverageValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputAverageValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AverageValueAttributeName;
	static void NewProp_bOutputUniqueValuesNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputUniqueValuesNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueValuesNumAttributeName;
	static void NewProp_bOutputUniqueSetValuesNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputUniqueSetValuesNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueSetValuesNumAttributeName;
	static void NewProp_bOutputDifferentValuesNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDifferentValuesNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DifferentValuesNumAttributeName;
	static void NewProp_bOutputDifferentSetValuesNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDifferentSetValuesNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DifferentSetValuesNumAttributeName;
	static void NewProp_bOutputDefaultValuesNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDefaultValuesNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValuesNumAttributeName;
	static void NewProp_bOutputHasOnlyDefaultValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputHasOnlyDefaultValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HasOnlyDefaultValuesAttributeName;
	static void NewProp_bOutputHasOnlySetValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputHasOnlySetValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HasOnlySetValuesAttributeName;
	static void NewProp_bOutputHasOnlyUniqueValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputHasOnlyUniqueValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HasOnlyUniqueValuesAttributeName;
	static void NewProp_bOutputSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSamples;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SamplesAttributeName;
	static void NewProp_bOutputIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputIsValid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsValidAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueValueAttributeName;
	static void NewProp_bOmitDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitDefaultValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueCountAttributeName;
	static void NewProp_bQuietTypeMismatchWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTypeMismatchWarning;
	static void NewProp_bFeedbackLoopFailsafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFeedbackLoopFailsafe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeStatsSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeStatsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics

// ********** Begin Class UPCGExAttributeStatsSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, Filters), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) }; // 1913362378
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputPerUniqueValuesStats_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputPerUniqueValuesStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputPerUniqueValuesStats = { "bOutputPerUniqueValuesStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputPerUniqueValuesStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputPerUniqueValuesStats_MetaData), NewProp_bOutputPerUniqueValuesStats_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToPoints_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToPoints = { "OutputToPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, OutputToPoints), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputToPoints_MetaData), NewProp_OutputToPoints_MetaData) }; // 4261474117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToTags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToTags = { "OutputToTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, OutputToTags), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStatsOutputToPoints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputToTags_MetaData), NewProp_OutputToTags_MetaData) }; // 4261474117
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIdentifier_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputIdentifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIdentifier = { "bOutputIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIdentifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputIdentifier_MetaData), NewProp_bOutputIdentifier_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_IdentifierAttributeName = { "IdentifierAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, IdentifierAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdentifierAttributeName_MetaData), NewProp_IdentifierAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValue = { "bOutputDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDefaultValue_MetaData), NewProp_bOutputDefaultValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DefaultValueAttributeName = { "DefaultValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, DefaultValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValueAttributeName_MetaData), NewProp_DefaultValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMinValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputMinValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMinValue = { "bOutputMinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMinValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputMinValue_MetaData), NewProp_bOutputMinValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_MinValueAttributeName = { "MinValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, MinValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValueAttributeName_MetaData), NewProp_MinValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMaxValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputMaxValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMaxValue = { "bOutputMaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMaxValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputMaxValue_MetaData), NewProp_bOutputMaxValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_MaxValueAttributeName = { "MaxValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, MaxValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValueAttributeName_MetaData), NewProp_MaxValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMinValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputSetMinValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMinValue = { "bOutputSetMinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMinValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSetMinValue_MetaData), NewProp_bOutputSetMinValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SetMinValueAttributeName = { "SetMinValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, SetMinValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMinValueAttributeName_MetaData), NewProp_SetMinValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMaxValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputSetMaxValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMaxValue = { "bOutputSetMaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMaxValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSetMaxValue_MetaData), NewProp_bOutputSetMaxValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SetMaxValueAttributeName = { "SetMaxValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, SetMaxValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaxValueAttributeName_MetaData), NewProp_SetMaxValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputAverageValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputAverageValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputAverageValue = { "bOutputAverageValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputAverageValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputAverageValue_MetaData), NewProp_bOutputAverageValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_AverageValueAttributeName = { "AverageValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, AverageValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageValueAttributeName_MetaData), NewProp_AverageValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueValuesNum_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputUniqueValuesNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueValuesNum = { "bOutputUniqueValuesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueValuesNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputUniqueValuesNum_MetaData), NewProp_bOutputUniqueValuesNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueValuesNumAttributeName = { "UniqueValuesNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, UniqueValuesNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueValuesNumAttributeName_MetaData), NewProp_UniqueValuesNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueSetValuesNum_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputUniqueSetValuesNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueSetValuesNum = { "bOutputUniqueSetValuesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueSetValuesNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputUniqueSetValuesNum_MetaData), NewProp_bOutputUniqueSetValuesNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueSetValuesNumAttributeName = { "UniqueSetValuesNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, UniqueSetValuesNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueSetValuesNumAttributeName_MetaData), NewProp_UniqueSetValuesNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentValuesNum_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputDifferentValuesNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentValuesNum = { "bOutputDifferentValuesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentValuesNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDifferentValuesNum_MetaData), NewProp_bOutputDifferentValuesNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DifferentValuesNumAttributeName = { "DifferentValuesNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, DifferentValuesNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifferentValuesNumAttributeName_MetaData), NewProp_DifferentValuesNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentSetValuesNum_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputDifferentSetValuesNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentSetValuesNum = { "bOutputDifferentSetValuesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentSetValuesNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDifferentSetValuesNum_MetaData), NewProp_bOutputDifferentSetValuesNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DifferentSetValuesNumAttributeName = { "DifferentSetValuesNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, DifferentSetValuesNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifferentSetValuesNumAttributeName_MetaData), NewProp_DifferentSetValuesNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValuesNum_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputDefaultValuesNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValuesNum = { "bOutputDefaultValuesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValuesNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDefaultValuesNum_MetaData), NewProp_bOutputDefaultValuesNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DefaultValuesNumAttributeName = { "DefaultValuesNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, DefaultValuesNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValuesNumAttributeName_MetaData), NewProp_DefaultValuesNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyDefaultValues_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputHasOnlyDefaultValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyDefaultValues = { "bOutputHasOnlyDefaultValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyDefaultValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputHasOnlyDefaultValues_MetaData), NewProp_bOutputHasOnlyDefaultValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlyDefaultValuesAttributeName = { "HasOnlyDefaultValuesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, HasOnlyDefaultValuesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasOnlyDefaultValuesAttributeName_MetaData), NewProp_HasOnlyDefaultValuesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlySetValues_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputHasOnlySetValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlySetValues = { "bOutputHasOnlySetValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlySetValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputHasOnlySetValues_MetaData), NewProp_bOutputHasOnlySetValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlySetValuesAttributeName = { "HasOnlySetValuesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, HasOnlySetValuesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasOnlySetValuesAttributeName_MetaData), NewProp_HasOnlySetValuesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyUniqueValues_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputHasOnlyUniqueValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyUniqueValues = { "bOutputHasOnlyUniqueValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyUniqueValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputHasOnlyUniqueValues_MetaData), NewProp_bOutputHasOnlyUniqueValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlyUniqueValuesAttributeName = { "HasOnlyUniqueValuesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, HasOnlyUniqueValuesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasOnlyUniqueValuesAttributeName_MetaData), NewProp_HasOnlyUniqueValuesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSamples_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSamples = { "bOutputSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSamples_MetaData), NewProp_bOutputSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SamplesAttributeName = { "SamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, SamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesAttributeName_MetaData), NewProp_SamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIsValid_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOutputIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIsValid = { "bOutputIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputIsValid_MetaData), NewProp_bOutputIsValid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_IsValidAttributeName = { "IsValidAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, IsValidAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsValidAttributeName_MetaData), NewProp_IsValidAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueValueAttributeName = { "UniqueValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, UniqueValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueValueAttributeName_MetaData), NewProp_UniqueValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOmitDefaultValue_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bOmitDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOmitDefaultValue = { "bOmitDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOmitDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitDefaultValue_MetaData), NewProp_bOmitDefaultValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_ValueCountAttributeName = { "ValueCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeStatsSettings, ValueCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueCountAttributeName_MetaData), NewProp_ValueCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bQuietTypeMismatchWarning_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bQuietTypeMismatchWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bQuietTypeMismatchWarning = { "bQuietTypeMismatchWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bQuietTypeMismatchWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTypeMismatchWarning_MetaData), NewProp_bQuietTypeMismatchWarning_MetaData) };
void Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bFeedbackLoopFailsafe_SetBit(void* Obj)
{
	((UPCGExAttributeStatsSettings*)Obj)->bFeedbackLoopFailsafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bFeedbackLoopFailsafe = { "bFeedbackLoopFailsafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeStatsSettings), &Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bFeedbackLoopFailsafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFeedbackLoopFailsafe_MetaData), NewProp_bFeedbackLoopFailsafe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputPerUniqueValuesStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToPoints_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToTags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_OutputToTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_IdentifierAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DefaultValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_MinValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_MaxValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SetMinValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSetMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SetMaxValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputAverageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_AverageValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueValuesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueValuesNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputUniqueSetValuesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueSetValuesNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentValuesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DifferentValuesNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDifferentSetValuesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DifferentSetValuesNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputDefaultValuesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_DefaultValuesNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyDefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlyDefaultValuesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlySetValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlySetValuesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputHasOnlyUniqueValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_HasOnlyUniqueValuesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_SamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOutputIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_IsValidAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_UniqueValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bOmitDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_ValueCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bQuietTypeMismatchWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::NewProp_bFeedbackLoopFailsafe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeStatsSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::ClassParams = {
	&UPCGExAttributeStatsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributeStatsSettings::StaticRegisterNativesUPCGExAttributeStatsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeStatsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeStatsSettings.OuterSingleton;
}
UPCGExAttributeStatsSettings::UPCGExAttributeStatsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeStatsSettings);
UPCGExAttributeStatsSettings::~UPCGExAttributeStatsSettings() {}
// ********** End Class UPCGExAttributeStatsSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExStatsOutputToPoints_StaticEnum, TEXT("EPCGExStatsOutputToPoints"), &Z_Registration_Info_UEnum_EPCGExStatsOutputToPoints, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4261474117U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributeStatsSettings, UPCGExAttributeStatsSettings::StaticClass, TEXT("UPCGExAttributeStatsSettings"), &Z_Registration_Info_UClass_UPCGExAttributeStatsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeStatsSettings), 1762911314U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_1933545546{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
