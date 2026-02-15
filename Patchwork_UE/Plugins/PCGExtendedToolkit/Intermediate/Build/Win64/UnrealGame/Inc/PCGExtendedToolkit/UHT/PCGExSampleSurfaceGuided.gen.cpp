// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleSurfaceGuided.h"
#include "Data/PCGExDataForward.h"
#include "Details/PCGExDetailsCollision.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleSurfaceGuided() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollisionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTraceSampleDistanceInput ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput;
static UEnum* EPCGExTraceSampleDistanceInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTraceSampleDistanceInput"));
	}
	return Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTraceSampleDistanceInput>()
{
	return EPCGExTraceSampleDistanceInput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExTraceSampleDistanceInput::Attribute" },
		{ "Attribute.ToolTip", "Attribute" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExTraceSampleDistanceInput::Constant" },
		{ "Constant.ToolTip", "Constant" },
		{ "DirectionLength.DisplayName", "Direction Length" },
		{ "DirectionLength.Name", "EPCGExTraceSampleDistanceInput::DirectionLength" },
		{ "DirectionLength.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTraceSampleDistanceInput::DirectionLength", (int64)EPCGExTraceSampleDistanceInput::DirectionLength },
		{ "EPCGExTraceSampleDistanceInput::Constant", (int64)EPCGExTraceSampleDistanceInput::Constant },
		{ "EPCGExTraceSampleDistanceInput::Attribute", (int64)EPCGExTraceSampleDistanceInput::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTraceSampleDistanceInput",
	"EPCGExTraceSampleDistanceInput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput()
{
	if (!Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput.InnerSingleton;
}
// ********** End Enum EPCGExTraceSampleDistanceInput **********************************************

// ********** Begin Class UPCGExSampleSurfaceGuidedSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings;
UClass* UPCGExSampleSurfaceGuidedSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleSurfaceGuidedSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleSurfaceGuidedSettings"),
			Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleSurfaceGuidedSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_NoRegister()
{
	return UPCGExSampleSurfaceGuidedSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Sampling/PCGExSampleSurfaceGuided.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/line-trace" },
		{ "ToolTip", "Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSource_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Surface source */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Surface source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReference_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode.*/" },
		{ "EditCondition", "SurfaceSource == EPCGExSurfaceSource::ActorReferences" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** The origin of the trace */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The origin of the trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** The direction to use for the trace */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The direction to use for the trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceInput_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** This UV Channel will be selected when retrieving UV Coordinates from a raycast query. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This UV Channel will be selected when retrieving UV Coordinates from a raycast query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "CLampMin", "0.001000" },
		{ "Comment", "/** Trace max distance */" },
		{ "EditCondition", "DistanceInput == EPCGExTraceSampleDistanceInput::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Trace max distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMaxDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Attribute or property to read the local size from. */" },
		{ "EditCondition", "DistanceInput == EPCGExTraceSampleDistanceInput::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute or property to read the local size from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was sucessful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Write whether the sampling was sucessful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLocation_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sample location. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sample location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled Location to.*/" },
		{ "DisplayName", "Location" },
		{ "EditCondition", "bWriteLocation" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled Location to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAt_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sample \"look at\" direction from the point. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sample \"look at\" direction from the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled LookAt to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAt" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled LookAt to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNormal_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled Normal to.*/" },
		{ "DisplayName", "Normal" },
		{ "EditCondition", "bWriteNormal" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled Normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsInside_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the inside/outside status of the point. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the inside/outside status of the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to write sampled point inside or outside the collision.*/" },
		{ "DisplayName", "IsInside" },
		{ "EditCondition", "bWriteIsInside" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write sampled point inside or outside the collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteUVCoords_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVCoordsAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Create an attribute for UV Coordinates of the surface hit. Note: Will only work in complex traces and must have 'Project Settings->Physics->Support UV From Hit Results' set to true. */" },
		{ "DisplayName", "UV Coords" },
		{ "EditCondition", "bWriteUVCoords" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Create an attribute for UV Coordinates of the surface hit. Note: Will only work in complex traces and must have 'Project Settings->Physics->Support UV From Hit Results' set to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** This UV Channel will be selected when retrieving UV Coordinates from a raycast query. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 UV Channel" },
		{ "EditCondition", "bWriteUVCoords" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This UV Channel will be selected when retrieving UV Coordinates from a raycast query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteFaceIndex_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndexAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Create an attribute for index of the hit face. Note: Will only work in complex traces. */" },
		{ "DisplayName", "Face Index" },
		{ "EditCondition", "bWriteFaceIndex" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Create an attribute for index of the hit face. Note: Will only work in complex traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteActorReference_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Name of the 'string' attribute to write actor reference to.*/" },
		{ "DisplayName", "ActorReference" },
		{ "EditCondition", "bWriteActorReference" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'string' attribute to write actor reference to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteHitComponentReference_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponentReferenceAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Name of the 'string' attribute to write actor reference to.*/" },
		{ "DisplayName", "HitComponent" },
		{ "EditCondition", "bWriteHitComponentReference" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'string' attribute to write actor reference to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePhysMat_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMatAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Name of the 'string' attribute to write actor reference to.*/" },
		{ "DisplayName", "PhysMat" },
		{ "EditCondition", "bWritePhysMat" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'string' attribute to write actor reference to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRenderMat_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderMatAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Create an attribute for the render material. */" },
		{ "DisplayName", "RenderMat" },
		{ "EditCondition", "bWriteRenderMat" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Create an attribute for the render material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderMaterialIndex_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** The index of the render material when it is queried from the hit. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Material Index" },
		{ "EditCondition", "bWriteRenderMat" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The index of the render material when it is queried from the hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtractTextureParameters_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Whether to extract texture parameters */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Texture Parameters" },
		{ "EditCondition", "bWriteRenderMat" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to extract texture parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesForwarding_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Which actor reference points attributes to forward on points. */" },
		{ "EditCondition", "SurfaceSource == EPCGExSurfaceSource::ActorReferences" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "ToolTip", "Which actor reference points attributes to forward on points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietUVSettingsWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSurfaceGuided.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleSurfaceGuidedSettings constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SurfaceSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceInput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalMaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplySampling;
	static void NewProp_bWriteSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSuccess;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuccessAttributeName;
	static void NewProp_bWriteLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocationAttributeName;
	static void NewProp_bWriteLookAt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLookAt;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtAttributeName;
	static void NewProp_bWriteNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NormalAttributeName;
	static void NewProp_bWriteDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceAttributeName;
	static void NewProp_bOutputNormalizedDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputNormalizedDistance;
	static void NewProp_bOutputOneMinusDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOneMinusDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceScale;
	static void NewProp_bWriteIsInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsInside;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsInsideAttributeName;
	static void NewProp_bWriteUVCoords_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUVCoords;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UVCoordsAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
	static void NewProp_bWriteFaceIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteFaceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FaceIndexAttributeName;
	static void NewProp_bWriteActorReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteActorReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttributeName;
	static void NewProp_bWriteHitComponentReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteHitComponentReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitComponentReferenceAttributeName;
	static void NewProp_bWritePhysMat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePhysMat;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PhysMatAttributeName;
	static void NewProp_bWriteRenderMat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRenderMat;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RenderMatAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderMaterialIndex;
	static void NewProp_bExtractTextureParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractTextureParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesForwarding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
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
	static void NewProp_bQuietUVSettingsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietUVSettingsWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleSurfaceGuidedSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleSurfaceGuidedSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics

// ********** Begin Class UPCGExSampleSurfaceGuidedSettings Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SurfaceSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SurfaceSource = { "SurfaceSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, SurfaceSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceSource_MetaData), NewProp_SurfaceSource_MetaData) }; // 3616557955
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ActorReference = { "ActorReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, ActorReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReference_MetaData), NewProp_ActorReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, Origin), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, Direction), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceInput = { "DistanceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, DistanceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTraceSampleDistanceInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceInput_MetaData), NewProp_DistanceInput_MetaData) }; // 400952056
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LocalMaxDistance = { "LocalMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, LocalMaxDistance), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMaxDistance_MetaData), NewProp_LocalMaxDistance_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLocation_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLocation = { "bWriteLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLocation_MetaData), NewProp_bWriteLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LocationAttributeName = { "LocationAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, LocationAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAttributeName_MetaData), NewProp_LocationAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLookAt_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteLookAt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLookAt = { "bWriteLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLookAt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAt_MetaData), NewProp_bWriteLookAt_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LookAtAttributeName = { "LookAtAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, LookAtAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAttributeName_MetaData), NewProp_LookAtAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteNormal_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteNormal = { "bWriteNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNormal_MetaData), NewProp_bWriteNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_NormalAttributeName = { "NormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, NormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAttributeName_MetaData), NewProp_NormalAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteIsInside_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteIsInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteIsInside = { "bWriteIsInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteIsInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsInside_MetaData), NewProp_bWriteIsInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_IsInsideAttributeName = { "IsInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, IsInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInsideAttributeName_MetaData), NewProp_IsInsideAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteUVCoords_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteUVCoords = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteUVCoords = { "bWriteUVCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteUVCoords_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteUVCoords_MetaData), NewProp_bWriteUVCoords_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_UVCoordsAttributeName = { "UVCoordsAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, UVCoordsAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVCoordsAttributeName_MetaData), NewProp_UVCoordsAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannel_MetaData), NewProp_UVChannel_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteFaceIndex_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteFaceIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteFaceIndex = { "bWriteFaceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteFaceIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteFaceIndex_MetaData), NewProp_bWriteFaceIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_FaceIndexAttributeName = { "FaceIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, FaceIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIndexAttributeName_MetaData), NewProp_FaceIndexAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteActorReference_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteActorReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteActorReference = { "bWriteActorReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteActorReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteActorReference_MetaData), NewProp_bWriteActorReference_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ActorReferenceAttributeName = { "ActorReferenceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, ActorReferenceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttributeName_MetaData), NewProp_ActorReferenceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteHitComponentReference_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteHitComponentReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteHitComponentReference = { "bWriteHitComponentReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteHitComponentReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteHitComponentReference_MetaData), NewProp_bWriteHitComponentReference_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HitComponentReferenceAttributeName = { "HitComponentReferenceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, HitComponentReferenceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponentReferenceAttributeName_MetaData), NewProp_HitComponentReferenceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWritePhysMat_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWritePhysMat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWritePhysMat = { "bWritePhysMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWritePhysMat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePhysMat_MetaData), NewProp_bWritePhysMat_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_PhysMatAttributeName = { "PhysMatAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, PhysMatAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMatAttributeName_MetaData), NewProp_PhysMatAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteRenderMat_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bWriteRenderMat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteRenderMat = { "bWriteRenderMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteRenderMat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRenderMat_MetaData), NewProp_bWriteRenderMat_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_RenderMatAttributeName = { "RenderMatAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, RenderMatAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderMatAttributeName_MetaData), NewProp_RenderMatAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_RenderMaterialIndex = { "RenderMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, RenderMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderMaterialIndex_MetaData), NewProp_RenderMaterialIndex_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bExtractTextureParameters_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bExtractTextureParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bExtractTextureParameters = { "bExtractTextureParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bExtractTextureParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtractTextureParameters_MetaData), NewProp_bExtractTextureParameters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_AttributesForwarding = { "AttributesForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, AttributesForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesForwarding_MetaData), NewProp_AttributesForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, CollisionSettings), Z_Construct_UScriptStruct_FPCGExCollisionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 1813010668
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSurfaceGuidedSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bQuietUVSettingsWarning_SetBit(void* Obj)
{
	((UPCGExSampleSurfaceGuidedSettings*)Obj)->bQuietUVSettingsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bQuietUVSettingsWarning = { "bQuietUVSettingsWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleSurfaceGuidedSettings), &Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bQuietUVSettingsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietUVSettingsWarning_MetaData), NewProp_bQuietUVSettingsWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SurfaceSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SurfaceSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ActorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LocalMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LocationAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_LookAtAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_NormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteIsInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_IsInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteUVCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_UVCoordsAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteFaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_FaceIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteActorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_ActorReferenceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteHitComponentReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HitComponentReferenceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWritePhysMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_PhysMatAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bWriteRenderMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_RenderMatAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_RenderMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bExtractTextureParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_AttributesForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_CollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::NewProp_bQuietUVSettingsWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleSurfaceGuidedSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::ClassParams = {
	&UPCGExSampleSurfaceGuidedSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleSurfaceGuidedSettings::StaticRegisterNativesUPCGExSampleSurfaceGuidedSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleSurfaceGuidedSettings);
UPCGExSampleSurfaceGuidedSettings::~UPCGExSampleSurfaceGuidedSettings() {}
// ********** End Class UPCGExSampleSurfaceGuidedSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTraceSampleDistanceInput_StaticEnum, TEXT("EPCGExTraceSampleDistanceInput"), &Z_Registration_Info_UEnum_EPCGExTraceSampleDistanceInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 400952056U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings, UPCGExSampleSurfaceGuidedSettings::StaticClass, TEXT("UPCGExSampleSurfaceGuidedSettings"), &Z_Registration_Info_UClass_UPCGExSampleSurfaceGuidedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleSurfaceGuidedSettings), 4187777101U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_530187440{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
