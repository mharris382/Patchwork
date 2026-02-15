// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExMeanFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMeanFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeanFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeanFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeanFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeanFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeanFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMeanFilterConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMeanFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMeanFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target value to compile -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Target value to compile -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Measure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Measure mode. If using relative, threshold values should be kept between 0-1, while absolute use the world-space length of the edge. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Measure mode. If using relative, threshold values should be kept between 0-1, while absolute use the world-space length of the edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeanMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which mean value is used to check whether the tested value is above or below. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which mean value is used to check whether the tested value is above or below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeanValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum value threshold */" },
		{ "EditCondition", "MeanMethod == EPCGExMeanMethod::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum value threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Used to estimate the mode value. */" },
		{ "EditCondition", "MeanMethod == EPCGExMeanMethod::ModeMin || MeanMethod == EPCGExMeanMethod::ModeMax" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Used to estimate the mode value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoExcludeBelowMean_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Exclude if value is below a specific threshold. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Exclude if value is below a specific threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBelow_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Minimum value threshold. */" },
		{ "EditCondition", "bDoExcludeBelowMean" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum value threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoExcludeAboveMean_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Exclude if value is above a specific threshold. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Exclude if value is above a specific threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeAbove_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Maximum threshold. */" },
		{ "EditCondition", "bDoExcludeAboveMean" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invert the result of the test */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invert the result of the test" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMeanFilterConfig constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Measure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Measure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeanMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeanMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MeanValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ModeTolerance;
	static void NewProp_bDoExcludeBelowMean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoExcludeBelowMean;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExcludeBelow;
	static void NewProp_bDoExcludeAboveMean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoExcludeAboveMean;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExcludeAbove;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMeanFilterConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMeanFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig;
class UScriptStruct* FPCGExMeanFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMeanFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMeanFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMeanFilterConfig Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, Target), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Measure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Measure = { "Measure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, Measure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Measure_MetaData), NewProp_Measure_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanMethod = { "MeanMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, MeanMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeanMethod_MetaData), NewProp_MeanMethod_MetaData) }; // 1685461053
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanValue = { "MeanValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, MeanValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeanValue_MetaData), NewProp_MeanValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ModeTolerance = { "ModeTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, ModeTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeTolerance_MetaData), NewProp_ModeTolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeBelowMean_SetBit(void* Obj)
{
	((FPCGExMeanFilterConfig*)Obj)->bDoExcludeBelowMean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeBelowMean = { "bDoExcludeBelowMean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMeanFilterConfig), &Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeBelowMean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoExcludeBelowMean_MetaData), NewProp_bDoExcludeBelowMean_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ExcludeBelow = { "ExcludeBelow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, ExcludeBelow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeBelow_MetaData), NewProp_ExcludeBelow_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeAboveMean_SetBit(void* Obj)
{
	((FPCGExMeanFilterConfig*)Obj)->bDoExcludeAboveMean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeAboveMean = { "bDoExcludeAboveMean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMeanFilterConfig), &Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeAboveMean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoExcludeAboveMean_MetaData), NewProp_bDoExcludeAboveMean_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ExcludeAbove = { "ExcludeAbove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMeanFilterConfig, ExcludeAbove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeAbove_MetaData), NewProp_ExcludeAbove_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExMeanFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMeanFilterConfig), &Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Measure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_Measure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_MeanValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ModeTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeBelowMean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ExcludeBelow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bDoExcludeAboveMean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_ExcludeAbove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMeanFilterConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMeanFilterConfig",
	Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::PropPointers),
	sizeof(FPCGExMeanFilterConfig),
	alignof(FPCGExMeanFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMeanFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMeanFilterConfig **********************************************

// ********** Begin Class UPCGExMeanFilterFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMeanFilterFactory;
UClass* UPCGExMeanFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMeanFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExMeanFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMeanFilterFactory"),
			Z_Registration_Info_UClass_UPCGExMeanFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMeanFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExMeanFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMeanFilterFactory_NoRegister()
{
	return UPCGExMeanFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMeanFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExMeanFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMeanFilterFactory constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMeanFilterFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMeanFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMeanFilterFactory_Statics

// ********** Begin Class UPCGExMeanFilterFactory Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeanFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExMeanFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2688581810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMeanFilterFactory Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::ClassParams = {
	&UPCGExMeanFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExMeanFilterFactory::StaticRegisterNativesUPCGExMeanFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMeanFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMeanFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMeanFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExMeanFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMeanFilterFactory.OuterSingleton;
}
UPCGExMeanFilterFactory::UPCGExMeanFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMeanFilterFactory);
UPCGExMeanFilterFactory::~UPCGExMeanFilterFactory() {}
// ********** End Class UPCGExMeanFilterFactory ****************************************************

// ********** Begin Class UPCGExMeanFilterProviderSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings;
UClass* UPCGExMeanFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMeanFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMeanFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMeanFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMeanFilterProviderSettings_NoRegister()
{
	return UPCGExMeanFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExMeanFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/math-checks/mean-value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExMeanFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMeanFilterProviderSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMeanFilterProviderSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMeanFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics

// ********** Begin Class UPCGExMeanFilterProviderSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeanFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExMeanFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2688581810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMeanFilterProviderSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::ClassParams = {
	&UPCGExMeanFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExMeanFilterProviderSettings::StaticRegisterNativesUPCGExMeanFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMeanFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExMeanFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings.OuterSingleton;
}
UPCGExMeanFilterProviderSettings::UPCGExMeanFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMeanFilterProviderSettings);
UPCGExMeanFilterProviderSettings::~UPCGExMeanFilterProviderSettings() {}
// ********** End Class UPCGExMeanFilterProviderSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMeanFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMeanFilterConfig_Statics::NewStructOps, TEXT("PCGExMeanFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMeanFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMeanFilterConfig), 2688581810U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMeanFilterFactory, UPCGExMeanFilterFactory::StaticClass, TEXT("UPCGExMeanFilterFactory"), &Z_Registration_Info_UClass_UPCGExMeanFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMeanFilterFactory), 3219057926U) },
		{ Z_Construct_UClass_UPCGExMeanFilterProviderSettings, UPCGExMeanFilterProviderSettings::StaticClass, TEXT("UPCGExMeanFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExMeanFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMeanFilterProviderSettings), 3046071429U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_2277545708{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExMeanFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
