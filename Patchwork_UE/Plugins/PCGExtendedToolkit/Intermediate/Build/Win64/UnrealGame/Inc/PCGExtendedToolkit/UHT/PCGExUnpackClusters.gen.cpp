// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExUnpackClusters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExUnpackClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUnpackClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUnpackClustersSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExUnpackClustersSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExUnpackClustersSettings;
UClass* UPCGExUnpackClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExUnpackClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExUnpackClustersSettings"),
			Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExUnpackClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExUnpackClustersSettings_NoRegister()
{
	return UPCGExUnpackClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExUnpackClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExUnpackClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/packing/unpack-cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlatten_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flatten unpacked metadata  Depending on your setup this is a tradeoff between memory and speed.*/" },
		{ "ModuleRelativePath", "Public/Graph/PCGExUnpackClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Flatten unpacked metadata  Depending on your setup this is a tradeoff between memory and speed." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExUnpackClustersSettings constinit property declarations *************
	static void NewProp_bFlatten_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlatten;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExUnpackClustersSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExUnpackClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics

// ********** Begin Class UPCGExUnpackClustersSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::NewProp_bFlatten_SetBit(void* Obj)
{
	((UPCGExUnpackClustersSettings*)Obj)->bFlatten = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::NewProp_bFlatten = { "bFlatten", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUnpackClustersSettings), &Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::NewProp_bFlatten_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlatten_MetaData), NewProp_bFlatten_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::NewProp_bFlatten,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExUnpackClustersSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::ClassParams = {
	&UPCGExUnpackClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExUnpackClustersSettings::StaticRegisterNativesUPCGExUnpackClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExUnpackClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExUnpackClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExUnpackClustersSettings.OuterSingleton;
}
UPCGExUnpackClustersSettings::UPCGExUnpackClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExUnpackClustersSettings);
UPCGExUnpackClustersSettings::~UPCGExUnpackClustersSettings() {}
// ********** End Class UPCGExUnpackClustersSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExUnpackClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExUnpackClustersSettings, UPCGExUnpackClustersSettings::StaticClass, TEXT("UPCGExUnpackClustersSettings"), &Z_Registration_Info_UClass_UPCGExUnpackClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExUnpackClustersSettings), 3179338719U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExUnpackClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExUnpackClusters_h__Script_PCGExtendedToolkit_313058133{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExUnpackClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExUnpackClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
