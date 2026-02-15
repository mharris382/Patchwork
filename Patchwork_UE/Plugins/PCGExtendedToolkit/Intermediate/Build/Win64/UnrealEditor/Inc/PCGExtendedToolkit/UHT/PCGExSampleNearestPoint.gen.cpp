// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNearestPoint.h"
#include "Curves/CurveFloat.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/Matching/PCGExMatching.h"
#include "Details/PCGExDetailsDistances.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNearestPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestPointSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestPointSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleNearestPointSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings;
UClass* UPCGExSampleNearestPointSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNearestPointSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNearestPointSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNearestPointSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNearestPointSettings_NoRegister()
{
	return UPCGExSampleNearestPointSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleNearestPoint.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sampling method.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sort direction */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sort direction" },
		{ "EditCondition", "SampleMethod == EPCGExSampleMethod::BestCandidate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "DisplayName", "Range Min (Attr)" },
		{ "EditCondition", "RangeMinInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "EditCondition", "RangeMinInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "DisplayName", "Range Max (Attr)" },
		{ "EditCondition", "RangeMaxInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "EditCondition", "RangeMaxInput == EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMode_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Which mode to use to compute weights. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which mode to use to compute weights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Weight attribute to read on targets. */" },
		{ "EditCondition", "WeightMode != EPCGExSampleWeightMode::Distance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight attribute to read on targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDetails_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Distance method to be used for source & target points. */" },
		{ "EditCondition", "WeightMode != EPCGExSampleWeightMode::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source & target points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Weight method used for blending */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight method used for blending" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "EditCondition", "WeightMode != EPCGExSampleWeightMode::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Over Distance" },
		{ "EditCondition", "WeightMode != EPCGExSampleWeightMode::Attribute && bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "EditCondition", "WeightMode != EPCGExSampleWeightMode::Attribute && !bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingInterface_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** How to blend data from sampled points */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to blend data from sampled points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributes_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** Attributes to sample from the targets */" },
		{ "EditCondition", "BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attributes to sample from the targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendPointProperties_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "EditCondition", "BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPropertiesBlendingSettings_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "EditCondition", "bBlendPointProperties && BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "Transform" },
		{ "EditCondition", "bWriteTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAtTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAtTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxisAlign_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis to align transform the look at vector to.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Align" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis to align transform the look at vector to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSelection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Use Up from..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSource_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "LookAtUpSelection != EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpConstant_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputNormalizedDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Whether to output normalized distance or not*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Normalized" },
		{ "EditCondition", "bWriteDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output normalized distance or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputOneMinusDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Whether to do a OneMinus on the normalized distance value */" },
		{ "DisplayName", "\xe2\x94\x82 \xe2\x94\x94\xe2\x94\x80 OneMinus" },
		{ "EditCondition", "bWriteDistance && bOutputNormalizedDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to do a OneMinus on the normalized distance value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Scale factor applied to the distance output; allows to easily invert it using -1 */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "bWriteDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSignedDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled Signed distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled Signed distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "SignedDistance" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled Signed distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Axis to use to calculate the distance' sign*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Axis" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis to use to calculate the distance' sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceScale_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Scale factor applied to the signed distance output; allows to easily invert it using -1 */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the signed distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteComponentWiseDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled component-wise distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled component-wise distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentWiseDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write component-wise distance to.*/" },
		{ "DisplayName", "Component Wise Distance" },
		{ "EditCondition", "bWriteComponentWiseDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write component-wise distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteComponentWiseDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Whether to output absolute or signed component wise distances */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteComponentWiseDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output absolute or signed component wise distances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngle_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled angle. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "Angle" },
		{ "EditCondition", "bWriteAngle" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled Signed distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Axis to use to calculate the angle*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Axis" },
		{ "EditCondition", "bWriteAngle" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis to use to calculate the angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRange_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Unit/range to output the angle to.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Range" },
		{ "EditCondition", "bWriteAngle" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unit/range to output the angle to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumSamples_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of sampled neighbors to.*/" },
		{ "DisplayName", "NumSamples" },
		{ "EditCondition", "bWriteNumSamples" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of sampled neighbors to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSampledIndex_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampledIndexAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the sampled index to. Will use the closest index when sampling multiple points. */" },
		{ "DisplayName", "SampledIndex" },
		{ "EditCondition", "bWriteSampledIndex" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the sampled index to. Will use the closest index when sampling multiple points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if at least a single point has been sampled. */" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if at least a single point has been sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if no points were sampled. */" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if no points were sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPoint.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNearestPointSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMinInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMinInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMinAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMaxInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMaxInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMaxAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMethod;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightOverDistance;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightOverDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplySampling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingInterface_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingInterface;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetAttributes_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetAttributes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetAttributes;
	static void NewProp_bBlendPointProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendPointProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointPropertiesBlendingSettings;
	static void NewProp_bWriteSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSuccess;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuccessAttributeName;
	static void NewProp_bWriteTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransformAttributeName;
	static void NewProp_bWriteLookAtTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLookAtTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtTransformAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtAxisAlign_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtAxisAlign;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtUpSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtUpSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtUpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtUpConstant;
	static void NewProp_bWriteDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceAttributeName;
	static void NewProp_bOutputNormalizedDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputNormalizedDistance;
	static void NewProp_bOutputOneMinusDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOneMinusDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceScale;
	static void NewProp_bWriteSignedDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSignedDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SignedDistanceAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SignAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SignAxis;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SignedDistanceScale;
	static void NewProp_bWriteComponentWiseDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteComponentWiseDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentWiseDistanceAttributeName;
	static void NewProp_bAbsoluteComponentWiseDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteComponentWiseDistance;
	static void NewProp_bWriteAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAngle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AngleAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngleAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngleAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngleRange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngleRange;
	static void NewProp_bWriteNumSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumSamples;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumSamplesAttributeName;
	static void NewProp_bWriteSampledIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSampledIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SampledIndexAttributeName;
	static void NewProp_bTagIfHasSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasSuccessesTag;
	static void NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoSuccessesTag;
	static void NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessFilteredOutAsFails;
	static void NewProp_bPruneFailedSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneFailedSamples;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleNearestPointSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNearestPointSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics

// ********** Begin Class UPCGExSampleNearestPointSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SampleMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 2414402877
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinInput = { "RangeMinInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMinInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinInput_MetaData), NewProp_RangeMinInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinAttribute = { "RangeMinAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMinAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinAttribute_MetaData), NewProp_RangeMinAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxInput = { "RangeMaxInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMaxInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxInput_MetaData), NewProp_RangeMaxInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxAttribute = { "RangeMaxAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMaxAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxAttribute_MetaData), NewProp_RangeMaxAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMode = { "WeightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, WeightMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMode_MetaData), NewProp_WeightMode_MetaData) }; // 2397014392
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightAttribute = { "WeightAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, WeightAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttribute_MetaData), NewProp_WeightAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceDetails = { "DistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, DistanceDetails), Z_Construct_UScriptStruct_FPCGExDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDetails_MetaData), NewProp_DistanceDetails_MetaData) }; // 649156467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMethod = { "WeightMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, WeightMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMethod_MetaData), NewProp_WeightMethod_MetaData) }; // 1971727460
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LocalWeightOverDistance = { "LocalWeightOverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LocalWeightOverDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightOverDistance_MetaData), NewProp_LocalWeightOverDistance_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightOverDistance = { "WeightOverDistance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, WeightOverDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOverDistance_MetaData), NewProp_WeightOverDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_BlendingInterface_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_BlendingInterface = { "BlendingInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, BlendingInterface), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingInterface_MetaData), NewProp_BlendingInterface_MetaData) }; // 1762397716
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_ValueProp = { "TargetAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(0, nullptr) }; // 4044480617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_Key_KeyProp = { "TargetAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes = { "TargetAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, TargetAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributes_MetaData), NewProp_TargetAttributes_MetaData) }; // 4044480617
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bBlendPointProperties_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bBlendPointProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bBlendPointProperties = { "bBlendPointProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bBlendPointProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendPointProperties_MetaData), NewProp_bBlendPointProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_PointPropertiesBlendingSettings = { "PointPropertiesBlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, PointPropertiesBlendingSettings), Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPropertiesBlendingSettings_MetaData), NewProp_PointPropertiesBlendingSettings_MetaData) }; // 1047595412
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteTransform = { "bWriteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTransform_MetaData), NewProp_bWriteTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TransformAttributeName = { "TransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, TransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeName_MetaData), NewProp_TransformAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteLookAtTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteLookAtTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteLookAtTransform = { "bWriteLookAtTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteLookAtTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAtTransform_MetaData), NewProp_bWriteLookAtTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtTransformAttributeName = { "LookAtTransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LookAtTransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTransformAttributeName_MetaData), NewProp_LookAtTransformAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtAxisAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtAxisAlign = { "LookAtAxisAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LookAtAxisAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxisAlign_MetaData), NewProp_LookAtAxisAlign_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSelection = { "LookAtUpSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LookAtUpSelection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSelection_MetaData), NewProp_LookAtUpSelection_MetaData) }; // 925482475
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSource = { "LookAtUpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LookAtUpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSource_MetaData), NewProp_LookAtUpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpConstant = { "LookAtUpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, LookAtUpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpConstant_MetaData), NewProp_LookAtUpConstant_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSignedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteSignedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSignedDistance = { "bWriteSignedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSignedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSignedDistance_MetaData), NewProp_bWriteSignedDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignedDistanceAttributeName = { "SignedDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SignedDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceAttributeName_MetaData), NewProp_SignedDistanceAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignAxis = { "SignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignAxis_MetaData), NewProp_SignAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignedDistanceScale = { "SignedDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SignedDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceScale_MetaData), NewProp_SignedDistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteComponentWiseDistance = { "bWriteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteComponentWiseDistance_MetaData), NewProp_bWriteComponentWiseDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_ComponentWiseDistanceAttributeName = { "ComponentWiseDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, ComponentWiseDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentWiseDistanceAttributeName_MetaData), NewProp_ComponentWiseDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bAbsoluteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bAbsoluteComponentWiseDistance = { "bAbsoluteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteComponentWiseDistance_MetaData), NewProp_bAbsoluteComponentWiseDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteAngle_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteAngle = { "bWriteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngle_MetaData), NewProp_bWriteAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAttributeName = { "AngleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, AngleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttributeName_MetaData), NewProp_AngleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAxis = { "AngleAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, AngleAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAxis_MetaData), NewProp_AngleAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, AngleRange), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRange_MetaData), NewProp_AngleRange_MetaData) }; // 1931588405
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteNumSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteNumSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteNumSamples = { "bWriteNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteNumSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumSamples_MetaData), NewProp_bWriteNumSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_NumSamplesAttributeName = { "NumSamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, NumSamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesAttributeName_MetaData), NewProp_NumSamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSampledIndex_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bWriteSampledIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSampledIndex = { "bWriteSampledIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSampledIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSampledIndex_MetaData), NewProp_bWriteSampledIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampledIndexAttributeName = { "SampledIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, SampledIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampledIndexAttributeName_MetaData), NewProp_SampledIndexAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPointSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((UPCGExSampleNearestPointSettings*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPointSettings), &Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMinAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMaxAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LocalWeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_WeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_BlendingInterface_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_BlendingInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TargetAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bBlendPointProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_PointPropertiesBlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_TransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteLookAtTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtTransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtAxisAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtAxisAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_LookAtUpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSignedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignedDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SignedDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_ComponentWiseDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bAbsoluteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_AngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_NumSamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bWriteSampledIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_SampledIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleNearestPointSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::ClassParams = {
	&UPCGExSampleNearestPointSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNearestPointSettings::StaticRegisterNativesUPCGExSampleNearestPointSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNearestPointSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNearestPointSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNearestPointSettings);
UPCGExSampleNearestPointSettings::~UPCGExSampleNearestPointSettings() {}
// ********** End Class UPCGExSampleNearestPointSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPoint_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNearestPointSettings, UPCGExSampleNearestPointSettings::StaticClass, TEXT("UPCGExSampleNearestPointSettings"), &Z_Registration_Info_UClass_UPCGExSampleNearestPointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNearestPointSettings), 2054626752U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPoint_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPoint_h__Script_PCGExtendedToolkit_3580094200{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPoint_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPoint_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
