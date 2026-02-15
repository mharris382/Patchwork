// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/CollectionFilters/PCGExEntryCountFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEntryCountFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEntryCountFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEntryCountFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterCollectionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExEntryCountFilterConfig **************************************
struct Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEntryCountFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEntryCountFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBAttr_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `int32` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `int32` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Operand B to test Entries count against */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B to test Entries count against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEntryCountFilterConfig constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandBAttr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEntryCountFilterConfig constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEntryCountFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig;
class UScriptStruct* FPCGExEntryCountFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEntryCountFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEntryCountFilterConfig Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEntryCountFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEntryCountFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_OperandBAttr = { "OperandBAttr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEntryCountFilterConfig, OperandBAttr), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBAttr_MetaData), NewProp_OperandBAttr_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEntryCountFilterConfig, OperandB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEntryCountFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_OperandBAttr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEntryCountFilterConfig Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEntryCountFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEntryCountFilterConfig),
	alignof(FPCGExEntryCountFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEntryCountFilterConfig ****************************************

// ********** Begin Class UPCGExEntryCountFilterFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory;
UClass* UPCGExEntryCountFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEntryCountFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEntryCountFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEntryCountFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEntryCountFilterFactory_NoRegister()
{
	return UPCGExEntryCountFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEntryCountFilterFactory constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEntryCountFilterFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEntryCountFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics

// ********** Begin Class UPCGExEntryCountFilterFactory Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEntryCountFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 605265439
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEntryCountFilterFactory Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterCollectionFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::ClassParams = {
	&UPCGExEntryCountFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEntryCountFilterFactory::StaticRegisterNativesUPCGExEntryCountFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEntryCountFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEntryCountFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory.OuterSingleton;
}
UPCGExEntryCountFilterFactory::UPCGExEntryCountFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEntryCountFilterFactory);
UPCGExEntryCountFilterFactory::~UPCGExEntryCountFilterFactory() {}
// ********** End Class UPCGExEntryCountFilterFactory **********************************************

// ********** Begin Class UPCGExEntryCountFilterProviderSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings;
UClass* UPCGExEntryCountFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEntryCountFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEntryCountFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEntryCountFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_NoRegister()
{
	return UPCGExEntryCountFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-collections/entry-count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExEntryCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEntryCountFilterProviderSettings constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEntryCountFilterProviderSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEntryCountFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics

// ********** Begin Class UPCGExEntryCountFilterProviderSettings Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEntryCountFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 605265439
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEntryCountFilterProviderSettings Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEntryCountFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEntryCountFilterProviderSettings::StaticRegisterNativesUPCGExEntryCountFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings.OuterSingleton;
}
UPCGExEntryCountFilterProviderSettings::UPCGExEntryCountFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEntryCountFilterProviderSettings);
UPCGExEntryCountFilterProviderSettings::~UPCGExEntryCountFilterProviderSettings() {}
// ********** End Class UPCGExEntryCountFilterProviderSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEntryCountFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEntryCountFilterConfig_Statics::NewStructOps, TEXT("PCGExEntryCountFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEntryCountFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEntryCountFilterConfig), 605265439U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEntryCountFilterFactory, UPCGExEntryCountFilterFactory::StaticClass, TEXT("UPCGExEntryCountFilterFactory"), &Z_Registration_Info_UClass_UPCGExEntryCountFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEntryCountFilterFactory), 791773702U) },
		{ Z_Construct_UClass_UPCGExEntryCountFilterProviderSettings, UPCGExEntryCountFilterProviderSettings::StaticClass, TEXT("UPCGExEntryCountFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEntryCountFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEntryCountFilterProviderSettings), 1861734628U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_3302448212{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExEntryCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
