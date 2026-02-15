// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorNull.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorNull() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorNullSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorNullSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorNullFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorNullFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorNullConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorNullConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorNullConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorNullConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorNull.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorNullConfig constinit property declarations ************
// ********** End ScriptStruct FPCGExTensorNullConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorNullConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorNullConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorNullConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig;
class UScriptStruct* FPCGExTensorNullConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorNullConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorNullConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorNullConfig",
	nullptr,
	0,
	sizeof(FPCGExTensorNullConfig),
	alignof(FPCGExTensorNullConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorNullConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorNullConfig **********************************************

// ********** Begin Class UPCGExTensorNullFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorNullFactory;
UClass* UPCGExTensorNullFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorNullFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorNullFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorNullFactory"),
			Z_Registration_Info_UClass_UPCGExTensorNullFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorNullFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorNullFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorNullFactory_NoRegister()
{
	return UPCGExTensorNullFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorNullFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorNull.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorNull.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorNullFactory constinit property declarations ******************
// ********** End Class UPCGExTensorNullFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorNullFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorNullFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorNullFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorNullFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorNullFactory_Statics::ClassParams = {
	&UPCGExTensorNullFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorNullFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorNullFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorNullFactory::StaticRegisterNativesUPCGExTensorNullFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorNullFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorNullFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorNullFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorNullFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorNullFactory.OuterSingleton;
}
UPCGExTensorNullFactory::UPCGExTensorNullFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorNullFactory);
UPCGExTensorNullFactory::~UPCGExTensorNullFactory() {}
// ********** End Class UPCGExTensorNullFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorNullSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings;
UClass* UPCGExCreateTensorNullSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorNullSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorNullSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorNullSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorNullSettings_NoRegister()
{
	return UPCGExCreateTensorNullSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorNull.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorNull.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-null" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorNull.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorNullSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorNullSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorNullSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics

// ********** Begin Class UPCGExCreateTensorNullSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorNullSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorNullConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1074263540
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorNullSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::ClassParams = {
	&UPCGExCreateTensorNullSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorNullSettings::StaticRegisterNativesUPCGExCreateTensorNullSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorNullSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorNullSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings.OuterSingleton;
}
UPCGExCreateTensorNullSettings::UPCGExCreateTensorNullSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorNullSettings);
UPCGExCreateTensorNullSettings::~UPCGExCreateTensorNullSettings() {}
// ********** End Class UPCGExCreateTensorNullSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorNullConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorNullConfig_Statics::NewStructOps, TEXT("PCGExTensorNullConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorNullConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorNullConfig), 1074263540U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorNullFactory, UPCGExTensorNullFactory::StaticClass, TEXT("UPCGExTensorNullFactory"), &Z_Registration_Info_UClass_UPCGExTensorNullFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorNullFactory), 4031716640U) },
		{ Z_Construct_UClass_UPCGExCreateTensorNullSettings, UPCGExCreateTensorNullSettings::StaticClass, TEXT("UPCGExCreateTensorNullSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorNullSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorNullSettings), 1632286921U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_2105529871{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorNull_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
