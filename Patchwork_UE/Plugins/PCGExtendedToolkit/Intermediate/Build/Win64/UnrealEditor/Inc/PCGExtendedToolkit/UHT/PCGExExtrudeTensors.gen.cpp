// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExExtrudeTensors.h"
#include "Data/PCGExDataForward.h"
#include "Paths/PCGExPaths.h"
#include "Transform/Tensors/PCGExTensorHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExExtrudeTensors() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExExtrudeTensorsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExExtrudeTensorsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathOutputDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSelfIntersectionMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode;
static UEnum* EPCGExSelfIntersectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSelfIntersectionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfIntersectionMode>()
{
	return EPCGExSelfIntersectionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PathLength.DisplayName", "Path Length" },
		{ "PathLength.Name", "EPCGExSelfIntersectionMode::PathLength" },
		{ "PathLength.Tooltip", "Sort extrusion by length, and resort to sorting rules in case of equality." },
		{ "SortingOnly.DisplayName", "Sorting only" },
		{ "SortingOnly.Name", "EPCGExSelfIntersectionMode::SortingOnly" },
		{ "SortingOnly.Tooltip", "Only use sorting rules to sort paths." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSelfIntersectionMode::PathLength", (int64)EPCGExSelfIntersectionMode::PathLength },
		{ "EPCGExSelfIntersectionMode::SortingOnly", (int64)EPCGExSelfIntersectionMode::SortingOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSelfIntersectionMode",
	"EPCGExSelfIntersectionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode.InnerSingleton;
}
// ********** End Enum EPCGExSelfIntersectionMode **************************************************

// ********** Begin Enum EPCGExSelfIntersectionPriority ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority;
static UEnum* EPCGExSelfIntersectionPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSelfIntersectionPriority"));
	}
	return Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfIntersectionPriority>()
{
	return EPCGExSelfIntersectionPriority_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Crossing.DisplayName", "Favor Crossing" },
		{ "Crossing.Name", "EPCGExSelfIntersectionPriority::Crossing" },
		{ "Crossing.Tooltip", "Resolve crossing detection first, then merge." },
		{ "Merge.DisplayName", "Favor Merge" },
		{ "Merge.Name", "EPCGExSelfIntersectionPriority::Merge" },
		{ "Merge.Tooltip", "Resolve merge first, then crossing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSelfIntersectionPriority::Crossing", (int64)EPCGExSelfIntersectionPriority::Crossing },
		{ "EPCGExSelfIntersectionPriority::Merge", (int64)EPCGExSelfIntersectionPriority::Merge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSelfIntersectionPriority",
	"EPCGExSelfIntersectionPriority",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority.InnerSingleton;
}
// ********** End Enum EPCGExSelfIntersectionPriority **********************************************

// ********** Begin Class UPCGExExtrudeTensorsSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings;
UClass* UPCGExExtrudeTensorsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExExtrudeTensorsSettings;
	if (!Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExExtrudeTensorsSettings"),
			Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExExtrudeTensorsSettings,
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
	return Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExExtrudeTensorsSettings_NoRegister()
{
	return UPCGExExtrudeTensorsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Paths/PCGExExtrudeTensors.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCGExNodeLibraryDoc", "tensors/extrude-tensors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformRotation_MetaData[] = {
		{ "Category", "Settings|Transforms" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings|Transforms" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bTransformRotation" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignAxis_MetaData[] = {
		{ "Category", "Settings|Transforms" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bTransformRotation && Rotation == EPCGExTensorTransformMode::Align" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePerPointMaxIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterationsAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-point Max Iterations. */" },
		{ "DisplayName", "Per-point Iterations" },
		{ "EditCondition", "bUsePerPointMaxIterations" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point Max Iterations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max Iterations. If using per-point max, this will act as a clamping mechanism. */" },
		{ "DisplayName", "Max Iterations" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Iterations. If using per-point max, this will act as a clamping mechanism." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxFromPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Whether to adjust max iteration based on max value found on points. Use at your own risks! */" },
		{ "DisplayName", "Use Max from Points" },
		{ "EditCondition", "bUsePerPointMaxIterations" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to adjust max iteration based on max value found on points. Use at your own risks!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxLength_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Whether to limit the length of the generated path */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to limit the length of the generated path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLengthInput_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bUseMaxLength" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLengthAttribute_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Max length Attribute */" },
		{ "DisplayName", "Max Length (Attr)" },
		{ "EditCondition", "bUseMaxLength && MaxLengthInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max length Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max length Constant */" },
		{ "DisplayName", "Max Length" },
		{ "EditCondition", "bUseMaxLength && MaxLengthInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max length Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxPointsCount_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Whether to limit the number of points in a generated path */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to limit the number of points in a generated path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointsCountInput_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bUseMaxPointsCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointsCountAttribute_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Max length Attribute */" },
		{ "DisplayName", "Max Points Count (Attr)" },
		{ "EditCondition", "bUseMaxPointsCount && MaxPointsCountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max length Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointsCount_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max length Constant */" },
		{ "DisplayName", "Max Points Count" },
		{ "EditCondition", "bUseMaxPointsCount && MaxPointsCountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max length Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDistance_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Whether to limit path length or not */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to limit path length or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopConditionHandling_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** How to deal with points that are stopped */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with points that are stopped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowChildExtrusions_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Whether to stop sampling when extrusion is stopped. While path will be cut, there's a chance that the head of the search comes back into non-stopping conditions, which would start a new extrusion. With this option disabled, new paths won't be permitted to exist. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to stop sampling when extrusion is stopped. While path will be cut, there's a chance that the head of the search comes back into non-stopping conditions, which would start a new extrusion. With this option disabled, new paths won't be permitted to exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStoppedSeeds_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** If enabled, seeds that start stopped won't be extruded at all. Otherwise, they are transformed until they eventually reach a point that's outside stopping conditions and start an extrusion. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, seeds that start stopped won't be extruded at all. Otherwise, they are transformed until they eventually reach a point that's outside stopping conditions and start an extrusion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoExternalPathIntersections_MetaData[] = {
		{ "Category", "Settings|Intersections (Ext)" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreIntersectionOnOrigin_MetaData[] = {
		{ "Category", "Settings|Intersections (Ext)" },
		{ "Comment", "/** If enabled, if the origin location of the extrusion is detected as an intersection, it is not considered an intersection. This allows to have seeds perfectly located on paths used for intersections. */" },
		{ "EditCondition", "bDoExternalPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, if the origin location of the extrusion is detected as an intersection, it is not considered an intersection. This allows to have seeds perfectly located on paths used for intersections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPathIntersections_MetaData[] = {
		{ "Category", "Settings|Intersections (Ext)" },
		{ "Comment", "/** Intersection settings  */" },
		{ "EditCondition", "bDoExternalPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Intersection settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoSelfPathIntersections_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** Whether to test for intersection between actively extruding paths */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to test for intersection between actively extruding paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfIntersectionMode_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** How to order intersection checks. Sorting is using seeds input attributes. */" },
		{ "EditCondition", "bDoSelfPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to order intersection checks. Sorting is using seeds input attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** Controls the order in which paths extrusion will be stopped when intersecting, if shortest/longest path fails. */" },
		{ "EditCondition", "bDoSelfPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls the order in which paths extrusion will be stopped when intersecting, if shortest/longest path fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfPathIntersections_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** Intersection settings for extruding path intersections */" },
		{ "EditCondition", "bDoSelfPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Intersection settings for extruding path intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeOnProximity_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** Whether to test for intersection between actively extruding paths */" },
		{ "EditCondition", "bDoSelfPathIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to test for intersection between actively extruding paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfIntersectionPriority_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Priority" },
		{ "EditCondition", "bDoSelfPathIntersections && bMergeOnProximity" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximitySegmentBalance_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Which end of the extruded segment should be favored. 0 = start, 1 = end. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Balance" },
		{ "EditCondition", "bDoSelfPathIntersections && bMergeOnProximity" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which end of the extruded segment should be favored. 0 = start, 1 = end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeDetails_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)" },
		{ "Comment", "/** Whether to test for intersection between actively extruding paths */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Settings" },
		{ "EditCondition", "bDoSelfPathIntersections && bMergeOnProximity" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to test for intersection between actively extruding paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectClosedLoops_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)|Closing Loops" },
		{ "Comment", "/** Whether the node should attempt to close loops based on angle and proximity */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether the node should attempt to close loops based on angle and proximity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedLoopSearchDistance_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)|Closing Loops" },
		{ "Comment", "/** Range at which the first point must be located to check angle */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Search Distance" },
		{ "EditCondition", "bDetectClosedLoops" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Range at which the first point must be located to check angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedLoopSearchAngle_MetaData[] = {
		{ "Category", "Settings|Intersections (Self)|Closing Loops" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle at which the loop will be closed, if within range */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Search Angle" },
		{ "EditCondition", "bDetectClosedLoops" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Angle at which the loop will be closed, if within range" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfChildExtrusion_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsChildExtrusionTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfChildExtrusion" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfIsStoppedByFilters_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStoppedByFiltersTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfIsStoppedByFilters" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfIsStoppedByIntersection_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStoppedByIntersectionTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfIsStoppedByIntersection" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfIsStoppedBySelfIntersection_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStoppedBySelfIntersectionTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfIsStoppedBySelfIntersection" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfSelfMerged_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSelfMergedTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfSelfMerged" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfIsFollowUp_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFollowUpTag_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfIsFollowUp" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorHandlerDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */" },
		{ "DisplayName", "Tensor Sampling Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshSeed_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Whether to give a new seed to the points. If disabled, they will inherit the original one. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to give a new seed to the points. If disabled, they will inherit the original one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOutputDetails_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** ... */" },
		{ "DisplayName", "Paths Output Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExExtrudeTensors.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExExtrudeTensorsSettings constinit property declarations *************
	static void NewProp_bTransformRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlignAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignAxis;
	static void NewProp_bUsePerPointMaxIterations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePerPointMaxIterations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IterationsAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static void NewProp_bUseMaxFromPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxFromPoints;
	static void NewProp_bUseMaxLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLengthInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxLengthInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxLengthAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLength;
	static void NewProp_bUseMaxPointsCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxPointsCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxPointsCountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxPointsCountInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxPointsCountAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointsCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuseDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopConditionHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopConditionHandling;
	static void NewProp_bAllowChildExtrusions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowChildExtrusions;
	static void NewProp_bIgnoreStoppedSeeds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStoppedSeeds;
	static void NewProp_bDoExternalPathIntersections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoExternalPathIntersections;
	static void NewProp_bIgnoreIntersectionOnOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreIntersectionOnOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPathIntersections;
	static void NewProp_bDoSelfPathIntersections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoSelfPathIntersections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelfIntersectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelfIntersectionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelfPathIntersections;
	static void NewProp_bMergeOnProximity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeOnProximity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelfIntersectionPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelfIntersectionPriority;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ProximitySegmentBalance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeDetails;
	static void NewProp_bDetectClosedLoops_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectClosedLoops;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClosedLoopSearchDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClosedLoopSearchAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesToPathTags;
	static void NewProp_bTagIfChildExtrusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfChildExtrusion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsChildExtrusionTag;
	static void NewProp_bTagIfIsStoppedByFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfIsStoppedByFilters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsStoppedByFiltersTag;
	static void NewProp_bTagIfIsStoppedByIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfIsStoppedByIntersection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsStoppedByIntersectionTag;
	static void NewProp_bTagIfIsStoppedBySelfIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfIsStoppedBySelfIntersection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsStoppedBySelfIntersectionTag;
	static void NewProp_bTagIfSelfMerged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfSelfMerged;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsSelfMergedTag;
	static void NewProp_bTagIfIsFollowUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfIsFollowUp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsFollowUpTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TensorHandlerDetails;
	static void NewProp_bRefreshSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathOutputDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExExtrudeTensorsSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExExtrudeTensorsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics

// ********** Begin Class UPCGExExtrudeTensorsSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTransformRotation_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTransformRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTransformRotation = { "bTransformRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTransformRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformRotation_MetaData), NewProp_bTransformRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, Rotation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 261558032
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AlignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AlignAxis = { "AlignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, AlignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignAxis_MetaData), NewProp_AlignAxis_MetaData) }; // 1564008668
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUsePerPointMaxIterations_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bUsePerPointMaxIterations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUsePerPointMaxIterations = { "bUsePerPointMaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUsePerPointMaxIterations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePerPointMaxIterations_MetaData), NewProp_bUsePerPointMaxIterations_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IterationsAttribute = { "IterationsAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IterationsAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterationsAttribute_MetaData), NewProp_IterationsAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxFromPoints_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bUseMaxFromPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxFromPoints = { "bUseMaxFromPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxFromPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxFromPoints_MetaData), NewProp_bUseMaxFromPoints_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxLength_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bUseMaxLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxLength = { "bUseMaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxLength_MetaData), NewProp_bUseMaxLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthInput = { "MaxLengthInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxLengthInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLengthInput_MetaData), NewProp_MaxLengthInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthAttribute = { "MaxLengthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxLengthAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLengthAttribute_MetaData), NewProp_MaxLengthAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxPointsCount_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bUseMaxPointsCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxPointsCount = { "bUseMaxPointsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxPointsCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxPointsCount_MetaData), NewProp_bUseMaxPointsCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountInput = { "MaxPointsCountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxPointsCountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointsCountInput_MetaData), NewProp_MaxPointsCountInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountAttribute = { "MaxPointsCountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxPointsCountAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointsCountAttribute_MetaData), NewProp_MaxPointsCountAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCount = { "MaxPointsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MaxPointsCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointsCount_MetaData), NewProp_MaxPointsCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_FuseDistance = { "FuseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, FuseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDistance_MetaData), NewProp_FuseDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_StopConditionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_StopConditionHandling = { "StopConditionHandling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, StopConditionHandling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopConditionHandling_MetaData), NewProp_StopConditionHandling_MetaData) }; // 3054165883
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bAllowChildExtrusions_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bAllowChildExtrusions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bAllowChildExtrusions = { "bAllowChildExtrusions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bAllowChildExtrusions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowChildExtrusions_MetaData), NewProp_bAllowChildExtrusions_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreStoppedSeeds_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bIgnoreStoppedSeeds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreStoppedSeeds = { "bIgnoreStoppedSeeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreStoppedSeeds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreStoppedSeeds_MetaData), NewProp_bIgnoreStoppedSeeds_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoExternalPathIntersections_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bDoExternalPathIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoExternalPathIntersections = { "bDoExternalPathIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoExternalPathIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoExternalPathIntersections_MetaData), NewProp_bDoExternalPathIntersections_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreIntersectionOnOrigin_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bIgnoreIntersectionOnOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreIntersectionOnOrigin = { "bIgnoreIntersectionOnOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreIntersectionOnOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreIntersectionOnOrigin_MetaData), NewProp_bIgnoreIntersectionOnOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ExternalPathIntersections = { "ExternalPathIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, ExternalPathIntersections), Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPathIntersections_MetaData), NewProp_ExternalPathIntersections_MetaData) }; // 3968882769
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoSelfPathIntersections_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bDoSelfPathIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoSelfPathIntersections = { "bDoSelfPathIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoSelfPathIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoSelfPathIntersections_MetaData), NewProp_bDoSelfPathIntersections_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionMode = { "SelfIntersectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, SelfIntersectionMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfIntersectionMode_MetaData), NewProp_SelfIntersectionMode_MetaData) }; // 518439615
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfPathIntersections = { "SelfPathIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, SelfPathIntersections), Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfPathIntersections_MetaData), NewProp_SelfPathIntersections_MetaData) }; // 3968882769
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bMergeOnProximity_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bMergeOnProximity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bMergeOnProximity = { "bMergeOnProximity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bMergeOnProximity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeOnProximity_MetaData), NewProp_bMergeOnProximity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionPriority = { "SelfIntersectionPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, SelfIntersectionPriority), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfIntersectionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfIntersectionPriority_MetaData), NewProp_SelfIntersectionPriority_MetaData) }; // 1523793863
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ProximitySegmentBalance = { "ProximitySegmentBalance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, ProximitySegmentBalance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximitySegmentBalance_MetaData), NewProp_ProximitySegmentBalance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MergeDetails = { "MergeDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, MergeDetails), Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeDetails_MetaData), NewProp_MergeDetails_MetaData) }; // 3968882769
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDetectClosedLoops_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bDetectClosedLoops = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDetectClosedLoops = { "bDetectClosedLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDetectClosedLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectClosedLoops_MetaData), NewProp_bDetectClosedLoops_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ClosedLoopSearchDistance = { "ClosedLoopSearchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, ClosedLoopSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedLoopSearchDistance_MetaData), NewProp_ClosedLoopSearchDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ClosedLoopSearchAngle = { "ClosedLoopSearchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, ClosedLoopSearchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedLoopSearchAngle_MetaData), NewProp_ClosedLoopSearchAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AttributesToPathTags = { "AttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, AttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesToPathTags_MetaData), NewProp_AttributesToPathTags_MetaData) }; // 1295694073
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfChildExtrusion_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfChildExtrusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfChildExtrusion = { "bTagIfChildExtrusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfChildExtrusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfChildExtrusion_MetaData), NewProp_bTagIfChildExtrusion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsChildExtrusionTag = { "IsChildExtrusionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsChildExtrusionTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsChildExtrusionTag_MetaData), NewProp_IsChildExtrusionTag_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByFilters_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfIsStoppedByFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByFilters = { "bTagIfIsStoppedByFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByFilters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfIsStoppedByFilters_MetaData), NewProp_bTagIfIsStoppedByFilters_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedByFiltersTag = { "IsStoppedByFiltersTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsStoppedByFiltersTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStoppedByFiltersTag_MetaData), NewProp_IsStoppedByFiltersTag_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByIntersection_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfIsStoppedByIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByIntersection = { "bTagIfIsStoppedByIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfIsStoppedByIntersection_MetaData), NewProp_bTagIfIsStoppedByIntersection_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedByIntersectionTag = { "IsStoppedByIntersectionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsStoppedByIntersectionTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStoppedByIntersectionTag_MetaData), NewProp_IsStoppedByIntersectionTag_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedBySelfIntersection_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfIsStoppedBySelfIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedBySelfIntersection = { "bTagIfIsStoppedBySelfIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedBySelfIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfIsStoppedBySelfIntersection_MetaData), NewProp_bTagIfIsStoppedBySelfIntersection_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedBySelfIntersectionTag = { "IsStoppedBySelfIntersectionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsStoppedBySelfIntersectionTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStoppedBySelfIntersectionTag_MetaData), NewProp_IsStoppedBySelfIntersectionTag_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfSelfMerged_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfSelfMerged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfSelfMerged = { "bTagIfSelfMerged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfSelfMerged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfSelfMerged_MetaData), NewProp_bTagIfSelfMerged_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsSelfMergedTag = { "IsSelfMergedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsSelfMergedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSelfMergedTag_MetaData), NewProp_IsSelfMergedTag_MetaData) };
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsFollowUp_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bTagIfIsFollowUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsFollowUp = { "bTagIfIsFollowUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsFollowUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfIsFollowUp_MetaData), NewProp_bTagIfIsFollowUp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsFollowUpTag = { "IsFollowUpTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, IsFollowUpTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFollowUpTag_MetaData), NewProp_IsFollowUpTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_TensorHandlerDetails = { "TensorHandlerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, TensorHandlerDetails), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorHandlerDetails_MetaData), NewProp_TensorHandlerDetails_MetaData) }; // 2686898823
void Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bRefreshSeed_SetBit(void* Obj)
{
	((UPCGExExtrudeTensorsSettings*)Obj)->bRefreshSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bRefreshSeed = { "bRefreshSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExExtrudeTensorsSettings), &Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bRefreshSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefreshSeed_MetaData), NewProp_bRefreshSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_PathOutputDetails = { "PathOutputDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExExtrudeTensorsSettings, PathOutputDetails), Z_Construct_UScriptStruct_FPCGExPathOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOutputDetails_MetaData), NewProp_PathOutputDetails_MetaData) }; // 131082863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTransformRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AlignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AlignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUsePerPointMaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IterationsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxFromPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLengthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bUseMaxPointsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MaxPointsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_FuseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_StopConditionHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_StopConditionHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bAllowChildExtrusions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreStoppedSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoExternalPathIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bIgnoreIntersectionOnOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ExternalPathIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDoSelfPathIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfPathIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bMergeOnProximity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_SelfIntersectionPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ProximitySegmentBalance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_MergeDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bDetectClosedLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ClosedLoopSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_ClosedLoopSearchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_AttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfChildExtrusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsChildExtrusionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedByFiltersTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedByIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedByIntersectionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsStoppedBySelfIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsStoppedBySelfIntersectionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfSelfMerged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsSelfMergedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bTagIfIsFollowUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_IsFollowUpTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_TensorHandlerDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_bRefreshSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::NewProp_PathOutputDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExExtrudeTensorsSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::ClassParams = {
	&UPCGExExtrudeTensorsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::Class_MetaDataParams)
};
void UPCGExExtrudeTensorsSettings::StaticRegisterNativesUPCGExExtrudeTensorsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExExtrudeTensorsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.OuterSingleton, Z_Construct_UClass_UPCGExExtrudeTensorsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings.OuterSingleton;
}
UPCGExExtrudeTensorsSettings::UPCGExExtrudeTensorsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExExtrudeTensorsSettings);
UPCGExExtrudeTensorsSettings::~UPCGExExtrudeTensorsSettings() {}
// ********** End Class UPCGExExtrudeTensorsSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSelfIntersectionMode_StaticEnum, TEXT("EPCGExSelfIntersectionMode"), &Z_Registration_Info_UEnum_EPCGExSelfIntersectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 518439615U) },
		{ EPCGExSelfIntersectionPriority_StaticEnum, TEXT("EPCGExSelfIntersectionPriority"), &Z_Registration_Info_UEnum_EPCGExSelfIntersectionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1523793863U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExExtrudeTensorsSettings, UPCGExExtrudeTensorsSettings::StaticClass, TEXT("UPCGExExtrudeTensorsSettings"), &Z_Registration_Info_UClass_UPCGExExtrudeTensorsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExExtrudeTensorsSettings), 4027134791U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_4132147948{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExExtrudeTensors_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
