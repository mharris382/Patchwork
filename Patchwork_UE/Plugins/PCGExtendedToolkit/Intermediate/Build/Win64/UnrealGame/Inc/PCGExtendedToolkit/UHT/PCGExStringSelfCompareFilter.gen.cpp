// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExStringSelfCompareFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExStringSelfCompareFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExStringSelfCompareFilterConfig *******************************
struct Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExStringSelfCompareFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExStringSelfCompareFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index mode */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `int32` under the hood. */" },
		{ "DisplayName", "Index (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `int32` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Index" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index safety */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index safety" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidIndexFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to deal with invalid indices */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with invalid indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwapOperands_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Swap operands. Useful to invert \"contains\" checks */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Swap operands. Useful to invert \"contains\" checks" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExStringSelfCompareFilterConfig constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
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
	static void NewProp_bSwapOperands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapOperands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExStringSelfCompareFilterConfig constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExStringSelfCompareFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig;
class UScriptStruct* FPCGExStringSelfCompareFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExStringSelfCompareFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExStringSelfCompareFilterConfig Property Definitions **********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, OperandA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 4028780742
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexMode = { "IndexMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, IndexMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexMode_MetaData), NewProp_IndexMode_MetaData) }; // 2236136904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexAttribute = { "IndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, IndexAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexAttribute_MetaData), NewProp_IndexAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexConstant = { "IndexConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, IndexConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexConstant_MetaData), NewProp_IndexConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback = { "InvalidIndexFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringSelfCompareFilterConfig, InvalidIndexFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidIndexFallback_MetaData), NewProp_InvalidIndexFallback_MetaData) }; // 3927627996
void Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_bSwapOperands_SetBit(void* Obj)
{
	((FPCGExStringSelfCompareFilterConfig*)Obj)->bSwapOperands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_bSwapOperands = { "bSwapOperands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExStringSelfCompareFilterConfig), &Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_bSwapOperands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwapOperands_MetaData), NewProp_bSwapOperands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_InvalidIndexFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewProp_bSwapOperands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExStringSelfCompareFilterConfig Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExStringSelfCompareFilterConfig",
	Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::PropPointers),
	sizeof(FPCGExStringSelfCompareFilterConfig),
	alignof(FPCGExStringSelfCompareFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExStringSelfCompareFilterConfig *********************************

// ********** Begin Class UPCGExStringSelfCompareFilterFactory *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory;
UClass* UPCGExStringSelfCompareFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExStringSelfCompareFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExStringSelfCompareFilterFactory"),
			Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExStringSelfCompareFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_NoRegister()
{
	return UPCGExStringSelfCompareFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExStringSelfCompareFilterFactory constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExStringSelfCompareFilterFactory constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExStringSelfCompareFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics

// ********** Begin Class UPCGExStringSelfCompareFilterFactory Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExStringSelfCompareFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3551276875
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExStringSelfCompareFilterFactory Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::ClassParams = {
	&UPCGExStringSelfCompareFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExStringSelfCompareFilterFactory::StaticRegisterNativesUPCGExStringSelfCompareFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory.OuterSingleton;
}
UPCGExStringSelfCompareFilterFactory::UPCGExStringSelfCompareFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExStringSelfCompareFilterFactory);
UPCGExStringSelfCompareFilterFactory::~UPCGExStringSelfCompareFilterFactory() {}
// ********** End Class UPCGExStringSelfCompareFilterFactory ***************************************

// ********** Begin Class UPCGExStringSelfCompareFilterProviderSettings ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings;
UClass* UPCGExStringSelfCompareFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExStringSelfCompareFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExStringSelfCompareFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExStringSelfCompareFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_NoRegister()
{
	return UPCGExStringSelfCompareFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/self-comparisons/string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringSelfCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExStringSelfCompareFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExStringSelfCompareFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExStringSelfCompareFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics

// ********** Begin Class UPCGExStringSelfCompareFilterProviderSettings Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExStringSelfCompareFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3551276875
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExStringSelfCompareFilterProviderSettings Property Definitions *********
UObject* (*const Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::ClassParams = {
	&UPCGExStringSelfCompareFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExStringSelfCompareFilterProviderSettings::StaticRegisterNativesUPCGExStringSelfCompareFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings.OuterSingleton;
}
UPCGExStringSelfCompareFilterProviderSettings::UPCGExStringSelfCompareFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExStringSelfCompareFilterProviderSettings);
UPCGExStringSelfCompareFilterProviderSettings::~UPCGExStringSelfCompareFilterProviderSettings() {}
// ********** End Class UPCGExStringSelfCompareFilterProviderSettings ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExStringSelfCompareFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExStringSelfCompareFilterConfig_Statics::NewStructOps, TEXT("PCGExStringSelfCompareFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExStringSelfCompareFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExStringSelfCompareFilterConfig), 3551276875U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExStringSelfCompareFilterFactory, UPCGExStringSelfCompareFilterFactory::StaticClass, TEXT("UPCGExStringSelfCompareFilterFactory"), &Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExStringSelfCompareFilterFactory), 612330613U) },
		{ Z_Construct_UClass_UPCGExStringSelfCompareFilterProviderSettings, UPCGExStringSelfCompareFilterProviderSettings::StaticClass, TEXT("UPCGExStringSelfCompareFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExStringSelfCompareFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExStringSelfCompareFilterProviderSettings), 895284819U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_2602305361{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringSelfCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
