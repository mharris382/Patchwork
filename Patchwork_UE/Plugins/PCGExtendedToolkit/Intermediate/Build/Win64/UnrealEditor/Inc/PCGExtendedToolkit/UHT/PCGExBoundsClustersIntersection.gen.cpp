// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExBoundsClustersIntersection.h"
#include "Graph/PCGExIntersections.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoundsClustersIntersection() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBoundsClustersIntersectionSettings *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings;
UClass* UPCGExBoundsClustersIntersectionSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsClustersIntersectionSettings;
	if (!Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsClustersIntersectionSettings"),
			Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsClustersIntersectionSettings,
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
	return Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_NoRegister()
{
	return UPCGExBoundsClustersIntersectionSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExBoundsClustersIntersection.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBoundsClustersIntersection.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBoundsClustersIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsClustersIntersectionSettings constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsClustersIntersectionSettings constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsClustersIntersectionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics

// ********** Begin Class UPCGExBoundsClustersIntersectionSettings Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::NewProp_IntersectionDetails = { "IntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsClustersIntersectionSettings, IntersectionDetails), Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionDetails_MetaData), NewProp_IntersectionDetails_MetaData) }; // 3109000267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::NewProp_IntersectionDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsClustersIntersectionSettings Property Definitions **************
UObject* (*const Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::ClassParams = {
	&UPCGExBoundsClustersIntersectionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::Class_MetaDataParams)
};
void UPCGExBoundsClustersIntersectionSettings::StaticRegisterNativesUPCGExBoundsClustersIntersectionSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.OuterSingleton, Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings.OuterSingleton;
}
UPCGExBoundsClustersIntersectionSettings::UPCGExBoundsClustersIntersectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsClustersIntersectionSettings);
UPCGExBoundsClustersIntersectionSettings::~UPCGExBoundsClustersIntersectionSettings() {}
// ********** End Class UPCGExBoundsClustersIntersectionSettings ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBoundsClustersIntersection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoundsClustersIntersectionSettings, UPCGExBoundsClustersIntersectionSettings::StaticClass, TEXT("UPCGExBoundsClustersIntersectionSettings"), &Z_Registration_Info_UClass_UPCGExBoundsClustersIntersectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsClustersIntersectionSettings), 4252456690U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBoundsClustersIntersection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBoundsClustersIntersection_h__Script_PCGExtendedToolkit_3312877957{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBoundsClustersIntersection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBoundsClustersIntersection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
