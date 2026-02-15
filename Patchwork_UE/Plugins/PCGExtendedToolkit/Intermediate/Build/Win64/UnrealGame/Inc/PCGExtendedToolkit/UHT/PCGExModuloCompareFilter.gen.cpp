// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExModuloCompareFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExModuloCompareFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModuloCompareFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModuloCompareFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExModuloCompareFilterConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExModuloCompareFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExModuloCompareFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing (Modulo base) -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "OperandBSource != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing (Modulo base) -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "OperandBSource == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandC */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandC_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand C for testing -- Will be translated to `double` under the hood. */" },
		{ "Displayname", "Operand C (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand C for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandCConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand C for testing */" },
		{ "DisplayName", "Operand C" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand C for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZeroResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which value to return when dealing with zero-values */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which value to return when dealing with zero-values" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExModuloCompareFilterConfig constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperandBSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperandBSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OperandBConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandC;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OperandCConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_ZeroResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZeroResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExModuloCompareFilterConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExModuloCompareFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig;
class UScriptStruct* FPCGExModuloCompareFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExModuloCompareFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExModuloCompareFilterConfig Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBSource = { "OperandBSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandBSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBSource_MetaData), NewProp_OperandBSource_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandBConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandC = { "OperandC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandC), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandC_MetaData), NewProp_OperandC_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandCConstant = { "OperandCConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, OperandCConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandCConstant_MetaData), NewProp_OperandCConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExModuloCompareFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_ZeroResult_SetBit(void* Obj)
{
	((FPCGExModuloCompareFilterConfig*)Obj)->ZeroResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_ZeroResult = { "ZeroResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExModuloCompareFilterConfig), &Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_ZeroResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZeroResult_MetaData), NewProp_ZeroResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_OperandCConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewProp_ZeroResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExModuloCompareFilterConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExModuloCompareFilterConfig",
	Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::PropPointers),
	sizeof(FPCGExModuloCompareFilterConfig),
	alignof(FPCGExModuloCompareFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExModuloCompareFilterConfig *************************************

// ********** Begin Class UPCGExModuloCompareFilterFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory;
UClass* UPCGExModuloCompareFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExModuloCompareFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExModuloCompareFilterFactory"),
			Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExModuloCompareFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExModuloCompareFilterFactory_NoRegister()
{
	return UPCGExModuloCompareFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExModuloCompareFilterFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExModuloCompareFilterFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExModuloCompareFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics

// ********** Begin Class UPCGExModuloCompareFilterFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExModuloCompareFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3749925872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExModuloCompareFilterFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::ClassParams = {
	&UPCGExModuloCompareFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExModuloCompareFilterFactory::StaticRegisterNativesUPCGExModuloCompareFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExModuloCompareFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExModuloCompareFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory.OuterSingleton;
}
UPCGExModuloCompareFilterFactory::UPCGExModuloCompareFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExModuloCompareFilterFactory);
UPCGExModuloCompareFilterFactory::~UPCGExModuloCompareFilterFactory() {}
// ********** End Class UPCGExModuloCompareFilterFactory *******************************************

// ********** Begin Class UPCGExModuloCompareFilterProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings;
UClass* UPCGExModuloCompareFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExModuloCompareFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExModuloCompareFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExModuloCompareFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_NoRegister()
{
	return UPCGExModuloCompareFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/math-checks/modulo-comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExModuloCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExModuloCompareFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExModuloCompareFilterProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExModuloCompareFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics

// ********** Begin Class UPCGExModuloCompareFilterProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExModuloCompareFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3749925872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExModuloCompareFilterProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::ClassParams = {
	&UPCGExModuloCompareFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExModuloCompareFilterProviderSettings::StaticRegisterNativesUPCGExModuloCompareFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings.OuterSingleton;
}
UPCGExModuloCompareFilterProviderSettings::UPCGExModuloCompareFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExModuloCompareFilterProviderSettings);
UPCGExModuloCompareFilterProviderSettings::~UPCGExModuloCompareFilterProviderSettings() {}
// ********** End Class UPCGExModuloCompareFilterProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExModuloCompareFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExModuloCompareFilterConfig_Statics::NewStructOps, TEXT("PCGExModuloCompareFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExModuloCompareFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExModuloCompareFilterConfig), 3749925872U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExModuloCompareFilterFactory, UPCGExModuloCompareFilterFactory::StaticClass, TEXT("UPCGExModuloCompareFilterFactory"), &Z_Registration_Info_UClass_UPCGExModuloCompareFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExModuloCompareFilterFactory), 4259207763U) },
		{ Z_Construct_UClass_UPCGExModuloCompareFilterProviderSettings, UPCGExModuloCompareFilterProviderSettings::StaticClass, TEXT("UPCGExModuloCompareFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExModuloCompareFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExModuloCompareFilterProviderSettings), 1099763377U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_467161760{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExModuloCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
