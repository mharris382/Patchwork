// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constants/PCGExBitmask.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBitmask() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmask();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBitmaskSettings ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBitmaskSettings;
UClass* UPCGExBitmaskSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBitmaskSettings;
	if (!Z_Registration_Info_UClass_UPCGExBitmaskSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBitmaskSettings"),
			Z_Registration_Info_UClass_UPCGExBitmaskSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBitmaskSettings,
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
	return Z_Registration_Info_UClass_UPCGExBitmaskSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBitmaskSettings_NoRegister()
{
	return UPCGExBitmaskSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBitmaskSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Constants/PCGExBitmask.h" },
		{ "ModuleRelativePath", "Public/Constants/PCGExBitmask.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bitmask_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operations executed on the flag if all filters pass */" },
		{ "ModuleRelativePath", "Public/Constants/PCGExBitmask.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Operations executed on the flag if all filters pass" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBitmaskSettings constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bitmask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBitmaskSettings constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBitmaskSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBitmaskSettings_Statics

// ********** Begin Class UPCGExBitmaskSettings Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBitmaskSettings_Statics::NewProp_Bitmask = { "Bitmask", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitmaskSettings, Bitmask), Z_Construct_UScriptStruct_FPCGExBitmask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bitmask_MetaData), NewProp_Bitmask_MetaData) }; // 3310865356
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBitmaskSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitmaskSettings_Statics::NewProp_Bitmask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBitmaskSettings Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UPCGExBitmaskSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBitmaskSettings_Statics::ClassParams = {
	&UPCGExBitmaskSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBitmaskSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBitmaskSettings_Statics::Class_MetaDataParams)
};
void UPCGExBitmaskSettings::StaticRegisterNativesUPCGExBitmaskSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBitmaskSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBitmaskSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBitmaskSettings.OuterSingleton, Z_Construct_UClass_UPCGExBitmaskSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBitmaskSettings.OuterSingleton;
}
UPCGExBitmaskSettings::UPCGExBitmaskSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBitmaskSettings);
UPCGExBitmaskSettings::~UPCGExBitmaskSettings() {}
// ********** End Class UPCGExBitmaskSettings ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExBitmask_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBitmaskSettings, UPCGExBitmaskSettings::StaticClass, TEXT("UPCGExBitmaskSettings"), &Z_Registration_Info_UClass_UPCGExBitmaskSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBitmaskSettings), 712868787U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExBitmask_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExBitmask_h__Script_PCGExtendedToolkit_2862909555{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExBitmask_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExBitmask_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
