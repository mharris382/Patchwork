// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathProcessor() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathProcessorSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathProcessorSettings;
UClass* UPCGExPathProcessorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathProcessorSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathProcessorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathProcessorSettings"),
			Z_Registration_Info_UClass_UPCGExPathProcessorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathProcessorSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathProcessorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathProcessorSettings_NoRegister()
{
	return UPCGExPathProcessorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathProcessor.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportClosedLoops_MetaData[] = {
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitInvalidPathsOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, collections that have less than 2 points won't be processed and be omitted from the output. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, collections that have less than 2 points won't be processed and be omitted from the output." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathProcessorSettings constinit property declarations **************
	static void NewProp_bSupportClosedLoops_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportClosedLoops;
	static void NewProp_bOmitInvalidPathsOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitInvalidPathsOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathProcessorSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathProcessorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathProcessorSettings_Statics

// ********** Begin Class UPCGExPathProcessorSettings Property Definitions *************************
void Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bSupportClosedLoops_SetBit(void* Obj)
{
	((UPCGExPathProcessorSettings*)Obj)->bSupportClosedLoops = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bSupportClosedLoops = { "bSupportClosedLoops", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathProcessorSettings), &Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bSupportClosedLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportClosedLoops_MetaData), NewProp_bSupportClosedLoops_MetaData) };
void Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bOmitInvalidPathsOutputs_SetBit(void* Obj)
{
	((UPCGExPathProcessorSettings*)Obj)->bOmitInvalidPathsOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bOmitInvalidPathsOutputs = { "bOmitInvalidPathsOutputs", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathProcessorSettings), &Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bOmitInvalidPathsOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitInvalidPathsOutputs_MetaData), NewProp_bOmitInvalidPathsOutputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bSupportClosedLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::NewProp_bOmitInvalidPathsOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathProcessorSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::ClassParams = {
	&UPCGExPathProcessorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathProcessorSettings::StaticRegisterNativesUPCGExPathProcessorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathProcessorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathProcessorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathProcessorSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathProcessorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathProcessorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathProcessorSettings);
UPCGExPathProcessorSettings::~UPCGExPathProcessorSettings() {}
// ********** End Class UPCGExPathProcessorSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathProcessor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathProcessorSettings, UPCGExPathProcessorSettings::StaticClass, TEXT("UPCGExPathProcessorSettings"), &Z_Registration_Info_UClass_UPCGExPathProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathProcessorSettings), 3952359060U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathProcessor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathProcessor_h__Script_PCGExtendedToolkit_3354137145{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
