// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExBoundsAxisToPoints.h"
#include "Data/PCGExDataForward.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoundsAxisToPoints() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBoundAxisPriority ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBoundAxisPriority;
static UEnum* EPCGExBoundAxisPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBoundAxisPriority"));
	}
	return Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundAxisPriority>()
{
	return EPCGExBoundAxisPriority_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Longest.DisplayName", "Longest" },
		{ "Longest.Name", "EPCGExBoundAxisPriority::Longest" },
		{ "Longest.ToolTip", "Longest axis" },
		{ "Median.DisplayName", "Median" },
		{ "Median.Name", "EPCGExBoundAxisPriority::Median" },
		{ "Median.ToolTip", "The leftover axis, that is neither the shortest nor the longest." },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "Shortest.DisplayName", "Shortest" },
		{ "Shortest.Name", "EPCGExBoundAxisPriority::Shortest" },
		{ "Shortest.ToolTip", "Shortest axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBoundAxisPriority::Shortest", (int64)EPCGExBoundAxisPriority::Shortest },
		{ "EPCGExBoundAxisPriority::Longest", (int64)EPCGExBoundAxisPriority::Longest },
		{ "EPCGExBoundAxisPriority::Median", (int64)EPCGExBoundAxisPriority::Median },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBoundAxisPriority",
	"EPCGExBoundAxisPriority",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBoundAxisPriority.InnerSingleton;
}
// ********** End Enum EPCGExBoundAxisPriority *****************************************************

