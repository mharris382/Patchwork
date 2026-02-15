// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExOffsetPath.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOffsetPath() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOffsetPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOffsetPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOffsetCleanupMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode;
static UEnum* EPCGExOffsetCleanupMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOffsetCleanupMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetCleanupMode>()
{
	return EPCGExOffsetCleanupMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CollapseFlipped.DisplayName", "Collapse Flipped Segments" },
		{ "CollapseFlipped.Name", "EPCGExOffsetCleanupMode::CollapseFlipped" },
		{ "CollapseFlipped.ToolTip", "Collapse flipped segments." },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExOffsetCleanupMode::None" },
		{ "None.ToolTip", "No cleanup." },
		{ "Sections.DisplayName", "Collapse Sections" },
		{ "Sections.Name", "EPCGExOffsetCleanupMode::Sections" },
		{ "Sections.ToolTip", "Remove sections of the paths that are between self-intersections." },
		{ "SectionsFlipped.DisplayName", "Collapse Sections (Flipped)" },
		{ "SectionsFlipped.Name", "EPCGExOffsetCleanupMode::SectionsFlipped" },
		{ "SectionsFlipped.ToolTip", "Remove sections of the paths that self-intersect if that section contains flipped segments." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOffsetCleanupMode::None", (int64)EPCGExOffsetCleanupMode::None },
		{ "EPCGExOffsetCleanupMode::CollapseFlipped", (int64)EPCGExOffsetCleanupMode::CollapseFlipped },
		{ "EPCGExOffsetCleanupMode::SectionsFlipped", (int64)EPCGExOffsetCleanupMode::SectionsFlipped },
		{ "EPCGExOffsetCleanupMode::Sections", (int64)EPCGExOffsetCleanupMode::Sections },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOffsetCleanupMode",
	"EPCGExOffsetCleanupMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode.InnerSingleton;
}
// ********** End Enum EPCGExOffsetCleanupMode *****************************************************

// ********** Begin Enum EPCGExOffsetAdjustment ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOffsetAdjustment;
static UEnum* EPCGExOffsetAdjustment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOffsetAdjustment"));
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetAdjustment>()
{
	return EPCGExOffsetAdjustment_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Mitre.DisplayName", "Mitre" },
		{ "Mitre.Name", "EPCGExOffsetAdjustment::Mitre" },
		{ "Mitre.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "None.DisplayName", "Raw" },
		{ "None.Name", "EPCGExOffsetAdjustment::None" },
		{ "None.ToolTip", "..." },
		{ "SmoothAuto.DisplayName", "Auto Smooth" },
		{ "SmoothAuto.Name", "EPCGExOffsetAdjustment::SmoothAuto" },
		{ "SmoothAuto.ToolTip", "..." },
		{ "SmoothCustom.DisplayName", "Custom Smooth" },
		{ "SmoothCustom.Name", "EPCGExOffsetAdjustment::SmoothCustom" },
		{ "SmoothCustom.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOffsetAdjustment::None", (int64)EPCGExOffsetAdjustment::None },
		{ "EPCGExOffsetAdjustment::SmoothCustom", (int64)EPCGExOffsetAdjustment::SmoothCustom },
		{ "EPCGExOffsetAdjustment::SmoothAuto", (int64)EPCGExOffsetAdjustment::SmoothAuto },
		{ "EPCGExOffsetAdjustment::Mitre", (int64)EPCGExOffsetAdjustment::Mitre },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOffsetAdjustment",
	"EPCGExOffsetAdjustment",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetAdjustment.InnerSingleton;
}
// ********** End Enum EPCGExOffsetAdjustment ******************************************************

// ********** Begin Enum EPCGExOffsetMethod ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOffsetMethod;
static UEnum* EPCGExOffsetMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOffsetMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOffsetMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetMethod>()
{
	return EPCGExOffsetMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LinePlane.DisplayName", "Line/Plane" },
		{ "LinePlane.Name", "EPCGExOffsetMethod::LinePlane" },
		{ "LinePlane.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "Slide.DisplayName", "Slide" },
		{ "Slide.Name", "EPCGExOffsetMethod::Slide" },
		{ "Slide.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOffsetMethod::Slide", (int64)EPCGExOffsetMethod::Slide },
		{ "EPCGExOffsetMethod::LinePlane", (int64)EPCGExOffsetMethod::LinePlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOffsetMethod",
	"EPCGExOffsetMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExOffsetMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOffsetMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOffsetMethod.InnerSingleton;
}
// ********** End Enum EPCGExOffsetMethod **********************************************************

// ********** Begin Class UPCGExOffsetPathSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOffsetPathSettings;
UClass* UPCGExOffsetPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExOffsetPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExOffsetPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOffsetPathSettings"),
			Z_Registration_Info_UClass_UPCGExOffsetPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExOffsetPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExOffsetPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOffsetPathSettings_NoRegister()
{
	return UPCGExOffsetPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOffsetPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExOffsetPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCGExNodeLibraryDoc", "paths/offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset type.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the offset size from a local attribute. The regular Size parameter then act as a scale.*/" },
		{ "DisplayName", "Offset (Attr)" },
		{ "EditCondition", "OffsetInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the offset size from a local attribute. The regular Size parameter then act as a scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset size.*/" },
		{ "DisplayName", "Offset" },
		{ "EditCondition", "OffsetInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPointScaleToOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale offset direction & distance using point scale.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale offset direction & distance using point scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpVectorConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector used to calculate Offset direction.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector used to calculate Offset direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction Vector type.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction Vector type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the direction vector from a local point attribute. */" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "DirectionType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the direction vector from a local point attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of arithmetic path point offset direction.*/" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "OffsetMethod == EPCGExOffsetMethod::Slide && DirectionType == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of arithmetic path point offset direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Inverts offset direction. Can also be achieved by using negative offset values, but this enable consistent inversion no matter the input.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverts offset direction. Can also be achieved by using negative offset values, but this enable consistent inversion no matter the input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Adjustment_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Adjust aspect in tight angles */" },
		{ "EditCondition", "OffsetMethod == EPCGExOffsetMethod::Slide" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Adjust aspect in tight angles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Adjust aspect in tight angles */" },
		{ "EditCondition", "OffsetMethod == EPCGExOffsetMethod::Slide && Adjustment == EPCGExOffsetAdjustment::SmoothCustom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Adjust aspect in tight angles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MitreLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset size.*/" },
		{ "EditCondition", "OffsetMethod == EPCGExOffsetMethod::Slide && Adjustment == EPCGExOffsetAdjustment::Mitre" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupMode_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionTolerance_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "Comment", "/** During cleanup, used as a tolerance to consider valid path segments as overlapping or not. */" },
		{ "EditCondition", "CleanupMode != EPCGExOffsetCleanupMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "During cleanup, used as a tolerance to consider valid path segments as overlapping or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagMutatedPoints_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "Comment", "/** Attempt to adjust offset on mutated edges .*/" },
		{ "EditCondition", "CleanupMode != EPCGExOffsetCleanupMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attempt to adjust offset on mutated edges ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutatedAttributeName_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "Comment", "/** Name of the 'bool' attribute to flag the nodes that are the result of a mutation. */" },
		{ "EditCondition", "CleanupMode != EPCGExOffsetCleanupMode::None && bFlagMutatedPoints" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to flag the nodes that are the result of a mutation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagFlippedPoints_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "Comment", "/** Whether to flag points that have been flipped during the offset.*/" },
		{ "EditCondition", "CleanupMode == EPCGExOffsetCleanupMode::None" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to flag points that have been flipped during the offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlippedAttributeName_MetaData[] = {
		{ "Category", "Settings|Cleanup" },
		{ "Comment", "/** Name of the 'bool' attribute to flag the points that are flipped. */" },
		{ "EditCondition", "CleanupMode == EPCGExOffsetCleanupMode::None && bFlagFlippedPoints" },
		{ "ModuleRelativePath", "Public/Paths/PCGExOffsetPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to flag the points that are flipped." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOffsetPathSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OffsetConstant;
	static void NewProp_bApplyPointScaleToOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPointScaleToOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpVectorConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionConstant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionConstant;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Adjustment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjustment;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdjustmentScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MitreLimit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CleanupMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CleanupMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionTolerance;
	static void NewProp_bFlagMutatedPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagMutatedPoints;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MutatedAttributeName;
	static void NewProp_bFlagFlippedPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagFlippedPoints;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlippedAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExOffsetPathSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOffsetPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOffsetPathSettings_Statics

// ********** Begin Class UPCGExOffsetPathSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetMethod = { "OffsetMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, OffsetMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetMethod_MetaData), NewProp_OffsetMethod_MetaData) }; // 1421704476
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetInput = { "OffsetInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, OffsetInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetInput_MetaData), NewProp_OffsetInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetAttribute = { "OffsetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, OffsetAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetAttribute_MetaData), NewProp_OffsetAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetConstant = { "OffsetConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, OffsetConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetConstant_MetaData), NewProp_OffsetConstant_MetaData) };
void Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bApplyPointScaleToOffset_SetBit(void* Obj)
{
	((UPCGExOffsetPathSettings*)Obj)->bApplyPointScaleToOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bApplyPointScaleToOffset = { "bApplyPointScaleToOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOffsetPathSettings), &Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bApplyPointScaleToOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyPointScaleToOffset_MetaData), NewProp_bApplyPointScaleToOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_UpVectorConstant = { "UpVectorConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, UpVectorConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpVectorConstant_MetaData), NewProp_UpVectorConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionType = { "DirectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, DirectionType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionType_MetaData), NewProp_DirectionType_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionAttribute = { "DirectionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, DirectionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAttribute_MetaData), NewProp_DirectionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionConstant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, DirectionConstant), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) }; // 2315435228
void Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((UPCGExOffsetPathSettings*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOffsetPathSettings), &Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_Adjustment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, Adjustment), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetAdjustment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Adjustment_MetaData), NewProp_Adjustment_MetaData) }; // 4223266023
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_AdjustmentScale = { "AdjustmentScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, AdjustmentScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentScale_MetaData), NewProp_AdjustmentScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_MitreLimit = { "MitreLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, MitreLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MitreLimit_MetaData), NewProp_MitreLimit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_CleanupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_CleanupMode = { "CleanupMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, CleanupMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOffsetCleanupMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupMode_MetaData), NewProp_CleanupMode_MetaData) }; // 2021954910
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_IntersectionTolerance = { "IntersectionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, IntersectionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionTolerance_MetaData), NewProp_IntersectionTolerance_MetaData) };
void Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagMutatedPoints_SetBit(void* Obj)
{
	((UPCGExOffsetPathSettings*)Obj)->bFlagMutatedPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagMutatedPoints = { "bFlagMutatedPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOffsetPathSettings), &Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagMutatedPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagMutatedPoints_MetaData), NewProp_bFlagMutatedPoints_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_MutatedAttributeName = { "MutatedAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, MutatedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutatedAttributeName_MetaData), NewProp_MutatedAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagFlippedPoints_SetBit(void* Obj)
{
	((UPCGExOffsetPathSettings*)Obj)->bFlagFlippedPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagFlippedPoints = { "bFlagFlippedPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOffsetPathSettings), &Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagFlippedPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagFlippedPoints_MetaData), NewProp_bFlagFlippedPoints_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_FlippedAttributeName = { "FlippedAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOffsetPathSettings, FlippedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlippedAttributeName_MetaData), NewProp_FlippedAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_OffsetConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bApplyPointScaleToOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_UpVectorConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionConstant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_Adjustment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_Adjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_AdjustmentScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_MitreLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_CleanupMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_CleanupMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_IntersectionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagMutatedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_MutatedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_bFlagFlippedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::NewProp_FlippedAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExOffsetPathSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::ClassParams = {
	&UPCGExOffsetPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExOffsetPathSettings::StaticRegisterNativesUPCGExOffsetPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExOffsetPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExOffsetPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOffsetPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExOffsetPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOffsetPathSettings.OuterSingleton;
}
UPCGExOffsetPathSettings::UPCGExOffsetPathSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOffsetPathSettings);
UPCGExOffsetPathSettings::~UPCGExOffsetPathSettings() {}
// ********** End Class UPCGExOffsetPathSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOffsetCleanupMode_StaticEnum, TEXT("EPCGExOffsetCleanupMode"), &Z_Registration_Info_UEnum_EPCGExOffsetCleanupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021954910U) },
		{ EPCGExOffsetAdjustment_StaticEnum, TEXT("EPCGExOffsetAdjustment"), &Z_Registration_Info_UEnum_EPCGExOffsetAdjustment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223266023U) },
		{ EPCGExOffsetMethod_StaticEnum, TEXT("EPCGExOffsetMethod"), &Z_Registration_Info_UEnum_EPCGExOffsetMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1421704476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOffsetPathSettings, UPCGExOffsetPathSettings::StaticClass, TEXT("UPCGExOffsetPathSettings"), &Z_Registration_Info_UClass_UPCGExOffsetPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOffsetPathSettings), 3781736227U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_1926124873{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
