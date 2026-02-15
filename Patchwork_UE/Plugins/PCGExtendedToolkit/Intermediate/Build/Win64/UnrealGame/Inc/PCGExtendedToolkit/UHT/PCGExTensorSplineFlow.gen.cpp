// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorSplineFlow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSplineFlow() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorSplineFlowConfig **************************************
struct Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorSplineFlowConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorSplineFlowConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Base radius of the spline. Will be scaled by control points' scale length */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Base radius of the spline. Will be scaled by control points' scale length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Which spline transform axis is to be used */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which spline transform axis is to be used" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorSplineFlowConfig constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorSplineFlowConfig constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorSplineFlowConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorSplineFlowConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorSplineFlowConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig;
class UScriptStruct* FPCGExTensorSplineFlowConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorSplineFlowConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorSplineFlowConfig Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSplineFlowConfig, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_SplineDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_SplineDirection = { "SplineDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSplineFlowConfig, SplineDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineDirection_MetaData), NewProp_SplineDirection_MetaData) }; // 1564008668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_SplineDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewProp_SplineDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorSplineFlowConfig Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorSplineFlowConfig",
	Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::PropPointers),
	sizeof(FPCGExTensorSplineFlowConfig),
	alignof(FPCGExTensorSplineFlowConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorSplineFlowConfig ****************************************

// ********** Begin Class UPCGExTensorSplineFlowFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory;
UClass* UPCGExTensorSplineFlowFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSplineFlowFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSplineFlowFactory"),
			Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSplineFlowFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory_NoRegister()
{
	return UPCGExTensorSplineFlowFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSplineFlowFactory constinit property declarations ************
// ********** End Class UPCGExTensorSplineFlowFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSplineFlowFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::ClassParams = {
	&UPCGExTensorSplineFlowFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorSplineFlowFactory::StaticRegisterNativesUPCGExTensorSplineFlowFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorSplineFlowFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory.OuterSingleton;
}
UPCGExTensorSplineFlowFactory::UPCGExTensorSplineFlowFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSplineFlowFactory);
UPCGExTensorSplineFlowFactory::~UPCGExTensorSplineFlowFactory() {}
// ********** End Class UPCGExTensorSplineFlowFactory **********************************************

// ********** Begin Class UPCGExCreateTensorSplineFlowSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings;
UClass* UPCGExCreateTensorSplineFlowSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorSplineFlowSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorSplineFlowSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorSplineFlowSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_NoRegister()
{
	return UPCGExCreateTensorSplineFlowSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-spline-flow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorSplineFlowSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorSplineFlowSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorSplineFlowSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics

// ********** Begin Class UPCGExCreateTensorSplineFlowSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorSplineFlowSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 19876838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorSplineFlowSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::ClassParams = {
	&UPCGExCreateTensorSplineFlowSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorSplineFlowSettings::StaticRegisterNativesUPCGExCreateTensorSplineFlowSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings.OuterSingleton;
}
UPCGExCreateTensorSplineFlowSettings::UPCGExCreateTensorSplineFlowSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorSplineFlowSettings);
UPCGExCreateTensorSplineFlowSettings::~UPCGExCreateTensorSplineFlowSettings() {}
// ********** End Class UPCGExCreateTensorSplineFlowSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorSplineFlowConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorSplineFlowConfig_Statics::NewStructOps, TEXT("PCGExTensorSplineFlowConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorSplineFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorSplineFlowConfig), 19876838U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSplineFlowFactory, UPCGExTensorSplineFlowFactory::StaticClass, TEXT("UPCGExTensorSplineFlowFactory"), &Z_Registration_Info_UClass_UPCGExTensorSplineFlowFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSplineFlowFactory), 268608033U) },
		{ Z_Construct_UClass_UPCGExCreateTensorSplineFlowSettings, UPCGExCreateTensorSplineFlowSettings::StaticClass, TEXT("UPCGExCreateTensorSplineFlowSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorSplineFlowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorSplineFlowSettings), 3334174495U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_3865558465{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
