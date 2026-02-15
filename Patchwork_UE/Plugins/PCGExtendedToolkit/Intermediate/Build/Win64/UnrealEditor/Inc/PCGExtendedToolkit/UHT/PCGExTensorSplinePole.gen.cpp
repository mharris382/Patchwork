// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorSplinePole.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSplinePole() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplinePoleFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplinePoleFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorSplinePoleConfig **************************************
struct Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorSplinePoleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorSplinePoleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplinePole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Base radius of the spline. Will be scaled by control points' scale length */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplinePole.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Base radius of the spline. Will be scaled by control points' scale length" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorSplinePoleConfig constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorSplinePoleConfig constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorSplinePoleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorSplinePoleConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorSplinePoleConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig;
class UScriptStruct* FPCGExTensorSplinePoleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorSplinePoleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorSplinePoleConfig Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSplinePoleConfig, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorSplinePoleConfig Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorSplinePoleConfig",
	Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::PropPointers),
	sizeof(FPCGExTensorSplinePoleConfig),
	alignof(FPCGExTensorSplinePoleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorSplinePoleConfig ****************************************

// ********** Begin Class UPCGExTensorSplinePoleFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory;
UClass* UPCGExTensorSplinePoleFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSplinePoleFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSplinePoleFactory"),
			Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSplinePoleFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSplinePoleFactory_NoRegister()
{
	return UPCGExTensorSplinePoleFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplinePole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplinePole.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSplinePoleFactory constinit property declarations ************
// ********** End Class UPCGExTensorSplinePoleFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSplinePoleFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::ClassParams = {
	&UPCGExTensorSplinePoleFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorSplinePoleFactory::StaticRegisterNativesUPCGExTensorSplinePoleFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSplinePoleFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorSplinePoleFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory.OuterSingleton;
}
UPCGExTensorSplinePoleFactory::UPCGExTensorSplinePoleFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSplinePoleFactory);
UPCGExTensorSplinePoleFactory::~UPCGExTensorSplinePoleFactory() {}
// ********** End Class UPCGExTensorSplinePoleFactory **********************************************

// ********** Begin Class UPCGExCreateTensorSplinePoleSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings;
UClass* UPCGExCreateTensorSplinePoleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorSplinePoleSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorSplinePoleSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorSplinePoleSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_NoRegister()
{
	return UPCGExCreateTensorSplinePoleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplinePole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplinePole.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-spline-pole" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplinePole.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorSplinePoleSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorSplinePoleSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorSplinePoleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics

// ********** Begin Class UPCGExCreateTensorSplinePoleSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorSplinePoleSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4036656463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorSplinePoleSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::ClassParams = {
	&UPCGExCreateTensorSplinePoleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorSplinePoleSettings::StaticRegisterNativesUPCGExCreateTensorSplinePoleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings.OuterSingleton;
}
UPCGExCreateTensorSplinePoleSettings::UPCGExCreateTensorSplinePoleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorSplinePoleSettings);
UPCGExCreateTensorSplinePoleSettings::~UPCGExCreateTensorSplinePoleSettings() {}
// ********** End Class UPCGExCreateTensorSplinePoleSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorSplinePoleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorSplinePoleConfig_Statics::NewStructOps, TEXT("PCGExTensorSplinePoleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorSplinePoleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorSplinePoleConfig), 4036656463U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSplinePoleFactory, UPCGExTensorSplinePoleFactory::StaticClass, TEXT("UPCGExTensorSplinePoleFactory"), &Z_Registration_Info_UClass_UPCGExTensorSplinePoleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSplinePoleFactory), 3214923399U) },
		{ Z_Construct_UClass_UPCGExCreateTensorSplinePoleSettings, UPCGExCreateTensorSplinePoleSettings::StaticClass, TEXT("UPCGExCreateTensorSplinePoleSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorSplinePoleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorSplinePoleSettings), 529659557U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_1702603479{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplinePole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
