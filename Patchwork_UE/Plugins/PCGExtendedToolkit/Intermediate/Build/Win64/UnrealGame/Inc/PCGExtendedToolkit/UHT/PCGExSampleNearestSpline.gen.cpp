// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNearestSpline.h"
#include "Curves/CurveFloat.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNearestSpline() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestSplineSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestSplineSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSplineDepthMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplineDepthMode;
static UEnum* EPCGExSplineDepthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineDepthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplineDepthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplineDepthMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplineDepthMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineDepthMode>()
{
	return EPCGExSplineDepthMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExSplineDepthMode::Average" },
		{ "Average.ToolTip", "..." },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExSplineDepthMode::Max" },
		{ "Max.ToolTip", "..." },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExSplineDepthMode::Min" },
		{ "Min.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplineDepthMode::Min", (int64)EPCGExSplineDepthMode::Min },
		{ "EPCGExSplineDepthMode::Max", (int64)EPCGExSplineDepthMode::Max },
		{ "EPCGExSplineDepthMode::Average", (int64)EPCGExSplineDepthMode::Average },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplineDepthMode",
	"EPCGExSplineDepthMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineDepthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplineDepthMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplineDepthMode.InnerSingleton;
}
// ********** End Enum EPCGExSplineDepthMode *******************************************************

