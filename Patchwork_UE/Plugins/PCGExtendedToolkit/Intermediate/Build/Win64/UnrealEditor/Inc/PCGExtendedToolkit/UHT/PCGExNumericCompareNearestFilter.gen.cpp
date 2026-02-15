// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExNumericCompareNearestFilter.h"
#include "Details/PCGExDetailsDistances.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNumericCompareNearestFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNumericCompareNearestFilterConfig ***************************
struct Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNumericCompareNearestFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNumericCompareNearestFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance method to be used for source & target points. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source & target points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood; read from the target points. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood; read from the target points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNumericCompareNearestFilterConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OperandBConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNumericCompareNearestFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNumericCompareNearestFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig;
class UScriptStruct* FPCGExNumericCompareNearestFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNumericCompareNearestFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNumericCompareNearestFilterConfig Property Definitions ******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_DistanceDetails = { "DistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, DistanceDetails), Z_Construct_UScriptStruct_FPCGExDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDetails_MetaData), NewProp_DistanceDetails_MetaData) }; // 649156467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, OperandBConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNumericCompareNearestFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExNumericCompareNearestFilterConfig*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExNumericCompareNearestFilterConfig), &Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_DistanceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNumericCompareNearestFilterConfig Property Definitions ********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNumericCompareNearestFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNumericCompareNearestFilterConfig),
	alignof(FPCGExNumericCompareNearestFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNumericCompareNearestFilterConfig *****************************

// ********** Begin Class UPCGExNumericCompareNearestFilterFactory *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory;
UClass* UPCGExNumericCompareNearestFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericCompareNearestFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericCompareNearestFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNumericCompareNearestFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_NoRegister()
{
	return UPCGExNumericCompareNearestFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericCompareNearestFilterFactory constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericCompareNearestFilterFactory constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericCompareNearestFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics

// ********** Begin Class UPCGExNumericCompareNearestFilterFactory Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericCompareNearestFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 348531642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericCompareNearestFilterFactory Property Definitions **************
UObject* (*const Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::ClassParams = {
	&UPCGExNumericCompareNearestFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNumericCompareNearestFilterFactory::StaticRegisterNativesUPCGExNumericCompareNearestFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory.OuterSingleton;
}
UPCGExNumericCompareNearestFilterFactory::UPCGExNumericCompareNearestFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericCompareNearestFilterFactory);
UPCGExNumericCompareNearestFilterFactory::~UPCGExNumericCompareNearestFilterFactory() {}
// ********** End Class UPCGExNumericCompareNearestFilterFactory ***********************************

// ********** Begin Class UPCGExNumericCompareNearestFilterProviderSettings ************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings;
UClass* UPCGExNumericCompareNearestFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNumericCompareNearestFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNumericCompareNearestFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNumericCompareNearestFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_NoRegister()
{
	return UPCGExNumericCompareNearestFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/compare-nearest-numeric" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExNumericCompareNearestFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNumericCompareNearestFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNumericCompareNearestFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNumericCompareNearestFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics

// ********** Begin Class UPCGExNumericCompareNearestFilterProviderSettings Property Definitions ***
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNumericCompareNearestFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 348531642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNumericCompareNearestFilterProviderSettings Property Definitions *****
UObject* (*const Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNumericCompareNearestFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNumericCompareNearestFilterProviderSettings::StaticRegisterNativesUPCGExNumericCompareNearestFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings.OuterSingleton;
}
UPCGExNumericCompareNearestFilterProviderSettings::UPCGExNumericCompareNearestFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNumericCompareNearestFilterProviderSettings);
UPCGExNumericCompareNearestFilterProviderSettings::~UPCGExNumericCompareNearestFilterProviderSettings() {}
// ********** End Class UPCGExNumericCompareNearestFilterProviderSettings **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNumericCompareNearestFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNumericCompareNearestFilterConfig_Statics::NewStructOps, TEXT("PCGExNumericCompareNearestFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNumericCompareNearestFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNumericCompareNearestFilterConfig), 348531642U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNumericCompareNearestFilterFactory, UPCGExNumericCompareNearestFilterFactory::StaticClass, TEXT("UPCGExNumericCompareNearestFilterFactory"), &Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericCompareNearestFilterFactory), 2993410571U) },
		{ Z_Construct_UClass_UPCGExNumericCompareNearestFilterProviderSettings, UPCGExNumericCompareNearestFilterProviderSettings::StaticClass, TEXT("UPCGExNumericCompareNearestFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNumericCompareNearestFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNumericCompareNearestFilterProviderSettings), 3413436738U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_28163728{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExNumericCompareNearestFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
