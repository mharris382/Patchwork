// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorPole.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorPole() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPoleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPoleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPoleFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPoleFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPoleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorPoleConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorPoleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorPoleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPole.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorPoleConfig constinit property declarations ************
// ********** End ScriptStruct FPCGExTensorPoleConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorPoleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorPoleConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorPoleConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig;
class UScriptStruct* FPCGExTensorPoleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorPoleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorPoleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorPoleConfig",
	nullptr,
	0,
	sizeof(FPCGExTensorPoleConfig),
	alignof(FPCGExTensorPoleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPoleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorPoleConfig **********************************************

// ********** Begin Class UPCGExTensorPoleFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorPoleFactory;
UClass* UPCGExTensorPoleFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorPoleFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorPoleFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorPoleFactory"),
			Z_Registration_Info_UClass_UPCGExTensorPoleFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorPoleFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorPoleFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorPoleFactory_NoRegister()
{
	return UPCGExTensorPoleFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorPoleFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPole.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorPoleFactory constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorPoleFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorPoleFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorPoleFactory_Statics

// ********** Begin Class UPCGExTensorPoleFactory Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorPoleFactory, Config), Z_Construct_UScriptStruct_FPCGExTensorPoleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1447951329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorPoleFactory Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::ClassParams = {
	&UPCGExTensorPoleFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorPoleFactory::StaticRegisterNativesUPCGExTensorPoleFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorPoleFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorPoleFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorPoleFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorPoleFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorPoleFactory.OuterSingleton;
}
UPCGExTensorPoleFactory::UPCGExTensorPoleFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorPoleFactory);
UPCGExTensorPoleFactory::~UPCGExTensorPoleFactory() {}
// ********** End Class UPCGExTensorPoleFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorPoleSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings;
UClass* UPCGExCreateTensorPoleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorPoleSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorPoleSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorPoleSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPoleSettings_NoRegister()
{
	return UPCGExCreateTensorPoleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPole.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-pole" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPole.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorPoleSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorPoleSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorPoleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics

// ********** Begin Class UPCGExCreateTensorPoleSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorPoleSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorPoleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1447951329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorPoleSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::ClassParams = {
	&UPCGExCreateTensorPoleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorPoleSettings::StaticRegisterNativesUPCGExCreateTensorPoleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPoleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings.OuterSingleton;
}
UPCGExCreateTensorPoleSettings::UPCGExCreateTensorPoleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorPoleSettings);
UPCGExCreateTensorPoleSettings::~UPCGExCreateTensorPoleSettings() {}
// ********** End Class UPCGExCreateTensorPoleSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorPoleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics::NewStructOps, TEXT("PCGExTensorPoleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorPoleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorPoleConfig), 1447951329U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorPoleFactory, UPCGExTensorPoleFactory::StaticClass, TEXT("UPCGExTensorPoleFactory"), &Z_Registration_Info_UClass_UPCGExTensorPoleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorPoleFactory), 2068925367U) },
		{ Z_Construct_UClass_UPCGExCreateTensorPoleSettings, UPCGExCreateTensorPoleSettings::StaticClass, TEXT("UPCGExCreateTensorPoleSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorPoleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorPoleSettings), 1607310424U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_1517809118{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
