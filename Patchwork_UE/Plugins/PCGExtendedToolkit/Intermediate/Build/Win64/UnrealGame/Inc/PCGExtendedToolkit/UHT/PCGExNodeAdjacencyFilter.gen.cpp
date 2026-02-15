// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h"
#include "Graph/Filters/PCGExAdjacency.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNodeAdjacencyFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAdjacencySettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNodeAdjacencyFilterConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNodeAdjacencyFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNodeAdjacencyFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Adjacency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Adjacency Settings */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ToolTip", "Adjacency Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandA */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandA" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand A (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandAConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant Operand A for testing. */" },
		{ "DisplayName", "Operand A" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Operand A for testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Source of the Operand B value -- either the neighboring point, or the edge connecting to that point. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ToolTip", "Source of the Operand B value -- either the neighboring point, or the edge connecting to that point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Neighbor)" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for near measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for near measures" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNodeAdjacencyFilterConfig constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Adjacency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OperandAConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperandBSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperandBSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNodeAdjacencyFilterConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNodeAdjacencyFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig;
class UScriptStruct* FPCGExNodeAdjacencyFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNodeAdjacencyFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNodeAdjacencyFilterConfig Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, Adjacency), Z_Construct_UScriptStruct_FPCGExAdjacencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Adjacency_MetaData), NewProp_Adjacency_MetaData) }; // 3816161896
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandAConstant = { "OperandAConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, OperandAConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandAConstant_MetaData), NewProp_OperandAConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandBSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandBSource = { "OperandBSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, OperandBSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBSource_MetaData), NewProp_OperandBSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeAdjacencyFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Adjacency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandAConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandBSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandBSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNodeAdjacencyFilterConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNodeAdjacencyFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNodeAdjacencyFilterConfig),
	alignof(FPCGExNodeAdjacencyFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNodeAdjacencyFilterConfig *************************************

// ********** Begin Class UPCGExNodeAdjacencyFilterFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory;
UClass* UPCGExNodeAdjacencyFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeAdjacencyFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeAdjacencyFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNodeAdjacencyFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_NoRegister()
{
	return UPCGExNodeAdjacencyFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeAdjacencyFilterFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeAdjacencyFilterFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeAdjacencyFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics

// ********** Begin Class UPCGExNodeAdjacencyFilterFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeAdjacencyFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2257269335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeAdjacencyFilterFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNodeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::ClassParams = {
	&UPCGExNodeAdjacencyFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNodeAdjacencyFilterFactory::StaticRegisterNativesUPCGExNodeAdjacencyFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory.OuterSingleton;
}
UPCGExNodeAdjacencyFilterFactory::UPCGExNodeAdjacencyFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeAdjacencyFilterFactory);
UPCGExNodeAdjacencyFilterFactory::~UPCGExNodeAdjacencyFilterFactory() {}
// ********** End Class UPCGExNodeAdjacencyFilterFactory *******************************************

// ********** Begin Class UPCGExNodeAdjacencyFilterProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings;
UClass* UPCGExNodeAdjacencyFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeAdjacencyFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeAdjacencyFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNodeAdjacencyFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_NoRegister()
{
	return UPCGExNodeAdjacencyFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-vtx-nodes/adjacency" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeAdjacencyFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeAdjacencyFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeAdjacencyFilterProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeAdjacencyFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics

// ********** Begin Class UPCGExNodeAdjacencyFilterProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeAdjacencyFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2257269335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeAdjacencyFilterProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNodeAdjacencyFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNodeAdjacencyFilterProviderSettings::StaticRegisterNativesUPCGExNodeAdjacencyFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings.OuterSingleton;
}
UPCGExNodeAdjacencyFilterProviderSettings::UPCGExNodeAdjacencyFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeAdjacencyFilterProviderSettings);
UPCGExNodeAdjacencyFilterProviderSettings::~UPCGExNodeAdjacencyFilterProviderSettings() {}
// ********** End Class UPCGExNodeAdjacencyFilterProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNodeAdjacencyFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNodeAdjacencyFilterConfig_Statics::NewStructOps, TEXT("PCGExNodeAdjacencyFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNodeAdjacencyFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNodeAdjacencyFilterConfig), 2257269335U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNodeAdjacencyFilterFactory, UPCGExNodeAdjacencyFilterFactory::StaticClass, TEXT("UPCGExNodeAdjacencyFilterFactory"), &Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeAdjacencyFilterFactory), 1115842200U) },
		{ Z_Construct_UClass_UPCGExNodeAdjacencyFilterProviderSettings, UPCGExNodeAdjacencyFilterProviderSettings::StaticClass, TEXT("UPCGExNodeAdjacencyFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNodeAdjacencyFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeAdjacencyFilterProviderSettings), 3763839275U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_2257702003{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeAdjacencyFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
