// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExDistanceFilter.h"
#include "Details/PCGExDetailsDistances.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDistanceFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDistanceFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDistanceFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDistanceFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDistanceFilterConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDistanceFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDistanceFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance method to be used for source & target points. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source & target points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Distance Threshold (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThresholdConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Distance Threshold" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, a collection will never be tested against itself */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, a collection will never be tested against itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAgainstDataBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDistanceFilterConfig constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceThresholdConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static void NewProp_bCheckAgainstDataBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAgainstDataBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExDistanceFilterConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDistanceFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig;
class UScriptStruct* FPCGExDistanceFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDistanceFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExDistanceFilterConfig Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceDetails = { "DistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, DistanceDetails), Z_Construct_UScriptStruct_FPCGExDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDetails_MetaData), NewProp_DistanceDetails_MetaData) }; // 649156467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceThreshold = { "DistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, DistanceThreshold), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceThreshold_MetaData), NewProp_DistanceThreshold_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceThresholdConstant = { "DistanceThresholdConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, DistanceThresholdConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceThresholdConstant_MetaData), NewProp_DistanceThresholdConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExDistanceFilterConfig*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDistanceFilterConfig), &Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit(void* Obj)
{
	((FPCGExDistanceFilterConfig*)Obj)->bCheckAgainstDataBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bCheckAgainstDataBounds = { "bCheckAgainstDataBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDistanceFilterConfig), &Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAgainstDataBounds_MetaData), NewProp_bCheckAgainstDataBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_DistanceThresholdConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewProp_bCheckAgainstDataBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExDistanceFilterConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExDistanceFilterConfig",
	Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::PropPointers),
	sizeof(FPCGExDistanceFilterConfig),
	alignof(FPCGExDistanceFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDistanceFilterConfig ******************************************

// ********** Begin Class UPCGExDistanceFilterFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDistanceFilterFactory;
UClass* UPCGExDistanceFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExDistanceFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDistanceFilterFactory"),
			Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExDistanceFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDistanceFilterFactory_NoRegister()
{
	return UPCGExDistanceFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExDistanceFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDistanceFilterFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDistanceFilterFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDistanceFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics

// ********** Begin Class UPCGExDistanceFilterFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDistanceFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1562108110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDistanceFilterFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::ClassParams = {
	&UPCGExDistanceFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExDistanceFilterFactory::StaticRegisterNativesUPCGExDistanceFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExDistanceFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExDistanceFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDistanceFilterFactory.OuterSingleton;
}
UPCGExDistanceFilterFactory::UPCGExDistanceFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDistanceFilterFactory);
UPCGExDistanceFilterFactory::~UPCGExDistanceFilterFactory() {}
// ********** End Class UPCGExDistanceFilterFactory ************************************************

// ********** Begin Class UPCGExDistanceFilterProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings;
UClass* UPCGExDistanceFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDistanceFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDistanceFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDistanceFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_NoRegister()
{
	return UPCGExDistanceFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExDistanceFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDistanceFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDistanceFilterProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDistanceFilterProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDistanceFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics

// ********** Begin Class UPCGExDistanceFilterProviderSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDistanceFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1562108110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDistanceFilterProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::ClassParams = {
	&UPCGExDistanceFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExDistanceFilterProviderSettings::StaticRegisterNativesUPCGExDistanceFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDistanceFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExDistanceFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings.OuterSingleton;
}
UPCGExDistanceFilterProviderSettings::UPCGExDistanceFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDistanceFilterProviderSettings);
UPCGExDistanceFilterProviderSettings::~UPCGExDistanceFilterProviderSettings() {}
// ********** End Class UPCGExDistanceFilterProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDistanceFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExDistanceFilterConfig_Statics::NewStructOps, TEXT("PCGExDistanceFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExDistanceFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDistanceFilterConfig), 1562108110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDistanceFilterFactory, UPCGExDistanceFilterFactory::StaticClass, TEXT("UPCGExDistanceFilterFactory"), &Z_Registration_Info_UClass_UPCGExDistanceFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDistanceFilterFactory), 2435591061U) },
		{ Z_Construct_UClass_UPCGExDistanceFilterProviderSettings, UPCGExDistanceFilterProviderSettings::StaticClass, TEXT("UPCGExDistanceFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExDistanceFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDistanceFilterProviderSettings), 3831933324U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_1805645481{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDistanceFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
