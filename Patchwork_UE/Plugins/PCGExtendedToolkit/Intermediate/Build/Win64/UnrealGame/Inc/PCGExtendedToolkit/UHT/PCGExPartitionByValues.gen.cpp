// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExPartitionByValues.h"
#include "Misc/PCGExPartition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPartitionByValues() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionByValuesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionByValuesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPartitionByValuesBaseSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings;
UClass* UPCGExPartitionByValuesBaseSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPartitionByValuesBaseSettings;
	if (!Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPartitionByValuesBaseSettings"),
			Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPartitionByValuesBaseSettings,
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
	return Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_NoRegister()
{
	return UPCGExPartitionByValuesBaseSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExPartitionByValues.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
		{ "PCGExNodeLibraryDoc", "misc/partition-by-values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitOutput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If false, will only write partition identifier values instead of splitting partitions into new point datasets. */" },
		{ "DisplayPriority", "-2" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If false, will only write partition identifier values instead of splitting partitions into new point datasets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteKeySum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write the sum of partition values to an attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the sum of partition values to an attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySumAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Attribute name to write key sum to. Note that this value is not guaranteed to be unique. */" },
		{ "EditCondition", "bWriteKeySum" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The Attribute name to write key sum to. Note that this value is not guaranteed to be unique." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPartitionByValuesBaseSettings constinit property declarations ******
	static void NewProp_bSplitOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitOutput;
	static void NewProp_bWriteKeySum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteKeySum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeySumAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPartitionByValuesBaseSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPartitionByValuesBaseSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics

// ********** Begin Class UPCGExPartitionByValuesBaseSettings Property Definitions *****************
void Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bSplitOutput_SetBit(void* Obj)
{
	((UPCGExPartitionByValuesBaseSettings*)Obj)->bSplitOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bSplitOutput = { "bSplitOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPartitionByValuesBaseSettings), &Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bSplitOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitOutput_MetaData), NewProp_bSplitOutput_MetaData) };
void Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bWriteKeySum_SetBit(void* Obj)
{
	((UPCGExPartitionByValuesBaseSettings*)Obj)->bWriteKeySum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bWriteKeySum = { "bWriteKeySum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPartitionByValuesBaseSettings), &Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bWriteKeySum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteKeySum_MetaData), NewProp_bWriteKeySum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_KeySumAttributeName = { "KeySumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPartitionByValuesBaseSettings, KeySumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySumAttributeName_MetaData), NewProp_KeySumAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bSplitOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_bWriteKeySum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::NewProp_KeySumAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPartitionByValuesBaseSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::ClassParams = {
	&UPCGExPartitionByValuesBaseSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::Class_MetaDataParams)
};
void UPCGExPartitionByValuesBaseSettings::StaticRegisterNativesUPCGExPartitionByValuesBaseSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.OuterSingleton, Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings.OuterSingleton;
}
UPCGExPartitionByValuesBaseSettings::UPCGExPartitionByValuesBaseSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPartitionByValuesBaseSettings);
UPCGExPartitionByValuesBaseSettings::~UPCGExPartitionByValuesBaseSettings() {}
// ********** End Class UPCGExPartitionByValuesBaseSettings ****************************************

// ********** Begin Class UPCGExPartitionByValuesSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings;
UClass* UPCGExPartitionByValuesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPartitionByValuesSettings;
	if (!Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPartitionByValuesSettings"),
			Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPartitionByValuesSettings,
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
	return Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPartitionByValuesSettings_NoRegister()
{
	return UPCGExPartitionByValuesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExPartitionByValues.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartitionByValues.h" },
		{ "PCG_Overridable", "" },
		{ "TitleProperty", "{TitlePropertyName}" },
		{ "ToolTip", "Rules" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPartitionByValuesSettings constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartitionRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartitionRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPartitionByValuesSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPartitionByValuesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics

// ********** Begin Class UPCGExPartitionByValuesSettings Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::NewProp_PartitionRules_Inner = { "PartitionRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig, METADATA_PARAMS(0, nullptr) }; // 2918078472
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::NewProp_PartitionRules = { "PartitionRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPartitionByValuesSettings, PartitionRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionRules_MetaData), NewProp_PartitionRules_MetaData) }; // 2918078472
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::NewProp_PartitionRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::NewProp_PartitionRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPartitionByValuesSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::ClassParams = {
	&UPCGExPartitionByValuesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::Class_MetaDataParams)
};
void UPCGExPartitionByValuesSettings::StaticRegisterNativesUPCGExPartitionByValuesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPartitionByValuesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.OuterSingleton, Z_Construct_UClass_UPCGExPartitionByValuesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings.OuterSingleton;
}
UPCGExPartitionByValuesSettings::UPCGExPartitionByValuesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPartitionByValuesSettings);
UPCGExPartitionByValuesSettings::~UPCGExPartitionByValuesSettings() {}
// ********** End Class UPCGExPartitionByValuesSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartitionByValues_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPartitionByValuesBaseSettings, UPCGExPartitionByValuesBaseSettings::StaticClass, TEXT("UPCGExPartitionByValuesBaseSettings"), &Z_Registration_Info_UClass_UPCGExPartitionByValuesBaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPartitionByValuesBaseSettings), 2769434963U) },
		{ Z_Construct_UClass_UPCGExPartitionByValuesSettings, UPCGExPartitionByValuesSettings::StaticClass, TEXT("UPCGExPartitionByValuesSettings"), &Z_Registration_Info_UClass_UPCGExPartitionByValuesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPartitionByValuesSettings), 2116604565U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartitionByValues_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartitionByValues_h__Script_PCGExtendedToolkit_4067114881{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartitionByValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
