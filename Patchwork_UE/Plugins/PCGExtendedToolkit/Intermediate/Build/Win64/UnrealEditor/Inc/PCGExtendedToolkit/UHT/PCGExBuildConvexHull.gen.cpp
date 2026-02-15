// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildConvexHull.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildConvexHull() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildConvexHullSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildConvexHullSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBuildConvexHullSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings;
UClass* UPCGExBuildConvexHullSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildConvexHullSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildConvexHullSettings"),
			Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildConvexHullSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildConvexHullSettings_NoRegister()
{
	return UPCGExBuildConvexHullSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildConvexHull.h" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/convex-hull-3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildConvexHullSettings constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildConvexHullSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildConvexHullSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics

// ********** Begin Class UPCGExBuildConvexHullSettings Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildConvexHullSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildConvexHullSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::ClassParams = {
	&UPCGExBuildConvexHullSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildConvexHullSettings::StaticRegisterNativesUPCGExBuildConvexHullSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildConvexHullSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildConvexHullSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings.OuterSingleton;
}
UPCGExBuildConvexHullSettings::UPCGExBuildConvexHullSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildConvexHullSettings);
UPCGExBuildConvexHullSettings::~UPCGExBuildConvexHullSettings() {}
// ********** End Class UPCGExBuildConvexHullSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildConvexHullSettings, UPCGExBuildConvexHullSettings::StaticClass, TEXT("UPCGExBuildConvexHullSettings"), &Z_Registration_Info_UClass_UPCGExBuildConvexHullSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildConvexHullSettings), 2192300588U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull_h__Script_PCGExtendedToolkit_3697228550{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
