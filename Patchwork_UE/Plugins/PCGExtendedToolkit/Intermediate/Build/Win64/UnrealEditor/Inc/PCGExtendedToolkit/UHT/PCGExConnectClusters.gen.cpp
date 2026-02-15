// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExConnectClusters.h"
#include "Data/PCGExDataFilter.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExConnectClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConnectClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConnectClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBridgeClusterMethod *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod;
static UEnum* EPCGExBridgeClusterMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBridgeClusterMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBridgeClusterMethod>()
{
	return EPCGExBridgeClusterMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Delaunay2D.DisplayName", "Delaunay 2D" },
		{ "Delaunay2D.Name", "EPCGExBridgeClusterMethod::Delaunay2D" },
		{ "Delaunay2D.ToolTip", "Uses Delaunay 2D graph to find connections." },
		{ "Delaunay3D.DisplayName", "Delaunay 3D" },
		{ "Delaunay3D.Name", "EPCGExBridgeClusterMethod::Delaunay3D" },
		{ "Delaunay3D.ToolTip", "Uses Delaunay 3D graph to find connections." },
		{ "Filters.DisplayName", "Node Filters" },
		{ "Filters.Hidden", "" },
		{ "Filters.Name", "EPCGExBridgeClusterMethod::Filters" },
		{ "Filters.ToolTip", "Isolate nodes in each cluster as generators & connectable and connect by proximity." },
		{ "LeastEdges.DisplayName", "Least Edges" },
		{ "LeastEdges.Name", "EPCGExBridgeClusterMethod::LeastEdges" },
		{ "LeastEdges.ToolTip", "Ensure all clusters are connected using the least possible number of bridges." },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "MostEdges.DisplayName", "Most Edges" },
		{ "MostEdges.Name", "EPCGExBridgeClusterMethod::MostEdges" },
		{ "MostEdges.ToolTip", "Each cluster will have a bridge to every other cluster" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBridgeClusterMethod::Delaunay3D", (int64)EPCGExBridgeClusterMethod::Delaunay3D },
		{ "EPCGExBridgeClusterMethod::Delaunay2D", (int64)EPCGExBridgeClusterMethod::Delaunay2D },
		{ "EPCGExBridgeClusterMethod::LeastEdges", (int64)EPCGExBridgeClusterMethod::LeastEdges },
		{ "EPCGExBridgeClusterMethod::MostEdges", (int64)EPCGExBridgeClusterMethod::MostEdges },
		{ "EPCGExBridgeClusterMethod::Filters", (int64)EPCGExBridgeClusterMethod::Filters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBridgeClusterMethod",
	"EPCGExBridgeClusterMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod.InnerSingleton;
}
// ********** End Enum EPCGExBridgeClusterMethod ***************************************************

// ********** Begin Class UPCGExConnectClustersSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExConnectClustersSettings;
UClass* UPCGExConnectClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExConnectClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExConnectClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExConnectClustersSettings"),
			Z_Registration_Info_UClass_UPCGExConnectClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExConnectClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExConnectClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExConnectClustersSettings_NoRegister()
{
	return UPCGExConnectClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExConnectClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExConnectClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BridgeMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Method used to find & insert bridges */" },
		{ "DisplayName", "Connect Method" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "ToolTip", "Method used to find & insert bridges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "EditCondition", "BridgeMethod == EPCGExBridgeClusterMethod::Delaunay2D" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagVtxConnector_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxConnectorFlagName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bFlagVtxConnector" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagEdgeConnector_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeConnectorFlagName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bFlagEdgeConnector" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietNoBridgeWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** If enabled, won't throw a warning if no bridge could be created. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectClusters.h" },
		{ "ToolTip", "If enabled, won't throw a warning if no bridge could be created." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExConnectClustersSettings constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BridgeMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BridgeMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static void NewProp_bFlagVtxConnector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagVtxConnector;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxConnectorFlagName;
	static void NewProp_bFlagEdgeConnector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagEdgeConnector;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeConnectorFlagName;
	static void NewProp_bQuietNoBridgeWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietNoBridgeWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExConnectClustersSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExConnectClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExConnectClustersSettings_Statics

// ********** Begin Class UPCGExConnectClustersSettings Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_BridgeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_BridgeMethod = { "BridgeMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, BridgeMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBridgeClusterMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BridgeMethod_MetaData), NewProp_BridgeMethod_MetaData) }; // 1291245126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
void Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagVtxConnector_SetBit(void* Obj)
{
	((UPCGExConnectClustersSettings*)Obj)->bFlagVtxConnector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagVtxConnector = { "bFlagVtxConnector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConnectClustersSettings), &Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagVtxConnector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagVtxConnector_MetaData), NewProp_bFlagVtxConnector_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_VtxConnectorFlagName = { "VtxConnectorFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, VtxConnectorFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxConnectorFlagName_MetaData), NewProp_VtxConnectorFlagName_MetaData) };
void Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagEdgeConnector_SetBit(void* Obj)
{
	((UPCGExConnectClustersSettings*)Obj)->bFlagEdgeConnector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagEdgeConnector = { "bFlagEdgeConnector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConnectClustersSettings), &Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagEdgeConnector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagEdgeConnector_MetaData), NewProp_bFlagEdgeConnector_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_EdgeConnectorFlagName = { "EdgeConnectorFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectClustersSettings, EdgeConnectorFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeConnectorFlagName_MetaData), NewProp_EdgeConnectorFlagName_MetaData) };
void Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bQuietNoBridgeWarning_SetBit(void* Obj)
{
	((UPCGExConnectClustersSettings*)Obj)->bQuietNoBridgeWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bQuietNoBridgeWarning = { "bQuietNoBridgeWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConnectClustersSettings), &Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bQuietNoBridgeWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietNoBridgeWarning_MetaData), NewProp_bQuietNoBridgeWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_BridgeMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_BridgeMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_CarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_GraphBuilderDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagVtxConnector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_VtxConnectorFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bFlagEdgeConnector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_EdgeConnectorFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::NewProp_bQuietNoBridgeWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExConnectClustersSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::ClassParams = {
	&UPCGExConnectClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExConnectClustersSettings::StaticRegisterNativesUPCGExConnectClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExConnectClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExConnectClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExConnectClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExConnectClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExConnectClustersSettings.OuterSingleton;
}
UPCGExConnectClustersSettings::UPCGExConnectClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExConnectClustersSettings);
UPCGExConnectClustersSettings::~UPCGExConnectClustersSettings() {}
// ********** End Class UPCGExConnectClustersSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBridgeClusterMethod_StaticEnum, TEXT("EPCGExBridgeClusterMethod"), &Z_Registration_Info_UEnum_EPCGExBridgeClusterMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1291245126U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExConnectClustersSettings, UPCGExConnectClustersSettings::StaticClass, TEXT("UPCGExConnectClustersSettings"), &Z_Registration_Info_UClass_UPCGExConnectClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExConnectClustersSettings), 236645704U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_2631856266{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
