// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExDestroyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDestroyActor() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDestroyActorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDestroyActorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExDestroyActorSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDestroyActorSettings;
UClass* UPCGExDestroyActorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDestroyActorSettings;
	if (!Z_Registration_Info_UClass_UPCGExDestroyActorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDestroyActorSettings"),
			Z_Registration_Info_UClass_UPCGExDestroyActorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDestroyActorSettings,
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
	return Z_Registration_Info_UClass_UPCGExDestroyActorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDestroyActorSettings_NoRegister()
{
	return UPCGExDestroyActorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDestroyActorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExDestroyActor.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDestroyActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "misc/destroy-actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor reference */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDestroyActor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor reference" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDestroyActorSettings constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDestroyActorSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDestroyActorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDestroyActorSettings_Statics

// ********** Begin Class UPCGExDestroyActorSettings Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::NewProp_ActorReferenceAttribute = { "ActorReferenceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDestroyActorSettings, ActorReferenceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttribute_MetaData), NewProp_ActorReferenceAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::NewProp_ActorReferenceAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDestroyActorSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::ClassParams = {
	&UPCGExDestroyActorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::Class_MetaDataParams)
};
void UPCGExDestroyActorSettings::StaticRegisterNativesUPCGExDestroyActorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDestroyActorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDestroyActorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDestroyActorSettings.OuterSingleton, Z_Construct_UClass_UPCGExDestroyActorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDestroyActorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDestroyActorSettings);
UPCGExDestroyActorSettings::~UPCGExDestroyActorSettings() {}
// ********** End Class UPCGExDestroyActorSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDestroyActor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDestroyActorSettings, UPCGExDestroyActorSettings::StaticClass, TEXT("UPCGExDestroyActorSettings"), &Z_Registration_Info_UClass_UPCGExDestroyActorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDestroyActorSettings), 3502984355U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDestroyActor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDestroyActor_h__Script_PCGExtendedToolkit_2411430474{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDestroyActor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDestroyActor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
