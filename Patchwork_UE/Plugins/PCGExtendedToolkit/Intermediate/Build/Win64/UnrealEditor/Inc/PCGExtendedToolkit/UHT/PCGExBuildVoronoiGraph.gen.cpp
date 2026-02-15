// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildVoronoiGraph.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildVoronoiGraph() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBuildVoronoiGraphSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings;
UClass* UPCGExBuildVoronoiGraphSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildVoronoiGraphSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildVoronoiGraphSettings"),
			Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildVoronoiGraphSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_NoRegister()
{
	return UPCGExBuildVoronoiGraphSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/voronoi-3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Method used to find Voronoi cell location */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Method used to find Voronoi cell location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds used for point pruning & balanced centroid. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds used for point pruning & balanced centroid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneOutOfBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Prune points outside bounds */" },
		{ "EditCondition", "Method == EPCGExCellCenter::Circumcenter" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Prune points outside bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkHull_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkEdgeOnTouch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When true, edges that have at least a point on the Hull as marked as being on the hull. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When true, edges that have at least a point on the Hull as marked as being on the hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph. */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildVoronoiGraphSettings constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExpandBounds;
	static void NewProp_bPruneOutOfBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneOutOfBounds;
	static void NewProp_bMarkHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HullAttributeName;
	static void NewProp_bMarkEdgeOnTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkEdgeOnTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildVoronoiGraphSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildVoronoiGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics

// ********** Begin Class UPCGExBuildVoronoiGraphSettings Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraphSettings, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 3191491460
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_ExpandBounds = { "ExpandBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraphSettings, ExpandBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandBounds_MetaData), NewProp_ExpandBounds_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bPruneOutOfBounds_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraphSettings*)Obj)->bPruneOutOfBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bPruneOutOfBounds = { "bPruneOutOfBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraphSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bPruneOutOfBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneOutOfBounds_MetaData), NewProp_bPruneOutOfBounds_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkHull_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraphSettings*)Obj)->bMarkHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkHull = { "bMarkHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraphSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkHull_MetaData), NewProp_bMarkHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_HullAttributeName = { "HullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraphSettings, HullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullAttributeName_MetaData), NewProp_HullAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraphSettings*)Obj)->bMarkEdgeOnTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkEdgeOnTouch = { "bMarkEdgeOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraphSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkEdgeOnTouch_MetaData), NewProp_bMarkEdgeOnTouch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraphSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_ExpandBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bPruneOutOfBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_HullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_bMarkEdgeOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildVoronoiGraphSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::ClassParams = {
	&UPCGExBuildVoronoiGraphSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildVoronoiGraphSettings::StaticRegisterNativesUPCGExBuildVoronoiGraphSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings.OuterSingleton;
}
UPCGExBuildVoronoiGraphSettings::UPCGExBuildVoronoiGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildVoronoiGraphSettings);
UPCGExBuildVoronoiGraphSettings::~UPCGExBuildVoronoiGraphSettings() {}
// ********** End Class UPCGExBuildVoronoiGraphSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildVoronoiGraphSettings, UPCGExBuildVoronoiGraphSettings::StaticClass, TEXT("UPCGExBuildVoronoiGraphSettings"), &Z_Registration_Info_UClass_UPCGExBuildVoronoiGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildVoronoiGraphSettings), 1677681411U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph_h__Script_PCGExtendedToolkit_1519331338{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
