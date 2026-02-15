// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNearestPath.h"
#include "Curves/CurveFloat.h"
#include "Data/Matching/PCGExMatching.h"
#include "Geometry/PCGExGeo.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNearestPath() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathSamplingIncludeMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode;
static UEnum* EPCGExPathSamplingIncludeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathSamplingIncludeMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSamplingIncludeMode>()
{
	return EPCGExPathSamplingIncludeMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExPathSamplingIncludeMode::All" },
		{ "All.ToolTip", "Sample all inputs" },
		{ "ClosedLoopOnly.DisplayName", "Closed loops only" },
		{ "ClosedLoopOnly.Name", "EPCGExPathSamplingIncludeMode::ClosedLoopOnly" },
		{ "ClosedLoopOnly.ToolTip", "Sample only closed loops" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "OpenLoopsOnly.DisplayName", "Open lines only" },
		{ "OpenLoopsOnly.Name", "EPCGExPathSamplingIncludeMode::OpenLoopsOnly" },
		{ "OpenLoopsOnly.ToolTip", "Sample only open lines" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathSamplingIncludeMode::All", (int64)EPCGExPathSamplingIncludeMode::All },
		{ "EPCGExPathSamplingIncludeMode::ClosedLoopOnly", (int64)EPCGExPathSamplingIncludeMode::ClosedLoopOnly },
		{ "EPCGExPathSamplingIncludeMode::OpenLoopsOnly", (int64)EPCGExPathSamplingIncludeMode::OpenLoopsOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathSamplingIncludeMode",
	"EPCGExPathSamplingIncludeMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode.InnerSingleton;
}
// ********** End Enum EPCGExPathSamplingIncludeMode ***********************************************

// ********** Begin Enum EPCGExPathSampleAlphaMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode;
static UEnum* EPCGExPathSampleAlphaMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathSampleAlphaMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSampleAlphaMode>()
{
	return EPCGExPathSampleAlphaMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.DisplayName", "Alpha" },
		{ "Alpha.Name", "EPCGExPathSampleAlphaMode::Alpha" },
		{ "Alpha.ToolTip", "0 - 1 value" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExPathSampleAlphaMode::Distance" },
		{ "Distance.ToolTip", "Distance on the path to sample value at" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "Time.DisplayName", "Time" },
		{ "Time.Name", "EPCGExPathSampleAlphaMode::Time" },
		{ "Time.ToolTip", "0 - N value, where N is the number of segments" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathSampleAlphaMode::Alpha", (int64)EPCGExPathSampleAlphaMode::Alpha },
		{ "EPCGExPathSampleAlphaMode::Time", (int64)EPCGExPathSampleAlphaMode::Time },
		{ "EPCGExPathSampleAlphaMode::Distance", (int64)EPCGExPathSampleAlphaMode::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathSampleAlphaMode",
	"EPCGExPathSampleAlphaMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode.InnerSingleton;
}
// ********** End Enum EPCGExPathSampleAlphaMode ***************************************************

// ********** Begin Class UPCGExSampleNearestPathSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings;
UClass* UPCGExSampleNearestPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNearestPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNearestPathSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNearestPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNearestPathSettings_NoRegister()
{
	return UPCGExSampleNearestPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleNearestPath.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-spline-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sampling method.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sort direction */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sort direction" },
		{ "EditCondition", "SampleMethod == EPCGExSampleMethod::BestCandidate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSampleWhenInside_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If enabled, will always sample paths if the point lies inside, even if further away from the edges than the specified max range. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will always sample paths if the point lies inside, even if further away from the edges than the specified max range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySampleWhenInside_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If enabled, will only sample paths if the point lies inside */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will only sample paths if the point lies inside" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionOffset_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** If non-zero, will apply an offset (inset) to the data used for inclusion testing. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If non-zero, will apply an offset (inset) to the data used for inclusion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMinAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "DisplayName", "Range Min (Attr)" },
		{ "EditCondition", "RangeMinInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum target range to sample targets. */" },
		{ "EditCondition", "RangeMinInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of Range Min */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Range Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMaxAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "DisplayName", "Range Max (Attr)" },
		{ "EditCondition", "RangeMaxInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum target range to sample targets. */" },
		{ "EditCondition", "RangeMaxInput == EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum target range to sample targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightInclusion_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If the value is greater than 0, will do a rough vertical check as part of the projected inclusion. 0 is infinite. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If the value is greater than 0, will do a rough vertical check as part of the projected inclusion. 0 is infinite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSampleSpecificAlpha_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether spline should be sampled at a specific alpha */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether spline should be sampled at a specific alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Where to read the sampling alpha from. */" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Where to read the sampling alpha from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaMode_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** How to interpret the sample alpha value. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Mode" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to interpret the sample alpha value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapClosedLoopAlpha_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to wrap out of bounds value on closed loops. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Wrap Closed Loops" },
		{ "EditCondition", "bSampleSpecificAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to wrap out of bounds value on closed loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaAttribute_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Per-point sample alpha -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sample Alpha (Attr)" },
		{ "EditCondition", "bSampleSpecificAlpha && SampleAlphaInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point sample alpha -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAlphaConstant_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Constant sample alpha. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sample Alpha" },
		{ "EditCondition", "bSampleSpecificAlpha && SampleAlphaInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant sample alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceSettings_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Distance method to be used for source points. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Weight method used for blending */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight method used for blending" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Over Distance" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOverDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "Transform" },
		{ "EditCondition", "bWriteTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAtTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAtTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxisAlign_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis to align transform the look at vector to.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Align" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis to align transform the look at vector to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSelection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Use Up from..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSource_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Source" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis on the target to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Axis)" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Target" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis on the target to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpConstant_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSignedDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled Signed distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled Signed distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "SignedDistance" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis to use to calculate the distance' sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySignIfClosed_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Only sign the distance if at least one sampled spline is a bClosedLoop spline. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Only if Closed Path" },
		{ "EditCondition", "bWriteSignedDistance && SampleInputs == EPCGExPathSamplingIncludeMode::All" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the signed distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteComponentWiseDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled component-wise distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled component-wise distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentWiseDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write component-wise distance to.*/" },
		{ "DisplayName", "Component Wise Distance" },
		{ "EditCondition", "bWriteComponentWiseDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output absolute or signed component wise distances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngle_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled angle. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "Angle" },
		{ "EditCondition", "bWriteAngle" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unit/range to output the angle to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTime_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled time (spline space). */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled time (spline space)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled spline Time to.*/" },
		{ "DisplayName", "Time" },
		{ "EditCondition", "bWriteTime" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled spline Time to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSegmentTime_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled time (spline space). */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled time (spline space)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentTimeAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled spline Time to.*/" },
		{ "DisplayName", "Segment Time" },
		{ "EditCondition", "bWriteSegmentTime" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write sampled spline Time to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumInside_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the inside/outside status of the point toward any sampled spline. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the inside/outside status of the point toward any sampled spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of spline this point lies inside*/" },
		{ "DisplayName", "NumInside" },
		{ "EditCondition", "bWriteNumInside" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of spline this point lies inside" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyIncrementInsideNumIfClosed_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Only increment num inside count when comes from a bClosedLoop spline. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Only if Closed Spline" },
		{ "EditCondition", "bWriteNumInside && SampleInputs == EPCGExPathSamplingIncludeMode::All" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Only increment num inside count when comes from a bClosedLoop spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumSamples_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of sampled neighbors to.*/" },
		{ "DisplayName", "NumSamples" },
		{ "EditCondition", "bWriteNumSamples" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of sampled neighbors to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteClosedLoop_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Write the whether the sampled spline is closed or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the whether the sampled spline is closed or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedLoopAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to write whether a closed spline was sampled or not.*/" },
		{ "DisplayName", "ClosedLoop" },
		{ "EditCondition", "bWriteClosedLoop" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write whether a closed spline was sampled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if at least a single spline has been sampled.*/" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if at least a single spline has been sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if no spline was found within range.*/" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if no spline was found within range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestPath.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNearestPathSettings constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
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
	static void NewProp_bWriteSegmentTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSegmentTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SegmentTimeAttributeName;
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
// ********** End Class UPCGExSampleNearestPathSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNearestPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics

// ********** Begin Class UPCGExSampleNearestPathSettings Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 992307933
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 2414402877
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAlwaysSampleWhenInside_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bAlwaysSampleWhenInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAlwaysSampleWhenInside = { "bAlwaysSampleWhenInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAlwaysSampleWhenInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysSampleWhenInside_MetaData), NewProp_bAlwaysSampleWhenInside_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySampleWhenInside_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bOnlySampleWhenInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySampleWhenInside = { "bOnlySampleWhenInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySampleWhenInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySampleWhenInside_MetaData), NewProp_bOnlySampleWhenInside_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_InclusionOffset = { "InclusionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, InclusionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionOffset_MetaData), NewProp_InclusionOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinInput = { "RangeMinInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMinInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinInput_MetaData), NewProp_RangeMinInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinAttribute = { "RangeMinAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMinAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMinAttribute_MetaData), NewProp_RangeMinAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxInput = { "RangeMaxInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMaxInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxInput_MetaData), NewProp_RangeMaxInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxAttribute = { "RangeMaxAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMaxAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMaxAttribute_MetaData), NewProp_RangeMaxAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HeightInclusion = { "HeightInclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, HeightInclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightInclusion_MetaData), NewProp_HeightInclusion_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bSampleSpecificAlpha_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bSampleSpecificAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bSampleSpecificAlpha = { "bSampleSpecificAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bSampleSpecificAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSampleSpecificAlpha_MetaData), NewProp_bSampleSpecificAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaInput = { "SampleAlphaInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleAlphaInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaInput_MetaData), NewProp_SampleAlphaInput_MetaData) }; // 504493006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaMode = { "SampleAlphaMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleAlphaMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSampleAlphaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaMode_MetaData), NewProp_SampleAlphaMode_MetaData) }; // 2814270624
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWrapClosedLoopAlpha_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWrapClosedLoopAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWrapClosedLoopAlpha = { "bWrapClosedLoopAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWrapClosedLoopAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapClosedLoopAlpha_MetaData), NewProp_bWrapClosedLoopAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaAttribute = { "SampleAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleAlphaAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaAttribute_MetaData), NewProp_SampleAlphaAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaConstant = { "SampleAlphaConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SampleAlphaConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAlphaConstant_MetaData), NewProp_SampleAlphaConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceSettings = { "DistanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, DistanceSettings), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceSettings_MetaData), NewProp_DistanceSettings_MetaData) }; // 1812963399
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightMethod = { "WeightMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, WeightMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMethod_MetaData), NewProp_WeightMethod_MetaData) }; // 1971727460
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LocalWeightOverDistance = { "LocalWeightOverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LocalWeightOverDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightOverDistance_MetaData), NewProp_LocalWeightOverDistance_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightOverDistance = { "WeightOverDistance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, WeightOverDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOverDistance_MetaData), NewProp_WeightOverDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTransform = { "bWriteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTransform_MetaData), NewProp_bWriteTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_TransformAttributeName = { "TransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, TransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeName_MetaData), NewProp_TransformAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteLookAtTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteLookAtTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteLookAtTransform = { "bWriteLookAtTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteLookAtTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAtTransform_MetaData), NewProp_bWriteLookAtTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtTransformAttributeName = { "LookAtTransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtTransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTransformAttributeName_MetaData), NewProp_LookAtTransformAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtAxisAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtAxisAlign = { "LookAtAxisAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtAxisAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxisAlign_MetaData), NewProp_LookAtAxisAlign_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSelection = { "LookAtUpSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtUpSelection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSelection_MetaData), NewProp_LookAtUpSelection_MetaData) }; // 925482475
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSource = { "LookAtUpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtUpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSource_MetaData), NewProp_LookAtUpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpAxis = { "LookAtUpAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtUpAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpAxis_MetaData), NewProp_LookAtUpAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpConstant = { "LookAtUpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, LookAtUpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpConstant_MetaData), NewProp_LookAtUpConstant_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSignedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteSignedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSignedDistance = { "bWriteSignedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSignedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSignedDistance_MetaData), NewProp_bWriteSignedDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignedDistanceAttributeName = { "SignedDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SignedDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceAttributeName_MetaData), NewProp_SignedDistanceAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignAxis = { "SignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignAxis_MetaData), NewProp_SignAxis_MetaData) }; // 1564008668
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySignIfClosed_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bOnlySignIfClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySignIfClosed = { "bOnlySignIfClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySignIfClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySignIfClosed_MetaData), NewProp_bOnlySignIfClosed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignedDistanceScale = { "SignedDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SignedDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceScale_MetaData), NewProp_SignedDistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteComponentWiseDistance = { "bWriteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteComponentWiseDistance_MetaData), NewProp_bWriteComponentWiseDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ComponentWiseDistanceAttributeName = { "ComponentWiseDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, ComponentWiseDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentWiseDistanceAttributeName_MetaData), NewProp_ComponentWiseDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bAbsoluteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAbsoluteComponentWiseDistance = { "bAbsoluteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteComponentWiseDistance_MetaData), NewProp_bAbsoluteComponentWiseDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteAngle_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteAngle = { "bWriteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngle_MetaData), NewProp_bWriteAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAttributeName = { "AngleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, AngleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttributeName_MetaData), NewProp_AngleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAxis = { "AngleAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, AngleAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAxis_MetaData), NewProp_AngleAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, AngleRange), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRange_MetaData), NewProp_AngleRange_MetaData) }; // 1931588405
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTime_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTime = { "bWriteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTime_MetaData), NewProp_bWriteTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_TimeAttributeName = { "TimeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, TimeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAttributeName_MetaData), NewProp_TimeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSegmentTime_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteSegmentTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSegmentTime = { "bWriteSegmentTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSegmentTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSegmentTime_MetaData), NewProp_bWriteSegmentTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SegmentTimeAttributeName = { "SegmentTimeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, SegmentTimeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentTimeAttributeName_MetaData), NewProp_SegmentTimeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumInside_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteNumInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumInside = { "bWriteNumInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumInside_MetaData), NewProp_bWriteNumInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_NumInsideAttributeName = { "NumInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, NumInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInsideAttributeName_MetaData), NewProp_NumInsideAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bOnlyIncrementInsideNumIfClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed = { "bOnlyIncrementInsideNumIfClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyIncrementInsideNumIfClosed_MetaData), NewProp_bOnlyIncrementInsideNumIfClosed_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteNumSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumSamples = { "bWriteNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumSamples_MetaData), NewProp_bWriteNumSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_NumSamplesAttributeName = { "NumSamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, NumSamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesAttributeName_MetaData), NewProp_NumSamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteClosedLoop_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bWriteClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteClosedLoop = { "bWriteClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteClosedLoop_MetaData), NewProp_bWriteClosedLoop_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ClosedLoopAttributeName = { "ClosedLoopAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, ClosedLoopAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedLoopAttributeName_MetaData), NewProp_ClosedLoopAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestPathSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((UPCGExSampleNearestPathSettings*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestPathSettings), &Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAlwaysSampleWhenInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySampleWhenInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_InclusionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMinAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMaxAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HeightInclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bSampleSpecificAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWrapClosedLoopAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SampleAlphaConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceSettings_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LocalWeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_WeightOverDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_TransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteLookAtTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtTransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtAxisAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtAxisAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_LookAtUpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSignedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignedDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlySignIfClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SignedDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ComponentWiseDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bAbsoluteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_AngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_TimeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteSegmentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_SegmentTimeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_NumInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bOnlyIncrementInsideNumIfClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_NumSamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bWriteClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_ClosedLoopAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleNearestPathSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::ClassParams = {
	&UPCGExSampleNearestPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNearestPathSettings::StaticRegisterNativesUPCGExSampleNearestPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNearestPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNearestPathSettings);
UPCGExSampleNearestPathSettings::~UPCGExSampleNearestPathSettings() {}
// ********** End Class UPCGExSampleNearestPathSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathSamplingIncludeMode_StaticEnum, TEXT("EPCGExPathSamplingIncludeMode"), &Z_Registration_Info_UEnum_EPCGExPathSamplingIncludeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 992307933U) },
		{ EPCGExPathSampleAlphaMode_StaticEnum, TEXT("EPCGExPathSampleAlphaMode"), &Z_Registration_Info_UEnum_EPCGExPathSampleAlphaMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2814270624U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNearestPathSettings, UPCGExSampleNearestPathSettings::StaticClass, TEXT("UPCGExSampleNearestPathSettings"), &Z_Registration_Info_UClass_UPCGExSampleNearestPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNearestPathSettings), 303844125U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_628249829{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
