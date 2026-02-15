// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNodeNeighborsCountFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNodeNeighborsCountFilterConfig ******************************
struct Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNodeNeighborsCountFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNodeNeighborsCountFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Count */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand A (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant Operand A for testing. */" },
		{ "DisplayName", "Operand A" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Operand A for testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for near measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for near measures" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNodeNeighborsCountFilterConfig constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNodeNeighborsCountFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNodeNeighborsCountFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig;
class UScriptStruct* FPCGExNodeNeighborsCountFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNodeNeighborsCountFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNodeNeighborsCountFilterConfig Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeNeighborsCountFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeNeighborsCountFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_LocalCount = { "LocalCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeNeighborsCountFilterConfig, LocalCount), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalCount_MetaData), NewProp_LocalCount_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeNeighborsCountFilterConfig, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeNeighborsCountFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_LocalCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNodeNeighborsCountFilterConfig Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNodeNeighborsCountFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNodeNeighborsCountFilterConfig),
	alignof(FPCGExNodeNeighborsCountFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNodeNeighborsCountFilterConfig ********************************

// ********** Begin Class UPCGExNodeNeighborsCountFilterFactory ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory;
UClass* UPCGExNodeNeighborsCountFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeNeighborsCountFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeNeighborsCountFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNodeNeighborsCountFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_NoRegister()
{
	return UPCGExNodeNeighborsCountFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeNeighborsCountFilterFactory constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeNeighborsCountFilterFactory constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeNeighborsCountFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics

// ********** Begin Class UPCGExNodeNeighborsCountFilterFactory Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeNeighborsCountFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2254166231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeNeighborsCountFilterFactory Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNodeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::ClassParams = {
	&UPCGExNodeNeighborsCountFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNodeNeighborsCountFilterFactory::StaticRegisterNativesUPCGExNodeNeighborsCountFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory.OuterSingleton;
}
UPCGExNodeNeighborsCountFilterFactory::UPCGExNodeNeighborsCountFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeNeighborsCountFilterFactory);
UPCGExNodeNeighborsCountFilterFactory::~UPCGExNodeNeighborsCountFilterFactory() {}
// ********** End Class UPCGExNodeNeighborsCountFilterFactory **************************************

// ********** Begin Class UPCGExNodeNeighborsCountFilterProviderSettings ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings;
UClass* UPCGExNodeNeighborsCountFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeNeighborsCountFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeNeighborsCountFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNodeNeighborsCountFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_NoRegister()
{
	return UPCGExNodeNeighborsCountFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-vtx-nodes/neighbors-count" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeNeighborsCountFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeNeighborsCountFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeNeighborsCountFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics

// ********** Begin Class UPCGExNodeNeighborsCountFilterProviderSettings Property Definitions ******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeNeighborsCountFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2254166231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeNeighborsCountFilterProviderSettings Property Definitions ********
UObject* (*const Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNodeNeighborsCountFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNodeNeighborsCountFilterProviderSettings::StaticRegisterNativesUPCGExNodeNeighborsCountFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings.OuterSingleton;
}
UPCGExNodeNeighborsCountFilterProviderSettings::UPCGExNodeNeighborsCountFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeNeighborsCountFilterProviderSettings);
UPCGExNodeNeighborsCountFilterProviderSettings::~UPCGExNodeNeighborsCountFilterProviderSettings() {}
// ********** End Class UPCGExNodeNeighborsCountFilterProviderSettings *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNodeNeighborsCountFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig_Statics::NewStructOps, TEXT("PCGExNodeNeighborsCountFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNodeNeighborsCountFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNodeNeighborsCountFilterConfig), 2254166231U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNodeNeighborsCountFilterFactory, UPCGExNodeNeighborsCountFilterFactory::StaticClass, TEXT("UPCGExNodeNeighborsCountFilterFactory"), &Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeNeighborsCountFilterFactory), 209086802U) },
		{ Z_Construct_UClass_UPCGExNodeNeighborsCountFilterProviderSettings, UPCGExNodeNeighborsCountFilterProviderSettings::StaticClass, TEXT("UPCGExNodeNeighborsCountFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNodeNeighborsCountFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeNeighborsCountFilterProviderSettings), 2491095274U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_687071368{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
