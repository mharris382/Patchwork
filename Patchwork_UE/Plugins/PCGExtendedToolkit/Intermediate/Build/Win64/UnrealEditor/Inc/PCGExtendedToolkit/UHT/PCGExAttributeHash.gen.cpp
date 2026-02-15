// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExAttributeHash.h"
#include "Data/PCGExAttributeHasher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeHash() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeHashSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeHashSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeHashConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExAttributeHashSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeHashSettings;
UClass* UPCGExAttributeHashSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeHashSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributeHashSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeHashSettings"),
			Z_Registration_Info_UClass_UPCGExAttributeHashSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeHashSettings,
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
	return Z_Registration_Info_UClass_UPCGExAttributeHashSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeHashSettings_NoRegister()
{
	return UPCGExAttributeHashSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeHashSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExAttributeHash.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeHash.h" },
		{ "PCGExNodeLibraryDoc", "metadata/attribute-hash" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashConfig_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeHash.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name to output the hash to */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeHash.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name to output the hash to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to add the hash as a tag */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeHash.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to add the hash as a tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to add the hash as an attribute */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeHash.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to add the hash as an attribute" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeHashSettings constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HashConfig;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static void NewProp_bOutputToTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToTags;
	static void NewProp_bOutputToAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeHashSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeHashSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeHashSettings_Statics

// ********** Begin Class UPCGExAttributeHashSettings Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_HashConfig = { "HashConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeHashSettings, HashConfig), Z_Construct_UScriptStruct_FPCGExAttributeHashConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashConfig_MetaData), NewProp_HashConfig_MetaData) }; // 1288571515
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeHashSettings, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToTags_SetBit(void* Obj)
{
	((UPCGExAttributeHashSettings*)Obj)->bOutputToTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToTags = { "bOutputToTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeHashSettings), &Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputToTags_MetaData), NewProp_bOutputToTags_MetaData) };
void Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToAttribute_SetBit(void* Obj)
{
	((UPCGExAttributeHashSettings*)Obj)->bOutputToAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToAttribute = { "bOutputToAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeHashSettings), &Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputToAttribute_MetaData), NewProp_bOutputToAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_HashConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::NewProp_bOutputToAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeHashSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::ClassParams = {
	&UPCGExAttributeHashSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributeHashSettings::StaticRegisterNativesUPCGExAttributeHashSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeHashSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeHashSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeHashSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributeHashSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeHashSettings.OuterSingleton;
}
UPCGExAttributeHashSettings::UPCGExAttributeHashSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeHashSettings);
UPCGExAttributeHashSettings::~UPCGExAttributeHashSettings() {}
// ********** End Class UPCGExAttributeHashSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeHash_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributeHashSettings, UPCGExAttributeHashSettings::StaticClass, TEXT("UPCGExAttributeHashSettings"), &Z_Registration_Info_UClass_UPCGExAttributeHashSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeHashSettings), 4228783910U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeHash_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeHash_h__Script_PCGExtendedToolkit_3683434436{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeHash_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeHash_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
