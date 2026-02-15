// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeEndpointsCompareStrFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig *************************
struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeEndpointsCompareStrFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeEndpointsCompareStrFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to compare */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to compare" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "DisplayName", "Comparison" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeEndpointsCompareStrFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig;
class UScriptStruct* FPCGExEdgeEndpointsCompareStrFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeEndpointsCompareStrFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig Property Definitions ****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCompareStrFilterConfig, Attribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCompareStrFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 4028780742
void Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExEdgeEndpointsCompareStrFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEndpointsCompareStrFilterConfig), &Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeEndpointsCompareStrFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeEndpointsCompareStrFilterConfig),
	alignof(FPCGExEdgeEndpointsCompareStrFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareStrFilterConfig ***************************

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterFactory *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory;
UClass* UPCGExEdgeEndpointsCompareStrFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCompareStrFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCompareStrFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCompareStrFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_NoRegister()
{
	return UPCGExEdgeEndpointsCompareStrFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterFactory constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterFactory constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCompareStrFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterFactory Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCompareStrFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 369927036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterFactory Property Definitions ************
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCompareStrFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCompareStrFilterFactory::StaticRegisterNativesUPCGExEdgeEndpointsCompareStrFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory.OuterSingleton;
}
UPCGExEdgeEndpointsCompareStrFilterFactory::UPCGExEdgeEndpointsCompareStrFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCompareStrFilterFactory);
UPCGExEdgeEndpointsCompareStrFilterFactory::~UPCGExEdgeEndpointsCompareStrFilterFactory() {}
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterFactory *********************************

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings **********************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings;
UClass* UPCGExEdgeEndpointsCompareStrFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCompareStrFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCompareStrFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCompareStrFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_NoRegister()
{
	return UPCGExEdgeEndpointsCompareStrFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/endpoints-compare-string" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareStrFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCompareStrFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics

// ********** Begin Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings Property Definitions *
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCompareStrFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 369927036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings Property Definitions ***
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCompareStrFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCompareStrFilterProviderSettings::StaticRegisterNativesUPCGExEdgeEndpointsCompareStrFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings.OuterSingleton;
}
UPCGExEdgeEndpointsCompareStrFilterProviderSettings::UPCGExEdgeEndpointsCompareStrFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCompareStrFilterProviderSettings);
UPCGExEdgeEndpointsCompareStrFilterProviderSettings::~UPCGExEdgeEndpointsCompareStrFilterProviderSettings() {}
// ********** End Class UPCGExEdgeEndpointsCompareStrFilterProviderSettings ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeEndpointsCompareStrFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig_Statics::NewStructOps, TEXT("PCGExEdgeEndpointsCompareStrFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareStrFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeEndpointsCompareStrFilterConfig), 369927036U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory, UPCGExEdgeEndpointsCompareStrFilterFactory::StaticClass, TEXT("UPCGExEdgeEndpointsCompareStrFilterFactory"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCompareStrFilterFactory), 3423520675U) },
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings, UPCGExEdgeEndpointsCompareStrFilterProviderSettings::StaticClass, TEXT("UPCGExEdgeEndpointsCompareStrFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareStrFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCompareStrFilterProviderSettings), 1626841839U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_2739572246{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareStrFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
