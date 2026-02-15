// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicAzimuth() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigAzimuth **************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigAzimuth); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigAzimuth); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigAzimuth constinit property declarations ******
// ********** End ScriptStruct FPCGExHeuristicConfigAzimuth constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigAzimuth>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigAzimuth>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigAzimuth cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth;
class UScriptStruct* FPCGExHeuristicConfigAzimuth::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigAzimuth"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigAzimuth",
	nullptr,
	0,
	sizeof(FPCGExHeuristicConfigAzimuth),
	alignof(FPCGExHeuristicConfigAzimuth),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigAzimuth ****************************************

// ********** Begin Class UPCGExHeuristicsFactoryAzimuth *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth;
UClass* UPCGExHeuristicsFactoryAzimuth::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryAzimuth;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryAzimuth"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryAzimuth,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_NoRegister()
{
	return UPCGExHeuristicsFactoryAzimuth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryAzimuth constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryAzimuth constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryAzimuth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics

// ********** Begin Class UPCGExHeuristicsFactoryAzimuth Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryAzimuth, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1084773289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryAzimuth Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryAzimuth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryAzimuth::StaticRegisterNativesUPCGExHeuristicsFactoryAzimuth()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth.OuterSingleton;
}
UPCGExHeuristicsFactoryAzimuth::UPCGExHeuristicsFactoryAzimuth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryAzimuth);
UPCGExHeuristicsFactoryAzimuth::~UPCGExHeuristicsFactoryAzimuth() {}
// ********** End Class UPCGExHeuristicsFactoryAzimuth *********************************************

// ********** Begin Class UPCGExHeuristicsAzimuthProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings;
UClass* UPCGExHeuristicsAzimuthProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsAzimuthProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsAzimuthProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsAzimuthProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_NoRegister()
{
	return UPCGExHeuristicsAzimuthProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-azimuth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAzimuth.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsAzimuthProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsAzimuthProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsAzimuthProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicsAzimuthProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsAzimuthProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1084773289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsAzimuthProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsAzimuthProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsAzimuthProviderSettings::StaticRegisterNativesUPCGExHeuristicsAzimuthProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings.OuterSingleton;
}
UPCGExHeuristicsAzimuthProviderSettings::UPCGExHeuristicsAzimuthProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsAzimuthProviderSettings);
UPCGExHeuristicsAzimuthProviderSettings::~UPCGExHeuristicsAzimuthProviderSettings() {}
// ********** End Class UPCGExHeuristicsAzimuthProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigAzimuth::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigAzimuth_Statics::NewStructOps, TEXT("PCGExHeuristicConfigAzimuth"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigAzimuth, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigAzimuth), 1084773289U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryAzimuth, UPCGExHeuristicsFactoryAzimuth::StaticClass, TEXT("UPCGExHeuristicsFactoryAzimuth"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAzimuth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryAzimuth), 469982429U) },
		{ Z_Construct_UClass_UPCGExHeuristicsAzimuthProviderSettings, UPCGExHeuristicsAzimuthProviderSettings::StaticClass, TEXT("UPCGExHeuristicsAzimuthProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsAzimuthProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsAzimuthProviderSettings), 1263102262U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_2042152085{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAzimuth_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
