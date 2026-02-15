// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExFitting.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFitting() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariations();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExJustificationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExLeanTransformDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExScaleToFitDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTransformDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExFitMode *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFitMode;
static UEnum* EPCGExFitMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFitMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFitMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFitMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExFitMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFitMode>()
{
	return EPCGExFitMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Individual.ActionIcon", "STF_Individual" },
		{ "Individual.DisplayName", "Individual" },
		{ "Individual.Name", "EPCGExFitMode::Individual" },
		{ "Individual.ToolTip", "Per-component fit" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "None.ActionIcon", "STF_None" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExFitMode::None" },
		{ "None.ToolTip", "No fitting" },
		{ "Uniform.ActionIcon", "STF_Uniform" },
		{ "Uniform.DisplayName", "Uniform" },
		{ "Uniform.Name", "EPCGExFitMode::Uniform" },
		{ "Uniform.ToolTip", "Uniform fit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFitMode::None", (int64)EPCGExFitMode::None },
		{ "EPCGExFitMode::Uniform", (int64)EPCGExFitMode::Uniform },
		{ "EPCGExFitMode::Individual", (int64)EPCGExFitMode::Individual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFitMode",
	"EPCGExFitMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExFitMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFitMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFitMode.InnerSingleton;
}
// ********** End Enum EPCGExFitMode ***************************************************************

// ********** Begin Enum EPCGExScaleToFit **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExScaleToFit;
static UEnum* EPCGExScaleToFit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExScaleToFit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExScaleToFit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExScaleToFit"));
	}
	return Z_Registration_Info_UEnum_EPCGExScaleToFit.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExScaleToFit>()
{
	return EPCGExScaleToFit_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Avg.ActionIcon", "Fit_Average" },
		{ "Avg.DisplayName", "Average" },
		{ "Avg.Name", "EPCGExScaleToFit::Avg" },
		{ "Avg.ToolTip", "Average" },
		{ "BlueprintType", "true" },
		{ "Fill.ActionIcon", "Fit_Fill" },
		{ "Fill.DisplayName", "Fill" },
		{ "Fill.Name", "EPCGExScaleToFit::Fill" },
		{ "Fill.ToolTip", "Fill" },
		{ "Max.ActionIcon", "Fit_Max" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExScaleToFit::Max" },
		{ "Max.ToolTip", "Max" },
		{ "Min.ActionIcon", "Fit_Min" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExScaleToFit::Min" },
		{ "Min.ToolTip", "Min" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "None.ActionIcon", "Fit_None" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExScaleToFit::None" },
		{ "None.ToolTip", "No fitting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExScaleToFit::None", (int64)EPCGExScaleToFit::None },
		{ "EPCGExScaleToFit::Fill", (int64)EPCGExScaleToFit::Fill },
		{ "EPCGExScaleToFit::Min", (int64)EPCGExScaleToFit::Min },
		{ "EPCGExScaleToFit::Max", (int64)EPCGExScaleToFit::Max },
		{ "EPCGExScaleToFit::Avg", (int64)EPCGExScaleToFit::Avg },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExScaleToFit",
	"EPCGExScaleToFit",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit()
{
	if (!Z_Registration_Info_UEnum_EPCGExScaleToFit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExScaleToFit.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExScaleToFit.InnerSingleton;
}
// ********** End Enum EPCGExScaleToFit ************************************************************

// ********** Begin Enum EPCGExJustifyFrom *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExJustifyFrom;
static UEnum* EPCGExJustifyFrom_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExJustifyFrom.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExJustifyFrom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExJustifyFrom"));
	}
	return Z_Registration_Info_UEnum_EPCGExJustifyFrom.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExJustifyFrom>()
{
	return EPCGExJustifyFrom_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.ActionIcon", "From_Center" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EPCGExJustifyFrom::Center" },
		{ "Center.ToolTip", "Center" },
		{ "Custom.ActionIcon", "From_Custom" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExJustifyFrom::Custom" },
		{ "Custom.ToolTip", "Custom" },
		{ "Max.ActionIcon", "From_Max" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExJustifyFrom::Max" },
		{ "Max.ToolTip", "Max" },
		{ "Min.ActionIcon", "From_Min" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExJustifyFrom::Min" },
		{ "Min.ToolTip", "Min" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "Pivot.ActionIcon", "From_Pivot" },
		{ "Pivot.DisplayName", "Pivot" },
		{ "Pivot.Name", "EPCGExJustifyFrom::Pivot" },
		{ "Pivot.ToolTip", "Pivot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExJustifyFrom::Min", (int64)EPCGExJustifyFrom::Min },
		{ "EPCGExJustifyFrom::Center", (int64)EPCGExJustifyFrom::Center },
		{ "EPCGExJustifyFrom::Max", (int64)EPCGExJustifyFrom::Max },
		{ "EPCGExJustifyFrom::Pivot", (int64)EPCGExJustifyFrom::Pivot },
		{ "EPCGExJustifyFrom::Custom", (int64)EPCGExJustifyFrom::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExJustifyFrom",
	"EPCGExJustifyFrom",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom()
{
	if (!Z_Registration_Info_UEnum_EPCGExJustifyFrom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExJustifyFrom.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExJustifyFrom.InnerSingleton;
}
// ********** End Enum EPCGExJustifyFrom ***********************************************************

// ********** Begin Enum EPCGExJustifyTo ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExJustifyTo;
static UEnum* EPCGExJustifyTo_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExJustifyTo.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExJustifyTo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExJustifyTo"));
	}
	return Z_Registration_Info_UEnum_EPCGExJustifyTo.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExJustifyTo>()
{
	return EPCGExJustifyTo_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.ActionIcon", "To_Center" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EPCGExJustifyTo::Center" },
		{ "Center.ToolTip", "Center" },
		{ "Custom.ActionIcon", "To_Custom" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExJustifyTo::Custom" },
		{ "Custom.ToolTip", "Custom" },
		{ "Max.ActionIcon", "To_Max" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExJustifyTo::Max" },
		{ "Max.ToolTip", "Max" },
		{ "Min.ActionIcon", "To_Min" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExJustifyTo::Min" },
		{ "Min.ToolTip", "Min" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "Pivot.ActionIcon", "To_Pivot" },
		{ "Pivot.DisplayName", "Pivot" },
		{ "Pivot.Name", "EPCGExJustifyTo::Pivot" },
		{ "Pivot.ToolTip", "Pivot" },
		{ "Same.ActionIcon", "To_Same" },
		{ "Same.DisplayName", "Same" },
		{ "Same.Name", "EPCGExJustifyTo::Same" },
		{ "Same.ToolTip", "Same as 'From'" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExJustifyTo::Min", (int64)EPCGExJustifyTo::Min },
		{ "EPCGExJustifyTo::Center", (int64)EPCGExJustifyTo::Center },
		{ "EPCGExJustifyTo::Max", (int64)EPCGExJustifyTo::Max },
		{ "EPCGExJustifyTo::Pivot", (int64)EPCGExJustifyTo::Pivot },
		{ "EPCGExJustifyTo::Custom", (int64)EPCGExJustifyTo::Custom },
		{ "EPCGExJustifyTo::Same", (int64)EPCGExJustifyTo::Same },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExJustifyTo",
	"EPCGExJustifyTo",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo()
{
	if (!Z_Registration_Info_UEnum_EPCGExJustifyTo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExJustifyTo.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExJustifyTo.InnerSingleton;
}
// ********** End Enum EPCGExJustifyTo *************************************************************

// ********** Begin Enum EPCGExVariationMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExVariationMode;
static UEnum* EPCGExVariationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExVariationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExVariationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExVariationMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExVariationMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVariationMode>()
{
	return EPCGExVariationMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "After.DisplayName", "After fitting" },
		{ "After.Name", "EPCGExVariationMode::After" },
		{ "After.ToolTip", "Variation are applied to the fitted bounds" },
		{ "Before.DisplayName", "Before fitting" },
		{ "Before.Name", "EPCGExVariationMode::Before" },
		{ "Before.ToolTip", "Variation are applied to the point that will be fitted" },
		{ "BlueprintType", "true" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EPCGExVariationMode::Disabled" },
		{ "Disabled.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExVariationMode::Disabled", (int64)EPCGExVariationMode::Disabled },
		{ "EPCGExVariationMode::Before", (int64)EPCGExVariationMode::Before },
		{ "EPCGExVariationMode::After", (int64)EPCGExVariationMode::After },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExVariationMode",
	"EPCGExVariationMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExVariationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExVariationMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExVariationMode.InnerSingleton;
}
// ********** End Enum EPCGExVariationMode *********************************************************

// ********** Begin ScriptStruct FPCGExScaleToFitDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExScaleToFitDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExScaleToFitDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFitMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFit_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ScaleToFitMode == EPCGExFitMode::Uniform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFitX_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ScaleToFitMode == EPCGExFitMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFitY_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ScaleToFitMode == EPCGExFitMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFitZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ScaleToFitMode == EPCGExFitMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExScaleToFitDetails constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleToFitMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleToFitMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleToFit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleToFit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleToFitX_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleToFitX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleToFitY_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleToFitY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleToFitZ_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleToFitZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExScaleToFitDetails constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExScaleToFitDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails;
class UScriptStruct* FPCGExScaleToFitDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExScaleToFitDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExScaleToFitDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExScaleToFitDetails Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitMode = { "ScaleToFitMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExScaleToFitDetails, ScaleToFitMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFitMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFitMode_MetaData), NewProp_ScaleToFitMode_MetaData) }; // 1893078325
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFit = { "ScaleToFit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExScaleToFitDetails, ScaleToFit), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFit_MetaData), NewProp_ScaleToFit_MetaData) }; // 3775016843
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitX = { "ScaleToFitX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExScaleToFitDetails, ScaleToFitX), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFitX_MetaData), NewProp_ScaleToFitX_MetaData) }; // 3775016843
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitY = { "ScaleToFitY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExScaleToFitDetails, ScaleToFitY), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFitY_MetaData), NewProp_ScaleToFitY_MetaData) }; // 3775016843
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitZ = { "ScaleToFitZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExScaleToFitDetails, ScaleToFitZ), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExScaleToFit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFitZ_MetaData), NewProp_ScaleToFitZ_MetaData) }; // 3775016843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitX_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitY_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitZ_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewProp_ScaleToFitZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExScaleToFitDetails Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExScaleToFitDetails",
	Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::PropPointers),
	sizeof(FPCGExScaleToFitDetails),
	alignof(FPCGExScaleToFitDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExScaleToFitDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExScaleToFitDetails *********************************************

// ********** Begin ScriptStruct FPCGExSingleJustifyDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSingleJustifyDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSingleJustifyDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reference point inside the bounds getting justified */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reference point inside the bounds getting justified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Input" },
		{ "EditCondition", "From == EPCGExJustifyFrom::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 From (Attr)" },
		{ "EditCondition", "From == EPCGExJustifyFrom::Custom && FromInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 From" },
		{ "EditCondition", "From == EPCGExJustifyFrom::Custom && FromInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reference point inside the container bounds*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reference point inside the container bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Input" },
		{ "EditCondition", "To == EPCGExJustifyTo::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 To (Attr)" },
		{ "EditCondition", "To == EPCGExJustifyTo::Custom && ToInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 To" },
		{ "EditCondition", "To == EPCGExJustifyTo::Custom && ToInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value is expected to be 0-1 normalized, 0 being bounds min and 1 being bounds min + size." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSingleJustifyDetails constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_From_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_From;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FromInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FromInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FromConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_To_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_To;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ToConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSingleJustifyDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSingleJustifyDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails;
class UScriptStruct* FPCGExSingleJustifyDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSingleJustifyDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSingleJustifyDetails Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_From_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, From), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyFrom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_From_MetaData), NewProp_From_MetaData) }; // 630717443
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromInput = { "FromInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, FromInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromInput_MetaData), NewProp_FromInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromSourceAttribute = { "FromSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, FromSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromSourceAttribute_MetaData), NewProp_FromSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromConstant = { "FromConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, FromConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromConstant_MetaData), NewProp_FromConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_To_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, To), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExJustifyTo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_To_MetaData), NewProp_To_MetaData) }; // 1169419270
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToInput = { "ToInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, ToInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToInput_MetaData), NewProp_ToInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToSourceAttribute = { "ToSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, ToSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToSourceAttribute_MetaData), NewProp_ToSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToConstant = { "ToConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSingleJustifyDetails, ToConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToConstant_MetaData), NewProp_ToConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_From_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_FromConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_To_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewProp_ToConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSingleJustifyDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSingleJustifyDetails",
	Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::PropPointers),
	sizeof(FPCGExSingleJustifyDetails),
	alignof(FPCGExSingleJustifyDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSingleJustifyDetails ******************************************

// ********** Begin ScriptStruct FPCGExJustificationDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExJustificationDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExJustificationDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoJustifyX_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustifyX_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDoJustifyX" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoJustifyY_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustifyY_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDoJustifyY" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoJustifyZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustifyZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDoJustifyZ" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedCustomFromAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFromVectorAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Whether to use matching component of this Vector attribute for custom 'From' justifications instead of setting local attribute. */" },
		{ "EditCondition", "bSharedCustomFromAttribute" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to use matching component of this Vector attribute for custom 'From' justifications instead of setting local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedCustomToAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomToVectorAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Whether to use matching component of this Vector attribute for custom 'To' justifications instead of setting local attribute */" },
		{ "EditCondition", "bSharedCustomToAttribute" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to use matching component of this Vector attribute for custom 'To' justifications instead of setting local attribute" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExJustificationDetails constinit property declarations ********
	static void NewProp_bDoJustifyX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoJustifyX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JustifyX;
	static void NewProp_bDoJustifyY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoJustifyY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JustifyY;
	static void NewProp_bDoJustifyZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoJustifyZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JustifyZ;
	static void NewProp_bSharedCustomFromAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedCustomFromAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFromVectorAttribute;
	static void NewProp_bSharedCustomToAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedCustomToAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomToVectorAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExJustificationDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExJustificationDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails;
class UScriptStruct* FPCGExJustificationDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExJustificationDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExJustificationDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExJustificationDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyX_SetBit(void* Obj)
{
	((FPCGExJustificationDetails*)Obj)->bDoJustifyX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyX = { "bDoJustifyX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExJustificationDetails), &Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoJustifyX_MetaData), NewProp_bDoJustifyX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyX = { "JustifyX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExJustificationDetails, JustifyX), Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustifyX_MetaData), NewProp_JustifyX_MetaData) }; // 2584082183
void Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyY_SetBit(void* Obj)
{
	((FPCGExJustificationDetails*)Obj)->bDoJustifyY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyY = { "bDoJustifyY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExJustificationDetails), &Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoJustifyY_MetaData), NewProp_bDoJustifyY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyY = { "JustifyY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExJustificationDetails, JustifyY), Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustifyY_MetaData), NewProp_JustifyY_MetaData) }; // 2584082183
void Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyZ_SetBit(void* Obj)
{
	((FPCGExJustificationDetails*)Obj)->bDoJustifyZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyZ = { "bDoJustifyZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExJustificationDetails), &Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoJustifyZ_MetaData), NewProp_bDoJustifyZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyZ = { "JustifyZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExJustificationDetails, JustifyZ), Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustifyZ_MetaData), NewProp_JustifyZ_MetaData) }; // 2584082183
void Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomFromAttribute_SetBit(void* Obj)
{
	((FPCGExJustificationDetails*)Obj)->bSharedCustomFromAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomFromAttribute = { "bSharedCustomFromAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExJustificationDetails), &Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomFromAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedCustomFromAttribute_MetaData), NewProp_bSharedCustomFromAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_CustomFromVectorAttribute = { "CustomFromVectorAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExJustificationDetails, CustomFromVectorAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFromVectorAttribute_MetaData), NewProp_CustomFromVectorAttribute_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomToAttribute_SetBit(void* Obj)
{
	((FPCGExJustificationDetails*)Obj)->bSharedCustomToAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomToAttribute = { "bSharedCustomToAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExJustificationDetails), &Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomToAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedCustomToAttribute_MetaData), NewProp_bSharedCustomToAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_CustomToVectorAttribute = { "CustomToVectorAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExJustificationDetails, CustomToVectorAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomToVectorAttribute_MetaData), NewProp_CustomToVectorAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bDoJustifyZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_JustifyZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomFromAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_CustomFromVectorAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_bSharedCustomToAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewProp_CustomToVectorAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExJustificationDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExJustificationDetails",
	Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::PropPointers),
	sizeof(FPCGExJustificationDetails),
	alignof(FPCGExJustificationDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExJustificationDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExJustificationDetails ******************************************

// ********** Begin ScriptStruct FPCGExFittingVariations *******************************************
struct Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFittingVariations); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFittingVariations); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index picking mode*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index picking mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set offset in world space */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set offset in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteRotation_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExAbsoluteRotationFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Set rotation directly instead of additively on the selected axis */" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Set rotation directly instead of additively on the selected axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale uniformly on each axis. Uses the X component of ScaleMin and ScaleMax. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale uniformly on each axis. Uses the X component of ScaleMin and ScaleMax." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFittingVariations constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetMax;
	static void NewProp_bAbsoluteOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbsoluteRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMax;
	static void NewProp_bUniformScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFittingVariations constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFittingVariations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFittingVariations;
class UScriptStruct* FPCGExFittingVariations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFittingVariations, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFittingVariations"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFittingVariations Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_OffsetMin = { "OffsetMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, OffsetMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetMin_MetaData), NewProp_OffsetMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_OffsetMax = { "OffsetMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, OffsetMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetMax_MetaData), NewProp_OffsetMax_MetaData) };
void Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bAbsoluteOffset_SetBit(void* Obj)
{
	((FPCGExFittingVariations*)Obj)->bAbsoluteOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bAbsoluteOffset = { "bAbsoluteOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFittingVariations), &Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bAbsoluteOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteOffset_MetaData), NewProp_bAbsoluteOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_RotationMin = { "RotationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, RotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMin_MetaData), NewProp_RotationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_RotationMax = { "RotationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, RotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMax_MetaData), NewProp_RotationMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_AbsoluteRotation = { "AbsoluteRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, AbsoluteRotation), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteRotation_MetaData), NewProp_AbsoluteRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, ScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMin_MetaData), NewProp_ScaleMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariations, ScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMax_MetaData), NewProp_ScaleMax_MetaData) };
void Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bUniformScale_SetBit(void* Obj)
{
	((FPCGExFittingVariations*)Obj)->bUniformScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFittingVariations), &Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniformScale_MetaData), NewProp_bUniformScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_OffsetMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_OffsetMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bAbsoluteOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_RotationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_RotationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_AbsoluteRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_ScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_ScaleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewProp_bUniformScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFittingVariations Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFittingVariations",
	Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::PropPointers),
	sizeof(FPCGExFittingVariations),
	alignof(FPCGExFittingVariations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariations()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFittingVariations.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFittingVariations *********************************************

// ********** Begin ScriptStruct FPCGExFittingVariationsDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFittingVariationsDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFittingVariationsDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFittingVariationsDetails constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Offset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scale_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFittingVariationsDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFittingVariationsDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails;
class UScriptStruct* FPCGExFittingVariationsDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFittingVariationsDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFittingVariationsDetails Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Offset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariationsDetails, Offset), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) }; // 2604358009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariationsDetails, Rotation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 2604358009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingVariationsDetails, Scale), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVariationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) }; // 2604358009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Offset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Scale_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFittingVariationsDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFittingVariationsDetails",
	Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::PropPointers),
	sizeof(FPCGExFittingVariationsDetails),
	alignof(FPCGExFittingVariationsDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFittingVariationsDetails **************************************

// ********** Begin ScriptStruct FPCGExFittingDetailsHandler ***************************************
struct Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFittingDetailsHandler); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFittingDetailsHandler); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFittingDetailsHandler constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleToFit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Justification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFittingDetailsHandler constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFittingDetailsHandler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler;
class UScriptStruct* FPCGExFittingDetailsHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFittingDetailsHandler"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFittingDetailsHandler Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::NewProp_ScaleToFit = { "ScaleToFit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingDetailsHandler, ScaleToFit), Z_Construct_UScriptStruct_FPCGExScaleToFitDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFit_MetaData), NewProp_ScaleToFit_MetaData) }; // 344909932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFittingDetailsHandler, Justification), Z_Construct_UScriptStruct_FPCGExJustificationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 161038766
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::NewProp_ScaleToFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::NewProp_Justification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFittingDetailsHandler Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFittingDetailsHandler",
	Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::PropPointers),
	sizeof(FPCGExFittingDetailsHandler),
	alignof(FPCGExFittingDetailsHandler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFittingDetailsHandler *****************************************

// ********** Begin ScriptStruct FPCGExTransformDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTransformDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTransformDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, copied point will be scaled by the target' scale. */" },
		{ "DisplayAfter", "Justification" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, copied point will be scaled by the target' scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, copied points will be rotated by the target' rotation. */" },
		{ "DisplayAfter", "bInheritScale" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, copied points will be rotated by the target' rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, ignore bounds in calculations and only use position. */" },
		{ "DisplayAfter", "bInheritRotation" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, ignore bounds in calculations and only use position." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTransformDetails constinit property declarations ************
	static void NewProp_bInheritScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritScale;
	static void NewProp_bInheritRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation;
	static void NewProp_bIgnoreBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTransformDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTransformDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics
static_assert(std::is_polymorphic<FPCGExTransformDetails>() == std::is_polymorphic<FPCGExFittingDetailsHandler>(), "USTRUCT FPCGExTransformDetails cannot be polymorphic unless super FPCGExFittingDetailsHandler is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTransformDetails;
class UScriptStruct* FPCGExTransformDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTransformDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTransformDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTransformDetails Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritScale_SetBit(void* Obj)
{
	((FPCGExTransformDetails*)Obj)->bInheritScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritScale = { "bInheritScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTransformDetails), &Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritScale_MetaData), NewProp_bInheritScale_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritRotation_SetBit(void* Obj)
{
	((FPCGExTransformDetails*)Obj)->bInheritRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritRotation = { "bInheritRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTransformDetails), &Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRotation_MetaData), NewProp_bInheritRotation_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bIgnoreBounds_SetBit(void* Obj)
{
	((FPCGExTransformDetails*)Obj)->bIgnoreBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bIgnoreBounds = { "bIgnoreBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTransformDetails), &Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bIgnoreBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreBounds_MetaData), NewProp_bIgnoreBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bInheritRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewProp_bIgnoreBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTransformDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler,
	&NewStructOps,
	"PCGExTransformDetails",
	Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::PropPointers),
	sizeof(FPCGExTransformDetails),
	alignof(FPCGExTransformDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTransformDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTransformDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTransformDetails **********************************************

// ********** Begin ScriptStruct FPCGExLeanTransformDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExLeanTransformDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExLeanTransformDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, point will be scaled by the parent' scale. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, point will be scaled by the parent' scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points will be rotated by the parent' rotation. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFitting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, points will be rotated by the parent' rotation." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExLeanTransformDetails constinit property declarations ********
	static void NewProp_bInheritScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritScale;
	static void NewProp_bInheritRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExLeanTransformDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExLeanTransformDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails;
class UScriptStruct* FPCGExLeanTransformDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExLeanTransformDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExLeanTransformDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExLeanTransformDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritScale_SetBit(void* Obj)
{
	((FPCGExLeanTransformDetails*)Obj)->bInheritScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritScale = { "bInheritScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExLeanTransformDetails), &Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritScale_MetaData), NewProp_bInheritScale_MetaData) };
void Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritRotation_SetBit(void* Obj)
{
	((FPCGExLeanTransformDetails*)Obj)->bInheritRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritRotation = { "bInheritRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExLeanTransformDetails), &Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRotation_MetaData), NewProp_bInheritRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewProp_bInheritRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExLeanTransformDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExLeanTransformDetails",
	Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::PropPointers),
	sizeof(FPCGExLeanTransformDetails),
	alignof(FPCGExLeanTransformDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExLeanTransformDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExLeanTransformDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExFitMode_StaticEnum, TEXT("EPCGExFitMode"), &Z_Registration_Info_UEnum_EPCGExFitMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1893078325U) },
		{ EPCGExScaleToFit_StaticEnum, TEXT("EPCGExScaleToFit"), &Z_Registration_Info_UEnum_EPCGExScaleToFit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3775016843U) },
		{ EPCGExJustifyFrom_StaticEnum, TEXT("EPCGExJustifyFrom"), &Z_Registration_Info_UEnum_EPCGExJustifyFrom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 630717443U) },
		{ EPCGExJustifyTo_StaticEnum, TEXT("EPCGExJustifyTo"), &Z_Registration_Info_UEnum_EPCGExJustifyTo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1169419270U) },
		{ EPCGExVariationMode_StaticEnum, TEXT("EPCGExVariationMode"), &Z_Registration_Info_UEnum_EPCGExVariationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2604358009U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExScaleToFitDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExScaleToFitDetails_Statics::NewStructOps, TEXT("PCGExScaleToFitDetails"),&Z_Registration_Info_UScriptStruct_FPCGExScaleToFitDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExScaleToFitDetails), 344909932U) },
		{ FPCGExSingleJustifyDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSingleJustifyDetails_Statics::NewStructOps, TEXT("PCGExSingleJustifyDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSingleJustifyDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSingleJustifyDetails), 2584082183U) },
		{ FPCGExJustificationDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExJustificationDetails_Statics::NewStructOps, TEXT("PCGExJustificationDetails"),&Z_Registration_Info_UScriptStruct_FPCGExJustificationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExJustificationDetails), 161038766U) },
		{ FPCGExFittingVariations::StaticStruct, Z_Construct_UScriptStruct_FPCGExFittingVariations_Statics::NewStructOps, TEXT("PCGExFittingVariations"),&Z_Registration_Info_UScriptStruct_FPCGExFittingVariations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFittingVariations), 3894520958U) },
		{ FPCGExFittingVariationsDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExFittingVariationsDetails_Statics::NewStructOps, TEXT("PCGExFittingVariationsDetails"),&Z_Registration_Info_UScriptStruct_FPCGExFittingVariationsDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFittingVariationsDetails), 849686493U) },
		{ FPCGExFittingDetailsHandler::StaticStruct, Z_Construct_UScriptStruct_FPCGExFittingDetailsHandler_Statics::NewStructOps, TEXT("PCGExFittingDetailsHandler"),&Z_Registration_Info_UScriptStruct_FPCGExFittingDetailsHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFittingDetailsHandler), 3592968232U) },
		{ FPCGExTransformDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTransformDetails_Statics::NewStructOps, TEXT("PCGExTransformDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTransformDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTransformDetails), 4231827955U) },
		{ FPCGExLeanTransformDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExLeanTransformDetails_Statics::NewStructOps, TEXT("PCGExLeanTransformDetails"),&Z_Registration_Info_UScriptStruct_FPCGExLeanTransformDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExLeanTransformDetails), 3523214679U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_3598537976{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFitting_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