// ********** Begin Enum EPCGExAxisDirectionConstraint *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint;
static UEnum* EPCGExAxisDirectionConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxisDirectionConstraint"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisDirectionConstraint>()
{
	return EPCGExAxisDirectionConstraint_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Avoid.DisplayName", "Avoid" },
		{ "Avoid.Name", "EPCGExAxisDirectionConstraint::Avoid" },
		{ "Avoid.ToolTip", "..." },
		{ "Favor.DisplayName", "Favor" },
		{ "Favor.Name", "EPCGExAxisDirectionConstraint::Favor" },
		{ "Favor.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExAxisDirectionConstraint::None" },
		{ "None.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxisDirectionConstraint::None", (int64)EPCGExAxisDirectionConstraint::None },
		{ "EPCGExAxisDirectionConstraint::Avoid", (int64)EPCGExAxisDirectionConstraint::Avoid },
		{ "EPCGExAxisDirectionConstraint::Favor", (int64)EPCGExAxisDirectionConstraint::Favor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxisDirectionConstraint",
	"EPCGExAxisDirectionConstraint",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint.InnerSingleton;
}
// ********** End Enum EPCGExAxisDirectionConstraint ***********************************************

// ********** Begin Enum EPCGExAxisSizeConstraint **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint;
static UEnum* EPCGExAxisSizeConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxisSizeConstraint"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisSizeConstraint>()
{
	return EPCGExAxisSizeConstraint_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Greater.DisplayName", "Greater" },
		{ "Greater.Name", "EPCGExAxisSizeConstraint::Greater" },
		{ "Greater.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExAxisSizeConstraint::None" },
		{ "None.ToolTip", "..." },
		{ "Smaller.DisplayName", "Smaller" },
		{ "Smaller.Name", "EPCGExAxisSizeConstraint::Smaller" },
		{ "Smaller.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxisSizeConstraint::None", (int64)EPCGExAxisSizeConstraint::None },
		{ "EPCGExAxisSizeConstraint::Greater", (int64)EPCGExAxisSizeConstraint::Greater },
		{ "EPCGExAxisSizeConstraint::Smaller", (int64)EPCGExAxisSizeConstraint::Smaller },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxisSizeConstraint",
	"EPCGExAxisSizeConstraint",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint.InnerSingleton;
}
// ********** End Enum EPCGExAxisSizeConstraint ****************************************************

// ********** Begin Enum EPCGExAxisConstraintSorting ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting;
static UEnum* EPCGExAxisConstraintSorting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxisConstraintSorting"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisConstraintSorting>()
{
	return EPCGExAxisConstraintSorting_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DirectionMatters.DisplayName", "Direction matters more" },
		{ "DirectionMatters.Name", "EPCGExAxisConstraintSorting::DirectionMatters" },
		{ "DirectionMatters.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "SizeMatters.DisplayName", "Size matters more" },
		{ "SizeMatters.Name", "EPCGExAxisConstraintSorting::SizeMatters" },
		{ "SizeMatters.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxisConstraintSorting::SizeMatters", (int64)EPCGExAxisConstraintSorting::SizeMatters },
		{ "EPCGExAxisConstraintSorting::DirectionMatters", (int64)EPCGExAxisConstraintSorting::DirectionMatters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxisConstraintSorting",
	"EPCGExAxisConstraintSorting",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting.InnerSingleton;
}
// ********** End Enum EPCGExAxisConstraintSorting *************************************************

// ********** Begin Class UPCGExBoundsAxisToPointsSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings;
UClass* UPCGExBoundsAxisToPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsAxisToPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsAxisToPointsSettings"),
			Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsAxisToPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_NoRegister()
{
	return UPCGExBoundsAxisToPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExBoundsAxisToPoints.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/bounds-axis-to-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePerPointData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Generates a point collections per generated point */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Generates a point collections per generated point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsReference_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which initial direction should initially picked. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which initial direction should initially picked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstraint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shifts the axis selection based on whether the selected axis points toward or away from a static direction. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shifts the axis selection based on whether the selected axis points toward or away from a static direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Direction" },
		{ "EditCondition", "DirectionConstraint != EPCGExAxisDirectionConstraint::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeConstraint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shifts the axis selection based on whether its size is greater or smaller than a given threshold. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shifts the axis selection based on whether its size is greater or smaller than a given threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Threshold" },
		{ "EditCondition", "SizeConstraint != EPCGExAxisSizeConstraint::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** In which order shifting should be processed, as one is likely to override the other. */" },
		{ "EditCondition", "DirectionConstraint != EPCGExAxisDirectionConstraint::None && SizeConstraint != EPCGExAxisSizeConstraint::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "In which order shifting should be processed, as one is likely to override the other." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Extent factor at which the points will be created on the selected world-align axis */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Extent factor at which the points will be created on the selected world-align axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetExtents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set the output point' extent to this value */" },
		{ "EditCondition", "bSetExtents" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set the output point' extent to this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Set the output point' scale to this value */" },
		{ "EditCondition", "bSetScale" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set the output point' scale to this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAttributesToOutputTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "bGeneratePerPointData" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsAxisToPoints.h" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsAxisToPointsSettings constinit property declarations *********
	static void NewProp_bGeneratePerPointData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePerPointData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsReference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsReference;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeConstraint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintsOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstraintsOrder;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_U;
	static void NewProp_bSetExtents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static void NewProp_bSetScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttributesToOutputTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsAxisToPointsSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsAxisToPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics

// ********** Begin Class UPCGExBoundsAxisToPointsSettings Property Definitions ********************
void Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bGeneratePerPointData_SetBit(void* Obj)
{
	((UPCGExBoundsAxisToPointsSettings*)Obj)->bGeneratePerPointData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bGeneratePerPointData = { "bGeneratePerPointData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsAxisToPointsSettings), &Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bGeneratePerPointData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratePerPointData_MetaData), NewProp_bGeneratePerPointData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_BoundsReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_BoundsReference = { "BoundsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, BoundsReference), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsReference_MetaData), NewProp_BoundsReference_MetaData) }; // 926722312
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, Priority), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundAxisPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 1178262706
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_DirectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_DirectionConstraint = { "DirectionConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, DirectionConstraint), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisDirectionConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstraint_MetaData), NewProp_DirectionConstraint_MetaData) }; // 3912093060
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeConstraint = { "SizeConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, SizeConstraint), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisSizeConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeConstraint_MetaData), NewProp_SizeConstraint_MetaData) }; // 2159379886
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeThreshold = { "SizeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, SizeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeThreshold_MetaData), NewProp_SizeThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_ConstraintsOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_ConstraintsOrder = { "ConstraintsOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, ConstraintsOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisConstraintSorting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintsOrder_MetaData), NewProp_ConstraintsOrder_MetaData) }; // 3254133675
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
void Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetExtents_SetBit(void* Obj)
{
	((UPCGExBoundsAxisToPointsSettings*)Obj)->bSetExtents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetExtents = { "bSetExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsAxisToPointsSettings), &Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetExtents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetExtents_MetaData), NewProp_bSetExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
void Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetScale_SetBit(void* Obj)
{
	((UPCGExBoundsAxisToPointsSettings*)Obj)->bSetScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetScale = { "bSetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsAxisToPointsSettings), &Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetScale_MetaData), NewProp_bSetScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_PointAttributesToOutputTags = { "PointAttributesToOutputTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsAxisToPointsSettings, PointAttributesToOutputTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAttributesToOutputTags_MetaData), NewProp_PointAttributesToOutputTags_MetaData) }; // 1295694073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bGeneratePerPointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_BoundsReference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_BoundsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_DirectionConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_DirectionConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_SizeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_ConstraintsOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_ConstraintsOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_bSetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::NewProp_PointAttributesToOutputTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsAxisToPointsSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::ClassParams = {
	&UPCGExBoundsAxisToPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExBoundsAxisToPointsSettings::StaticRegisterNativesUPCGExBoundsAxisToPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings.OuterSingleton;
}
UPCGExBoundsAxisToPointsSettings::UPCGExBoundsAxisToPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsAxisToPointsSettings);
UPCGExBoundsAxisToPointsSettings::~UPCGExBoundsAxisToPointsSettings() {}
// ********** End Class UPCGExBoundsAxisToPointsSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBoundAxisPriority_StaticEnum, TEXT("EPCGExBoundAxisPriority"), &Z_Registration_Info_UEnum_EPCGExBoundAxisPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1178262706U) },
		{ EPCGExAxisDirectionConstraint_StaticEnum, TEXT("EPCGExAxisDirectionConstraint"), &Z_Registration_Info_UEnum_EPCGExAxisDirectionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3912093060U) },
		{ EPCGExAxisSizeConstraint_StaticEnum, TEXT("EPCGExAxisSizeConstraint"), &Z_Registration_Info_UEnum_EPCGExAxisSizeConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2159379886U) },
		{ EPCGExAxisConstraintSorting_StaticEnum, TEXT("EPCGExAxisConstraintSorting"), &Z_Registration_Info_UEnum_EPCGExAxisConstraintSorting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3254133675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings, UPCGExBoundsAxisToPointsSettings::StaticClass, TEXT("UPCGExBoundsAxisToPointsSettings"), &Z_Registration_Info_UClass_UPCGExBoundsAxisToPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsAxisToPointsSettings), 1828054946U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_1988209919{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
