// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExMathMean.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMathMean() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMeanMeasure *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMeanMeasure;
static UEnum* EPCGExMeanMeasure_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeanMeasure.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMeanMeasure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMeanMeasure"));
	}
	return Z_Registration_Info_UEnum_EPCGExMeanMeasure.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeanMeasure>()
{
	return EPCGExMeanMeasure_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Discrete.DisplayName", "Discrete" },
		{ "Discrete.Name", "EPCGExMeanMeasure::Discrete" },
		{ "Discrete.ToolTip", "Raw value will be used, or used as absolute. (what it means exactly depends on context. See node-specific documentation.)" },
		{ "ModuleRelativePath", "Public/PCGExMathMean.h" },
		{ "Relative.DisplayName", "Relative" },
		{ "Relative.Name", "EPCGExMeanMeasure::Relative" },
		{ "Relative.ToolTip", "Input value will be normalized between 0..1, or used as a factor. (what it means exactly depends on context. See node-specific documentation.)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMeanMeasure::Relative", (int64)EPCGExMeanMeasure::Relative },
		{ "EPCGExMeanMeasure::Discrete", (int64)EPCGExMeanMeasure::Discrete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMeanMeasure",
	"EPCGExMeanMeasure",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeanMeasure.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMeanMeasure.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMeanMeasure.InnerSingleton;
}
// ********** End Enum EPCGExMeanMeasure ***********************************************************

// ********** Begin Enum EPCGExMeanMethod **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMeanMethod;
static UEnum* EPCGExMeanMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeanMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMeanMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMeanMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExMeanMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeanMethod>()
{
	return EPCGExMeanMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExMeanMethod::Average" },
		{ "Average.ToolTip", "Average" },
		{ "BlueprintType", "true" },
		{ "Central.DisplayName", "Central" },
		{ "Central.Name", "EPCGExMeanMethod::Central" },
		{ "Central.ToolTip", "Central uses the middle value between Min/Max input values." },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EPCGExMeanMethod::Fixed" },
		{ "Fixed.ToolTip", "Fixed threshold" },
		{ "Median.DisplayName", "Median" },
		{ "Median.Name", "EPCGExMeanMethod::Median" },
		{ "Median.ToolTip", "Median" },
		{ "ModeMax.DisplayName", "Mode (Lowest)" },
		{ "ModeMax.Name", "EPCGExMeanMethod::ModeMax" },
		{ "ModeMax.ToolTip", "Mode length (~= lowest most common value)" },
		{ "ModeMin.DisplayName", "Mode (Highest)" },
		{ "ModeMin.Name", "EPCGExMeanMethod::ModeMin" },
		{ "ModeMin.ToolTip", "Mode length (~= highest most common value)" },
		{ "ModuleRelativePath", "Public/PCGExMathMean.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMeanMethod::Average", (int64)EPCGExMeanMethod::Average },
		{ "EPCGExMeanMethod::Median", (int64)EPCGExMeanMethod::Median },
		{ "EPCGExMeanMethod::ModeMin", (int64)EPCGExMeanMethod::ModeMin },
		{ "EPCGExMeanMethod::ModeMax", (int64)EPCGExMeanMethod::ModeMax },
		{ "EPCGExMeanMethod::Central", (int64)EPCGExMeanMethod::Central },
		{ "EPCGExMeanMethod::Fixed", (int64)EPCGExMeanMethod::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMeanMethod",
	"EPCGExMeanMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeanMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMeanMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMeanMethod.InnerSingleton;
}
// ********** End Enum EPCGExMeanMethod ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMeanMeasure_StaticEnum, TEXT("EPCGExMeanMeasure"), &Z_Registration_Info_UEnum_EPCGExMeanMeasure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356721050U) },
		{ EPCGExMeanMethod_StaticEnum, TEXT("EPCGExMeanMethod"), &Z_Registration_Info_UEnum_EPCGExMeanMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1685461053U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h__Script_PCGExtendedToolkit_688659391{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
