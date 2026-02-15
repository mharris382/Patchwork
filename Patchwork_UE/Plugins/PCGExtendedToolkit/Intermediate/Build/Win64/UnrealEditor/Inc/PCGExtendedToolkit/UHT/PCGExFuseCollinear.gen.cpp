// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExFuseCollinear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFuseCollinear() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFuseCollinearSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFuseCollinearSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFuseCollinearSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFuseCollinearSettings;
UClass* UPCGExFuseCollinearSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFuseCollinearSettings;
	if (!Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFuseCollinearSettings"),
			Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFuseCollinearSettings,
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
	return Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFuseCollinearSettings_NoRegister()
{
	return UPCGExFuseCollinearSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExFuseCollinear.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "PCGExNodeLibraryDoc", "paths/fuse-collinear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angular threshold for collinearity. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Angular threshold for collinearity." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse points that are not collinear (Smooth-like). */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fuse points that are not collinear (Smooth-like)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFuseCollocated_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will consider collocated points as collinear */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will consider collocated points as collinear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Distance used to consider point to be overlapping. */" },
		{ "EditCondition", "bFuseCollocated" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "ToolTip", "Distance used to consider point to be overlapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitInvalidPathsFromOutput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance used to consider point to be overlapping. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExFuseCollinear.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance used to consider point to be overlapping." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFuseCollinearSettings constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static void NewProp_bInvertThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertThreshold;
	static void NewProp_bFuseCollocated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuseCollocated;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuseDistance;
	static void NewProp_bOmitInvalidPathsFromOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitInvalidPathsFromOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFuseCollinearSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFuseCollinearSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics

// ********** Begin Class UPCGExFuseCollinearSettings Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseCollinearSettings, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
void Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bInvertThreshold_SetBit(void* Obj)
{
	((UPCGExFuseCollinearSettings*)Obj)->bInvertThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bInvertThreshold = { "bInvertThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseCollinearSettings), &Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bInvertThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertThreshold_MetaData), NewProp_bInvertThreshold_MetaData) };
void Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bFuseCollocated_SetBit(void* Obj)
{
	((UPCGExFuseCollinearSettings*)Obj)->bFuseCollocated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bFuseCollocated = { "bFuseCollocated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseCollinearSettings), &Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bFuseCollocated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFuseCollocated_MetaData), NewProp_bFuseCollocated_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_FuseDistance = { "FuseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseCollinearSettings, FuseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDistance_MetaData), NewProp_FuseDistance_MetaData) };
void Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bOmitInvalidPathsFromOutput_SetBit(void* Obj)
{
	((UPCGExFuseCollinearSettings*)Obj)->bOmitInvalidPathsFromOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bOmitInvalidPathsFromOutput = { "bOmitInvalidPathsFromOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseCollinearSettings), &Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bOmitInvalidPathsFromOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitInvalidPathsFromOutput_MetaData), NewProp_bOmitInvalidPathsFromOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bInvertThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bFuseCollocated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_FuseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::NewProp_bOmitInvalidPathsFromOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFuseCollinearSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::ClassParams = {
	&UPCGExFuseCollinearSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::Class_MetaDataParams)
};
void UPCGExFuseCollinearSettings::StaticRegisterNativesUPCGExFuseCollinearSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFuseCollinearSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.OuterSingleton, Z_Construct_UClass_UPCGExFuseCollinearSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFuseCollinearSettings.OuterSingleton;
}
UPCGExFuseCollinearSettings::UPCGExFuseCollinearSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFuseCollinearSettings);
UPCGExFuseCollinearSettings::~UPCGExFuseCollinearSettings() {}
// ********** End Class UPCGExFuseCollinearSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExFuseCollinear_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFuseCollinearSettings, UPCGExFuseCollinearSettings::StaticClass, TEXT("UPCGExFuseCollinearSettings"), &Z_Registration_Info_UClass_UPCGExFuseCollinearSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFuseCollinearSettings), 1041894434U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExFuseCollinear_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExFuseCollinear_h__Script_PCGExtendedToolkit_3350638293{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExFuseCollinear_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExFuseCollinear_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
