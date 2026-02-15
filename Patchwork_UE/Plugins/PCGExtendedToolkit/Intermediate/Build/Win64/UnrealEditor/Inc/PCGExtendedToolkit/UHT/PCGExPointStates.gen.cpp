// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExPointStates.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPointStates() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointStateFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointStateFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStateConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExStateConfigBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExStateConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExStateConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnTestPass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flags */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassStateFlags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operations executed on the flag if all filters pass */" },
		{ "EditCondition", "bOnTestPass" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operations executed on the flag if all filters pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnTestFail_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flags */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailStateFlags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operations executed on the flag if any filters fail */" },
		{ "EditCondition", "bOnTestFail" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operations executed on the flag if any filters fail" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExStateConfigBase constinit property declarations *************
	static void NewProp_bOnTestPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnTestPass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassStateFlags;
	static void NewProp_bOnTestFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnTestFail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailStateFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExStateConfigBase constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExStateConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase;
class UScriptStruct* FPCGExStateConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExStateConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExStateConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExStateConfigBase Property Definitions ************************
void Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestPass_SetBit(void* Obj)
{
	((FPCGExStateConfigBase*)Obj)->bOnTestPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestPass = { "bOnTestPass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExStateConfigBase), &Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnTestPass_MetaData), NewProp_bOnTestPass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_PassStateFlags = { "PassStateFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStateConfigBase, PassStateFlags), Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassStateFlags_MetaData), NewProp_PassStateFlags_MetaData) }; // 1333450829
void Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestFail_SetBit(void* Obj)
{
	((FPCGExStateConfigBase*)Obj)->bOnTestFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestFail = { "bOnTestFail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExStateConfigBase), &Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnTestFail_MetaData), NewProp_bOnTestFail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_FailStateFlags = { "FailStateFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStateConfigBase, FailStateFlags), Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailStateFlags_MetaData), NewProp_FailStateFlags_MetaData) }; // 1333450829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_PassStateFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_bOnTestFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewProp_FailStateFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExStateConfigBase Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExStateConfigBase",
	Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::PropPointers),
	sizeof(FPCGExStateConfigBase),
	alignof(FPCGExStateConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExStateConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExStateConfigBase ***********************************************

// ********** Begin Class UPCGExPointStateFactoryData **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPointStateFactoryData;
UClass* UPCGExPointStateFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExPointStateFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExPointStateFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPointStateFactoryData"),
			Z_Registration_Info_UClass_UPCGExPointStateFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExPointStateFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExPointStateFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPointStateFactoryData_NoRegister()
{
	return UPCGExPointStateFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPointStateFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/PCGExPointStates.h" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPointStateFactoryData constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPointStateFactoryData constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPointStateFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPointStateFactoryData_Statics

// ********** Begin Class UPCGExPointStateFactoryData Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::NewProp_FilterFactories_Inner = { "FilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::NewProp_FilterFactories = { "FilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointStateFactoryData, FilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFactories_MetaData), NewProp_FilterFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::NewProp_FilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::NewProp_FilterFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPointStateFactoryData Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::ClassParams = {
	&UPCGExPointStateFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExPointStateFactoryData::StaticRegisterNativesUPCGExPointStateFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExPointStateFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExPointStateFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPointStateFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExPointStateFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPointStateFactoryData.OuterSingleton;
}
UPCGExPointStateFactoryData::UPCGExPointStateFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPointStateFactoryData);
UPCGExPointStateFactoryData::~UPCGExPointStateFactoryData() {}
// ********** End Class UPCGExPointStateFactoryData ************************************************

// ********** Begin Class UPCGExPointStateFactoryProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings;
UClass* UPCGExPointStateFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPointStateFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPointStateFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPointStateFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_NoRegister()
{
	return UPCGExPointStateFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGExPointStates.h" },
		{ "ModuleRelativePath", "Public/Data/PCGExPointStates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPointStateFactoryProviderSettings constinit property declarations **
// ********** End Class UPCGExPointStateFactoryProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPointStateFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExPointStateFactoryProviderSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExPointStateFactoryProviderSettings::StaticRegisterNativesUPCGExPointStateFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings.OuterSingleton;
}
UPCGExPointStateFactoryProviderSettings::UPCGExPointStateFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPointStateFactoryProviderSettings);
UPCGExPointStateFactoryProviderSettings::~UPCGExPointStateFactoryProviderSettings() {}
// ********** End Class UPCGExPointStateFactoryProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExStateConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExStateConfigBase_Statics::NewStructOps, TEXT("PCGExStateConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExStateConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExStateConfigBase), 2714959028U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPointStateFactoryData, UPCGExPointStateFactoryData::StaticClass, TEXT("UPCGExPointStateFactoryData"), &Z_Registration_Info_UClass_UPCGExPointStateFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPointStateFactoryData), 871216645U) },
		{ Z_Construct_UClass_UPCGExPointStateFactoryProviderSettings, UPCGExPointStateFactoryProviderSettings::StaticClass, TEXT("UPCGExPointStateFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExPointStateFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPointStateFactoryProviderSettings), 328893576U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_3761453282{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExPointStates_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
