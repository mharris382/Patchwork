// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildDelaunayGraph.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildDelaunayGraph() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBuildDelaunayGraphSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings;
UClass* UPCGExBuildDelaunayGraphSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildDelaunayGraphSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildDelaunayGraphSettings"),
			Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildDelaunayGraphSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_NoRegister()
{
	return UPCGExBuildDelaunayGraphSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/delaunay-3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrquhart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output the Urquhart graph of the Delaunay triangulation (removes the longest edge of each Delaunay cell) */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output the Urquhart graph of the Delaunay triangulation (removes the longest edge of each Delaunay cell)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSites_MetaData[] = {
		{ "Category", "Settings|Sites" },
		{ "Comment", "/** Output delaunay sites */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output delaunay sites" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkSiteHull_MetaData[] = {
		{ "Category", "Settings|Sites" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SiteHullAttributeName_MetaData[] = {
		{ "Category", "Settings|Sites" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkSiteHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkHull_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkEdgeOnTouch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When true, edges that have at least a point on the Hull as marked as being on the hull. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When true, edges that have at least a point on the Hull as marked as being on the hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildDelaunayGraphSettings constinit property declarations *********
	static void NewProp_bUrquhart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrquhart;
	static void NewProp_bOutputSites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSites;
	static void NewProp_bMarkSiteHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkSiteHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SiteHullAttributeName;
	static void NewProp_bMarkHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HullAttributeName;
	static void NewProp_bMarkEdgeOnTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkEdgeOnTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildDelaunayGraphSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildDelaunayGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics

// ********** Begin Class UPCGExBuildDelaunayGraphSettings Property Definitions ********************
void Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bUrquhart_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraphSettings*)Obj)->bUrquhart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bUrquhart = { "bUrquhart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraphSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bUrquhart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrquhart_MetaData), NewProp_bUrquhart_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bOutputSites_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraphSettings*)Obj)->bOutputSites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bOutputSites = { "bOutputSites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraphSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bOutputSites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSites_MetaData), NewProp_bOutputSites_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkSiteHull_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraphSettings*)Obj)->bMarkSiteHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkSiteHull = { "bMarkSiteHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraphSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkSiteHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkSiteHull_MetaData), NewProp_bMarkSiteHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_SiteHullAttributeName = { "SiteHullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraphSettings, SiteHullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SiteHullAttributeName_MetaData), NewProp_SiteHullAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkHull_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraphSettings*)Obj)->bMarkHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkHull = { "bMarkHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraphSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkHull_MetaData), NewProp_bMarkHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_HullAttributeName = { "HullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraphSettings, HullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullAttributeName_MetaData), NewProp_HullAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraphSettings*)Obj)->bMarkEdgeOnTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkEdgeOnTouch = { "bMarkEdgeOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraphSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkEdgeOnTouch_MetaData), NewProp_bMarkEdgeOnTouch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraphSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bUrquhart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bOutputSites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkSiteHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_SiteHullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_HullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_bMarkEdgeOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildDelaunayGraphSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::ClassParams = {
	&UPCGExBuildDelaunayGraphSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildDelaunayGraphSettings::StaticRegisterNativesUPCGExBuildDelaunayGraphSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings.OuterSingleton;
}
UPCGExBuildDelaunayGraphSettings::UPCGExBuildDelaunayGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildDelaunayGraphSettings);
UPCGExBuildDelaunayGraphSettings::~UPCGExBuildDelaunayGraphSettings() {}
// ********** End Class UPCGExBuildDelaunayGraphSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildDelaunayGraphSettings, UPCGExBuildDelaunayGraphSettings::StaticClass, TEXT("UPCGExBuildDelaunayGraphSettings"), &Z_Registration_Info_UClass_UPCGExBuildDelaunayGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildDelaunayGraphSettings), 1026829367U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph_h__Script_PCGExtendedToolkit_3368492760{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
