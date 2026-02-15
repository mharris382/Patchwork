// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/PCGExShapes.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExShapeOutputMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShapeOutputMode;
static UEnum* EPCGExShapeOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapeOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShapeOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShapeOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExShapeOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapeOutputMode>()
{
	return EPCGExShapeOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PerDataset.DisplayName", "Per Dataset" },
		{ "PerDataset.Name", "EPCGExShapeOutputMode::PerDataset" },
		{ "PerDataset.ToolTip", "Merge all shapes into the original dataset" },
		{ "PerSeed.DisplayName", "Per Seed" },
		{ "PerSeed.Name", "EPCGExShapeOutputMode::PerSeed" },
		{ "PerSeed.ToolTip", "Create a new output per shape seed point" },
		{ "PerShape.DisplayName", "Per Shape" },
		{ "PerShape.Name", "EPCGExShapeOutputMode::PerShape" },
		{ "PerShape.ToolTip", "Create a new output per individual shape" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShapeOutputMode::PerDataset", (int64)EPCGExShapeOutputMode::PerDataset },
		{ "EPCGExShapeOutputMode::PerSeed", (int64)EPCGExShapeOutputMode::PerSeed },
		{ "EPCGExShapeOutputMode::PerShape", (int64)EPCGExShapeOutputMode::PerShape },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShapeOutputMode",
	"EPCGExShapeOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapeOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShapeOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShapeOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExShapeOutputMode *******************************************************

// ********** Begin Enum EPCGExShapeResolutionMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShapeResolutionMode;
static UEnum* EPCGExShapeResolutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShapeResolutionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapeResolutionMode>()
{
	return EPCGExShapeResolutionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "EPCGExShapeResolutionMode::Absolute" },
		{ "Absolute.ToolTip", "Resolution is absolute." },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "Scaled.DisplayName", "Scaled" },
		{ "Scaled.Name", "EPCGExShapeResolutionMode::Scaled" },
		{ "Scaled.ToolTip", "Resolution is scaled by the seed' scale" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShapeResolutionMode::Absolute", (int64)EPCGExShapeResolutionMode::Absolute },
		{ "EPCGExShapeResolutionMode::Scaled", (int64)EPCGExShapeResolutionMode::Scaled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShapeResolutionMode",
	"EPCGExShapeResolutionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeResolutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShapeResolutionMode.InnerSingleton;
}
// ********** End Enum EPCGExShapeResolutionMode ***************************************************

// ********** Begin Enum EPCGExShapePointLookAt ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShapePointLookAt;
static UEnum* EPCGExShapePointLookAt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapePointLookAt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShapePointLookAt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShapePointLookAt"));
	}
	return Z_Registration_Info_UEnum_EPCGExShapePointLookAt.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShapePointLookAt>()
{
	return EPCGExShapePointLookAt_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExShapePointLookAt::None" },
		{ "None.ToolTip", "Point look at will be as per 'canon' shape definition" },
		{ "Seed.DisplayName", "Seed" },
		{ "Seed.Name", "EPCGExShapePointLookAt::Seed" },
		{ "Seed.ToolTip", "Look At Seed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShapePointLookAt::None", (int64)EPCGExShapePointLookAt::None },
		{ "EPCGExShapePointLookAt::Seed", (int64)EPCGExShapePointLookAt::Seed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShapePointLookAt",
	"EPCGExShapePointLookAt",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt()
{
	if (!Z_Registration_Info_UEnum_EPCGExShapePointLookAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShapePointLookAt.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShapePointLookAt.InnerSingleton;
}
// ********** End Enum EPCGExShapePointLookAt ******************************************************

// ********** Begin Enum EPCGExResolutionMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExResolutionMode;
static UEnum* EPCGExResolutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExResolutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExResolutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExResolutionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExResolutionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExResolutionMode>()
{
	return EPCGExResolutionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExResolutionMode::Distance" },
		{ "Distance.ToolTip", "Points-per-meter" },
		{ "Fixed.DisplayName", "Count" },
		{ "Fixed.Name", "EPCGExResolutionMode::Fixed" },
		{ "Fixed.ToolTip", "Fixed number of points" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExResolutionMode::Distance", (int64)EPCGExResolutionMode::Distance },
		{ "EPCGExResolutionMode::Fixed", (int64)EPCGExResolutionMode::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExResolutionMode",
	"EPCGExResolutionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExResolutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExResolutionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExResolutionMode.InnerSingleton;
}
// ********** End Enum EPCGExResolutionMode ********************************************************

// ********** Begin ScriptStruct FPCGExShapeConfigBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShapeConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShapeConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bThreeDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMode_MetaData[] = {
		{ "Category", "Settings|Resolution" },
		{ "Comment", "/** Resolution mode */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Resolution mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionInput_MetaData[] = {
		{ "Category", "Settings|Resolution" },
		{ "Comment", "/** Resolution input type */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Resolution input type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionAttribute_MetaData[] = {
		{ "Category", "Settings|Resolution" },
		{ "Comment", "/** Resolution Attribute. */" },
		{ "DisplayName", "Resolution (Attr)" },
		{ "EditCondition", "ResolutionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Resolution Attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionConstant_MetaData[] = {
		{ "Category", "Settings|Resolution" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Resolution Constant. */" },
		{ "DisplayName", "Resolution" },
		{ "EditCondition", "ResolutionInput == EPCGExInputValueType::Constant && !bThreeDimensions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Resolution Constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionConstantVector_MetaData[] = {
		{ "Category", "Settings|Resolution" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Resolution Constant. */" },
		{ "DisplayName", "Resolution (Vector)" },
		{ "EditCondition", "ResolutionInput == EPCGExInputValueType::Constant && bThreeDimensions" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Resolution Constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fitting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fitting details */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fitting details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAxis_MetaData[] = {
		{ "Category", "Settings|Align" },
		{ "Comment", "/** Axis on the source to remap to a target axis on the shape */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis on the source to remap to a target axis on the shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAxis_MetaData[] = {
		{ "Category", "Settings|Align" },
		{ "Comment", "/** Shape axis to align to the source axis */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shape axis to align to the source axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsLookAt_MetaData[] = {
		{ "Category", "Settings|Align" },
		{ "Comment", "/** Points look at */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Points look at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxis_MetaData[] = {
		{ "Category", "Settings|Align" },
		{ "Comment", "/** Axis used to align the look at rotation */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis used to align the look at rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExtents_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "Comment", "/** Default point extnets */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Default point extnets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeId_MetaData[] = {
		{ "Category", "Settings|Data" },
		{ "Comment", "/** Shape ID used to identify this specific shape' points */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shape ID used to identify this specific shape' points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBelow_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "Comment", "/** Don't output shape if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output shape if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is less than */" },
		{ "EditCondition", "bRemoveBelow" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is less than" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAbove_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "Comment", "/** Don't output shape if they have more points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output shape if they have more points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is more than */" },
		{ "EditCondition", "bRemoveAbove" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is more than" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShapeConfigBase constinit property declarations *************
	static void NewProp_bThreeDimensions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bThreeDimensions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolutionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolutionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ResolutionConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionConstantVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fitting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointsLookAt_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointsLookAt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultExtents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShapeId;
	static void NewProp_bRemoveBelow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBelow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bRemoveAbove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAbove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExShapeConfigBase constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShapeConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase;
class UScriptStruct* FPCGExShapeConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShapeConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShapeConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExShapeConfigBase Property Definitions ************************
void Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bThreeDimensions_SetBit(void* Obj)
{
	((FPCGExShapeConfigBase*)Obj)->bThreeDimensions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bThreeDimensions = { "bThreeDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapeConfigBase), &Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bThreeDimensions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bThreeDimensions_MetaData), NewProp_bThreeDimensions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionMode = { "ResolutionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ResolutionMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionMode_MetaData), NewProp_ResolutionMode_MetaData) }; // 3513872999
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionInput = { "ResolutionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ResolutionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionInput_MetaData), NewProp_ResolutionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionAttribute = { "ResolutionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ResolutionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionAttribute_MetaData), NewProp_ResolutionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionConstant = { "ResolutionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ResolutionConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionConstant_MetaData), NewProp_ResolutionConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionConstantVector = { "ResolutionConstantVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ResolutionConstantVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionConstantVector_MetaData), NewProp_ResolutionConstantVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_Fitting = { "Fitting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, Fitting), Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fitting_MetaData), NewProp_Fitting_MetaData) }; // 3592968232
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_SourceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_SourceAxis = { "SourceAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, SourceAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAxis_MetaData), NewProp_SourceAxis_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_TargetAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_TargetAxis = { "TargetAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, TargetAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAxis_MetaData), NewProp_TargetAxis_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_PointsLookAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_PointsLookAt = { "PointsLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, PointsLookAt), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapePointLookAt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsLookAt_MetaData), NewProp_PointsLookAt_MetaData) }; // 2097411808
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_LookAtAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_LookAtAxis = { "LookAtAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, LookAtAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxis_MetaData), NewProp_LookAtAxis_MetaData) }; // 3442821815
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_DefaultExtents = { "DefaultExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, DefaultExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExtents_MetaData), NewProp_DefaultExtents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ShapeId = { "ShapeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, ShapeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeId_MetaData), NewProp_ShapeId_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveBelow_SetBit(void* Obj)
{
	((FPCGExShapeConfigBase*)Obj)->bRemoveBelow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveBelow = { "bRemoveBelow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapeConfigBase), &Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveBelow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBelow_MetaData), NewProp_bRemoveBelow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveAbove_SetBit(void* Obj)
{
	((FPCGExShapeConfigBase*)Obj)->bRemoveAbove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveAbove = { "bRemoveAbove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapeConfigBase), &Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveAbove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveAbove_MetaData), NewProp_bRemoveAbove_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeConfigBase, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bThreeDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ResolutionConstantVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_Fitting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_SourceAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_SourceAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_TargetAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_TargetAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_PointsLookAt_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_PointsLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_LookAtAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_LookAtAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_DefaultExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_ShapeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveBelow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_bRemoveAbove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewProp_MaxPointCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExShapeConfigBase Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExShapeConfigBase",
	Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::PropPointers),
	sizeof(FPCGExShapeConfigBase),
	alignof(FPCGExShapeConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShapeConfigBase ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExShapeOutputMode_StaticEnum, TEXT("EPCGExShapeOutputMode"), &Z_Registration_Info_UEnum_EPCGExShapeOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2152615657U) },
		{ EPCGExShapeResolutionMode_StaticEnum, TEXT("EPCGExShapeResolutionMode"), &Z_Registration_Info_UEnum_EPCGExShapeResolutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2518930798U) },
		{ EPCGExShapePointLookAt_StaticEnum, TEXT("EPCGExShapePointLookAt"), &Z_Registration_Info_UEnum_EPCGExShapePointLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097411808U) },
		{ EPCGExResolutionMode_StaticEnum, TEXT("EPCGExResolutionMode"), &Z_Registration_Info_UEnum_EPCGExResolutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3513872999U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExShapeConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExShapeConfigBase_Statics::NewStructOps, TEXT("PCGExShapeConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExShapeConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShapeConfigBase), 2185434250U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_4166828976{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapes_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
