// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/PCGExActionFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExActionFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoAction ******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoAction); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoAction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/PCGExActionFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Action" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoAction constinit property declarations **********
// ********** End ScriptStruct FPCGExDataTypeInfoAction constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoAction>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoAction cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction;
class UScriptStruct* FPCGExDataTypeInfoAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoAction"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoAction",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoAction),
	alignof(FPCGExDataTypeInfoAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoAction ********************************************

// ********** Begin Class UPCGExActionFactoryData **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExActionFactoryData;
UClass* UPCGExActionFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExActionFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExActionFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExActionFactoryData"),
			Z_Registration_Info_UClass_UPCGExActionFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExActionFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExActionFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExActionFactoryData_NoRegister()
{
	return UPCGExActionFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExActionFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Actions/PCGExActionFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/PCGExActionFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExActionFactoryData constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExActionFactoryData constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExActionFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExActionFactoryData_Statics

// ********** Begin Class UPCGExActionFactoryData Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExActionFactoryData_Statics::NewProp_FilterFactories_Inner = { "FilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExActionFactoryData_Statics::NewProp_FilterFactories = { "FilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExActionFactoryData, FilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFactories_MetaData), NewProp_FilterFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExActionFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActionFactoryData_Statics::NewProp_FilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActionFactoryData_Statics::NewProp_FilterFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExActionFactoryData Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExActionFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExActionFactoryData_Statics::ClassParams = {
	&UPCGExActionFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExActionFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionFactoryData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExActionFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExActionFactoryData::StaticRegisterNativesUPCGExActionFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExActionFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExActionFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExActionFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExActionFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExActionFactoryData.OuterSingleton;
}
UPCGExActionFactoryData::UPCGExActionFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExActionFactoryData);
UPCGExActionFactoryData::~UPCGExActionFactoryData() {}
// ********** End Class UPCGExActionFactoryData ****************************************************

// ********** Begin Class UPCGExActionProviderSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExActionProviderSettings;
UClass* UPCGExActionProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExActionProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExActionProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExActionProviderSettings"),
			Z_Registration_Info_UClass_UPCGExActionProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExActionProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExActionProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExActionProviderSettings_NoRegister()
{
	return UPCGExActionProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExActionProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Action" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Actions/PCGExActionFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Priority for transmutation order. Higher values are processed last. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Priority for transmutation order. Higher values are processed last." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExActionProviderSettings constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExActionProviderSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExActionProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExActionProviderSettings_Statics

// ********** Begin Class UPCGExActionProviderSettings Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExActionProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExActionProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExActionProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActionProviderSettings_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExActionProviderSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExActionProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExActionProviderSettings_Statics::ClassParams = {
	&UPCGExActionProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExActionProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionProviderSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExActionProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExActionProviderSettings::StaticRegisterNativesUPCGExActionProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExActionProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExActionProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExActionProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExActionProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExActionProviderSettings.OuterSingleton;
}
UPCGExActionProviderSettings::UPCGExActionProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExActionProviderSettings);
UPCGExActionProviderSettings::~UPCGExActionProviderSettings() {}
// ********** End Class UPCGExActionProviderSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoAction::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoAction_Statics::NewStructOps, TEXT("PCGExDataTypeInfoAction"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoAction), 716410220U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExActionFactoryData, UPCGExActionFactoryData::StaticClass, TEXT("UPCGExActionFactoryData"), &Z_Registration_Info_UClass_UPCGExActionFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExActionFactoryData), 1308361025U) },
		{ Z_Construct_UClass_UPCGExActionProviderSettings, UPCGExActionProviderSettings::StaticClass, TEXT("UPCGExActionProviderSettings"), &Z_Registration_Info_UClass_UPCGExActionProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExActionProviderSettings), 4080541521U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_2371157945{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
