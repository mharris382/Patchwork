// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicNodeCount() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigLeastNodes ***********************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigLeastNodes); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigLeastNodes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigLeastNodes constinit property declarations ***
// ********** End ScriptStruct FPCGExHeuristicConfigLeastNodes constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigLeastNodes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigLeastNodes>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigLeastNodes cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes;
class UScriptStruct* FPCGExHeuristicConfigLeastNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigLeastNodes"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigLeastNodes",
	nullptr,
	0,
	sizeof(FPCGExHeuristicConfigLeastNodes),
	alignof(FPCGExHeuristicConfigLeastNodes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigLeastNodes *************************************

// ********** Begin Class UPCGExHeuristicsFactoryLeastNodes ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes;
UClass* UPCGExHeuristicsFactoryLeastNodes::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryLeastNodes;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryLeastNodes"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryLeastNodes,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_NoRegister()
{
	return UPCGExHeuristicsFactoryLeastNodes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryLeastNodes constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryLeastNodes constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryLeastNodes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics

// ********** Begin Class UPCGExHeuristicsFactoryLeastNodes Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryLeastNodes, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1538429541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryLeastNodes Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryLeastNodes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryLeastNodes::StaticRegisterNativesUPCGExHeuristicsFactoryLeastNodes()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes.OuterSingleton;
}
UPCGExHeuristicsFactoryLeastNodes::UPCGExHeuristicsFactoryLeastNodes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryLeastNodes);
UPCGExHeuristicsFactoryLeastNodes::~UPCGExHeuristicsFactoryLeastNodes() {}
// ********** End Class UPCGExHeuristicsFactoryLeastNodes ******************************************

// ********** Begin Class UPCGExHeuristicsLeastNodesProviderSettings *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings;
UClass* UPCGExHeuristicsLeastNodesProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsLeastNodesProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsLeastNodesProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsLeastNodesProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_NoRegister()
{
	return UPCGExHeuristicsLeastNodesProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-least-nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicNodeCount.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsLeastNodesProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsLeastNodesProviderSettings constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsLeastNodesProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicsLeastNodesProviderSettings Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsLeastNodesProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1538429541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsLeastNodesProviderSettings Property Definitions ************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsLeastNodesProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsLeastNodesProviderSettings::StaticRegisterNativesUPCGExHeuristicsLeastNodesProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings.OuterSingleton;
}
UPCGExHeuristicsLeastNodesProviderSettings::UPCGExHeuristicsLeastNodesProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsLeastNodesProviderSettings);
UPCGExHeuristicsLeastNodesProviderSettings::~UPCGExHeuristicsLeastNodesProviderSettings() {}
// ********** End Class UPCGExHeuristicsLeastNodesProviderSettings *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigLeastNodes::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigLeastNodes_Statics::NewStructOps, TEXT("PCGExHeuristicConfigLeastNodes"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigLeastNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigLeastNodes), 1538429541U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryLeastNodes, UPCGExHeuristicsFactoryLeastNodes::StaticClass, TEXT("UPCGExHeuristicsFactoryLeastNodes"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryLeastNodes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryLeastNodes), 4055235444U) },
		{ Z_Construct_UClass_UPCGExHeuristicsLeastNodesProviderSettings, UPCGExHeuristicsLeastNodesProviderSettings::StaticClass, TEXT("UPCGExHeuristicsLeastNodesProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsLeastNodesProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsLeastNodesProviderSettings), 4143227883U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_460230178{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicNodeCount_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
