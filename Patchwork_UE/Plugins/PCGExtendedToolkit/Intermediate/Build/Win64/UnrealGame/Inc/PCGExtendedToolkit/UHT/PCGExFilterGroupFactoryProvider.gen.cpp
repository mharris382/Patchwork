// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExFilterGroupFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFilterGroupFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterGroupProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterGroupProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFilterGroupProviderSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings;
UClass* UPCGExFilterGroupProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFilterGroupProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFilterGroupProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFilterGroupProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFilterGroupProviderSettings_NoRegister()
{
	return UPCGExFilterGroupProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|FilterGroup" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExFilterGroupFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterGroupFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "filters/and-or" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Priority. Will use the highest value between the one set here and from the connected filters. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterGroupFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Priority. Will use the highest value between the one set here and from the connected filters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Mode.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterGroupFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Inverts the group output value. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterGroupFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverts the group output value." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFilterGroupProviderSettings constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFilterGroupProviderSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFilterGroupProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics

// ********** Begin Class UPCGExFilterGroupProviderSettings Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterGroupProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterGroupProviderSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3555833813
void Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExFilterGroupProviderSettings*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFilterGroupProviderSettings), &Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFilterGroupProviderSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::ClassParams = {
	&UPCGExFilterGroupProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFilterGroupProviderSettings::StaticRegisterNativesUPCGExFilterGroupProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFilterGroupProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFilterGroupProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings.OuterSingleton;
}
UPCGExFilterGroupProviderSettings::UPCGExFilterGroupProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFilterGroupProviderSettings);
UPCGExFilterGroupProviderSettings::~UPCGExFilterGroupProviderSettings() {}
// ********** End Class UPCGExFilterGroupProviderSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterGroupFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFilterGroupProviderSettings, UPCGExFilterGroupProviderSettings::StaticClass, TEXT("UPCGExFilterGroupProviderSettings"), &Z_Registration_Info_UClass_UPCGExFilterGroupProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFilterGroupProviderSettings), 4056728791U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterGroupFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterGroupFactoryProvider_h__Script_PCGExtendedToolkit_47957322{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterGroupFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterGroupFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
