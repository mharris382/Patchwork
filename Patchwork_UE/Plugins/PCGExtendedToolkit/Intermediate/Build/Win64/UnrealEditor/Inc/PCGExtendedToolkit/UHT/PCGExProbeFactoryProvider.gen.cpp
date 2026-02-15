// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoProbe *******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoProbe); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoProbe); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Probe" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoProbe constinit property declarations ***********
// ********** End ScriptStruct FPCGExDataTypeInfoProbe constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoProbe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoProbe>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoProbe cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe;
class UScriptStruct* FPCGExDataTypeInfoProbe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoProbe"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoProbe",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoProbe),
	alignof(FPCGExDataTypeInfoProbe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoProbe *********************************************

// ********** Begin Class UPCGExProbeFactoryData ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryData;
UClass* UPCGExProbeFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryData"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryData_NoRegister()
{
	return UPCGExProbeFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryData constinit property declarations *******************
// ********** End Class UPCGExProbeFactoryData constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryData_Statics::ClassParams = {
	&UPCGExProbeFactoryData::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryData::StaticRegisterNativesUPCGExProbeFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryData.OuterSingleton;
}
UPCGExProbeFactoryData::UPCGExProbeFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryData);
UPCGExProbeFactoryData::~UPCGExProbeFactoryData() {}
// ********** End Class UPCGExProbeFactoryData *****************************************************

// ********** Begin Class UPCGExProbeFactoryProviderSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings;
UClass* UPCGExProbeFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_NoRegister()
{
	return UPCGExProbeFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryProviderSettings constinit property declarations *******
// ********** End Class UPCGExProbeFactoryProviderSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExProbeFactoryProviderSettings::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryProviderSettings::StaticRegisterNativesUPCGExProbeFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings.OuterSingleton;
}
UPCGExProbeFactoryProviderSettings::UPCGExProbeFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryProviderSettings);
UPCGExProbeFactoryProviderSettings::~UPCGExProbeFactoryProviderSettings() {}
// ********** End Class UPCGExProbeFactoryProviderSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoProbe::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoProbe_Statics::NewStructOps, TEXT("PCGExDataTypeInfoProbe"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoProbe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoProbe), 3912271329U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryData, UPCGExProbeFactoryData::StaticClass, TEXT("UPCGExProbeFactoryData"), &Z_Registration_Info_UClass_UPCGExProbeFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryData), 3199890459U) },
		{ Z_Construct_UClass_UPCGExProbeFactoryProviderSettings, UPCGExProbeFactoryProviderSettings::StaticClass, TEXT("UPCGExProbeFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryProviderSettings), 3139922107U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_1019645549{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
