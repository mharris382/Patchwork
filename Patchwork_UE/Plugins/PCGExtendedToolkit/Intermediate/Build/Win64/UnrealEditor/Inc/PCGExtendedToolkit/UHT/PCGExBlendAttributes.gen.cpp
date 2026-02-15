// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExBlendAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBlendAttributes() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendAttributesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendAttributesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBlendAttributesSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBlendAttributesSettings;
UClass* UPCGExBlendAttributesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBlendAttributesSettings;
	if (!Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBlendAttributesSettings"),
			Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBlendAttributesSettings,
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
	return Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBlendAttributesSettings_NoRegister()
{
	return UPCGExBlendAttributesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExBlendAttributes.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBlendAttributes.h" },
		{ "PCGExNodeLibraryDoc", "metadata/uber-blend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputNormalizedIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whther to write the index as a normalized output value. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBlendAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whther to write the index as a normalized output value." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBlendAttributesSettings constinit property declarations ************
	static void NewProp_bOutputNormalizedIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputNormalizedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBlendAttributesSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBlendAttributesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics

// ********** Begin Class UPCGExBlendAttributesSettings Property Definitions ***********************
void Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::NewProp_bOutputNormalizedIndex_SetBit(void* Obj)
{
	((UPCGExBlendAttributesSettings*)Obj)->bOutputNormalizedIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::NewProp_bOutputNormalizedIndex = { "bOutputNormalizedIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBlendAttributesSettings), &Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::NewProp_bOutputNormalizedIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputNormalizedIndex_MetaData), NewProp_bOutputNormalizedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::NewProp_bOutputNormalizedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBlendAttributesSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::ClassParams = {
	&UPCGExBlendAttributesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::Class_MetaDataParams)
};
void UPCGExBlendAttributesSettings::StaticRegisterNativesUPCGExBlendAttributesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBlendAttributesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.OuterSingleton, Z_Construct_UClass_UPCGExBlendAttributesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBlendAttributesSettings.OuterSingleton;
}
UPCGExBlendAttributesSettings::UPCGExBlendAttributesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBlendAttributesSettings);
UPCGExBlendAttributesSettings::~UPCGExBlendAttributesSettings() {}
// ********** End Class UPCGExBlendAttributesSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBlendAttributes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBlendAttributesSettings, UPCGExBlendAttributesSettings::StaticClass, TEXT("UPCGExBlendAttributesSettings"), &Z_Registration_Info_UClass_UPCGExBlendAttributesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBlendAttributesSettings), 2647571463U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBlendAttributes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBlendAttributes_h__Script_PCGExtendedToolkit_1769022789{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBlendAttributes_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBlendAttributes_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
