// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExEdgeLengthFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeLengthFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExEdgeLengthFilterConfig **************************************
struct Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeLengthFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeLengthFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to read the threshold from an attribute on the edge or a constant. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to read the threshold from an attribute on the edge or a constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to fetch threshold from */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to fetch threshold from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Threshold" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for approx. comparison modes */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for approx. comparison modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeLengthFilterConfig constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ThresholdConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeLengthFilterConfig constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeLengthFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig;
class UScriptStruct* FPCGExEdgeLengthFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeLengthFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeLengthFilterConfig Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeLengthFilterConfig, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeLengthFilterConfig, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdConstant = { "ThresholdConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeLengthFilterConfig, ThresholdConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdConstant_MetaData), NewProp_ThresholdConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeLengthFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeLengthFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExEdgeLengthFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeLengthFilterConfig), &Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_ThresholdConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeLengthFilterConfig Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeLengthFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeLengthFilterConfig),
	alignof(FPCGExEdgeLengthFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeLengthFilterConfig ****************************************

// ********** Begin Class UPCGExEdgeLengthFilterFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory;
UClass* UPCGExEdgeLengthFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeLengthFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeLengthFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeLengthFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_NoRegister()
{
	return UPCGExEdgeLengthFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeLengthFilterFactory constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeLengthFilterFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeLengthFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics

// ********** Begin Class UPCGExEdgeLengthFilterFactory Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeLengthFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1552655966
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeLengthFilterFactory Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::ClassParams = {
	&UPCGExEdgeLengthFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEdgeLengthFilterFactory::StaticRegisterNativesUPCGExEdgeLengthFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEdgeLengthFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory.OuterSingleton;
}
UPCGExEdgeLengthFilterFactory::UPCGExEdgeLengthFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeLengthFilterFactory);
UPCGExEdgeLengthFilterFactory::~UPCGExEdgeLengthFilterFactory() {}
// ********** End Class UPCGExEdgeLengthFilterFactory **********************************************

// ********** Begin Class UPCGExEdgeLengthFilterProviderSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings;
UClass* UPCGExEdgeLengthFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeLengthFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeLengthFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeLengthFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_NoRegister()
{
	return UPCGExEdgeLengthFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/direction-1" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeLengthFilterProviderSettings constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeLengthFilterProviderSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeLengthFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics

// ********** Begin Class UPCGExEdgeLengthFilterProviderSettings Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeLengthFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1552655966
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeLengthFilterProviderSettings Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEdgeLengthFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgeLengthFilterProviderSettings::StaticRegisterNativesUPCGExEdgeLengthFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings.OuterSingleton;
}
UPCGExEdgeLengthFilterProviderSettings::UPCGExEdgeLengthFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeLengthFilterProviderSettings);
UPCGExEdgeLengthFilterProviderSettings::~UPCGExEdgeLengthFilterProviderSettings() {}
// ********** End Class UPCGExEdgeLengthFilterProviderSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeLengthFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeLengthFilterConfig_Statics::NewStructOps, TEXT("PCGExEdgeLengthFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeLengthFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeLengthFilterConfig), 1552655966U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeLengthFilterFactory, UPCGExEdgeLengthFilterFactory::StaticClass, TEXT("UPCGExEdgeLengthFilterFactory"), &Z_Registration_Info_UClass_UPCGExEdgeLengthFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeLengthFilterFactory), 2083016761U) },
		{ Z_Construct_UClass_UPCGExEdgeLengthFilterProviderSettings, UPCGExEdgeLengthFilterProviderSettings::StaticClass, TEXT("UPCGExEdgeLengthFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEdgeLengthFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeLengthFilterProviderSettings), 2230932256U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_3827696405{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeLengthFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
