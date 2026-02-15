// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExWritePathProperties.h"
#include "Details/PCGExDetailsIntersection.h"
#include "Geometry/PCGExGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWritePathProperties() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWritePathPropertiesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWritePathPropertiesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInclusionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExWritePathPropertiesSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings;
UClass* UPCGExWritePathPropertiesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWritePathPropertiesSettings;
	if (!Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWritePathPropertiesSettings"),
			Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWritePathPropertiesSettings,
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
	return Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWritePathPropertiesSettings_NoRegister()
{
	return UPCGExWritePathPropertiesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExWritePathProperties.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCGExNodeLibraryDoc", "paths/path-properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. Some path data must be computed on a 2D plane. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings. Some path data must be computed on a 2D plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Inclusion details settings. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Inclusion details settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathAttributePackingMode_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Attribute set packing */" },
		{ "DisplayName", "Packing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute set packing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePathDataToPoints_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Whether to also write path attribute to the data set. Looks appealing, but can have massive memory cost -- this is legacy only.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to also write path attribute to the data set. Looks appealing, but can have massive memory cost -- this is legacy only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePathLength_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output Path Length. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output Path Length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLengthAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'double' attribute to write path length to.*/" },
		{ "DisplayName", "PathLength" },
		{ "EditCondition", "bWritePathLength" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write path length to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePathDirection_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output averaged path direction. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output averaged path direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathDirectionAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'FVector' attribute to write averaged direction to.*/" },
		{ "DisplayName", "PathDirection" },
		{ "EditCondition", "bWritePathDirection" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write averaged direction to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePathCentroid_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output averaged path direction. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output averaged path direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCentroidAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'FVector' attribute to write averaged direction to.*/" },
		{ "DisplayName", "PathCentroid" },
		{ "EditCondition", "bWritePathCentroid" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write averaged direction to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsClockwise_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path winding. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path winding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsClockwiseAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'bool' attribute to write winding to.*/" },
		{ "DisplayName", "Clockwise" },
		{ "EditCondition", "bWriteIsClockwise" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write winding to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteArea_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path area. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'double' attribute to write area to.*/" },
		{ "DisplayName", "Area" },
		{ "EditCondition", "bWriteArea" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write area to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePerimeter_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path perimeter. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path perimeter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'double' attribute to write perimeter to (differ from length because this is the 2D projected value used to infer other values).*/" },
		{ "DisplayName", "Perimeter" },
		{ "EditCondition", "bWritePerimeter" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write perimeter to (differ from length because this is the 2D projected value used to infer other values)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCompactness_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path compactness. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path compactness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompactnessAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'double' attribute to write compactness to.*/" },
		{ "DisplayName", "Compactness" },
		{ "EditCondition", "bWriteCompactness" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write compactness to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundingBoxCenter_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Output OBB extents **/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output OBB extents *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxCenterAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Name of the 'FVector' attribute to write bounding box center to. */" },
		{ "DisplayName", "Center" },
		{ "EditCondition", "bWriteBoundingBoxCenter" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "ToolTip", "Name of the 'FVector' attribute to write bounding box center to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundingBoxExtent_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Output OBB extents **/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output OBB extents *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxExtentAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Name of the 'FVector' attribute to write bounding box extent to. */" },
		{ "DisplayName", "Extent" },
		{ "EditCondition", "bWriteBoundingBoxExtent" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "ToolTip", "Name of the 'FVector' attribute to write bounding box extent to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundingBoxOrientation_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Output OBB orientation **/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output OBB orientation *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxOrientationAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path|Oriented Bounding Box" },
		{ "Comment", "/** Name of the 'FRotator' attribute to write bounding box orientation to. **/" },
		{ "DisplayName", "Orientation" },
		{ "EditCondition", "bWriteBoundingBoxOrientation" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "ToolTip", "Name of the 'FRotator' attribute to write bounding box orientation to. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteInclusionDepth_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path inclusion depth. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path inclusion depth." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionDepthAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'int32' attribute to write inclusion depth to.*/" },
		{ "DisplayName", "Inclusion Depth" },
		{ "EditCondition", "bWriteInclusionDepth" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write inclusion depth to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNumInside_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Output path number of children. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output path number of children." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInsideAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Path" },
		{ "Comment", "/** Name of the 'int32' attribute to write how many paths are contained inside this one.*/" },
		{ "DisplayName", "Num Inside" },
		{ "EditCondition", "bWriteNumInside" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write how many paths are contained inside this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Up Attribute constant */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up Attribute constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDot_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output Dot product of Prev/Next directions. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output Dot product of Prev/Next directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to next point to.*/" },
		{ "DisplayName", "Dot" },
		{ "EditCondition", "bWriteDot" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to next point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngle_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output Dot product of Prev/Next directions. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output Dot product of Prev/Next directions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write angle to next point to.*/" },
		{ "DisplayName", "Angle" },
		{ "EditCondition", "bWriteAngle" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write angle to next point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRange_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Unit/range to output the angle to.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Range" },
		{ "EditCondition", "bWriteAngle" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unit/range to output the angle to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistanceToNext_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output distance to next. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output distance to next." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNextAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to next point to.*/" },
		{ "DisplayName", "DistanceToNext" },
		{ "EditCondition", "bWriteDistanceToNext" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to next point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistanceToPrev_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output distance to prev. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output distance to prev." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToPrevAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to prev point to.*/" },
		{ "DisplayName", "DistanceToPrev" },
		{ "EditCondition", "bWriteDistanceToPrev" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to prev point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistanceToStart_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output distance to start. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output distance to start." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToStartAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to start to.*/" },
		{ "DisplayName", "DistanceToStart" },
		{ "EditCondition", "bWriteDistanceToStart" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to start to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDistanceToEnd_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output distance to end. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output distance to end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToEndAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to start to.*/" },
		{ "DisplayName", "DistanceToEnd" },
		{ "EditCondition", "bWriteDistanceToEnd" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to start to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointTime_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output distance to end. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output distance to end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTimeAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'double' attribute to write distance to start to.*/" },
		{ "DisplayName", "PointTime" },
		{ "EditCondition", "bWritePointTime" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write distance to start to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTimeOneMinus_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 One Minus" },
		{ "EditCondition", "bWritePointTime" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointNormal_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output point normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output point normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointNormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'FVector' attribute to write point normal to.*/" },
		{ "DisplayName", "PointNormal" },
		{ "EditCondition", "bWritePointNormal" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write point normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointAvgNormal_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output point normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output point normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAvgNormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'FVector' attribute to write point averaged normal to.*/" },
		{ "DisplayName", "PointAverageNormal" },
		{ "EditCondition", "bWritePointAvgNormal" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write point averaged normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointBinormal_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output point normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output point normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointBinormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'FVector' attribute to write point binormal to. Note that it's stabilized.*/" },
		{ "DisplayName", "PointBinormal" },
		{ "EditCondition", "bWritePointBinormal" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write point binormal to. Note that it's stabilized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDirectionToNext_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output direction to next normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output direction to next normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionToNextAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'FVector' attribute to write direction to next point to.*/" },
		{ "DisplayName", "DirectionToNext" },
		{ "EditCondition", "bWriteDirectionToNext" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write direction to next point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDirectionToPrev_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Output direction to prev normal. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output direction to prev normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionToPrevAttributeName_MetaData[] = {
		{ "Category", "Settings|Output - Points" },
		{ "Comment", "/** Name of the 'FVector' attribute to write direction to prev point to.*/" },
		{ "DisplayName", "DirectionToPrev" },
		{ "EditCondition", "bWriteDirectionToPrev" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write direction to prev point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagConcave_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcaveTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "EditCondition", "bTagConcave" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagConvex_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "EditCondition", "bTagConvex" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagOuter_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Outer paths are not enclosed by any other path */" },
		{ "EditCondition", "bTagOuter" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Outer paths are not enclosed by any other path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagInner_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Inner paths are enclosed by one or more paths */" },
		{ "EditCondition", "bTagInner" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inner paths are enclosed by one or more paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagOddInclusionDepth_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OddInclusionDepthTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Median paths are inner with a depth %2 != 0 */" },
		{ "EditCondition", "bTagOddInclusionDepth" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Median paths are inner with a depth %2 != 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInclusionPins_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will output data to additional pins. Note that all outputs are added to the default Path pin; extra pins contain a filtered list of the same data. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will output data to additional pins. Note that all outputs are added to the default Path pin; extra pins contain a filtered list of the same data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOuterIsNotOdd_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, outer path (inclusion depth of zero) will not be considered \"odd\" even if they technically are. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Outer is not Odd" },
		{ "EditCondition", "bTagOddInclusionDepth || bUseInclusionPins" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExWritePathProperties.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, outer path (inclusion depth of zero) will not be considered \"odd\" even if they technically are." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWritePathPropertiesSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InclusionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathAttributePackingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathAttributePackingMode;
	static void NewProp_bWritePathDataToPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePathDataToPoints;
	static void NewProp_bWritePathLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePathLength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathLengthAttributeName;
	static void NewProp_bWritePathDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePathDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathDirectionAttributeName;
	static void NewProp_bWritePathCentroid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePathCentroid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathCentroidAttributeName;
	static void NewProp_bWriteIsClockwise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsClockwise;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsClockwiseAttributeName;
	static void NewProp_bWriteArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteArea;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AreaAttributeName;
	static void NewProp_bWritePerimeter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePerimeter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerimeterAttributeName;
	static void NewProp_bWriteCompactness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCompactness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompactnessAttributeName;
	static void NewProp_bWriteBoundingBoxCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundingBoxCenter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundingBoxCenterAttributeName;
	static void NewProp_bWriteBoundingBoxExtent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundingBoxExtent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundingBoxExtentAttributeName;
	static void NewProp_bWriteBoundingBoxOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundingBoxOrientation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundingBoxOrientationAttributeName;
	static void NewProp_bWriteInclusionDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteInclusionDepth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InclusionDepthAttributeName;
	static void NewProp_bWriteNumInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNumInside;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumInsideAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
	static void NewProp_bWriteDot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DotAttributeName;
	static void NewProp_bWriteAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAngle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AngleAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngleRange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngleRange;
	static void NewProp_bWriteDistanceToNext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistanceToNext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceToNextAttributeName;
	static void NewProp_bWriteDistanceToPrev_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistanceToPrev;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceToPrevAttributeName;
	static void NewProp_bWriteDistanceToStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistanceToStart;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceToStartAttributeName;
	static void NewProp_bWriteDistanceToEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDistanceToEnd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceToEndAttributeName;
	static void NewProp_bWritePointTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointTimeAttributeName;
	static void NewProp_bTimeOneMinus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimeOneMinus;
	static void NewProp_bWritePointNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointNormalAttributeName;
	static void NewProp_bWritePointAvgNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointAvgNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointAvgNormalAttributeName;
	static void NewProp_bWritePointBinormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointBinormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointBinormalAttributeName;
	static void NewProp_bWriteDirectionToNext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDirectionToNext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionToNextAttributeName;
	static void NewProp_bWriteDirectionToPrev_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDirectionToPrev;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionToPrevAttributeName;
	static void NewProp_bTagConcave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagConcave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConcaveTag;
	static void NewProp_bTagConvex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagConvex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConvexTag;
	static void NewProp_bTagOuter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagOuter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OuterTag;
	static void NewProp_bTagInner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagInner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InnerTag;
	static void NewProp_bTagOddInclusionDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagOddInclusionDepth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OddInclusionDepthTag;
	static void NewProp_bUseInclusionPins_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInclusionPins;
	static void NewProp_bOuterIsNotOdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOuterIsNotOdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWritePathPropertiesSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWritePathPropertiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics

// ********** Begin Class UPCGExWritePathPropertiesSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InclusionDetails = { "InclusionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, InclusionDetails), Z_Construct_UScriptStruct_FPCGExInclusionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionDetails_MetaData), NewProp_InclusionDetails_MetaData) }; // 620301397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathAttributePackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathAttributePackingMode = { "PathAttributePackingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PathAttributePackingMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathAttributePackingMode_MetaData), NewProp_PathAttributePackingMode_MetaData) }; // 1840281174
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDataToPoints_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePathDataToPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDataToPoints = { "bWritePathDataToPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDataToPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePathDataToPoints_MetaData), NewProp_bWritePathDataToPoints_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathLength_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePathLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathLength = { "bWritePathLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePathLength_MetaData), NewProp_bWritePathLength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathLengthAttributeName = { "PathLengthAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PathLengthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLengthAttributeName_MetaData), NewProp_PathLengthAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDirection_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePathDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDirection = { "bWritePathDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePathDirection_MetaData), NewProp_bWritePathDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathDirectionAttributeName = { "PathDirectionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PathDirectionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathDirectionAttributeName_MetaData), NewProp_PathDirectionAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathCentroid_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePathCentroid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathCentroid = { "bWritePathCentroid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathCentroid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePathCentroid_MetaData), NewProp_bWritePathCentroid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathCentroidAttributeName = { "PathCentroidAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PathCentroidAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCentroidAttributeName_MetaData), NewProp_PathCentroidAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteIsClockwise_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteIsClockwise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteIsClockwise = { "bWriteIsClockwise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteIsClockwise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsClockwise_MetaData), NewProp_bWriteIsClockwise_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_IsClockwiseAttributeName = { "IsClockwiseAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, IsClockwiseAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsClockwiseAttributeName_MetaData), NewProp_IsClockwiseAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteArea_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteArea = { "bWriteArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteArea_MetaData), NewProp_bWriteArea_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AreaAttributeName = { "AreaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, AreaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaAttributeName_MetaData), NewProp_AreaAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePerimeter_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePerimeter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePerimeter = { "bWritePerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePerimeter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePerimeter_MetaData), NewProp_bWritePerimeter_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PerimeterAttributeName = { "PerimeterAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PerimeterAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterAttributeName_MetaData), NewProp_PerimeterAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteCompactness_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteCompactness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteCompactness = { "bWriteCompactness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteCompactness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCompactness_MetaData), NewProp_bWriteCompactness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_CompactnessAttributeName = { "CompactnessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, CompactnessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompactnessAttributeName_MetaData), NewProp_CompactnessAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxCenter_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteBoundingBoxCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxCenter = { "bWriteBoundingBoxCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundingBoxCenter_MetaData), NewProp_bWriteBoundingBoxCenter_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxCenterAttributeName = { "BoundingBoxCenterAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, BoundingBoxCenterAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxCenterAttributeName_MetaData), NewProp_BoundingBoxCenterAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxExtent_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteBoundingBoxExtent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxExtent = { "bWriteBoundingBoxExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxExtent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundingBoxExtent_MetaData), NewProp_bWriteBoundingBoxExtent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxExtentAttributeName = { "BoundingBoxExtentAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, BoundingBoxExtentAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxExtentAttributeName_MetaData), NewProp_BoundingBoxExtentAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxOrientation_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteBoundingBoxOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxOrientation = { "bWriteBoundingBoxOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundingBoxOrientation_MetaData), NewProp_bWriteBoundingBoxOrientation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxOrientationAttributeName = { "BoundingBoxOrientationAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, BoundingBoxOrientationAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxOrientationAttributeName_MetaData), NewProp_BoundingBoxOrientationAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteInclusionDepth_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteInclusionDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteInclusionDepth = { "bWriteInclusionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteInclusionDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteInclusionDepth_MetaData), NewProp_bWriteInclusionDepth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InclusionDepthAttributeName = { "InclusionDepthAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, InclusionDepthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionDepthAttributeName_MetaData), NewProp_InclusionDepthAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteNumInside_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteNumInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteNumInside = { "bWriteNumInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteNumInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNumInside_MetaData), NewProp_bWriteNumInside_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_NumInsideAttributeName = { "NumInsideAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, NumInsideAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInsideAttributeName_MetaData), NewProp_NumInsideAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpVector_MetaData), NewProp_UpVector_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDot_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDot = { "bWriteDot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDot_MetaData), NewProp_bWriteDot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DotAttributeName = { "DotAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DotAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotAttributeName_MetaData), NewProp_DotAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteAngle_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteAngle = { "bWriteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngle_MetaData), NewProp_bWriteAngle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleAttributeName = { "AngleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, AngleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttributeName_MetaData), NewProp_AngleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, AngleRange), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRange_MetaData), NewProp_AngleRange_MetaData) }; // 1931588405
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToNext_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDistanceToNext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToNext = { "bWriteDistanceToNext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToNext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistanceToNext_MetaData), NewProp_bWriteDistanceToNext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToNextAttributeName = { "DistanceToNextAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DistanceToNextAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToNextAttributeName_MetaData), NewProp_DistanceToNextAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToPrev_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDistanceToPrev = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToPrev = { "bWriteDistanceToPrev", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToPrev_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistanceToPrev_MetaData), NewProp_bWriteDistanceToPrev_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToPrevAttributeName = { "DistanceToPrevAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DistanceToPrevAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToPrevAttributeName_MetaData), NewProp_DistanceToPrevAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToStart_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDistanceToStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToStart = { "bWriteDistanceToStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistanceToStart_MetaData), NewProp_bWriteDistanceToStart_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToStartAttributeName = { "DistanceToStartAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DistanceToStartAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToStartAttributeName_MetaData), NewProp_DistanceToStartAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToEnd_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDistanceToEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToEnd = { "bWriteDistanceToEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDistanceToEnd_MetaData), NewProp_bWriteDistanceToEnd_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToEndAttributeName = { "DistanceToEndAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DistanceToEndAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToEndAttributeName_MetaData), NewProp_DistanceToEndAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointTime_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePointTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointTime = { "bWritePointTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointTime_MetaData), NewProp_bWritePointTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointTimeAttributeName = { "PointTimeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PointTimeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTimeAttributeName_MetaData), NewProp_PointTimeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTimeOneMinus_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTimeOneMinus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTimeOneMinus = { "bTimeOneMinus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTimeOneMinus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTimeOneMinus_MetaData), NewProp_bTimeOneMinus_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointNormal_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePointNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointNormal = { "bWritePointNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointNormal_MetaData), NewProp_bWritePointNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointNormalAttributeName = { "PointNormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PointNormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointNormalAttributeName_MetaData), NewProp_PointNormalAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointAvgNormal_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePointAvgNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointAvgNormal = { "bWritePointAvgNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointAvgNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointAvgNormal_MetaData), NewProp_bWritePointAvgNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointAvgNormalAttributeName = { "PointAvgNormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PointAvgNormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAvgNormalAttributeName_MetaData), NewProp_PointAvgNormalAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointBinormal_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWritePointBinormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointBinormal = { "bWritePointBinormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointBinormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointBinormal_MetaData), NewProp_bWritePointBinormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointBinormalAttributeName = { "PointBinormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, PointBinormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointBinormalAttributeName_MetaData), NewProp_PointBinormalAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToNext_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDirectionToNext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToNext = { "bWriteDirectionToNext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToNext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDirectionToNext_MetaData), NewProp_bWriteDirectionToNext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DirectionToNextAttributeName = { "DirectionToNextAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DirectionToNextAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionToNextAttributeName_MetaData), NewProp_DirectionToNextAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToPrev_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bWriteDirectionToPrev = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToPrev = { "bWriteDirectionToPrev", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToPrev_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDirectionToPrev_MetaData), NewProp_bWriteDirectionToPrev_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DirectionToPrevAttributeName = { "DirectionToPrevAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, DirectionToPrevAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionToPrevAttributeName_MetaData), NewProp_DirectionToPrevAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConcave_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTagConcave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConcave = { "bTagConcave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConcave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagConcave_MetaData), NewProp_bTagConcave_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ConcaveTag = { "ConcaveTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, ConcaveTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcaveTag_MetaData), NewProp_ConcaveTag_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConvex_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTagConvex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConvex = { "bTagConvex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConvex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagConvex_MetaData), NewProp_bTagConvex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ConvexTag = { "ConvexTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, ConvexTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexTag_MetaData), NewProp_ConvexTag_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOuter_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTagOuter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOuter = { "bTagOuter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOuter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagOuter_MetaData), NewProp_bTagOuter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_OuterTag = { "OuterTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, OuterTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterTag_MetaData), NewProp_OuterTag_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagInner_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTagInner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagInner = { "bTagInner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagInner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagInner_MetaData), NewProp_bTagInner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InnerTag = { "InnerTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, InnerTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerTag_MetaData), NewProp_InnerTag_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOddInclusionDepth_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bTagOddInclusionDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOddInclusionDepth = { "bTagOddInclusionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOddInclusionDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagOddInclusionDepth_MetaData), NewProp_bTagOddInclusionDepth_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_OddInclusionDepthTag = { "OddInclusionDepthTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWritePathPropertiesSettings, OddInclusionDepthTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OddInclusionDepthTag_MetaData), NewProp_OddInclusionDepthTag_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bUseInclusionPins_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bUseInclusionPins = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bUseInclusionPins = { "bUseInclusionPins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bUseInclusionPins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInclusionPins_MetaData), NewProp_bUseInclusionPins_MetaData) };
void Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bOuterIsNotOdd_SetBit(void* Obj)
{
	((UPCGExWritePathPropertiesSettings*)Obj)->bOuterIsNotOdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bOuterIsNotOdd = { "bOuterIsNotOdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWritePathPropertiesSettings), &Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bOuterIsNotOdd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOuterIsNotOdd_MetaData), NewProp_bOuterIsNotOdd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InclusionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathAttributePackingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathAttributePackingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDataToPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathLengthAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathDirectionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePathCentroid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PathCentroidAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteIsClockwise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_IsClockwiseAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AreaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PerimeterAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteCompactness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_CompactnessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxCenterAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxExtentAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteBoundingBoxOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_BoundingBoxOrientationAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteInclusionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InclusionDepthAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteNumInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_NumInsideAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_UpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DotAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_AngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToNextAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToPrev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToPrevAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToStartAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDistanceToEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DistanceToEndAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointTimeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTimeOneMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointNormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointAvgNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointAvgNormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWritePointBinormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_PointBinormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DirectionToNextAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bWriteDirectionToPrev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_DirectionToPrevAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConcave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ConcaveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagConvex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_ConvexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_OuterTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagInner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_InnerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bTagOddInclusionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_OddInclusionDepthTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bUseInclusionPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::NewProp_bOuterIsNotOdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWritePathPropertiesSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::ClassParams = {
	&UPCGExWritePathPropertiesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::Class_MetaDataParams)
};
void UPCGExWritePathPropertiesSettings::StaticRegisterNativesUPCGExWritePathPropertiesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWritePathPropertiesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.OuterSingleton, Z_Construct_UClass_UPCGExWritePathPropertiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings.OuterSingleton;
}
UPCGExWritePathPropertiesSettings::UPCGExWritePathPropertiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWritePathPropertiesSettings);
UPCGExWritePathPropertiesSettings::~UPCGExWritePathPropertiesSettings() {}
// ********** End Class UPCGExWritePathPropertiesSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWritePathProperties_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWritePathPropertiesSettings, UPCGExWritePathPropertiesSettings::StaticClass, TEXT("UPCGExWritePathPropertiesSettings"), &Z_Registration_Info_UClass_UPCGExWritePathPropertiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWritePathPropertiesSettings), 3514111339U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWritePathProperties_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWritePathProperties_h__Script_PCGExtendedToolkit_3476246081{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWritePathProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExWritePathProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
