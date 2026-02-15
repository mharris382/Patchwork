// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVtxPropertySpecialNeighbors() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExSpecialNeighborsConfig **************************************
struct Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSpecialNeighborsConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSpecialNeighborsConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargestNeighbor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shortest edge. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shortest edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallestNeighbor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Longest edge. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Longest edge." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSpecialNeighborsConfig constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_LargestNeighbor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmallestNeighbor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSpecialNeighborsConfig constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSpecialNeighborsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig;
class UScriptStruct* FPCGExSpecialNeighborsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSpecialNeighborsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSpecialNeighborsConfig Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::NewProp_LargestNeighbor = { "LargestNeighbor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSpecialNeighborsConfig, LargestNeighbor), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargestNeighbor_MetaData), NewProp_LargestNeighbor_MetaData) }; // 2378656728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::NewProp_SmallestNeighbor = { "SmallestNeighbor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSpecialNeighborsConfig, SmallestNeighbor), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallestNeighbor_MetaData), NewProp_SmallestNeighbor_MetaData) }; // 2378656728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::NewProp_LargestNeighbor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::NewProp_SmallestNeighbor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSpecialNeighborsConfig Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSpecialNeighborsConfig",
	Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::PropPointers),
	sizeof(FPCGExSpecialNeighborsConfig),
	alignof(FPCGExSpecialNeighborsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSpecialNeighborsConfig ****************************************

// ********** Begin Class UPCGExVtxPropertySpecialNeighborsFactory *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory;
UClass* UPCGExVtxPropertySpecialNeighborsFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertySpecialNeighborsFactory;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertySpecialNeighborsFactory"),
			Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertySpecialNeighborsFactory,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_NoRegister()
{
	return UPCGExVtxPropertySpecialNeighborsFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertySpecialNeighborsFactory constinit property declarations *
// ********** End Class UPCGExVtxPropertySpecialNeighborsFactory constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertySpecialNeighborsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::ClassParams = {
	&UPCGExVtxPropertySpecialNeighborsFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertySpecialNeighborsFactory::StaticRegisterNativesUPCGExVtxPropertySpecialNeighborsFactory()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory.OuterSingleton;
}
UPCGExVtxPropertySpecialNeighborsFactory::UPCGExVtxPropertySpecialNeighborsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertySpecialNeighborsFactory);
UPCGExVtxPropertySpecialNeighborsFactory::~UPCGExVtxPropertySpecialNeighborsFactory() {}
// ********** End Class UPCGExVtxPropertySpecialNeighborsFactory ***********************************

// ********** Begin Class UPCGExVtxPropertySpecialNeighborsSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings;
UClass* UPCGExVtxPropertySpecialNeighborsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertySpecialNeighborsSettings;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertySpecialNeighborsSettings"),
			Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertySpecialNeighborsSettings,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_NoRegister()
{
	return UPCGExVtxPropertySpecialNeighborsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|VtxProperty" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/vtx-properties/vtx-special-neighbors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction Settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialNeighbors.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertySpecialNeighborsSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExVtxPropertySpecialNeighborsSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertySpecialNeighborsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics

// ********** Begin Class UPCGExVtxPropertySpecialNeighborsSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVtxPropertySpecialNeighborsSettings, Config), Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4252649328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExVtxPropertySpecialNeighborsSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::ClassParams = {
	&UPCGExVtxPropertySpecialNeighborsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertySpecialNeighborsSettings::StaticRegisterNativesUPCGExVtxPropertySpecialNeighborsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings.OuterSingleton;
}
UPCGExVtxPropertySpecialNeighborsSettings::UPCGExVtxPropertySpecialNeighborsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertySpecialNeighborsSettings);
UPCGExVtxPropertySpecialNeighborsSettings::~UPCGExVtxPropertySpecialNeighborsSettings() {}
// ********** End Class UPCGExVtxPropertySpecialNeighborsSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSpecialNeighborsConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSpecialNeighborsConfig_Statics::NewStructOps, TEXT("PCGExSpecialNeighborsConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSpecialNeighborsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSpecialNeighborsConfig), 4252649328U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsFactory, UPCGExVtxPropertySpecialNeighborsFactory::StaticClass, TEXT("UPCGExVtxPropertySpecialNeighborsFactory"), &Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertySpecialNeighborsFactory), 3512276200U) },
		{ Z_Construct_UClass_UPCGExVtxPropertySpecialNeighborsSettings, UPCGExVtxPropertySpecialNeighborsSettings::StaticClass, TEXT("UPCGExVtxPropertySpecialNeighborsSettings"), &Z_Registration_Info_UClass_UPCGExVtxPropertySpecialNeighborsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertySpecialNeighborsSettings), 1647677459U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_3666948626{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialNeighbors_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
