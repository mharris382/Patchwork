// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNodeEdgeAngleFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNodeEdgeAngleFilterConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNodeEdgeAngleFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNodeEdgeAngleFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeavesFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What should this filter return when dealing with leaves nodes? (node that only have one edge) */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What should this filter return when dealing with leaves nodes? (node that only have one edge)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonBinaryFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What should this filter return when dealing with complex, non-binary nodes? (node that have more that two edges) */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What should this filter return when dealing with complex, non-binary nodes? (node that have more that two edges)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the result of the filter should be inverted or not. Note that this will also invert fallback results! */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether the result of the filter should be inverted or not. Note that this will also invert fallback results!" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNodeEdgeAngleFilterConfig constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeavesFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeavesFallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NonBinaryFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NonBinaryFallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNodeEdgeAngleFilterConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNodeEdgeAngleFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig;
class UScriptStruct* FPCGExNodeEdgeAngleFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNodeEdgeAngleFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNodeEdgeAngleFilterConfig Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_LeavesFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_LeavesFallback = { "LeavesFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeAngleFilterConfig, LeavesFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeavesFallback_MetaData), NewProp_LeavesFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_NonBinaryFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_NonBinaryFallback = { "NonBinaryFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeAngleFilterConfig, NonBinaryFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonBinaryFallback_MetaData), NewProp_NonBinaryFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeAngleFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
void Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExNodeEdgeAngleFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExNodeEdgeAngleFilterConfig), &Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_LeavesFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_LeavesFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_NonBinaryFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_NonBinaryFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNodeEdgeAngleFilterConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNodeEdgeAngleFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNodeEdgeAngleFilterConfig),
	alignof(FPCGExNodeEdgeAngleFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNodeEdgeAngleFilterConfig *************************************

// ********** Begin Class UPCGExNodeEdgeAngleFilterFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory;
UClass* UPCGExNodeEdgeAngleFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeEdgeAngleFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeEdgeAngleFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNodeEdgeAngleFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_NoRegister()
{
	return UPCGExNodeEdgeAngleFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeEdgeAngleFilterFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeEdgeAngleFilterFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeEdgeAngleFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics

// ********** Begin Class UPCGExNodeEdgeAngleFilterFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeEdgeAngleFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 963617278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeEdgeAngleFilterFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNodeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::ClassParams = {
	&UPCGExNodeEdgeAngleFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNodeEdgeAngleFilterFactory::StaticRegisterNativesUPCGExNodeEdgeAngleFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory.OuterSingleton;
}
UPCGExNodeEdgeAngleFilterFactory::UPCGExNodeEdgeAngleFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeEdgeAngleFilterFactory);
UPCGExNodeEdgeAngleFilterFactory::~UPCGExNodeEdgeAngleFilterFactory() {}
// ********** End Class UPCGExNodeEdgeAngleFilterFactory *******************************************

// ********** Begin Class UPCGExNodeEdgeAngleFilterProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings;
UClass* UPCGExNodeEdgeAngleFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeEdgeAngleFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeEdgeAngleFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNodeEdgeAngleFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_NoRegister()
{
	return UPCGExNodeEdgeAngleFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-vtx-nodes/edge-angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeAngleFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeEdgeAngleFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeEdgeAngleFilterProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeEdgeAngleFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics

// ********** Begin Class UPCGExNodeEdgeAngleFilterProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeEdgeAngleFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 963617278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeEdgeAngleFilterProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNodeEdgeAngleFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNodeEdgeAngleFilterProviderSettings::StaticRegisterNativesUPCGExNodeEdgeAngleFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings.OuterSingleton;
}
UPCGExNodeEdgeAngleFilterProviderSettings::UPCGExNodeEdgeAngleFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeEdgeAngleFilterProviderSettings);
UPCGExNodeEdgeAngleFilterProviderSettings::~UPCGExNodeEdgeAngleFilterProviderSettings() {}
// ********** End Class UPCGExNodeEdgeAngleFilterProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNodeEdgeAngleFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig_Statics::NewStructOps, TEXT("PCGExNodeEdgeAngleFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeAngleFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNodeEdgeAngleFilterConfig), 963617278U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNodeEdgeAngleFilterFactory, UPCGExNodeEdgeAngleFilterFactory::StaticClass, TEXT("UPCGExNodeEdgeAngleFilterFactory"), &Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeEdgeAngleFilterFactory), 2532265079U) },
		{ Z_Construct_UClass_UPCGExNodeEdgeAngleFilterProviderSettings, UPCGExNodeEdgeAngleFilterProviderSettings::StaticClass, TEXT("UPCGExNodeEdgeAngleFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNodeEdgeAngleFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeEdgeAngleFilterProviderSettings), 2684857449U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_1654054348{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeAngleFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
