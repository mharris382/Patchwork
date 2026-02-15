// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNearestBounds.h"
#include "Curves/CurveFloat.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/Matching/PCGExMatching.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNearestBounds() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestBoundsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBoundsSampleMethod **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod;
static UEnum* EPCGExBoundsSampleMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBoundsSampleMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundsSampleMethod>()
{
	return EPCGExBoundsSampleMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BestCandidate.DisplayName", "Best Candidate" },
		{ "BestCandidate.Name", "EPCGExBoundsSampleMethod::BestCandidate" },
		{ "BestCandidate.ToolTip", "Picks the best candidate based on sorting rules." },
		{ "ClosestBounds.DisplayName", "Closest Bounds" },
		{ "ClosestBounds.Name", "EPCGExBoundsSampleMethod::ClosestBounds" },
		{ "ClosestBounds.ToolTip", "Picks & process the closest bounds only" },
		{ "FarthestBounds.DisplayName", "Farthest Bounds" },
		{ "FarthestBounds.Name", "EPCGExBoundsSampleMethod::FarthestBounds" },
		{ "FarthestBounds.ToolTip", "Picks & process the farthest bounds only" },
		{ "LargestBounds.DisplayName", "Largest Bounds" },
		{ "LargestBounds.Name", "EPCGExBoundsSampleMethod::LargestBounds" },
		{ "LargestBounds.ToolTip", "Picks & process the largest bounds only (extents length)" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "SmallestBounds.DisplayName", "Smallest Bounds" },
		{ "SmallestBounds.Name", "EPCGExBoundsSampleMethod::SmallestBounds" },
		{ "SmallestBounds.ToolTip", "Picks & process the smallest bounds only (extents length)" },
		{ "WithinRange.DisplayName", "All" },
		{ "WithinRange.Name", "EPCGExBoundsSampleMethod::WithinRange" },
		{ "WithinRange.ToolTip", "Process all overlapping bounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBoundsSampleMethod::WithinRange", (int64)EPCGExBoundsSampleMethod::WithinRange },
		{ "EPCGExBoundsSampleMethod::ClosestBounds", (int64)EPCGExBoundsSampleMethod::ClosestBounds },
		{ "EPCGExBoundsSampleMethod::FarthestBounds", (int64)EPCGExBoundsSampleMethod::FarthestBounds },
		{ "EPCGExBoundsSampleMethod::LargestBounds", (int64)EPCGExBoundsSampleMethod::LargestBounds },
		{ "EPCGExBoundsSampleMethod::SmallestBounds", (int64)EPCGExBoundsSampleMethod::SmallestBounds },
		{ "EPCGExBoundsSampleMethod::BestCandidate", (int64)EPCGExBoundsSampleMethod::BestCandidate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBoundsSampleMethod",
	"EPCGExBoundsSampleMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod.InnerSingleton;
}
// ********** End Enum EPCGExBoundsSampleMethod ****************************************************

// ********** Begin Class UPCGExSampleNearestBoundsSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings;
UClass* UPCGExSampleNearestBoundsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNearestBoundsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNearestBoundsSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNearestBoundsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_NoRegister()
{
	return UPCGExSampleNearestBoundsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleNearestBounds.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMethod_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sampling method.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sort direction */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sort direction" },
		{ "EditCondition", "SampleMethod == EPCGExBoundsSampleMethod::BestCandidate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Source bounds.*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Source bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightRemap_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Remap" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightRemap_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Curve that balances weight over distance */" },
		{ "DisplayName", "Weight Remap" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve that balances weight over distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingInterface_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** How to blend data from sampled points */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to blend data from sampled points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributes_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** Attributes to sample from the targets */" },
		{ "EditCondition", "BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attributes to sample from the targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendPointProperties_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "EditCondition", "BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPropertiesBlendingSettings_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "EditCondition", "bBlendPointProperties && BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "Transform" },
		{ "EditCondition", "bWriteTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAtTransform_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled transform. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTransformAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'transform' attribute to write sampled Transform to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAtTransform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'transform' attribute to write sampled Transform to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxisAlign_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis to align transform the look at vector to.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Align" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis to align transform the look at vector to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSelection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Use Up from..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSource_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "LookAtUpSelection != EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpConstant_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "LookAtUpSelection == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSignedDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled Signed distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled Signed distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "SignedDistance" },
		{ "EditCondition", "bWriteSignedDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the signed distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteComponentWiseDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled component-wise distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled component-wise distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentWiseDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write component-wise distance to.*/" },
		{ "DisplayName", "Component Wise Distance" },
		{ "EditCondition", "bWriteComponentWiseDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output absolute or signed component wise distances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngle_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled Signed distance to.*/" },
		{ "DisplayName", "Angle" },
		{ "EditCondition", "bWriteAngle" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unit/range to output the angle to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumSamples_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of sampled neighbors to.*/" },
		{ "DisplayName", "NumSamples" },
		{ "EditCondition", "bWriteNumSamples" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of sampled neighbors to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSampledIndex_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampledIndexAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the sampled index to. Will use the closest index when sampling multiple points. */" },
		{ "DisplayName", "SampledIndex" },
		{ "EditCondition", "bWriteSampledIndex" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the sampled index to. Will use the closest index when sampling multiple points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestBounds.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNearestBoundsSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightRemap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightRemap;
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
// ********** End Class UPCGExSampleNearestBoundsSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNearestBoundsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics

// ********** Begin Class UPCGExSampleNearestBoundsSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampleMethod = { "SampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SampleMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsSampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMethod_MetaData), NewProp_SampleMethod_MetaData) }; // 2097100866
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LocalWeightRemap = { "LocalWeightRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LocalWeightRemap), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightRemap_MetaData), NewProp_LocalWeightRemap_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_WeightRemap = { "WeightRemap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, WeightRemap), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightRemap_MetaData), NewProp_WeightRemap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BlendingInterface_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BlendingInterface = { "BlendingInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, BlendingInterface), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingInterface_MetaData), NewProp_BlendingInterface_MetaData) }; // 1762397716
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_ValueProp = { "TargetAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(0, nullptr) }; // 4044480617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_Key_KeyProp = { "TargetAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes = { "TargetAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, TargetAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributes_MetaData), NewProp_TargetAttributes_MetaData) }; // 4044480617
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bBlendPointProperties_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bBlendPointProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bBlendPointProperties = { "bBlendPointProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bBlendPointProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendPointProperties_MetaData), NewProp_bBlendPointProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_PointPropertiesBlendingSettings = { "PointPropertiesBlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, PointPropertiesBlendingSettings), Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPropertiesBlendingSettings_MetaData), NewProp_PointPropertiesBlendingSettings_MetaData) }; // 1047595412
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteTransform = { "bWriteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTransform_MetaData), NewProp_bWriteTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TransformAttributeName = { "TransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, TransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeName_MetaData), NewProp_TransformAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteLookAtTransform_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteLookAtTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteLookAtTransform = { "bWriteLookAtTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteLookAtTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAtTransform_MetaData), NewProp_bWriteLookAtTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtTransformAttributeName = { "LookAtTransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LookAtTransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTransformAttributeName_MetaData), NewProp_LookAtTransformAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtAxisAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtAxisAlign = { "LookAtAxisAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LookAtAxisAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxisAlign_MetaData), NewProp_LookAtAxisAlign_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSelection = { "LookAtUpSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LookAtUpSelection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSelection_MetaData), NewProp_LookAtUpSelection_MetaData) }; // 925482475
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSource = { "LookAtUpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LookAtUpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSource_MetaData), NewProp_LookAtUpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpConstant = { "LookAtUpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, LookAtUpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpConstant_MetaData), NewProp_LookAtUpConstant_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSignedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteSignedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSignedDistance = { "bWriteSignedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSignedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSignedDistance_MetaData), NewProp_bWriteSignedDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignedDistanceAttributeName = { "SignedDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SignedDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceAttributeName_MetaData), NewProp_SignedDistanceAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignAxis = { "SignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignAxis_MetaData), NewProp_SignAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignedDistanceScale = { "SignedDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SignedDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedDistanceScale_MetaData), NewProp_SignedDistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteComponentWiseDistance = { "bWriteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteComponentWiseDistance_MetaData), NewProp_bWriteComponentWiseDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_ComponentWiseDistanceAttributeName = { "ComponentWiseDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, ComponentWiseDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentWiseDistanceAttributeName_MetaData), NewProp_ComponentWiseDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bAbsoluteComponentWiseDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bAbsoluteComponentWiseDistance = { "bAbsoluteComponentWiseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bAbsoluteComponentWiseDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteComponentWiseDistance_MetaData), NewProp_bAbsoluteComponentWiseDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteAngle_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteAngle = { "bWriteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngle_MetaData), NewProp_bWriteAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAttributeName = { "AngleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, AngleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttributeName_MetaData), NewProp_AngleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAxis = { "AngleAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, AngleAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAxis_MetaData), NewProp_AngleAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, AngleRange), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRange_MetaData), NewProp_AngleRange_MetaData) }; // 1931588405
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteNumSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteNumSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteNumSamples = { "bWriteNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteNumSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumSamples_MetaData), NewProp_bWriteNumSamples_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_NumSamplesAttributeName = { "NumSamplesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, NumSamplesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamplesAttributeName_MetaData), NewProp_NumSamplesAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSampledIndex_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bWriteSampledIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSampledIndex = { "bWriteSampledIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSampledIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSampledIndex_MetaData), NewProp_bWriteSampledIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampledIndexAttributeName = { "SampledIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, SampledIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampledIndexAttributeName_MetaData), NewProp_SampledIndexAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestBoundsSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((UPCGExSampleNearestBoundsSettings*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestBoundsSettings), &Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampleMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LocalWeightRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_WeightRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BlendingInterface_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_BlendingInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TargetAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bBlendPointProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_PointPropertiesBlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_TransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteLookAtTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtTransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtAxisAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtAxisAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_LookAtUpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSignedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignedDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SignedDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_ComponentWiseDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bAbsoluteComponentWiseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_AngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteNumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_NumSamplesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bWriteSampledIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_SampledIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleNearestBoundsSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::ClassParams = {
	&UPCGExSampleNearestBoundsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNearestBoundsSettings::StaticRegisterNativesUPCGExSampleNearestBoundsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNearestBoundsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNearestBoundsSettings);
UPCGExSampleNearestBoundsSettings::~UPCGExSampleNearestBoundsSettings() {}
// ********** End Class UPCGExSampleNearestBoundsSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBoundsSampleMethod_StaticEnum, TEXT("EPCGExBoundsSampleMethod"), &Z_Registration_Info_UEnum_EPCGExBoundsSampleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097100866U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNearestBoundsSettings, UPCGExSampleNearestBoundsSettings::StaticClass, TEXT("UPCGExSampleNearestBoundsSettings"), &Z_Registration_Info_UClass_UPCGExSampleNearestBoundsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNearestBoundsSettings), 4174257639U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_77359311{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
