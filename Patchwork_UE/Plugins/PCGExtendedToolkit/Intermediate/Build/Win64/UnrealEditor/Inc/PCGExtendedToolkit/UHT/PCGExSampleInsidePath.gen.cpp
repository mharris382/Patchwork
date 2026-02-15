// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleInsidePath.h"
#include "Curves/CurveFloat.h"
#include "Data/Matching/PCGExMatching.h"
#include "Geometry/PCGExGeo.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleInsidePath() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleInsidePathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleInsidePathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSampleInsidePathOutput **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput;
static UEnum* EPCGExSampleInsidePathOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSampleInsidePathOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleInsidePathOutput>()
{
	return EPCGExSampleInsidePathOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExSampleInsidePathOutput::All" },
		{ "All.Tooltip", "Output all paths, whether they successfully sampled a target or not" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "Split.DisplayName", "Split" },
		{ "Split.Name", "EPCGExSampleInsidePathOutput::Split" },
		{ "Split.Tooltip", "Split between two pins" },
		{ "SuccessOnly.DisplayName", "Success only" },
		{ "SuccessOnly.Name", "EPCGExSampleInsidePathOutput::SuccessOnly" },
		{ "SuccessOnly.Tooltip", "Output only paths that have sampled at least a single target point" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSampleInsidePathOutput::All", (int64)EPCGExSampleInsidePathOutput::All },
		{ "EPCGExSampleInsidePathOutput::SuccessOnly", (int64)EPCGExSampleInsidePathOutput::SuccessOnly },
		{ "EPCGExSampleInsidePathOutput::Split", (int64)EPCGExSampleInsidePathOutput::Split },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSampleInsidePathOutput",
	"EPCGExSampleInsidePathOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput.InnerSingleton;
}
// ********** End Enum EPCGExSampleInsidePathOutput ************************************************

// ********** Begin Class UPCGExSampleInsidePathSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings;
UClass* UPCGExSampleInsidePathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleInsidePathSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleInsidePathSettings"),
			Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleInsidePathSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleInsidePathSettings_NoRegister()
{
	return UPCGExSampleInsidePathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleInsidePath.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-spline-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessInputs_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Process inputs.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Process inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sampling method.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sort direction */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sort direction" },
		{ "EditCondition", "SampleMethod == EPCGExSampleMethod::BestCandidate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSampleWhenInside_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If enabled, will always sample points if they lie inside, even if further away from the edges than the specified max range. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will always sample points if they lie inside, even if further away from the edges than the specified max range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySampleWhenInside_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If enabled, will only sample paths if the point lies inside */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will only sample paths if the point lies inside" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionOffset_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If non-zero, will apply an offset (inset) to the data used for inclusion testing. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If non-zero, will apply an offset (inset) to the data used for inclusion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "DisplayName", "Range Min (Attr)" },
		{ "EditCondition", "RangeMinInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "EditCondition", "RangeMinInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "DisplayName", "Range Max (Attr)" },
		{ "EditCondition", "RangeMaxInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "EditCondition", "RangeMaxInput == EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightInclusion_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If the value is greater than 0, will do a rough vertical check as part of the projected inclusion. 0 is infinite. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If the value is greater than 0, will do a rough vertical check as part of the projected inclusion. 0 is infinite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Weight method used for blending */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight method used for blending" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Over Distance" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** If enabled, will only output paths that have at least sampled one target point */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will only output paths that have at least sampled one target point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumInside_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the inside/outside status of the point toward any sampled spline. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the inside/outside status of the point toward any sampled spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of spline this point lies inside*/" },
		{ "DisplayName", "NumInside" },
		{ "EditCondition", "bWriteNumInside" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of spline this point lies inside" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyIncrementInsideNumIfClosed_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Only increment num inside count when comes from a bClosedLoop spline. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Only if Closed Path" },
		{ "EditCondition", "bWriteNumInside && ProcessInputs == EPCGExPathSamplingIncludeMode::All" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Only increment num inside count when comes from a bClosedLoop spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumSamples_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of sampled neighbors to.*/" },
		{ "DisplayName", "NumSamples" },
		{ "EditCondition", "bWriteNumSamples" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of sampled neighbors to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if at least a single spline has been sampled.*/" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if at least a single spline has been sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if no spline was found within range.*/" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if no spline was found within range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleInsidePath.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleInsidePathSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProcessInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static void NewProp_bAlwaysSampleWhenInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSampleWhenInside;
	static void NewProp_bOnlySampleWhenInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySampleWhenInside;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InclusionOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMinInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMinInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMinAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMaxInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMaxInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMaxAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightInclusion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMethod;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightOverDistance;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightOverDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static void NewProp_bWriteSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSuccess;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuccessAttributeName;
	static void NewProp_bWriteDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceAttributeName;
	static void NewProp_bWriteNumInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumInside;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumInsideAttributeName;
	static void NewProp_bOnlyIncrementInsideNumIfClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncrementInsideNumIfClosed;
	static void NewProp_bWriteNumSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumSamples;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumSamplesAttributeName;
	static void NewProp_bTagIfHasSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasSuccessesTag;
	static void NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoSuccessesTag;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleInsidePathSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleInsidePathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics

// ********** Begin Class UPCGExSampleInsidePathSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProcessInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProcessInputs = { "ProcessInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, ProcessInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessInputs_MetaData), NewProp_ProcessInputs_MetaData) }; // 992307933
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, SampleMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 2414402877
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bAlwaysSampleWhenInside_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bAlwaysSampleWhenInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bAlwaysSampleWhenInside = { "bAlwaysSampleWhenInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bAlwaysSampleWhenInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysSampleWhenInside_MetaData), NewProp_bAlwaysSampleWhenInside_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlySampleWhenInside_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bOnlySampleWhenInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlySampleWhenInside = { "bOnlySampleWhenInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlySampleWhenInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySampleWhenInside_MetaData), NewProp_bOnlySampleWhenInside_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_InclusionOffset = { "InclusionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, InclusionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionOffset_MetaData), NewProp_InclusionOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinInput = { "RangeMinInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMinInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinInput_MetaData), NewProp_RangeMinInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinAttribute = { "RangeMinAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMinAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinAttribute_MetaData), NewProp_RangeMinAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxInput = { "RangeMaxInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMaxInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxInput_MetaData), NewProp_RangeMaxInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxAttribute = { "RangeMaxAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMaxAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxAttribute_MetaData), NewProp_RangeMaxAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HeightInclusion = { "HeightInclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, HeightInclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightInclusion_MetaData), NewProp_HeightInclusion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightMethod = { "WeightMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, WeightMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMethod_MetaData), NewProp_WeightMethod_MetaData) }; // 1971727460
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_LocalWeightOverDistance = { "LocalWeightOverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, LocalWeightOverDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightOverDistance_MetaData), NewProp_LocalWeightOverDistance_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightOverDistance = { "WeightOverDistance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, WeightOverDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOverDistance_MetaData), NewProp_WeightOverDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleInsidePathOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 3499880366
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumInside_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bWriteNumInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumInside = { "bWriteNumInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumInside_MetaData), NewProp_bWriteNumInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_NumInsideAttributeName = { "NumInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, NumInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInsideAttributeName_MetaData), NewProp_NumInsideAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bOnlyIncrementInsideNumIfClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed = { "bOnlyIncrementInsideNumIfClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyIncrementInsideNumIfClosed_MetaData), NewProp_bOnlyIncrementInsideNumIfClosed_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumSamples_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bWriteNumSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumSamples = { "bWriteNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumSamples_MetaData), NewProp_bWriteNumSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_NumSamplesAttributeName = { "NumSamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, NumSamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesAttributeName_MetaData), NewProp_NumSamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleInsidePathSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((UPCGExSampleInsidePathSettings*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleInsidePathSettings), &Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProcessInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_ProcessInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bAlwaysSampleWhenInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlySampleWhenInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_InclusionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMinAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMaxAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HeightInclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_LocalWeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_WeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_NumInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bWriteNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_NumSamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleInsidePathSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::ClassParams = {
	&UPCGExSampleInsidePathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleInsidePathSettings::StaticRegisterNativesUPCGExSampleInsidePathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleInsidePathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleInsidePathSettings);
UPCGExSampleInsidePathSettings::~UPCGExSampleInsidePathSettings() {}
// ********** End Class UPCGExSampleInsidePathSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSampleInsidePathOutput_StaticEnum, TEXT("EPCGExSampleInsidePathOutput"), &Z_Registration_Info_UEnum_EPCGExSampleInsidePathOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3499880366U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleInsidePathSettings, UPCGExSampleInsidePathSettings::StaticClass, TEXT("UPCGExSampleInsidePathSettings"), &Z_Registration_Info_UClass_UPCGExSampleInsidePathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleInsidePathSettings), 592276734U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_3436250172{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