// ********** Begin Enum EPCGExSplineSampleAlphaMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode;
static UEnum* EPCGExSplineSampleAlphaMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplineSampleAlphaMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineSampleAlphaMode>()
{
	return EPCGExSplineSampleAlphaMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.DisplayName", "Alpha" },
		{ "Alpha.Name", "EPCGExSplineSampleAlphaMode::Alpha" },
		{ "Alpha.ToolTip", "0 - 1 value" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExSplineSampleAlphaMode::Distance" },
		{ "Distance.ToolTip", "Distance on the spline to sample value at" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "Time.DisplayName", "Time" },
		{ "Time.Name", "EPCGExSplineSampleAlphaMode::Time" },
		{ "Time.ToolTip", "0 - N value, where N is the number of segments" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplineSampleAlphaMode::Alpha", (int64)EPCGExSplineSampleAlphaMode::Alpha },
		{ "EPCGExSplineSampleAlphaMode::Time", (int64)EPCGExSplineSampleAlphaMode::Time },
		{ "EPCGExSplineSampleAlphaMode::Distance", (int64)EPCGExSplineSampleAlphaMode::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplineSampleAlphaMode",
	"EPCGExSplineSampleAlphaMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode.InnerSingleton;
}
// ********** End Enum EPCGExSplineSampleAlphaMode *************************************************

// ********** Begin Class UPCGExSampleNearestSplineSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings;
UClass* UPCGExSampleNearestSplineSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNearestSplineSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNearestSplineSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNearestSplineSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNearestSplineSettings_NoRegister()
{
	return UPCGExSampleNearestSplineSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Sampling/PCGExSampleNearestSpline.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-spline" },
		{ "ToolTip", "Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sampling method.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplineScalesRanges_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If enabled, spline scale affect range. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, spline scale affect range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "DisplayName", "Range Min (Attr)" },
		{ "EditCondition", "RangeMinInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "EditCondition", "RangeMinInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "DisplayName", "Range Max (Attr)" },
		{ "EditCondition", "RangeMaxInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "EditCondition", "RangeMaxInput == EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSampleSpecificAlpha_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether spline should be sampled at a specific alpha */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether spline should be sampled at a specific alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Where to read the sampling alpha from. */" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Where to read the sampling alpha from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaMode_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** How to interpret the sample alpha value. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Mode" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to interpret the sample alpha value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapClosedLoopAlpha_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to wrap out of bounds value on closed loops. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Wrap Closed Loops" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to wrap out of bounds value on closed loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Per-point sample alpha -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sample Alpha (Attr)" },
		{ "EditCondition", "bSampleSpecificAlpha && SampleAlphaInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point sample alpha -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaConstant_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Constant sample alpha. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sample Alpha" },
		{ "EditCondition", "bSampleSpecificAlpha && SampleAlphaInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant sample alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceSettings_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Distance method to be used for source points. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMethod_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Weight method used for blending */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight method used for blending" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeightFromOriginalTransform_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** If enabled, will preserve the original point transform as base for weighting. Otherwise, use transform identity. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will preserve the original point transform as base for weighting. Otherwise, use transform identity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Over Distance" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "Transform" },
		{ "EditCondition", "bWriteTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAtTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAtTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxisAlign_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis to align transform the look at vector to.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Align" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis to align transform the look at vector to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSelection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Use Up from..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSource_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Source" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis on the target to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Axis)" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Target" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis on the target to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpConstant_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSignedDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled Signed distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled Signed distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "SignedDistance" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis to use to calculate the distance' sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySignIfClosed_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Only sign the distance if at least one sampled spline is a bClosedLoop spline. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Only if Closed Spline" },
		{ "EditCondition", "bWriteSignedDistance && SampleInputs == EPCGExSplineSamplingIncludeMode::All" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Only sign the distance if at least one sampled spline is a bClosedLoop spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceScale_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Scale factor applied to the signed distance output; allows to easily invert it using -1 */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the signed distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteComponentWiseDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled component-wise distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled component-wise distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentWiseDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write component-wise distance to.*/" },
		{ "DisplayName", "Component Wise Distance" },
		{ "EditCondition", "bWriteComponentWiseDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output absolute or signed component wise distances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngle_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled angle. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "Angle" },
		{ "EditCondition", "bWriteAngle" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unit/range to output the angle to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTime_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled time (spline space). */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled time (spline space)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled spline Time to.*/" },
		{ "DisplayName", "Time" },
		{ "EditCondition", "bWriteTime" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled spline Time to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteArriveTangent_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Arrive tangent */" },
		{ "DisplayName", "Arrive Tangent" },
		{ "EditCondition", "bWriteArriveTangent" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Arrive tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLeaveTangent_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Leave tangent */" },
		{ "DisplayName", "Leave Tangent" },
		{ "EditCondition", "bWriteLeaveTangent" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Leave tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumInside_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the inside/outside status of the point toward any sampled spline. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the inside/outside status of the point toward any sampled spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of spline this point lies inside*/" },
		{ "DisplayName", "NumInside" },
		{ "EditCondition", "bWriteNumInside" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of spline this point lies inside" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyIncrementInsideNumIfClosed_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Only increment num inside count when comes from a bClosedLoop spline. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Only if Closed Spline" },
		{ "EditCondition", "bWriteNumInside && SampleInputs == EPCGExSplineSamplingIncludeMode::All" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Only increment num inside count when comes from a bClosedLoop spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumSamples_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of sampled neighbors to.*/" },
		{ "DisplayName", "NumSamples" },
		{ "EditCondition", "bWriteNumSamples" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of sampled neighbors to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteClosedLoop_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the whether the sampled spline is closed or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the whether the sampled spline is closed or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedLoopAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to write whether a closed spline was sampled or not.*/" },
		{ "DisplayName", "ClosedLoop" },
		{ "EditCondition", "bWriteClosedLoop" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write whether a closed spline was sampled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTotalWeight_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the whether the sampled spline is closed or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the whether the sampled spline is closed or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWeightAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write the total weight computed for that point.*/" },
		{ "DisplayName", "Total Weight" },
		{ "EditCondition", "bWriteTotalWeight" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write the total weight computed for that point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDepth_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the sampled depth. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled depth." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled depth to.*/" },
		{ "DisplayName", "Depth" },
		{ "EditCondition", "bWriteDepth" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled depth to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthRange_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Depth range */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Range" },
		{ "EditCondition", "bWriteDepth" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Depth range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDepth_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Inverts depth */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Invert" },
		{ "EditCondition", "bWriteDepth" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverts depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthMode_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Depth mode */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Mode" },
		{ "EditCondition", "bWriteDepth" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Depth mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if at least a single spline has been sampled.*/" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if at least a single spline has been sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if no spline was found within range.*/" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if no spline was found within range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctree_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optimize spatial partitioning, but limit the \"reach\" of splines to their bounding box. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Optimize spatial partitioning, but limit the \"reach\" of splines to their bounding box." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNearestSplineSettings constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static void NewProp_bSplineScalesRanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineScalesRanges;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMinInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMinInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMinAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMaxInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMaxInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMaxAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMax;
	static void NewProp_bSampleSpecificAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleSpecificAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleAlphaInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleAlphaInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleAlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleAlphaMode;
	static void NewProp_bWrapClosedLoopAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapClosedLoopAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleAlphaAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleAlphaConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceSettings_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMethod;
	static void NewProp_bWeightFromOriginalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeightFromOriginalTransform;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightOverDistance;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightOverDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplySampling;
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtUpAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtUpAxis;
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
	static void NewProp_bOnlySignIfClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySignIfClosed;
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
	static void NewProp_bWriteTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TimeAttributeName;
	static void NewProp_bWriteArriveTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteArriveTangent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttributeName;
	static void NewProp_bWriteLeaveTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLeaveTangent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttributeName;
	static void NewProp_bWriteNumInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumInside;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumInsideAttributeName;
	static void NewProp_bOnlyIncrementInsideNumIfClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncrementInsideNumIfClosed;
	static void NewProp_bWriteNumSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumSamples;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumSamplesAttributeName;
	static void NewProp_bWriteClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteClosedLoop;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClosedLoopAttributeName;
	static void NewProp_bWriteTotalWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTotalWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TotalWeightAttributeName;
	static void NewProp_bWriteDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDepth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DepthAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthRange;
	static void NewProp_bInvertDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DepthMode;
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
	static void NewProp_bUseOctree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleNearestSplineSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNearestSplineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics

// ********** Begin Class UPCGExSampleNearestSplineSettings Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 3557312926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 2414402877
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSplineScalesRanges_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bSplineScalesRanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSplineScalesRanges = { "bSplineScalesRanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSplineScalesRanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplineScalesRanges_MetaData), NewProp_bSplineScalesRanges_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinInput = { "RangeMinInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMinInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinInput_MetaData), NewProp_RangeMinInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinAttribute = { "RangeMinAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMinAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinAttribute_MetaData), NewProp_RangeMinAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxInput = { "RangeMaxInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMaxInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxInput_MetaData), NewProp_RangeMaxInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxAttribute = { "RangeMaxAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMaxAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxAttribute_MetaData), NewProp_RangeMaxAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSampleSpecificAlpha_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bSampleSpecificAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSampleSpecificAlpha = { "bSampleSpecificAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSampleSpecificAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSampleSpecificAlpha_MetaData), NewProp_bSampleSpecificAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaInput = { "SampleAlphaInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleAlphaInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaInput_MetaData), NewProp_SampleAlphaInput_MetaData) }; // 504493006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaMode = { "SampleAlphaMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleAlphaMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSampleAlphaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaMode_MetaData), NewProp_SampleAlphaMode_MetaData) }; // 1560808674
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWrapClosedLoopAlpha_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWrapClosedLoopAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWrapClosedLoopAlpha = { "bWrapClosedLoopAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWrapClosedLoopAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapClosedLoopAlpha_MetaData), NewProp_bWrapClosedLoopAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaAttribute = { "SampleAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleAlphaAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaAttribute_MetaData), NewProp_SampleAlphaAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaConstant = { "SampleAlphaConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SampleAlphaConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaConstant_MetaData), NewProp_SampleAlphaConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceSettings = { "DistanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DistanceSettings), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceSettings_MetaData), NewProp_DistanceSettings_MetaData) }; // 1812963399
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightMethod = { "WeightMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, WeightMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMethod_MetaData), NewProp_WeightMethod_MetaData) }; // 1971727460
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWeightFromOriginalTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWeightFromOriginalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWeightFromOriginalTransform = { "bWeightFromOriginalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWeightFromOriginalTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeightFromOriginalTransform_MetaData), NewProp_bWeightFromOriginalTransform_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LocalWeightOverDistance = { "LocalWeightOverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LocalWeightOverDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightOverDistance_MetaData), NewProp_LocalWeightOverDistance_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightOverDistance = { "WeightOverDistance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, WeightOverDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOverDistance_MetaData), NewProp_WeightOverDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTransform = { "bWriteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTransform_MetaData), NewProp_bWriteTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TransformAttributeName = { "TransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, TransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeName_MetaData), NewProp_TransformAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLookAtTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteLookAtTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLookAtTransform = { "bWriteLookAtTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLookAtTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAtTransform_MetaData), NewProp_bWriteLookAtTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtTransformAttributeName = { "LookAtTransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtTransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTransformAttributeName_MetaData), NewProp_LookAtTransformAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtAxisAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtAxisAlign = { "LookAtAxisAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtAxisAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxisAlign_MetaData), NewProp_LookAtAxisAlign_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSelection = { "LookAtUpSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtUpSelection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSelection_MetaData), NewProp_LookAtUpSelection_MetaData) }; // 925482475
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSource = { "LookAtUpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtUpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSource_MetaData), NewProp_LookAtUpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpAxis = { "LookAtUpAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtUpAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpAxis_MetaData), NewProp_LookAtUpAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpConstant = { "LookAtUpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LookAtUpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpConstant_MetaData), NewProp_LookAtUpConstant_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSignedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteSignedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSignedDistance = { "bWriteSignedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSignedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSignedDistance_MetaData), NewProp_bWriteSignedDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignedDistanceAttributeName = { "SignedDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SignedDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceAttributeName_MetaData), NewProp_SignedDistanceAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignAxis = { "SignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignAxis_MetaData), NewProp_SignAxis_MetaData) }; // 1564008668
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlySignIfClosed_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bOnlySignIfClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlySignIfClosed = { "bOnlySignIfClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlySignIfClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySignIfClosed_MetaData), NewProp_bOnlySignIfClosed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignedDistanceScale = { "SignedDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, SignedDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceScale_MetaData), NewProp_SignedDistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteComponentWiseDistance = { "bWriteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteComponentWiseDistance_MetaData), NewProp_bWriteComponentWiseDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ComponentWiseDistanceAttributeName = { "ComponentWiseDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, ComponentWiseDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentWiseDistanceAttributeName_MetaData), NewProp_ComponentWiseDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bAbsoluteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bAbsoluteComponentWiseDistance = { "bAbsoluteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteComponentWiseDistance_MetaData), NewProp_bAbsoluteComponentWiseDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteAngle_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteAngle = { "bWriteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngle_MetaData), NewProp_bWriteAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAttributeName = { "AngleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, AngleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttributeName_MetaData), NewProp_AngleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAxis = { "AngleAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, AngleAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAxis_MetaData), NewProp_AngleAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, AngleRange), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRange_MetaData), NewProp_AngleRange_MetaData) }; // 1931588405
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTime_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTime = { "bWriteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTime_MetaData), NewProp_bWriteTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TimeAttributeName = { "TimeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, TimeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAttributeName_MetaData), NewProp_TimeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteArriveTangent_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteArriveTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteArriveTangent = { "bWriteArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteArriveTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteArriveTangent_MetaData), NewProp_bWriteArriveTangent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ArriveTangentAttributeName = { "ArriveTangentAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, ArriveTangentAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttributeName_MetaData), NewProp_ArriveTangentAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLeaveTangent_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteLeaveTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLeaveTangent = { "bWriteLeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLeaveTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLeaveTangent_MetaData), NewProp_bWriteLeaveTangent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LeaveTangentAttributeName = { "LeaveTangentAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, LeaveTangentAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttributeName_MetaData), NewProp_LeaveTangentAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumInside_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteNumInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumInside = { "bWriteNumInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumInside_MetaData), NewProp_bWriteNumInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_NumInsideAttributeName = { "NumInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, NumInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInsideAttributeName_MetaData), NewProp_NumInsideAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bOnlyIncrementInsideNumIfClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed = { "bOnlyIncrementInsideNumIfClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyIncrementInsideNumIfClosed_MetaData), NewProp_bOnlyIncrementInsideNumIfClosed_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteNumSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumSamples = { "bWriteNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumSamples_MetaData), NewProp_bWriteNumSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_NumSamplesAttributeName = { "NumSamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, NumSamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesAttributeName_MetaData), NewProp_NumSamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteClosedLoop_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteClosedLoop = { "bWriteClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteClosedLoop_MetaData), NewProp_bWriteClosedLoop_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ClosedLoopAttributeName = { "ClosedLoopAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, ClosedLoopAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedLoopAttributeName_MetaData), NewProp_ClosedLoopAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTotalWeight_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteTotalWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTotalWeight = { "bWriteTotalWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTotalWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTotalWeight_MetaData), NewProp_bWriteTotalWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TotalWeightAttributeName = { "TotalWeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, TotalWeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWeightAttributeName_MetaData), NewProp_TotalWeightAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDepth_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bWriteDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDepth = { "bWriteDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDepth_MetaData), NewProp_bWriteDepth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthAttributeName = { "DepthAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DepthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthAttributeName_MetaData), NewProp_DepthAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthRange = { "DepthRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DepthRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthRange_MetaData), NewProp_DepthRange_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bInvertDepth_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bInvertDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bInvertDepth = { "bInvertDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bInvertDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDepth_MetaData), NewProp_bInvertDepth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthMode = { "DepthMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, DepthMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineDepthMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthMode_MetaData), NewProp_DepthMode_MetaData) }; // 2616147247
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSplineSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseOctree_SetBit(void* Obj)
{
	((UPCGExSampleNearestSplineSettings*)Obj)->bUseOctree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseOctree = { "bUseOctree", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSplineSettings), &Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseOctree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctree_MetaData), NewProp_bUseOctree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSplineScalesRanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMinAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMaxAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bSampleSpecificAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWrapClosedLoopAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SampleAlphaConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceSettings_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWeightFromOriginalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LocalWeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_WeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLookAtTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtTransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtAxisAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtAxisAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LookAtUpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteSignedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignedDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlySignIfClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_SignedDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ComponentWiseDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bAbsoluteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_AngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TimeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ArriveTangentAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteLeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_LeaveTangentAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_NumInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_NumSamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_ClosedLoopAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteTotalWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_TotalWeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bWriteDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bInvertDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_DepthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::NewProp_bUseOctree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleNearestSplineSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::ClassParams = {
	&UPCGExSampleNearestSplineSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNearestSplineSettings::StaticRegisterNativesUPCGExSampleNearestSplineSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNearestSplineSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNearestSplineSettings);
UPCGExSampleNearestSplineSettings::~UPCGExSampleNearestSplineSettings() {}
// ********** End Class UPCGExSampleNearestSplineSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSplineDepthMode_StaticEnum, TEXT("EPCGExSplineDepthMode"), &Z_Registration_Info_UEnum_EPCGExSplineDepthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2616147247U) },
		{ EPCGExSplineSampleAlphaMode_StaticEnum, TEXT("EPCGExSplineSampleAlphaMode"), &Z_Registration_Info_UEnum_EPCGExSplineSampleAlphaMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1560808674U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNearestSplineSettings, UPCGExSampleNearestSplineSettings::StaticClass, TEXT("UPCGExSampleNearestSplineSettings"), &Z_Registration_Info_UClass_UPCGExSampleNearestSplineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNearestSplineSettings), 1705523204U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_888937907{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
