// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNearestSurface.h"
#include "Data/PCGExDataForward.h"
#include "Details/PCGExDetailsCollision.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNearestSurface() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollisionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleNearestSurfaceSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings;
UClass* UPCGExSampleNearestSurfaceSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNearestSurfaceSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNearestSurfaceSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNearestSurfaceSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_NoRegister()
{
	return UPCGExSampleNearestSurfaceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Sampling/PCGExSampleNearestSurface.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCGExNodeLibraryDoc", "sampling/nearest-surface" },
		{ "ToolTip", "Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSource_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Surface source */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Surface source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReference_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode.*/" },
		{ "EditCondition", "SurfaceSource == EPCGExSurfaceSource::ActorReferences" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "CLampMin", "0.001000" },
		{ "Comment", "/** Search max distance */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Search max distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalMaxDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Use a per-point maximum distance*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Use a per-point maximum distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMaxDistance_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Attribute or property to read the local max distance from. */" },
		{ "EditCondition", "bUseLocalMaxDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute or property to read the local max distance from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with output)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSuccess_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write whether the sampling was successful or not to a boolean attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write whether the sampling was successful or not to a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "Success" },
		{ "EditCondition", "bWriteSuccess" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLocation_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sample location. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sample location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled Location to.*/" },
		{ "DisplayName", "Location" },
		{ "EditCondition", "bWriteLocation" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled Location to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLookAt_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sample \"look at\" direction from the point. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sample \"look at\" direction from the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled LookAt to.*/" },
		{ "DisplayName", "LookAt" },
		{ "EditCondition", "bWriteLookAt" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled LookAt to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNormal_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'vector' attribute to write sampled Normal to.*/" },
		{ "DisplayName", "Normal" },
		{ "EditCondition", "bWriteNormal" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'vector' attribute to write sampled Normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the sampled distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sampled distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write sampled distance to.*/" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "bWriteDistance" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
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
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the distance output; allows to easily invert it using -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsInside_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the inside/outside status of the point. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the inside/outside status of the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to write sampled point inside or outside the collision.*/" },
		{ "DisplayName", "IsInside" },
		{ "EditCondition", "bWriteIsInside" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write sampled point inside or outside the collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteActorReference_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Name of the 'string' attribute to write actor reference to.*/" },
		{ "DisplayName", "ActorReference" },
		{ "EditCondition", "bWriteActorReference" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'string' attribute to write actor reference to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePhysMat_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Write the actor reference hit. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the actor reference hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMatAttributeName_MetaData[] = {
		{ "Category", "Settings|Output (Actor Data)" },
		{ "Comment", "/** Name of the 'string' attribute to write actor reference to.*/" },
		{ "DisplayName", "PhysMat" },
		{ "EditCondition", "bWritePhysMat" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'string' attribute to write actor reference to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which actor reference points attributes to forward on points. */" },
		{ "EditCondition", "SurfaceSource == EPCGExSurfaceSource::ActorReferences" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "ToolTip", "Which actor reference points attributes to forward on points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessInsideAsFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Consider points that are inside as failed samples. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Consider points that are inside as failed samples." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessOutsideAsFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Consider points that are outside as failed samples. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNearestSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Consider points that are outside as failed samples." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNearestSurfaceSettings constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SurfaceSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReference;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static void NewProp_bUseLocalMaxDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalMaxDistance;
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
	static void NewProp_bWriteActorReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteActorReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttributeName;
	static void NewProp_bWritePhysMat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePhysMat;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PhysMatAttributeName;
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
	static void NewProp_bProcessInsideAsFailedSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessInsideAsFailedSamples;
	static void NewProp_bProcessOutsideAsFailedSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessOutsideAsFailedSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleNearestSurfaceSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNearestSurfaceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics

// ********** Begin Class UPCGExSampleNearestSurfaceSettings Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SurfaceSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SurfaceSource = { "SurfaceSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, SurfaceSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceSource_MetaData), NewProp_SurfaceSource_MetaData) }; // 3616557955
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ActorReference = { "ActorReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, ActorReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReference_MetaData), NewProp_ActorReference_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bUseLocalMaxDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bUseLocalMaxDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bUseLocalMaxDistance = { "bUseLocalMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bUseLocalMaxDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalMaxDistance_MetaData), NewProp_bUseLocalMaxDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LocalMaxDistance = { "LocalMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, LocalMaxDistance), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMaxDistance_MetaData), NewProp_LocalMaxDistance_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteSuccess_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteSuccess = { "bWriteSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSuccess_MetaData), NewProp_bWriteSuccess_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SuccessAttributeName = { "SuccessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, SuccessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributeName_MetaData), NewProp_SuccessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLocation_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLocation = { "bWriteLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLocation_MetaData), NewProp_bWriteLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LocationAttributeName = { "LocationAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, LocationAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAttributeName_MetaData), NewProp_LocationAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLookAt_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteLookAt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLookAt = { "bWriteLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLookAt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLookAt_MetaData), NewProp_bWriteLookAt_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LookAtAttributeName = { "LookAtAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, LookAtAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAttributeName_MetaData), NewProp_LookAtAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteNormal_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteNormal = { "bWriteNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNormal_MetaData), NewProp_bWriteNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_NormalAttributeName = { "NormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, NormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAttributeName_MetaData), NewProp_NormalAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteDistance = { "bWriteDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistance_MetaData), NewProp_bWriteDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_DistanceAttributeName = { "DistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, DistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttributeName_MetaData), NewProp_DistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bOutputNormalizedDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputNormalizedDistance = { "bOutputNormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputNormalizedDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedDistance_MetaData), NewProp_bOutputNormalizedDistance_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bOutputOneMinusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputOneMinusDistance = { "bOutputOneMinusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputOneMinusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusDistance_MetaData), NewProp_bOutputOneMinusDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScale_MetaData), NewProp_DistanceScale_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteIsInside_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteIsInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteIsInside = { "bWriteIsInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteIsInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsInside_MetaData), NewProp_bWriteIsInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_IsInsideAttributeName = { "IsInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, IsInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInsideAttributeName_MetaData), NewProp_IsInsideAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteActorReference_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWriteActorReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteActorReference = { "bWriteActorReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteActorReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteActorReference_MetaData), NewProp_bWriteActorReference_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ActorReferenceAttributeName = { "ActorReferenceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, ActorReferenceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttributeName_MetaData), NewProp_ActorReferenceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWritePhysMat_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bWritePhysMat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWritePhysMat = { "bWritePhysMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWritePhysMat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePhysMat_MetaData), NewProp_bWritePhysMat_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_PhysMatAttributeName = { "PhysMatAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, PhysMatAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMatAttributeName_MetaData), NewProp_PhysMatAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_AttributesForwarding = { "AttributesForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, AttributesForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesForwarding_MetaData), NewProp_AttributesForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, CollisionSettings), Z_Construct_UScriptStruct_FPCGExCollisionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 1813010668
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleNearestSurfaceSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessInsideAsFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bProcessInsideAsFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessInsideAsFailedSamples = { "bProcessInsideAsFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessInsideAsFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessInsideAsFailedSamples_MetaData), NewProp_bProcessInsideAsFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessOutsideAsFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleNearestSurfaceSettings*)Obj)->bProcessOutsideAsFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessOutsideAsFailedSamples = { "bProcessOutsideAsFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleNearestSurfaceSettings), &Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessOutsideAsFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessOutsideAsFailedSamples_MetaData), NewProp_bProcessOutsideAsFailedSamples_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SurfaceSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SurfaceSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ActorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bUseLocalMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LocalMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_SuccessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LocationAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_LookAtAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_NormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_DistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputNormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bOutputOneMinusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_DistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteIsInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_IsInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWriteActorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_ActorReferenceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bWritePhysMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_PhysMatAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_AttributesForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_CollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessInsideAsFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::NewProp_bProcessOutsideAsFailedSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleNearestSurfaceSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::ClassParams = {
	&UPCGExSampleNearestSurfaceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNearestSurfaceSettings::StaticRegisterNativesUPCGExSampleNearestSurfaceSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings.OuterSingleton;
}
UPCGExSampleNearestSurfaceSettings::UPCGExSampleNearestSurfaceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNearestSurfaceSettings);
UPCGExSampleNearestSurfaceSettings::~UPCGExSampleNearestSurfaceSettings() {}
// ********** End Class UPCGExSampleNearestSurfaceSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSurface_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNearestSurfaceSettings, UPCGExSampleNearestSurfaceSettings::StaticClass, TEXT("UPCGExSampleNearestSurfaceSettings"), &Z_Registration_Info_UClass_UPCGExSampleNearestSurfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNearestSurfaceSettings), 3139205271U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSurface_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSurface_h__Script_PCGExtendedToolkit_1104649047{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
