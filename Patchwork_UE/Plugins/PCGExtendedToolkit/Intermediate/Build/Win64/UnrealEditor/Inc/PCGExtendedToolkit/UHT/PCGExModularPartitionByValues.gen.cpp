// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExModularPartitionByValues.h"
#include "Misc/PCGExPartition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExModularPartitionByValues() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModularPartitionByValuesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionRule();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionRule_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionRuleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoPartitionRule ***********************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoPartitionRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoPartitionRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExModularPartitionByValues.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Partition Rule" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoPartitionRule constinit property declarations ***
// ********** End ScriptStruct FPCGExDataTypeInfoPartitionRule constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoPartitionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoPartitionRule>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoPartitionRule cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule;
class UScriptStruct* FPCGExDataTypeInfoPartitionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoPartitionRule"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoPartitionRule",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoPartitionRule),
	alignof(FPCGExDataTypeInfoPartitionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoPartitionRule *************************************

// ********** Begin Class UPCGExPartitionRule ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPartitionRule;
UClass* UPCGExPartitionRule::GetPrivateStaticClass()
{
	using TClass = UPCGExPartitionRule;
	if (!Z_Registration_Info_UClass_UPCGExPartitionRule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPartitionRule"),
			Z_Registration_Info_UClass_UPCGExPartitionRule.InnerSingleton,
			StaticRegisterNativesUPCGExPartitionRule,
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
	return Z_Registration_Info_UClass_UPCGExPartitionRule.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPartitionRule_NoRegister()
{
	return UPCGExPartitionRule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPartitionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExModularPartitionByValues.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExModularPartitionByValues.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPartitionRule constinit property declarations **********************
// ********** End Class UPCGExPartitionRule constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPartitionRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPartitionRule_Statics
UObject* (*const Z_Construct_UClass_UPCGExPartitionRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPartitionRule_Statics::ClassParams = {
	&UPCGExPartitionRule::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPartitionRule_Statics::Class_MetaDataParams)
};
void UPCGExPartitionRule::StaticRegisterNativesUPCGExPartitionRule()
{
}
UClass* Z_Construct_UClass_UPCGExPartitionRule()
{
	if (!Z_Registration_Info_UClass_UPCGExPartitionRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPartitionRule.OuterSingleton, Z_Construct_UClass_UPCGExPartitionRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPartitionRule.OuterSingleton;
}
UPCGExPartitionRule::UPCGExPartitionRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPartitionRule);
UPCGExPartitionRule::~UPCGExPartitionRule() {}
// ********** End Class UPCGExPartitionRule ********************************************************

// ********** Begin Class UPCGExPartitionRuleProviderSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings;
UClass* UPCGExPartitionRuleProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPartitionRuleProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPartitionRuleProviderSettings"),
			Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPartitionRuleProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_NoRegister()
{
	return UPCGExPartitionRuleProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExModularPartitionByValues.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExModularPartitionByValues.h" },
		{ "PCGExNodeLibraryDoc", "misc/partition-by-values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rule Config */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExModularPartitionByValues.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rule Config" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPartitionRuleProviderSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPartitionRuleProviderSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPartitionRuleProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics

// ********** Begin Class UPCGExPartitionRuleProviderSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPartitionRuleProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2918078472
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPartitionRuleProviderSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::ClassParams = {
	&UPCGExPartitionRuleProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExPartitionRuleProviderSettings::StaticRegisterNativesUPCGExPartitionRuleProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPartitionRuleProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExPartitionRuleProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings.OuterSingleton;
}
UPCGExPartitionRuleProviderSettings::UPCGExPartitionRuleProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPartitionRuleProviderSettings);
UPCGExPartitionRuleProviderSettings::~UPCGExPartitionRuleProviderSettings() {}
// ********** End Class UPCGExPartitionRuleProviderSettings ****************************************

// ********** Begin Class UPCGExModularPartitionByValuesSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings;
UClass* UPCGExModularPartitionByValuesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExModularPartitionByValuesSettings;
	if (!Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExModularPartitionByValuesSettings"),
			Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExModularPartitionByValuesSettings,
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
	return Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_NoRegister()
{
	return UPCGExModularPartitionByValuesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExModularPartitionByValues.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExModularPartitionByValues.h" },
		{ "PCGExNodeLibraryDoc", "misc/partition-by-values/partition-rule" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExModularPartitionByValuesSettings constinit property declarations ***
// ********** End Class UPCGExModularPartitionByValuesSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExModularPartitionByValuesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::ClassParams = {
	&UPCGExModularPartitionByValuesSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::Class_MetaDataParams)
};
void UPCGExModularPartitionByValuesSettings::StaticRegisterNativesUPCGExModularPartitionByValuesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExModularPartitionByValuesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.OuterSingleton, Z_Construct_UClass_UPCGExModularPartitionByValuesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings.OuterSingleton;
}
UPCGExModularPartitionByValuesSettings::UPCGExModularPartitionByValuesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExModularPartitionByValuesSettings);
UPCGExModularPartitionByValuesSettings::~UPCGExModularPartitionByValuesSettings() {}
// ********** End Class UPCGExModularPartitionByValuesSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoPartitionRule::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoPartitionRule_Statics::NewStructOps, TEXT("PCGExDataTypeInfoPartitionRule"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPartitionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoPartitionRule), 2229300209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPartitionRule, UPCGExPartitionRule::StaticClass, TEXT("UPCGExPartitionRule"), &Z_Registration_Info_UClass_UPCGExPartitionRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPartitionRule), 2366796668U) },
		{ Z_Construct_UClass_UPCGExPartitionRuleProviderSettings, UPCGExPartitionRuleProviderSettings::StaticClass, TEXT("UPCGExPartitionRuleProviderSettings"), &Z_Registration_Info_UClass_UPCGExPartitionRuleProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPartitionRuleProviderSettings), 3784144999U) },
		{ Z_Construct_UClass_UPCGExModularPartitionByValuesSettings, UPCGExModularPartitionByValuesSettings::StaticClass, TEXT("UPCGExModularPartitionByValuesSettings"), &Z_Registration_Info_UClass_UPCGExModularPartitionByValuesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExModularPartitionByValuesSettings), 468651856U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_443987773{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
