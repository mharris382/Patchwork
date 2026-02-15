// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildConvexHull2D.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildConvexHull2D() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildConvexHull2DSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBuildConvexHull2DSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings;
UClass* UPCGExBuildConvexHull2DSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildConvexHull2DSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildConvexHull2DSettings"),
			Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildConvexHull2DSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_NoRegister()
{
	return UPCGExBuildConvexHull2DSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/convex-hull-2d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputClusters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Path Winding */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Path Winding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildConvexHull2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildConvexHull2DSettings constinit property declarations **********
	static void NewProp_bOutputClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputClusters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Winding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Winding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildConvexHull2DSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildConvexHull2DSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics

// ********** Begin Class UPCGExBuildConvexHull2DSettings Property Definitions *********************
void Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_bOutputClusters_SetBit(void* Obj)
{
	((UPCGExBuildConvexHull2DSettings*)Obj)->bOutputClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_bOutputClusters = { "bOutputClusters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildConvexHull2DSettings), &Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_bOutputClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputClusters_MetaData), NewProp_bOutputClusters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildConvexHull2DSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_Winding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_Winding = { "Winding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildConvexHull2DSettings, Winding), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winding_MetaData), NewProp_Winding_MetaData) }; // 57580146
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildConvexHull2DSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_bOutputClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_Winding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_Winding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildConvexHull2DSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::ClassParams = {
	&UPCGExBuildConvexHull2DSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildConvexHull2DSettings::StaticRegisterNativesUPCGExBuildConvexHull2DSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildConvexHull2DSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildConvexHull2DSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings.OuterSingleton;
}
UPCGExBuildConvexHull2DSettings::UPCGExBuildConvexHull2DSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildConvexHull2DSettings);
UPCGExBuildConvexHull2DSettings::~UPCGExBuildConvexHull2DSettings() {}
// ********** End Class UPCGExBuildConvexHull2DSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull2D_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildConvexHull2DSettings, UPCGExBuildConvexHull2DSettings::StaticClass, TEXT("UPCGExBuildConvexHull2DSettings"), &Z_Registration_Info_UClass_UPCGExBuildConvexHull2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildConvexHull2DSettings), 2919286957U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull2D_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull2D_h__Script_PCGExtendedToolkit_3350978206{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildConvexHull2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
