// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExGlobalEditorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGlobalEditorSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
PCGEXTENDEDTOOLKITEDITOR_API UClass* Z_Construct_UClass_UPCGExGlobalEditorSettings();
PCGEXTENDEDTOOLKITEDITOR_API UClass* Z_Construct_UClass_UPCGExGlobalEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExGlobalEditorSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGlobalEditorSettings;
UClass* UPCGExGlobalEditorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExGlobalEditorSettings;
	if (!Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGlobalEditorSettings"),
			Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExGlobalEditorSettings,
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
	return Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGlobalEditorSettings_NoRegister()
{
	return UPCGExGlobalEditorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Description", "PCGEx Editor Settings" },
		{ "DisplayName", "PCGEx - Editor" },
		{ "IncludePath", "PCGExGlobalEditorSettings.h" },
		{ "ModuleRelativePath", "Public/PCGExGlobalEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenPropertyNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExGlobalEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGlobalEditorSettings constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_HiddenPropertyNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HiddenPropertyNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGlobalEditorSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGlobalEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics

// ********** Begin Class UPCGExGlobalEditorSettings Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::NewProp_HiddenPropertyNames_ElementProp = { "HiddenPropertyNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::NewProp_HiddenPropertyNames = { "HiddenPropertyNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalEditorSettings, HiddenPropertyNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenPropertyNames_MetaData), NewProp_HiddenPropertyNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::NewProp_HiddenPropertyNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::NewProp_HiddenPropertyNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGlobalEditorSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::ClassParams = {
	&UPCGExGlobalEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::Class_MetaDataParams)
};
void UPCGExGlobalEditorSettings::StaticRegisterNativesUPCGExGlobalEditorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExGlobalEditorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.OuterSingleton, Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGlobalEditorSettings.OuterSingleton;
}
UPCGExGlobalEditorSettings::UPCGExGlobalEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGlobalEditorSettings);
UPCGExGlobalEditorSettings::~UPCGExGlobalEditorSettings() {}
// ********** End Class UPCGExGlobalEditorSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h__Script_PCGExtendedToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGlobalEditorSettings, UPCGExGlobalEditorSettings::StaticClass, TEXT("UPCGExGlobalEditorSettings"), &Z_Registration_Info_UClass_UPCGExGlobalEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGlobalEditorSettings), 1965779705U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h__Script_PCGExtendedToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h__Script_PCGExtendedToolkitEditor_502825434{
	TEXT("/Script/PCGExtendedToolkitEditor"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h__Script_PCGExtendedToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h__Script_PCGExtendedToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
