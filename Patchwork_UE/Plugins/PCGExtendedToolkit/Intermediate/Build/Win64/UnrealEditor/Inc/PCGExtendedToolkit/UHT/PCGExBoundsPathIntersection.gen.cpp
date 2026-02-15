// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExBoundsPathIntersection.h"
#include "Data/Matching/PCGExMatching.h"
#include "Graph/PCGExIntersections.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoundsPathIntersection() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBoundsPathIntersectionSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings;
UClass* UPCGExBoundsPathIntersectionSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsPathIntersectionSettings;
	if (!Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsPathIntersectionSettings"),
			Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsPathIntersectionSettings,
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
	return Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_NoRegister()
{
	return UPCGExBoundsPathIntersectionSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExBoundsPathIntersection.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
		{ "PCGExNodeLibraryDoc", "paths/path-bounds-intersection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending applied on intersecting points along the path prev and next point. This is different from inheriting from external properties. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Blending applied on intersecting points along the path prev and next point. This is different from inheriting from external properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Output" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasCuts_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasCutsTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfHasCuts" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfUncut_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncutTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfUncut" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBoundsPathIntersection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsPathIntersectionSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSettings;
	static void NewProp_bTagIfHasCuts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasCuts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasCutsTag;
	static void NewProp_bTagIfUncut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfUncut;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UncutTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsPathIntersectionSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsPathIntersectionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics

// ********** Begin Class UPCGExBoundsPathIntersectionSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsPathIntersectionSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsPathIntersectionSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_OutputSettings = { "OutputSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsPathIntersectionSettings, OutputSettings), Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSettings_MetaData), NewProp_OutputSettings_MetaData) }; // 3109000267
void Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfHasCuts_SetBit(void* Obj)
{
	((UPCGExBoundsPathIntersectionSettings*)Obj)->bTagIfHasCuts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfHasCuts = { "bTagIfHasCuts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsPathIntersectionSettings), &Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfHasCuts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasCuts_MetaData), NewProp_bTagIfHasCuts_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_HasCutsTag = { "HasCutsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsPathIntersectionSettings, HasCutsTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasCutsTag_MetaData), NewProp_HasCutsTag_MetaData) };
void Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfUncut_SetBit(void* Obj)
{
	((UPCGExBoundsPathIntersectionSettings*)Obj)->bTagIfUncut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfUncut = { "bTagIfUncut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsPathIntersectionSettings), &Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfUncut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfUncut_MetaData), NewProp_bTagIfUncut_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_UncutTag = { "UncutTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsPathIntersectionSettings, UncutTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncutTag_MetaData), NewProp_UncutTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_OutputSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfHasCuts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_HasCutsTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_bTagIfUncut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::NewProp_UncutTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsPathIntersectionSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::ClassParams = {
	&UPCGExBoundsPathIntersectionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::Class_MetaDataParams)
};
void UPCGExBoundsPathIntersectionSettings::StaticRegisterNativesUPCGExBoundsPathIntersectionSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.OuterSingleton, Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings.OuterSingleton;
}
UPCGExBoundsPathIntersectionSettings::UPCGExBoundsPathIntersectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsPathIntersectionSettings);
UPCGExBoundsPathIntersectionSettings::~UPCGExBoundsPathIntersectionSettings() {}
// ********** End Class UPCGExBoundsPathIntersectionSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBoundsPathIntersection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoundsPathIntersectionSettings, UPCGExBoundsPathIntersectionSettings::StaticClass, TEXT("UPCGExBoundsPathIntersectionSettings"), &Z_Registration_Info_UClass_UPCGExBoundsPathIntersectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsPathIntersectionSettings), 4064484477U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBoundsPathIntersection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBoundsPathIntersection_h__Script_PCGExtendedToolkit_1392227212{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBoundsPathIntersection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBoundsPathIntersection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
