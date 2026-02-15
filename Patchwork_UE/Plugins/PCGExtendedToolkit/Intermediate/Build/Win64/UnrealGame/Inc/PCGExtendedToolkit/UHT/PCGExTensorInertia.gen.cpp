// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorInertia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorInertia() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorInertiaFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorInertiaFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorInertiaConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorInertiaConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorInertiaConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInertiaOnce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will set a constant per-point inertia based on the original point transform */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will set a constant per-point inertia based on the original point transform" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorInertiaConfig constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static void NewProp_bSetInertiaOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInertiaOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorInertiaConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorInertiaConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorInertiaConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorInertiaConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig;
class UScriptStruct* FPCGExTensorInertiaConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorInertiaConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorInertiaConfig Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorInertiaConfig, Axis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 1564008668
void Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_bSetInertiaOnce_SetBit(void* Obj)
{
	((FPCGExTensorInertiaConfig*)Obj)->bSetInertiaOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_bSetInertiaOnce = { "bSetInertiaOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorInertiaConfig), &Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_bSetInertiaOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInertiaOnce_MetaData), NewProp_bSetInertiaOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewProp_bSetInertiaOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorInertiaConfig Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorInertiaConfig",
	Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::PropPointers),
	sizeof(FPCGExTensorInertiaConfig),
	alignof(FPCGExTensorInertiaConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorInertiaConfig *******************************************

// ********** Begin Class UPCGExTensorInertiaFactory ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorInertiaFactory;
UClass* UPCGExTensorInertiaFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorInertiaFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorInertiaFactory"),
			Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorInertiaFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorInertiaFactory_NoRegister()
{
	return UPCGExTensorInertiaFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorInertia.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorInertiaFactory constinit property declarations ***************
// ********** End Class UPCGExTensorInertiaFactory constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorInertiaFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::ClassParams = {
	&UPCGExTensorInertiaFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorInertiaFactory::StaticRegisterNativesUPCGExTensorInertiaFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorInertiaFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorInertiaFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorInertiaFactory.OuterSingleton;
}
UPCGExTensorInertiaFactory::UPCGExTensorInertiaFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorInertiaFactory);
UPCGExTensorInertiaFactory::~UPCGExTensorInertiaFactory() {}
// ********** End Class UPCGExTensorInertiaFactory *************************************************

// ********** Begin Class UPCGExCreateTensorInertiaSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings;
UClass* UPCGExCreateTensorInertiaSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorInertiaSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorInertiaSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorInertiaSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_NoRegister()
{
	return UPCGExCreateTensorInertiaSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorInertia.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-inertia" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorInertiaSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorInertiaSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorInertiaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics

// ********** Begin Class UPCGExCreateTensorInertiaSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 301708903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorInertiaSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::ClassParams = {
	&UPCGExCreateTensorInertiaSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorInertiaSettings::StaticRegisterNativesUPCGExCreateTensorInertiaSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorInertiaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings.OuterSingleton;
}
UPCGExCreateTensorInertiaSettings::UPCGExCreateTensorInertiaSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorInertiaSettings);
UPCGExCreateTensorInertiaSettings::~UPCGExCreateTensorInertiaSettings() {}
// ********** End Class UPCGExCreateTensorInertiaSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorInertiaConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorInertiaConfig_Statics::NewStructOps, TEXT("PCGExTensorInertiaConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorInertiaConfig), 301708903U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorInertiaFactory, UPCGExTensorInertiaFactory::StaticClass, TEXT("UPCGExTensorInertiaFactory"), &Z_Registration_Info_UClass_UPCGExTensorInertiaFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorInertiaFactory), 1092799776U) },
		{ Z_Construct_UClass_UPCGExCreateTensorInertiaSettings, UPCGExCreateTensorInertiaSettings::StaticClass, TEXT("UPCGExCreateTensorInertiaSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorInertiaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorInertiaSettings), 126843969U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_1034254417{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertia_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
