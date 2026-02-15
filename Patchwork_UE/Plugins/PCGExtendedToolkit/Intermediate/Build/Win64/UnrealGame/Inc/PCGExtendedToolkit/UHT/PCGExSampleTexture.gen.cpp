// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleTexture.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleTexture() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleTextureSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleTextureSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleTextureSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleTextureSettings;
UClass* UPCGExSampleTextureSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleTextureSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleTextureSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleTextureSettings"),
			Z_Registration_Info_UClass_UPCGExSampleTextureSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleTextureSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleTextureSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleTextureSettings_NoRegister()
{
	return UPCGExSampleTextureSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleTextureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Sampling/PCGExSampleTexture.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/textures/sample-texture" },
		{ "ToolTip", "Use PCGExSampling to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVSource_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietDuplicateSampleNamesWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleTexture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleTextureSettings constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVSource;
	static void NewProp_bTagIfHasSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasSuccessesTag;
	static void NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoSuccessesTag;
	static void NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessFilteredOutAsFails;
	static void NewProp_bPruneFailedSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneFailedSamples;
	static void NewProp_bQuietDuplicateSampleNamesWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietDuplicateSampleNamesWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleTextureSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleTextureSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleTextureSettings_Statics

// ********** Begin Class UPCGExSampleTextureSettings Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_UVSource = { "UVSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleTextureSettings, UVSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVSource_MetaData), NewProp_UVSource_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleTextureSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleTextureSettings), &Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleTextureSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleTextureSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleTextureSettings), &Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleTextureSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleTextureSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleTextureSettings), &Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleTextureSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleTextureSettings), &Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
void Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bQuietDuplicateSampleNamesWarning_SetBit(void* Obj)
{
	((UPCGExSampleTextureSettings*)Obj)->bQuietDuplicateSampleNamesWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bQuietDuplicateSampleNamesWarning = { "bQuietDuplicateSampleNamesWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleTextureSettings), &Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bQuietDuplicateSampleNamesWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietDuplicateSampleNamesWarning_MetaData), NewProp_bQuietDuplicateSampleNamesWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_UVSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bPruneFailedSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::NewProp_bQuietDuplicateSampleNamesWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleTextureSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::ClassParams = {
	&UPCGExSampleTextureSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleTextureSettings::StaticRegisterNativesUPCGExSampleTextureSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleTextureSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleTextureSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleTextureSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleTextureSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleTextureSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleTextureSettings);
UPCGExSampleTextureSettings::~UPCGExSampleTextureSettings() {}
// ********** End Class UPCGExSampleTextureSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleTexture_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleTextureSettings, UPCGExSampleTextureSettings::StaticClass, TEXT("UPCGExSampleTextureSettings"), &Z_Registration_Info_UClass_UPCGExSampleTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleTextureSettings), 1400833759U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleTexture_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleTexture_h__Script_PCGExtendedToolkit_928209604{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleTexture_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleTexture_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
