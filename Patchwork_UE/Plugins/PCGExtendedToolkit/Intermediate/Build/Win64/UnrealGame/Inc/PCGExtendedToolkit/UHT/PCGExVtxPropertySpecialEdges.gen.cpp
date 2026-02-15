// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVtxPropertySpecialEdges() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExSpecialEdgesConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSpecialEdgesConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSpecialEdgesConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortestEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shortest edge. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Shortest edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongestEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Longest edge. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Longest edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Average edge. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Average edge." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSpecialEdgesConfig constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShortestEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LongestEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AverageEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSpecialEdgesConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSpecialEdgesConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig;
class UScriptStruct* FPCGExSpecialEdgesConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSpecialEdgesConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSpecialEdgesConfig Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_ShortestEdge = { "ShortestEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSpecialEdgesConfig, ShortestEdge), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortestEdge_MetaData), NewProp_ShortestEdge_MetaData) }; // 2378656728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_LongestEdge = { "LongestEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSpecialEdgesConfig, LongestEdge), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongestEdge_MetaData), NewProp_LongestEdge_MetaData) }; // 2378656728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_AverageEdge = { "AverageEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSpecialEdgesConfig, AverageEdge), Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageEdge_MetaData), NewProp_AverageEdge_MetaData) }; // 2357795501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_ShortestEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_LongestEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewProp_AverageEdge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSpecialEdgesConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSpecialEdgesConfig",
	Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::PropPointers),
	sizeof(FPCGExSpecialEdgesConfig),
	alignof(FPCGExSpecialEdgesConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSpecialEdgesConfig ********************************************

// ********** Begin Class UPCGExVtxPropertySpecialEdgesFactory *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory;
UClass* UPCGExVtxPropertySpecialEdgesFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertySpecialEdgesFactory;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertySpecialEdgesFactory"),
			Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertySpecialEdgesFactory,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_NoRegister()
{
	return UPCGExVtxPropertySpecialEdgesFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertySpecialEdgesFactory constinit property declarations *****
// ********** End Class UPCGExVtxPropertySpecialEdgesFactory constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertySpecialEdgesFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::ClassParams = {
	&UPCGExVtxPropertySpecialEdgesFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertySpecialEdgesFactory::StaticRegisterNativesUPCGExVtxPropertySpecialEdgesFactory()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory.OuterSingleton;
}
UPCGExVtxPropertySpecialEdgesFactory::UPCGExVtxPropertySpecialEdgesFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertySpecialEdgesFactory);
UPCGExVtxPropertySpecialEdgesFactory::~UPCGExVtxPropertySpecialEdgesFactory() {}
// ********** End Class UPCGExVtxPropertySpecialEdgesFactory ***************************************

// ********** Begin Class UPCGExVtxPropertySpecialEdgesSettings ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings;
UClass* UPCGExVtxPropertySpecialEdgesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertySpecialEdgesSettings;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertySpecialEdgesSettings"),
			Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertySpecialEdgesSettings,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_NoRegister()
{
	return UPCGExVtxPropertySpecialEdgesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|VtxProperty" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/vtx-properties/vtx-special-edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction Settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertySpecialEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertySpecialEdgesSettings constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExVtxPropertySpecialEdgesSettings constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertySpecialEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics

// ********** Begin Class UPCGExVtxPropertySpecialEdgesSettings Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVtxPropertySpecialEdgesSettings, Config), Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1959327484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExVtxPropertySpecialEdgesSettings Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::ClassParams = {
	&UPCGExVtxPropertySpecialEdgesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertySpecialEdgesSettings::StaticRegisterNativesUPCGExVtxPropertySpecialEdgesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings.OuterSingleton;
}
UPCGExVtxPropertySpecialEdgesSettings::UPCGExVtxPropertySpecialEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertySpecialEdgesSettings);
UPCGExVtxPropertySpecialEdgesSettings::~UPCGExVtxPropertySpecialEdgesSettings() {}
// ********** End Class UPCGExVtxPropertySpecialEdgesSettings **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSpecialEdgesConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSpecialEdgesConfig_Statics::NewStructOps, TEXT("PCGExSpecialEdgesConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSpecialEdgesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSpecialEdgesConfig), 1959327484U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesFactory, UPCGExVtxPropertySpecialEdgesFactory::StaticClass, TEXT("UPCGExVtxPropertySpecialEdgesFactory"), &Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertySpecialEdgesFactory), 3210211811U) },
		{ Z_Construct_UClass_UPCGExVtxPropertySpecialEdgesSettings, UPCGExVtxPropertySpecialEdgesSettings::StaticClass, TEXT("UPCGExVtxPropertySpecialEdgesSettings"), &Z_Registration_Info_UClass_UPCGExVtxPropertySpecialEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertySpecialEdgesSettings), 3594951107U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_4126812024{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertySpecialEdges_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
