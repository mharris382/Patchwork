// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchRuleFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchRuleFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchRuleConfigBase *****************************************
struct Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchRuleConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchRuleConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRuleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strictness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Match Strictness */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRuleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Match Strictness" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchRuleConfigBase constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Strictness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Strictness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchRuleConfigBase constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchRuleConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase;
class UScriptStruct* FPCGExMatchRuleConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchRuleConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchRuleConfigBase Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::NewProp_Strictness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::NewProp_Strictness = { "Strictness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchRuleConfigBase, Strictness), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strictness_MetaData), NewProp_Strictness_MetaData) }; // 618734305
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::NewProp_Strictness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::NewProp_Strictness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchRuleConfigBase Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMatchRuleConfigBase",
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::PropPointers),
	sizeof(FPCGExMatchRuleConfigBase),
	alignof(FPCGExMatchRuleConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchRuleConfigBase *******************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoMatchRule ***************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoMatchRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoMatchRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRuleFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Match Rule" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoMatchRule constinit property declarations *******
// ********** End ScriptStruct FPCGExDataTypeInfoMatchRule constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoMatchRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoMatchRule>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoMatchRule cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule;
class UScriptStruct* FPCGExDataTypeInfoMatchRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoMatchRule"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoMatchRule",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoMatchRule),
	alignof(FPCGExDataTypeInfoMatchRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoMatchRule *****************************************

// ********** Begin Class UPCGExMatchRuleFactoryData ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData;
UClass* UPCGExMatchRuleFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchRuleFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchRuleFactoryData"),
			Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExMatchRuleFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData_NoRegister()
{
	return UPCGExMatchRuleFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchRuleFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRuleFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchRuleFactoryData constinit property declarations ***************
// ********** End Class UPCGExMatchRuleFactoryData constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchRuleFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::ClassParams = {
	&UPCGExMatchRuleFactoryData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExMatchRuleFactoryData::StaticRegisterNativesUPCGExMatchRuleFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExMatchRuleFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData.OuterSingleton;
}
UPCGExMatchRuleFactoryData::UPCGExMatchRuleFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchRuleFactoryData);
UPCGExMatchRuleFactoryData::~UPCGExMatchRuleFactoryData() {}
// ********** End Class UPCGExMatchRuleFactoryData *************************************************

// ********** Begin Class UPCGExMatchRuleFactoryProviderSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings;
UClass* UPCGExMatchRuleFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchRuleFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchRuleFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMatchRuleFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_NoRegister()
{
	return UPCGExMatchRuleFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchRuleFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRuleFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/match-rule" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchRuleFactoryProviderSettings constinit property declarations ***
// ********** End Class UPCGExMatchRuleFactoryProviderSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchRuleFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExMatchRuleFactoryProviderSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExMatchRuleFactoryProviderSettings::StaticRegisterNativesUPCGExMatchRuleFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings.OuterSingleton;
}
UPCGExMatchRuleFactoryProviderSettings::UPCGExMatchRuleFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchRuleFactoryProviderSettings);
UPCGExMatchRuleFactoryProviderSettings::~UPCGExMatchRuleFactoryProviderSettings() {}
// ********** End Class UPCGExMatchRuleFactoryProviderSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchRuleConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase_Statics::NewStructOps, TEXT("PCGExMatchRuleConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExMatchRuleConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchRuleConfigBase), 2531815014U) },
		{ FPCGExDataTypeInfoMatchRule::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoMatchRule_Statics::NewStructOps, TEXT("PCGExDataTypeInfoMatchRule"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoMatchRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoMatchRule), 661218298U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchRuleFactoryData, UPCGExMatchRuleFactoryData::StaticClass, TEXT("UPCGExMatchRuleFactoryData"), &Z_Registration_Info_UClass_UPCGExMatchRuleFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchRuleFactoryData), 1790894381U) },
		{ Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings, UPCGExMatchRuleFactoryProviderSettings::StaticClass, TEXT("UPCGExMatchRuleFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExMatchRuleFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchRuleFactoryProviderSettings), 1031171879U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_421032556{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRuleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
