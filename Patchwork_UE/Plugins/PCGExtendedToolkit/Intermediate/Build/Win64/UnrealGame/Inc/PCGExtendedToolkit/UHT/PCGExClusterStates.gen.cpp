// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/States/PCGExClusterStates.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExClusterStates() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterStateFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterStateFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStateConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExClusterStateConfigBase **************************************
struct Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExClusterStateConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExClusterStateConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExClusterStateConfigBase constinit property declarations ******
// ********** End ScriptStruct FPCGExClusterStateConfigBase constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExClusterStateConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics
static_assert(std::is_polymorphic<FPCGExClusterStateConfigBase>() == std::is_polymorphic<FPCGExStateConfigBase>(), "USTRUCT FPCGExClusterStateConfigBase cannot be polymorphic unless super FPCGExStateConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase;
class UScriptStruct* FPCGExClusterStateConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExClusterStateConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExStateConfigBase,
	&NewStructOps,
	"PCGExClusterStateConfigBase",
	nullptr,
	0,
	sizeof(FPCGExClusterStateConfigBase),
	alignof(FPCGExClusterStateConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExClusterStateConfigBase ****************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoClusterState ************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoClusterState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoClusterState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Cluster State" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoClusterState constinit property declarations ****
// ********** End ScriptStruct FPCGExDataTypeInfoClusterState constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoClusterState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoClusterState>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoClusterState cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState;
class UScriptStruct* FPCGExDataTypeInfoClusterState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoClusterState"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoClusterState",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoClusterState),
	alignof(FPCGExDataTypeInfoClusterState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoClusterState **************************************

// ********** Begin Class UPCGExClusterStateFactoryData ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterStateFactoryData;
UClass* UPCGExClusterStateFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterStateFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterStateFactoryData"),
			Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExClusterStateFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterStateFactoryData_NoRegister()
{
	return UPCGExClusterStateFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/States/PCGExClusterStates.h" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterStateFactoryData constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExClusterStateFactoryData constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterStateFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics

// ********** Begin Class UPCGExClusterStateFactoryData Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterStateFactoryData, Config), Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1664788129
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_FilterFactories_Inner = { "FilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_FilterFactories = { "FilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterStateFactoryData, FilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterFactories_MetaData), NewProp_FilterFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_FilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::NewProp_FilterFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExClusterStateFactoryData Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExClusterFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::ClassParams = {
	&UPCGExClusterStateFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExClusterStateFactoryData::StaticRegisterNativesUPCGExClusterStateFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExClusterStateFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExClusterStateFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterStateFactoryData.OuterSingleton;
}
UPCGExClusterStateFactoryData::UPCGExClusterStateFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterStateFactoryData);
UPCGExClusterStateFactoryData::~UPCGExClusterStateFactoryData() {}
// ********** End Class UPCGExClusterStateFactoryData **********************************************

// ********** Begin Class UPCGExClusterStateFactoryProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings;
UClass* UPCGExClusterStateFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterStateFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterStateFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExClusterStateFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_NoRegister()
{
	return UPCGExClusterStateFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/States/PCGExClusterStates.h" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/flag-nodes/node-flag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExClusterStates.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterStateFactoryProviderSettings constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExClusterStateFactoryProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterStateFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics

// ********** Begin Class UPCGExClusterStateFactoryProviderSettings Property Definitions ***********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterStateFactoryProviderSettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterStateFactoryProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterStateFactoryProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1664788129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExClusterStateFactoryProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExClusterStateFactoryProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExClusterStateFactoryProviderSettings::StaticRegisterNativesUPCGExClusterStateFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings.OuterSingleton;
}
UPCGExClusterStateFactoryProviderSettings::UPCGExClusterStateFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterStateFactoryProviderSettings);
UPCGExClusterStateFactoryProviderSettings::~UPCGExClusterStateFactoryProviderSettings() {}
// ********** End Class UPCGExClusterStateFactoryProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExClusterStateConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExClusterStateConfigBase_Statics::NewStructOps, TEXT("PCGExClusterStateConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExClusterStateConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExClusterStateConfigBase), 1664788129U) },
		{ FPCGExDataTypeInfoClusterState::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterState_Statics::NewStructOps, TEXT("PCGExDataTypeInfoClusterState"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoClusterState), 3438477399U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExClusterStateFactoryData, UPCGExClusterStateFactoryData::StaticClass, TEXT("UPCGExClusterStateFactoryData"), &Z_Registration_Info_UClass_UPCGExClusterStateFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterStateFactoryData), 3181145702U) },
		{ Z_Construct_UClass_UPCGExClusterStateFactoryProviderSettings, UPCGExClusterStateFactoryProviderSettings::StaticClass, TEXT("UPCGExClusterStateFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExClusterStateFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterStateFactoryProviderSettings), 2090041240U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_2195010471{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExClusterStates_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
