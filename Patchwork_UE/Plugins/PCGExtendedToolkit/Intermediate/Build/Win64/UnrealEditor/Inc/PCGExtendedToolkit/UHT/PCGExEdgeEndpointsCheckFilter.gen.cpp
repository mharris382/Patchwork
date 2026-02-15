// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeEndpointsCheckFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterResult();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExEdgeEndpointsCheckMode **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode;
static UEnum* EPCGExEdgeEndpointsCheckMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEdgeEndpointsCheckMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeEndpointsCheckMode>()
{
	return EPCGExEdgeEndpointsCheckMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any Pass" },
		{ "Any.Name", "EPCGExEdgeEndpointsCheckMode::Any" },
		{ "Any.Tooltip", "At least one endpoint must have the expected result." },
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EPCGExEdgeEndpointsCheckMode::Both" },
		{ "Both.Tooltip", "Both endpoints must have the expected result." },
		{ "End.DisplayName", "End" },
		{ "End.Name", "EPCGExEdgeEndpointsCheckMode::End" },
		{ "End.Tooltip", "End must have the expected result." },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExEdgeEndpointsCheckMode::None" },
		{ "None.Tooltip", "None of the endpoint must has the expected result." },
		{ "SeeSaw.DisplayName", "SeeSaw" },
		{ "SeeSaw.Name", "EPCGExEdgeEndpointsCheckMode::SeeSaw" },
		{ "SeeSaw.Tooltip", "One must pass and the other must fail" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "EPCGExEdgeEndpointsCheckMode::Start" },
		{ "Start.Tooltip", "Start must have the expected result." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEdgeEndpointsCheckMode::None", (int64)EPCGExEdgeEndpointsCheckMode::None },
		{ "EPCGExEdgeEndpointsCheckMode::Both", (int64)EPCGExEdgeEndpointsCheckMode::Both },
		{ "EPCGExEdgeEndpointsCheckMode::Any", (int64)EPCGExEdgeEndpointsCheckMode::Any },
		{ "EPCGExEdgeEndpointsCheckMode::Start", (int64)EPCGExEdgeEndpointsCheckMode::Start },
		{ "EPCGExEdgeEndpointsCheckMode::End", (int64)EPCGExEdgeEndpointsCheckMode::End },
		{ "EPCGExEdgeEndpointsCheckMode::SeeSaw", (int64)EPCGExEdgeEndpointsCheckMode::SeeSaw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEdgeEndpointsCheckMode",
	"EPCGExEdgeEndpointsCheckMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode.InnerSingleton;
}
// ********** End Enum EPCGExEdgeEndpointsCheckMode ************************************************

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig ******************************
struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeEndpointsCheckFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeEndpointsCheckFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mode */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expects_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The expected result of the filter, in regard to the selected mode. i.e, if mode = \"Both\" and Expects = \"Pass\", both edge' endpoints must pass the filters for the check to pass, otherwise it fails. */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "Mode != EPCGExEdgeEndpointsCheckMode::SeeSaw" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The expected result of the filter, in regard to the selected mode. i.e, if mode = \"Both\" and Expects = \"Pass\", both edge' endpoints must pass the filters for the check to pass, otherwise it fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Expects_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Expects;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeEndpointsCheckFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig;
class UScriptStruct* FPCGExEdgeEndpointsCheckFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeEndpointsCheckFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCheckFilterConfig, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeEndpointsCheckMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 81345191
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Expects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Expects = { "Expects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEndpointsCheckFilterConfig, Expects), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expects_MetaData), NewProp_Expects_MetaData) }; // 1774250770
void Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExEdgeEndpointsCheckFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEndpointsCheckFilterConfig), &Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Expects_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_Expects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeEndpointsCheckFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeEndpointsCheckFilterConfig),
	alignof(FPCGExEdgeEndpointsCheckFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeEndpointsCheckFilterConfig ********************************

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterFactory ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory;
UClass* UPCGExEdgeEndpointsCheckFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCheckFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCheckFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCheckFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_NoRegister()
{
	return UPCGExEdgeEndpointsCheckFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterFactory constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCheckFilterFactory constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCheckFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterFactory Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCheckFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4124178084
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_FilterFactories_Inner = { "FilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_FilterFactories = { "FilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCheckFilterFactory, FilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFactories_MetaData), NewProp_FilterFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_FilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::NewProp_FilterFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCheckFilterFactory Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCheckFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCheckFilterFactory::StaticRegisterNativesUPCGExEdgeEndpointsCheckFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory.OuterSingleton;
}
UPCGExEdgeEndpointsCheckFilterFactory::UPCGExEdgeEndpointsCheckFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCheckFilterFactory);
UPCGExEdgeEndpointsCheckFilterFactory::~UPCGExEdgeEndpointsCheckFilterFactory() {}
// ********** End Class UPCGExEdgeEndpointsCheckFilterFactory **************************************

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterProviderSettings ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings;
UClass* UPCGExEdgeEndpointsCheckFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeEndpointsCheckFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeEndpointsCheckFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeEndpointsCheckFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_NoRegister()
{
	return UPCGExEdgeEndpointsCheckFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/endpoints-check" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeEndpointsCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeEndpointsCheckFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeEndpointsCheckFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics

// ********** Begin Class UPCGExEdgeEndpointsCheckFilterProviderSettings Property Definitions ******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeEndpointsCheckFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4124178084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeEndpointsCheckFilterProviderSettings Property Definitions ********
UObject* (*const Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEdgeEndpointsCheckFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgeEndpointsCheckFilterProviderSettings::StaticRegisterNativesUPCGExEdgeEndpointsCheckFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings.OuterSingleton;
}
UPCGExEdgeEndpointsCheckFilterProviderSettings::UPCGExEdgeEndpointsCheckFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeEndpointsCheckFilterProviderSettings);
UPCGExEdgeEndpointsCheckFilterProviderSettings::~UPCGExEdgeEndpointsCheckFilterProviderSettings() {}
// ********** End Class UPCGExEdgeEndpointsCheckFilterProviderSettings *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExEdgeEndpointsCheckMode_StaticEnum, TEXT("EPCGExEdgeEndpointsCheckMode"), &Z_Registration_Info_UEnum_EPCGExEdgeEndpointsCheckMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 81345191U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeEndpointsCheckFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig_Statics::NewStructOps, TEXT("PCGExEdgeEndpointsCheckFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeEndpointsCheckFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeEndpointsCheckFilterConfig), 4124178084U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterFactory, UPCGExEdgeEndpointsCheckFilterFactory::StaticClass, TEXT("UPCGExEdgeEndpointsCheckFilterFactory"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCheckFilterFactory), 2144787049U) },
		{ Z_Construct_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings, UPCGExEdgeEndpointsCheckFilterProviderSettings::StaticClass, TEXT("UPCGExEdgeEndpointsCheckFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEdgeEndpointsCheckFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeEndpointsCheckFilterProviderSettings), 1568752630U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_1107839252{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeEndpointsCheckFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
