// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExNumericSelfCompareFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNumericSelfCompareFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNumericSelfCompareFilterConfig ******************************
struct Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNumericSelfCompareFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNumericSelfCompareFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index mode */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index value to use according to the selected Index Mode -- Will be translated to `int32` under the hood. */" },
		{ "DisplayName", "Index (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index value to use according to the selected Index Mode -- Will be translated to `int32` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Const Index value to use according to the selected Index Mode */" },
		{ "DisplayName", "Index" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Const Index value to use according to the selected Index Mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index safety */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index safety" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidIndexFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to deal with invalid indices */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with invalid indices" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNumericSelfCompareFilterConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InvalidIndexFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InvalidIndexFallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNumericSelfCompareFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNumericSelfCompareFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig;
class UScriptStruct* FPCGExNumericSelfCompareFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNumericSelfCompareFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNumericSelfCompareFilterConfig Property Definitions *********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexMode = { "IndexMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, IndexMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexMode_MetaData), NewProp_IndexMode_MetaData) }; // 2236136904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexAttribute = { "IndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, IndexAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexAttribute_MetaData), NewProp_IndexAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexConstant = { "IndexConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, IndexConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexConstant_MetaData), NewProp_IndexConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback = { "InvalidIndexFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericSelfCompareFilterConfig, InvalidIndexFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidIndexFallback_MetaData), NewProp_InvalidIndexFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNumericSelfCompareFilterConfig Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNumericSelfCompareFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNumericSelfCompareFilterConfig),
	alignof(FPCGExNumericSelfCompareFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNumericSelfCompareFilterConfig ********************************

// ********** Begin Class UPCGExNumericSelfCompareFilterFactory ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory;
UClass* UPCGExNumericSelfCompareFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericSelfCompareFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericSelfCompareFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNumericSelfCompareFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_NoRegister()
{
	return UPCGExNumericSelfCompareFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericSelfCompareFilterFactory constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericSelfCompareFilterFactory constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericSelfCompareFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics

// ********** Begin Class UPCGExNumericSelfCompareFilterFactory Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericSelfCompareFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3085319304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericSelfCompareFilterFactory Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::ClassParams = {
	&UPCGExNumericSelfCompareFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNumericSelfCompareFilterFactory::StaticRegisterNativesUPCGExNumericSelfCompareFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory.OuterSingleton;
}
UPCGExNumericSelfCompareFilterFactory::UPCGExNumericSelfCompareFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericSelfCompareFilterFactory);
UPCGExNumericSelfCompareFilterFactory::~UPCGExNumericSelfCompareFilterFactory() {}
// ********** End Class UPCGExNumericSelfCompareFilterFactory **************************************

// ********** Begin Class UPCGExNumericSelfCompareFilterProviderSettings ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings;
UClass* UPCGExNumericSelfCompareFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericSelfCompareFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericSelfCompareFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNumericSelfCompareFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_NoRegister()
{
	return UPCGExNumericSelfCompareFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/self-comparisons/numeric" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericSelfCompareFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericSelfCompareFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericSelfCompareFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics

// ********** Begin Class UPCGExNumericSelfCompareFilterProviderSettings Property Definitions ******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericSelfCompareFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3085319304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericSelfCompareFilterProviderSettings Property Definitions ********
UObject* (*const Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNumericSelfCompareFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNumericSelfCompareFilterProviderSettings::StaticRegisterNativesUPCGExNumericSelfCompareFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings.OuterSingleton;
}
UPCGExNumericSelfCompareFilterProviderSettings::UPCGExNumericSelfCompareFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericSelfCompareFilterProviderSettings);
UPCGExNumericSelfCompareFilterProviderSettings::~UPCGExNumericSelfCompareFilterProviderSettings() {}
// ********** End Class UPCGExNumericSelfCompareFilterProviderSettings *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNumericSelfCompareFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNumericSelfCompareFilterConfig_Statics::NewStructOps, TEXT("PCGExNumericSelfCompareFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNumericSelfCompareFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNumericSelfCompareFilterConfig), 3085319304U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNumericSelfCompareFilterFactory, UPCGExNumericSelfCompareFilterFactory::StaticClass, TEXT("UPCGExNumericSelfCompareFilterFactory"), &Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericSelfCompareFilterFactory), 724420484U) },
		{ Z_Construct_UClass_UPCGExNumericSelfCompareFilterProviderSettings, UPCGExNumericSelfCompareFilterProviderSettings::StaticClass, TEXT("UPCGExNumericSelfCompareFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNumericSelfCompareFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericSelfCompareFilterProviderSettings), 491737076U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_3940096636{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
