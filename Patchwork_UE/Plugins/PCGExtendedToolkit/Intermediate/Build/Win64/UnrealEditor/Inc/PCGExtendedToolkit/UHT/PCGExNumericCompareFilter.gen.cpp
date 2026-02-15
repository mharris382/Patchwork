// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExNumericCompareFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNumericCompareFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNumericCompareFilterConfig **********************************
struct Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNumericCompareFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNumericCompareFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNumericCompareFilterConfig constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OperandBConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNumericCompareFilterConfig constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNumericCompareFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig;
class UScriptStruct* FPCGExNumericCompareFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNumericCompareFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNumericCompareFilterConfig Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, OperandBConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNumericCompareFilterConfig Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNumericCompareFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNumericCompareFilterConfig),
	alignof(FPCGExNumericCompareFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNumericCompareFilterConfig ************************************

// ********** Begin Class UPCGExNumericCompareFilterFactory ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory;
UClass* UPCGExNumericCompareFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericCompareFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericCompareFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNumericCompareFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericCompareFilterFactory_NoRegister()
{
	return UPCGExNumericCompareFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericCompareFilterFactory constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericCompareFilterFactory constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericCompareFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics

// ********** Begin Class UPCGExNumericCompareFilterFactory Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericCompareFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2360461795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericCompareFilterFactory Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::ClassParams = {
	&UPCGExNumericCompareFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNumericCompareFilterFactory::StaticRegisterNativesUPCGExNumericCompareFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNumericCompareFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNumericCompareFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory.OuterSingleton;
}
UPCGExNumericCompareFilterFactory::UPCGExNumericCompareFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericCompareFilterFactory);
UPCGExNumericCompareFilterFactory::~UPCGExNumericCompareFilterFactory() {}
// ********** End Class UPCGExNumericCompareFilterFactory ******************************************

// ********** Begin Class UPCGExNumericCompareFilterProviderSettings *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings;
UClass* UPCGExNumericCompareFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericCompareFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericCompareFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNumericCompareFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_NoRegister()
{
	return UPCGExNumericCompareFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/simple-comparisons/numeric" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericCompareFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericCompareFilterProviderSettings constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericCompareFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics

// ********** Begin Class UPCGExNumericCompareFilterProviderSettings Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericCompareFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2360461795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericCompareFilterProviderSettings Property Definitions ************
UObject* (*const Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNumericCompareFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNumericCompareFilterProviderSettings::StaticRegisterNativesUPCGExNumericCompareFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings.OuterSingleton;
}
UPCGExNumericCompareFilterProviderSettings::UPCGExNumericCompareFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericCompareFilterProviderSettings);
UPCGExNumericCompareFilterProviderSettings::~UPCGExNumericCompareFilterProviderSettings() {}
// ********** End Class UPCGExNumericCompareFilterProviderSettings *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNumericCompareFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNumericCompareFilterConfig_Statics::NewStructOps, TEXT("PCGExNumericCompareFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNumericCompareFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNumericCompareFilterConfig), 2360461795U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNumericCompareFilterFactory, UPCGExNumericCompareFilterFactory::StaticClass, TEXT("UPCGExNumericCompareFilterFactory"), &Z_Registration_Info_UClass_UPCGExNumericCompareFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericCompareFilterFactory), 2585831468U) },
		{ Z_Construct_UClass_UPCGExNumericCompareFilterProviderSettings, UPCGExNumericCompareFilterProviderSettings::StaticClass, TEXT("UPCGExNumericCompareFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNumericCompareFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericCompareFilterProviderSettings), 2220904167U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_2390600288{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
