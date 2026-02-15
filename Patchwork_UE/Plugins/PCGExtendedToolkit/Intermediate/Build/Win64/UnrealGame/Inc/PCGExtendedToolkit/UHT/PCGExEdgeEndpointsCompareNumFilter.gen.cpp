// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeEndpointsCompareNumFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExEdgeEndpointCompareAgainstMode **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode;
static UEnum* EPCGExEdgeEndpointCompareAgainstMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEdgeEndpointCompareAgainstMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeEndpointCompareAgainstMode>()
{
	return EPCGExEdgeEndpointCompareAgainstMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AgainstEach.DisplayName", "Start <-> End" },
		{ "AgainstEach.Name", "EPCGExEdgeEndpointCompareAgainstMode::AgainstEach" },
		{ "AgainstEach.Tooltip", "Compare Edge's start point value against Edge's end point value." },
		{ "AgainstEnd.DisplayName", "Edge <-> End" },
		{ "AgainstEnd.Name", "EPCGExEdgeEndpointCompareAgainstMode::AgainstEnd" },
		{ "AgainstEnd.Tooltip", "Compare the Edge's end point value against the Edge itself." },
		{ "AgainstSelfBoth.DisplayName", "Edge <-> Start, End" },
		{ "AgainstSelfBoth.Name", "EPCGExEdgeEndpointCompareAgainstMode::AgainstSelfBoth" },
		{ "AgainstSelfBoth.Tooltip", "Compare the Edge's value against each of its end points." },
		{ "AgainstStart.DisplayName", "Edge <-> Start" },
		{ "AgainstStart.Name", "EPCGExEdgeEndpointCompareAgainstMode::AgainstStart" },
		{ "AgainstStart.Tooltip", "Compare the Edge's start point value against the Edge itself." },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEdgeEndpointCompareAgainstMode::AgainstEach", (int64)EPCGExEdgeEndpointCompareAgainstMode::AgainstEach },
		{ "EPCGExEdgeEndpointCompareAgainstMode::AgainstStart", (int64)EPCGExEdgeEndpointCompareAgainstMode::AgainstStart },
		{ "EPCGExEdgeEndpointCompareAgainstMode::AgainstEnd", (int64)EPCGExEdgeEndpointCompareAgainstMode::AgainstEnd },
		{ "EPCGExEdgeEndpointCompareAgainstMode::AgainstSelfBoth", (int64)EPCGExEdgeEndpointCompareAgainstMode::AgainstSelfBoth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEdgeEndpointCompareAgainstMode",
	"EPCGExEdgeEndpointCompareAgainstMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointCompareAgainstMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode.InnerSingleton;
}
// ********** End Enum EPCGExEdgeEndpointCompareAgainstMode ****************************************

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig *************************
struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeEndpointsCompareNumFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeEndpointsCompareNumFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to compare */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to compare" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "DisplayName", "Comparison" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for approx. comparison modes */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for approx. comparison modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeEndpointsCompareNumFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig;
class UScriptStruct* FPCGExEdgeEndpointsCompareNumFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeEndpointsCompareNumFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig Property Definitions ****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCompareNumFilterConfig, Attribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCompareNumFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCompareNumFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExEdgeEndpointsCompareNumFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEndpointsCompareNumFilterConfig), &Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeEndpointsCompareNumFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeEndpointsCompareNumFilterConfig),
	alignof(FPCGExEdgeEndpointsCompareNumFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeEndpointsCompareNumFilterConfig ***************************

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterFactory *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory;
UClass* UPCGExEdgeEndpointsCompareNumFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCompareNumFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCompareNumFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCompareNumFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_NoRegister()
{
	return UPCGExEdgeEndpointsCompareNumFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterFactory constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterFactory constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCompareNumFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterFactory Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCompareNumFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4282324206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterFactory Property Definitions ************
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCompareNumFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCompareNumFilterFactory::StaticRegisterNativesUPCGExEdgeEndpointsCompareNumFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory.OuterSingleton;
}
UPCGExEdgeEndpointsCompareNumFilterFactory::UPCGExEdgeEndpointsCompareNumFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCompareNumFilterFactory);
UPCGExEdgeEndpointsCompareNumFilterFactory::~UPCGExEdgeEndpointsCompareNumFilterFactory() {}
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterFactory *********************************

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings **********************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings;
UClass* UPCGExEdgeEndpointsCompareNumFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCompareNumFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCompareNumFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCompareNumFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_NoRegister()
{
	return UPCGExEdgeEndpointsCompareNumFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/endpoints-compare-numeric" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCompareNumFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCompareNumFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics

// ********** Begin Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings Property Definitions *
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCompareNumFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4282324206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings Property Definitions ***
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCompareNumFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCompareNumFilterProviderSettings::StaticRegisterNativesUPCGExEdgeEndpointsCompareNumFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings.OuterSingleton;
}
UPCGExEdgeEndpointsCompareNumFilterProviderSettings::UPCGExEdgeEndpointsCompareNumFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCompareNumFilterProviderSettings);
UPCGExEdgeEndpointsCompareNumFilterProviderSettings::~UPCGExEdgeEndpointsCompareNumFilterProviderSettings() {}
// ********** End Class UPCGExEdgeEndpointsCompareNumFilterProviderSettings ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExEdgeEndpointCompareAgainstMode_StaticEnum, TEXT("EPCGExEdgeEndpointCompareAgainstMode"), &Z_Registration_Info_UEnum_EPCGExEdgeEndpointCompareAgainstMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3825697299U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeEndpointsCompareNumFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig_Statics::NewStructOps, TEXT("PCGExEdgeEndpointsCompareNumFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCompareNumFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeEndpointsCompareNumFilterConfig), 4282324206U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory, UPCGExEdgeEndpointsCompareNumFilterFactory::StaticClass, TEXT("UPCGExEdgeEndpointsCompareNumFilterFactory"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCompareNumFilterFactory), 3198058538U) },
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings, UPCGExEdgeEndpointsCompareNumFilterProviderSettings::StaticClass, TEXT("UPCGExEdgeEndpointsCompareNumFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCompareNumFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCompareNumFilterProviderSettings), 676149746U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_2395728671{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCompareNumFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
