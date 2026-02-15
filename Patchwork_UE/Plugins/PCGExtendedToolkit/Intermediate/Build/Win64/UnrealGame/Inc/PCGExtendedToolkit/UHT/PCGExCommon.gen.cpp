// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExCommon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCommon() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAsyncPriority *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAsyncPriority;
static UEnum* EPCGExAsyncPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAsyncPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAsyncPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAsyncPriority"));
	}
	return Z_Registration_Info_UEnum_EPCGExAsyncPriority.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAsyncPriority>()
{
	return EPCGExAsyncPriority_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackgroundHigh.DisplayName", "BackgroundHigh" },
		{ "BackgroundHigh.Name", "EPCGExAsyncPriority::BackgroundHigh" },
		{ "BackgroundHigh.ToolTip", "..." },
		{ "BackgroundLow.DisplayName", "BackgroundLow" },
		{ "BackgroundLow.Name", "EPCGExAsyncPriority::BackgroundLow" },
		{ "BackgroundLow.ToolTip", "..." },
		{ "BackgroundNormal.DisplayName", "BackgroundNormal" },
		{ "BackgroundNormal.Name", "EPCGExAsyncPriority::BackgroundNormal" },
		{ "BackgroundNormal.ToolTip", "..." },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EPCGExAsyncPriority::Default" },
		{ "Default.ToolTip", "..." },
		{ "High.DisplayName", "High" },
		{ "High.Name", "EPCGExAsyncPriority::High" },
		{ "High.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EPCGExAsyncPriority::Normal" },
		{ "Normal.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAsyncPriority::Default", (int64)EPCGExAsyncPriority::Default },
		{ "EPCGExAsyncPriority::Normal", (int64)EPCGExAsyncPriority::Normal },
		{ "EPCGExAsyncPriority::High", (int64)EPCGExAsyncPriority::High },
		{ "EPCGExAsyncPriority::BackgroundHigh", (int64)EPCGExAsyncPriority::BackgroundHigh },
		{ "EPCGExAsyncPriority::BackgroundNormal", (int64)EPCGExAsyncPriority::BackgroundNormal },
		{ "EPCGExAsyncPriority::BackgroundLow", (int64)EPCGExAsyncPriority::BackgroundLow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAsyncPriority",
	"EPCGExAsyncPriority",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority()
{
	if (!Z_Registration_Info_UEnum_EPCGExAsyncPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAsyncPriority.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAsyncPriority.InnerSingleton;
}
// ********** End Enum EPCGExAsyncPriority *********************************************************

// ********** Begin Enum EPCGExInputValueType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExInputValueType;
static UEnum* EPCGExInputValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExInputValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExInputValueType"));
	}
	return Z_Registration_Info_UEnum_EPCGExInputValueType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputValueType>()
{
	return EPCGExInputValueType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.ActionIcon", "Attribute" },
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExInputValueType::Attribute" },
		{ "Attribute.Tooltip", "Read the value from the input data." },
		{ "Constant.ActionIcon", "Constant" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExInputValueType::Constant" },
		{ "Constant.Tooltip", "Use a constant, user-defined value." },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExInputValueType::Constant", (int64)EPCGExInputValueType::Constant },
		{ "EPCGExInputValueType::Attribute", (int64)EPCGExInputValueType::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExInputValueType",
	"EPCGExInputValueType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExInputValueType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExInputValueType.InnerSingleton;
}
// ********** End Enum EPCGExInputValueType ********************************************************

// ********** Begin Enum EPCGExInputValueToggle ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExInputValueToggle;
static UEnum* EPCGExInputValueToggle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputValueToggle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExInputValueToggle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExInputValueToggle"));
	}
	return Z_Registration_Info_UEnum_EPCGExInputValueToggle.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputValueToggle>()
{
	return EPCGExInputValueToggle_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.ActionIcon", "Attribute" },
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExInputValueToggle::Attribute" },
		{ "Attribute.Tooltip", "Read the value from the input data." },
		{ "Constant.ActionIcon", "Constant" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExInputValueToggle::Constant" },
		{ "Constant.Tooltip", "Use a constant, user-defined value." },
		{ "Disabled.ActionIcon", "STF_None" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EPCGExInputValueToggle::Disabled" },
		{ "Disabled.Tooltip", "Disabled" },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExInputValueToggle::Constant", (int64)EPCGExInputValueToggle::Constant },
		{ "EPCGExInputValueToggle::Attribute", (int64)EPCGExInputValueToggle::Attribute },
		{ "EPCGExInputValueToggle::Disabled", (int64)EPCGExInputValueToggle::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExInputValueToggle",
	"EPCGExInputValueToggle",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputValueToggle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExInputValueToggle.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExInputValueToggle.InnerSingleton;
}
// ********** End Enum EPCGExInputValueToggle ******************************************************

// ********** Begin Enum EPCGExDataInputValueType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDataInputValueType;
static UEnum* EPCGExDataInputValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataInputValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDataInputValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDataInputValueType"));
	}
	return Z_Registration_Info_UEnum_EPCGExDataInputValueType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataInputValueType>()
{
	return EPCGExDataInputValueType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.ActionIcon", "DataAttribute" },
		{ "Attribute.DisplayName", "@Data" },
		{ "Attribute.Name", "EPCGExDataInputValueType::Attribute" },
		{ "Attribute.Tooltip", "Attribute. Can only read from @Data domain." },
		{ "Constant.ActionIcon", "Constant" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExDataInputValueType::Constant" },
		{ "Constant.Tooltip", "Constant." },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDataInputValueType::Constant", (int64)EPCGExDataInputValueType::Constant },
		{ "EPCGExDataInputValueType::Attribute", (int64)EPCGExDataInputValueType::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDataInputValueType",
	"EPCGExDataInputValueType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataInputValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDataInputValueType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDataInputValueType.InnerSingleton;
}
// ********** End Enum EPCGExDataInputValueType ****************************************************

// ********** Begin Enum EPCGExPointBoundsSource ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointBoundsSource;
static UEnum* EPCGExPointBoundsSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointBoundsSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointBoundsSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointBoundsSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointBoundsSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointBoundsSource>()
{
	return EPCGExPointBoundsSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bounds.ActionIcon", "Bounds" },
		{ "Bounds.DisplayName", "Bounds" },
		{ "Bounds.Name", "EPCGExPointBoundsSource::Bounds" },
		{ "Bounds.ToolTip", "Unscaled Bounds (why?)" },
		{ "Center.ActionIcon", "Center" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EPCGExPointBoundsSource::Center" },
		{ "Center.ToolTip", "A tiny size 1 box." },
		{ "DensityBounds.ActionIcon", "DensityBounds" },
		{ "DensityBounds.DisplayName", "Density Bounds" },
		{ "DensityBounds.Name", "EPCGExPointBoundsSource::DensityBounds" },
		{ "DensityBounds.ToolTip", "Density Bounds (scaled + steepness)" },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
		{ "ScaledBounds.ActionIcon", "ScaledBounds" },
		{ "ScaledBounds.DisplayName", "Scaled Bounds" },
		{ "ScaledBounds.Name", "EPCGExPointBoundsSource::ScaledBounds" },
		{ "ScaledBounds.ToolTip", "Scaled Bounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointBoundsSource::ScaledBounds", (int64)EPCGExPointBoundsSource::ScaledBounds },
		{ "EPCGExPointBoundsSource::DensityBounds", (int64)EPCGExPointBoundsSource::DensityBounds },
		{ "EPCGExPointBoundsSource::Bounds", (int64)EPCGExPointBoundsSource::Bounds },
		{ "EPCGExPointBoundsSource::Center", (int64)EPCGExPointBoundsSource::Center },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointBoundsSource",
	"EPCGExPointBoundsSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointBoundsSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointBoundsSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointBoundsSource.InnerSingleton;
}
// ********** End Enum EPCGExPointBoundsSource *****************************************************

// ********** Begin Enum EPCGExDistance ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDistance;
static UEnum* EPCGExDistance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDistance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDistance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDistance"));
	}
	return Z_Registration_Info_UEnum_EPCGExDistance.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDistance>()
{
	return EPCGExDistance_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BoxBounds.ActionIcon", "Dist_BoxBounds" },
		{ "BoxBounds.DisplayName", "Box Bounds" },
		{ "BoxBounds.Name", "EPCGExDistance::BoxBounds" },
		{ "BoxBounds.ToolTip", "Point extents" },
		{ "Center.ActionIcon", "Dist_Center" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EPCGExDistance::Center" },
		{ "Center.ToolTip", "Center" },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
		{ "None.DisplayName", "None" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExDistance::None" },
		{ "None.ToolTip", "Used for union blending with full weight." },
		{ "SphereBounds.ActionIcon", "Dist_SphereBounds" },
		{ "SphereBounds.DisplayName", "Sphere Bounds" },
		{ "SphereBounds.Name", "EPCGExDistance::SphereBounds" },
		{ "SphereBounds.ToolTip", "Point sphere which radius is scaled extent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDistance::Center", (int64)EPCGExDistance::Center },
		{ "EPCGExDistance::SphereBounds", (int64)EPCGExDistance::SphereBounds },
		{ "EPCGExDistance::BoxBounds", (int64)EPCGExDistance::BoxBounds },
		{ "EPCGExDistance::None", (int64)EPCGExDistance::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDistance",
	"EPCGExDistance",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance()
{
	if (!Z_Registration_Info_UEnum_EPCGExDistance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDistance.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDistance.InnerSingleton;
}
// ********** End Enum EPCGExDistance **************************************************************

// ********** Begin Enum EPCGExSplineMeshAxis ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplineMeshAxis;
static UEnum* EPCGExSplineMeshAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplineMeshAxis"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineMeshAxis>()
{
	return EPCGExSplineMeshAxis_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Hidden", "" },
		{ "Default.Name", "EPCGExSplineMeshAxis::Default" },
		{ "ModuleRelativePath", "Public/PCGExCommon.h" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EPCGExSplineMeshAxis::X" },
		{ "X.ToolTip", "X Axis" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EPCGExSplineMeshAxis::Y" },
		{ "Y.ToolTip", "Y Axis" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EPCGExSplineMeshAxis::Z" },
		{ "Z.ToolTip", "Z Axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplineMeshAxis::Default", (int64)EPCGExSplineMeshAxis::Default },
		{ "EPCGExSplineMeshAxis::X", (int64)EPCGExSplineMeshAxis::X },
		{ "EPCGExSplineMeshAxis::Y", (int64)EPCGExSplineMeshAxis::Y },
		{ "EPCGExSplineMeshAxis::Z", (int64)EPCGExSplineMeshAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplineMeshAxis",
	"EPCGExSplineMeshAxis",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplineMeshAxis.InnerSingleton;
}
// ********** End Enum EPCGExSplineMeshAxis ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAsyncPriority_StaticEnum, TEXT("EPCGExAsyncPriority"), &Z_Registration_Info_UEnum_EPCGExAsyncPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2365709606U) },
		{ EPCGExInputValueType_StaticEnum, TEXT("EPCGExInputValueType"), &Z_Registration_Info_UEnum_EPCGExInputValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504493006U) },
		{ EPCGExInputValueToggle_StaticEnum, TEXT("EPCGExInputValueToggle"), &Z_Registration_Info_UEnum_EPCGExInputValueToggle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4278026874U) },
		{ EPCGExDataInputValueType_StaticEnum, TEXT("EPCGExDataInputValueType"), &Z_Registration_Info_UEnum_EPCGExDataInputValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 785724845U) },
		{ EPCGExPointBoundsSource_StaticEnum, TEXT("EPCGExPointBoundsSource"), &Z_Registration_Info_UEnum_EPCGExPointBoundsSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 926722312U) },
		{ EPCGExDistance_StaticEnum, TEXT("EPCGExDistance"), &Z_Registration_Info_UEnum_EPCGExDistance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1812963399U) },
		{ EPCGExSplineMeshAxis_StaticEnum, TEXT("EPCGExSplineMeshAxis"), &Z_Registration_Info_UEnum_EPCGExSplineMeshAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3931014419U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h__Script_PCGExtendedToolkit_1812044274{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
