// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExParamDataBase();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExParamDataBase_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFactoryDataTypeInfo *****************************************
struct Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFactoryDataTypeInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFactoryDataTypeInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "PCGEx Subnode" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFactoryDataTypeInfo constinit property declarations *********
// ********** End ScriptStruct FPCGExFactoryDataTypeInfo constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFactoryDataTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics
static_assert(std::is_polymorphic<FPCGExFactoryDataTypeInfo>() == std::is_polymorphic<FPCGDataTypeInfo>(), "USTRUCT FPCGExFactoryDataTypeInfo cannot be polymorphic unless super FPCGDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo;
class UScriptStruct* FPCGExFactoryDataTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFactoryDataTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGDataTypeInfo,
	&NewStructOps,
	"PCGExFactoryDataTypeInfo",
	nullptr,
	0,
	sizeof(FPCGExFactoryDataTypeInfo),
	alignof(FPCGExFactoryDataTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFactoryDataTypeInfo *******************************************

// ********** Begin Class UPCGExParamDataBase ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExParamDataBase;
UClass* UPCGExParamDataBase::GetPrivateStaticClass()
{
	using TClass = UPCGExParamDataBase;
	if (!Z_Registration_Info_UClass_UPCGExParamDataBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExParamDataBase"),
			Z_Registration_Info_UClass_UPCGExParamDataBase.InnerSingleton,
			StaticRegisterNativesUPCGExParamDataBase,
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
	return Z_Registration_Info_UClass_UPCGExParamDataBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExParamDataBase_NoRegister()
{
	return UPCGExParamDataBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExParamDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PCGExFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExParamDataBase constinit property declarations **********************
// ********** End Class UPCGExParamDataBase constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExParamDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExParamDataBase_Statics
UObject* (*const Z_Construct_UClass_UPCGExParamDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExParamDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExParamDataBase_Statics::ClassParams = {
	&UPCGExParamDataBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExParamDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExParamDataBase_Statics::Class_MetaDataParams)
};
void UPCGExParamDataBase::StaticRegisterNativesUPCGExParamDataBase()
{
}
UClass* Z_Construct_UClass_UPCGExParamDataBase()
{
	if (!Z_Registration_Info_UClass_UPCGExParamDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExParamDataBase.OuterSingleton, Z_Construct_UClass_UPCGExParamDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExParamDataBase.OuterSingleton;
}
UPCGExParamDataBase::UPCGExParamDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExParamDataBase);
UPCGExParamDataBase::~UPCGExParamDataBase() {}
// ********** End Class UPCGExParamDataBase ********************************************************

// ********** Begin Class UPCGExFactoryData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFactoryData;
UClass* UPCGExFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFactoryData"),
			Z_Registration_Info_UClass_UPCGExFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFactoryData_NoRegister()
{
	return UPCGExFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PCGExFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanupConsumableAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGExDataVersion_MetaData[] = {
		{ "Comment", "/** Store version of factory node, used for deprecation purposes */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "ToolTip", "Store version of factory node, used for deprecation purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFactoryData constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bCleanupConsumableAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanupConsumableAttributes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PCGExDataVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataDependencies_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DataDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFactoryData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFactoryData_Statics

// ********** Begin Class UPCGExFactoryData Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFactoryData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_bCleanupConsumableAttributes_SetBit(void* Obj)
{
	((UPCGExFactoryData*)Obj)->bCleanupConsumableAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_bCleanupConsumableAttributes = { "bCleanupConsumableAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFactoryData), &Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_bCleanupConsumableAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanupConsumableAttributes_MetaData), NewProp_bCleanupConsumableAttributes_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_PCGExDataVersion = { "PCGExDataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFactoryData, PCGExDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGExDataVersion_MetaData), NewProp_PCGExDataVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_DataDependencies_ElementProp = { "DataDependencies", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_DataDependencies = { "DataDependencies", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFactoryData, DataDependencies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataDependencies_MetaData), NewProp_DataDependencies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_bCleanupConsumableAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_PCGExDataVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_DataDependencies_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryData_Statics::NewProp_DataDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFactoryData Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UPCGExFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExParamDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFactoryData_Statics::ClassParams = {
	&UPCGExFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExFactoryData::StaticRegisterNativesUPCGExFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFactoryData.OuterSingleton;
}
UPCGExFactoryData::UPCGExFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFactoryData);
UPCGExFactoryData::~UPCGExFactoryData() {}
// ********** End Class UPCGExFactoryData **********************************************************

// ********** Begin Class UPCGExFactoryProviderSettings Function EDITOR_OpenNodeDocumentation ******
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tools" },
		{ "Comment", "/** Open a browser and navigate to that node' documentation page. */" },
		{ "DisplayName", "Node Documentation" },
		{ "DisplayOrder", "-1" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "ShortToolTip", "Open a browser and navigate to that node' documentation page" },
		{ "ToolTip", "Open a browser and navigate to that node' documentation page." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_OpenNodeDocumentation constinit property declarations **********
// ********** End Function EDITOR_OpenNodeDocumentation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExFactoryProviderSettings, nullptr, "EDITOR_OpenNodeDocumentation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExFactoryProviderSettings::execEDITOR_OpenNodeDocumentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_OpenNodeDocumentation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExFactoryProviderSettings Function EDITOR_OpenNodeDocumentation ********

// ********** Begin Class UPCGExFactoryProviderSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFactoryProviderSettings;
UClass* UPCGExFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings_NoRegister()
{
	return UPCGExFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGExFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalCacheInvalidator_MetaData[] = {
		{ "Comment", "/** A dummy property used to drive cache invalidation on settings changes */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "ToolTip", "A dummy property used to drive cache invalidation on settings changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachingBehavior_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Cache the results of this node. Can yield unexpected result in certain cases.*/" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Cache the results of this node. Can yield unexpected result in certain cases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanupConsumableAttributes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Whether this factory can register consumable attributes or not. */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether this factory can register consumable attributes or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietInvalidInputWarning_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingAttributeError_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingInputError_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** If enabled, will turn off missing input errors on factories that have inputs with missing or no data. */" },
		{ "ModuleRelativePath", "Public/PCGExFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will turn off missing input errors on factories that have inputs with missing or no data." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFactoryProviderSettings constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InternalCacheInvalidator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachingBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CachingBehavior;
	static void NewProp_bCleanupConsumableAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanupConsumableAttributes;
	static void NewProp_bQuietInvalidInputWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietInvalidInputWarning;
	static void NewProp_bQuietMissingAttributeError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingAttributeError;
	static void NewProp_bQuietMissingInputError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingInputError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFactoryProviderSettings constinit property declarations **************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EDITOR_OpenNodeDocumentation"), .Pointer = &UPCGExFactoryProviderSettings::execEDITOR_OpenNodeDocumentation },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExFactoryProviderSettings_EDITOR_OpenNodeDocumentation, "EDITOR_OpenNodeDocumentation" }, // 2742392280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics

// ********** Begin Class UPCGExFactoryProviderSettings Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_InternalCacheInvalidator = { "InternalCacheInvalidator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFactoryProviderSettings, InternalCacheInvalidator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalCacheInvalidator_MetaData), NewProp_InternalCacheInvalidator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_CachingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_CachingBehavior = { "CachingBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFactoryProviderSettings, CachingBehavior), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachingBehavior_MetaData), NewProp_CachingBehavior_MetaData) }; // 2151781571
void Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bCleanupConsumableAttributes_SetBit(void* Obj)
{
	((UPCGExFactoryProviderSettings*)Obj)->bCleanupConsumableAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bCleanupConsumableAttributes = { "bCleanupConsumableAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFactoryProviderSettings), &Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bCleanupConsumableAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanupConsumableAttributes_MetaData), NewProp_bCleanupConsumableAttributes_MetaData) };
void Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietInvalidInputWarning_SetBit(void* Obj)
{
	((UPCGExFactoryProviderSettings*)Obj)->bQuietInvalidInputWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietInvalidInputWarning = { "bQuietInvalidInputWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFactoryProviderSettings), &Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietInvalidInputWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietInvalidInputWarning_MetaData), NewProp_bQuietInvalidInputWarning_MetaData) };
void Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingAttributeError_SetBit(void* Obj)
{
	((UPCGExFactoryProviderSettings*)Obj)->bQuietMissingAttributeError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingAttributeError = { "bQuietMissingAttributeError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFactoryProviderSettings), &Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingAttributeError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingAttributeError_MetaData), NewProp_bQuietMissingAttributeError_MetaData) };
void Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingInputError_SetBit(void* Obj)
{
	((UPCGExFactoryProviderSettings*)Obj)->bQuietMissingInputError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingInputError = { "bQuietMissingInputError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFactoryProviderSettings), &Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingInputError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingInputError_MetaData), NewProp_bQuietMissingInputError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_InternalCacheInvalidator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_CachingBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_CachingBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bCleanupConsumableAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietInvalidInputWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingAttributeError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::NewProp_bQuietMissingInputError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFactoryProviderSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExFactoryProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFactoryProviderSettings::StaticRegisterNativesUPCGExFactoryProviderSettings()
{
	UClass* Class = UPCGExFactoryProviderSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFactoryProviderSettings.OuterSingleton;
}
UPCGExFactoryProviderSettings::UPCGExFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFactoryProviderSettings);
UPCGExFactoryProviderSettings::~UPCGExFactoryProviderSettings() {}
// ********** End Class UPCGExFactoryProviderSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFactoryDataTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo_Statics::NewStructOps, TEXT("PCGExFactoryDataTypeInfo"),&Z_Registration_Info_UScriptStruct_FPCGExFactoryDataTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFactoryDataTypeInfo), 61239124U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExParamDataBase, UPCGExParamDataBase::StaticClass, TEXT("UPCGExParamDataBase"), &Z_Registration_Info_UClass_UPCGExParamDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExParamDataBase), 3896238974U) },
		{ Z_Construct_UClass_UPCGExFactoryData, UPCGExFactoryData::StaticClass, TEXT("UPCGExFactoryData"), &Z_Registration_Info_UClass_UPCGExFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFactoryData), 2761762527U) },
		{ Z_Construct_UClass_UPCGExFactoryProviderSettings, UPCGExFactoryProviderSettings::StaticClass, TEXT("UPCGExFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFactoryProviderSettings), 360769221U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_3689289163{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
