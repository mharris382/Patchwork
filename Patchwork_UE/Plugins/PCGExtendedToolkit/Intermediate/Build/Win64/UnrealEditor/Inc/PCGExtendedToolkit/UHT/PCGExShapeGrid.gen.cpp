// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/Builders/PCGExShapeGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapeGrid() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeGridSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeGridSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeGridFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeGridFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeGridConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExShapeGridConfig *********************************************
struct Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShapeGridConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShapeGridConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeGrid.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShapeGridConfig constinit property declarations *************
// ********** End ScriptStruct FPCGExShapeGridConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShapeGridConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics
static_assert(std::is_polymorphic<FPCGExShapeGridConfig>() == std::is_polymorphic<FPCGExShapeConfigBase>(), "USTRUCT FPCGExShapeGridConfig cannot be polymorphic unless super FPCGExShapeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig;
class UScriptStruct* FPCGExShapeGridConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShapeGridConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShapeGridConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExShapeConfigBase,
	&NewStructOps,
	"PCGExShapeGridConfig",
	nullptr,
	0,
	sizeof(FPCGExShapeGridConfig),
	alignof(FPCGExShapeGridConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeGridConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShapeGridConfig ***********************************************

// ********** Begin Class UPCGExShapeGridFactory ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapeGridFactory;
UClass* UPCGExShapeGridFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExShapeGridFactory;
	if (!Z_Registration_Info_UClass_UPCGExShapeGridFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapeGridFactory"),
			Z_Registration_Info_UClass_UPCGExShapeGridFactory.InnerSingleton,
			StaticRegisterNativesUPCGExShapeGridFactory,
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
	return Z_Registration_Info_UClass_UPCGExShapeGridFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapeGridFactory_NoRegister()
{
	return UPCGExShapeGridFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapeGridFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapeGrid.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeGrid.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapeGridFactory constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShapeGridFactory constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapeGridFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapeGridFactory_Statics

// ********** Begin Class UPCGExShapeGridFactory Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShapeGridFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShapeGridFactory, Config), Z_Construct_UScriptStruct_FPCGExShapeGridConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2106805459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShapeGridFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShapeGridFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeGridFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShapeGridFactory Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPCGExShapeGridFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeGridFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapeGridFactory_Statics::ClassParams = {
	&UPCGExShapeGridFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShapeGridFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeGridFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeGridFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapeGridFactory_Statics::Class_MetaDataParams)
};
void UPCGExShapeGridFactory::StaticRegisterNativesUPCGExShapeGridFactory()
{
}
UClass* Z_Construct_UClass_UPCGExShapeGridFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExShapeGridFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapeGridFactory.OuterSingleton, Z_Construct_UClass_UPCGExShapeGridFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapeGridFactory.OuterSingleton;
}
UPCGExShapeGridFactory::UPCGExShapeGridFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapeGridFactory);
UPCGExShapeGridFactory::~UPCGExShapeGridFactory() {}
// ********** End Class UPCGExShapeGridFactory *****************************************************

// ********** Begin Class UPCGExCreateShapeGridSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings;
UClass* UPCGExCreateShapeGridSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateShapeGridSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateShapeGridSettings"),
			Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateShapeGridSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateShapeGridSettings_NoRegister()
{
	return UPCGExCreateShapeGridSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Builder|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapeGrid.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeGrid.h" },
		{ "PCGExNodeLibraryDoc", "misc/shapes/shape-grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shape properties */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeGrid.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Shape properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateShapeGridSettings constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateShapeGridSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateShapeGridSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics

// ********** Begin Class UPCGExCreateShapeGridSettings Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapeGridSettings, Config), Z_Construct_UScriptStruct_FPCGExShapeGridConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2106805459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateShapeGridSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::ClassParams = {
	&UPCGExCreateShapeGridSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateShapeGridSettings::StaticRegisterNativesUPCGExCreateShapeGridSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateShapeGridSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings.OuterSingleton;
}
UPCGExCreateShapeGridSettings::UPCGExCreateShapeGridSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateShapeGridSettings);
UPCGExCreateShapeGridSettings::~UPCGExCreateShapeGridSettings() {}
// ********** End Class UPCGExCreateShapeGridSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExShapeGridConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics::NewStructOps, TEXT("PCGExShapeGridConfig"),&Z_Registration_Info_UScriptStruct_FPCGExShapeGridConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShapeGridConfig), 2106805459U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShapeGridFactory, UPCGExShapeGridFactory::StaticClass, TEXT("UPCGExShapeGridFactory"), &Z_Registration_Info_UClass_UPCGExShapeGridFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapeGridFactory), 416357583U) },
		{ Z_Construct_UClass_UPCGExCreateShapeGridSettings, UPCGExCreateShapeGridSettings::StaticClass, TEXT("UPCGExCreateShapeGridSettings"), &Z_Registration_Info_UClass_UPCGExCreateShapeGridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateShapeGridSettings), 2743297454U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_489477560{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
