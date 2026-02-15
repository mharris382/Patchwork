// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExMetaCleanup.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMetaCleanup() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMetaCleanupSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMetaCleanupSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExMetaCleanupSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMetaCleanupSettings;
UClass* UPCGExMetaCleanupSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMetaCleanupSettings;
	if (!Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMetaCleanupSettings"),
			Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMetaCleanupSettings,
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
	return Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMetaCleanupSettings_NoRegister()
{
	return UPCGExMetaCleanupSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExMetaCleanup.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMetaCleanup.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/meta-cleanup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** List of attributes to delete. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMetaCleanup.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "List of attributes to delete." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMetaCleanupSettings constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMetaCleanupSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMetaCleanupSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics

// ********** Begin Class UPCGExMetaCleanupSettings Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMetaCleanupSettings, Filters), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::NewProp_Filters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMetaCleanupSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::ClassParams = {
	&UPCGExMetaCleanupSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::Class_MetaDataParams)
};
void UPCGExMetaCleanupSettings::StaticRegisterNativesUPCGExMetaCleanupSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMetaCleanupSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.OuterSingleton, Z_Construct_UClass_UPCGExMetaCleanupSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMetaCleanupSettings.OuterSingleton;
}
UPCGExMetaCleanupSettings::UPCGExMetaCleanupSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMetaCleanupSettings);
UPCGExMetaCleanupSettings::~UPCGExMetaCleanupSettings() {}
// ********** End Class UPCGExMetaCleanupSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMetaCleanup_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMetaCleanupSettings, UPCGExMetaCleanupSettings::StaticClass, TEXT("UPCGExMetaCleanupSettings"), &Z_Registration_Info_UClass_UPCGExMetaCleanupSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMetaCleanupSettings), 2541032180U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMetaCleanup_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMetaCleanup_h__Script_PCGExtendedToolkit_3161363077{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMetaCleanup_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMetaCleanup_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
