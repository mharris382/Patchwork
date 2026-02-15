// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExFilterVtx.h"
#include "Details/PCGExDetailsFiltering.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFilterVtx() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterVtxSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterVtxSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFilterResultDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExVtxFilterOutput *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExVtxFilterOutput;
static UEnum* EPCGExVtxFilterOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExVtxFilterOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVtxFilterOutput>()
{
	return EPCGExVtxFilterOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExVtxFilterOutput::Attribute" },
		{ "Attribute.ToolTip", "Writes the result of the filters to a boolean attribute." },
		{ "Clusters.DisplayName", "Clusters" },
		{ "Clusters.Name", "EPCGExVtxFilterOutput::Clusters" },
		{ "Clusters.ToolTip", "Outputs clusters." },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "Points.DisplayName", "Points" },
		{ "Points.Name", "EPCGExVtxFilterOutput::Points" },
		{ "Points.ToolTip", "Outputs regular points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExVtxFilterOutput::Clusters", (int64)EPCGExVtxFilterOutput::Clusters },
		{ "EPCGExVtxFilterOutput::Points", (int64)EPCGExVtxFilterOutput::Points },
		{ "EPCGExVtxFilterOutput::Attribute", (int64)EPCGExVtxFilterOutput::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExVtxFilterOutput",
	"EPCGExVtxFilterOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExVtxFilterOutput.InnerSingleton;
}
// ********** End Enum EPCGExVtxFilterOutput *******************************************************

// ********** Begin Class UPCGExFilterVtxSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFilterVtxSettings;
UClass* UPCGExFilterVtxSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFilterVtxSettings;
	if (!Z_Registration_Info_UClass_UPCGExFilterVtxSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFilterVtxSettings"),
			Z_Registration_Info_UClass_UPCGExFilterVtxSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFilterVtxSettings,
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
	return Z_Registration_Info_UClass_UPCGExFilterVtxSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFilterVtxSettings_NoRegister()
{
	return UPCGExFilterVtxSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFilterVtxSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExFilterVtx.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCGExNodeLibraryDoc", "clusters/find-clusters-data-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of output */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputVtx_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Result" },
		{ "EditCondition", "Mode == EPCGExVtxFilterOutput::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the filter result */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the filter result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertEdgeFilters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the edge filters result */" },
		{ "EditCondition", "Mode == EPCGExVtxFilterOutput::Clusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the edge filters result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitOutputsByConnectivity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, inside/outside groups will be partitioned by initial edge connectivity. */" },
		{ "EditCondition", "Mode == EPCGExVtxFilterOutput::Points" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, inside/outside groups will be partitioned by initial edge connectivity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Swap Inside & Outside content */" },
		{ "EditCondition", "Mode == EPCGExVtxFilterOutput::Points" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Swap Inside & Outside content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "EditCondition", "Mode == EPCGExVtxFilterOutput::Clusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExFilterVtx.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFilterVtxSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultOutputVtx;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bInvertEdgeFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertEdgeFilters;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResultAttributeName;
	static void NewProp_bSplitOutputsByConnectivity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitOutputsByConnectivity;
	static void NewProp_bSwap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFilterVtxSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFilterVtxSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFilterVtxSettings_Statics

// ********** Begin Class UPCGExFilterVtxSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterVtxSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxFilterOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2084924547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_ResultOutputVtx = { "ResultOutputVtx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterVtxSettings, ResultOutputVtx), Z_Construct_UScriptStruct_FPCGExFilterResultDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOutputVtx_MetaData), NewProp_ResultOutputVtx_MetaData) }; // 3268313030
void Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExFilterVtxSettings*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFilterVtxSettings), &Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvertEdgeFilters_SetBit(void* Obj)
{
	((UPCGExFilterVtxSettings*)Obj)->bInvertEdgeFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvertEdgeFilters = { "bInvertEdgeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFilterVtxSettings), &Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvertEdgeFilters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertEdgeFilters_MetaData), NewProp_bInvertEdgeFilters_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_ResultAttributeName = { "ResultAttributeName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterVtxSettings, ResultAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultAttributeName_MetaData), NewProp_ResultAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSplitOutputsByConnectivity_SetBit(void* Obj)
{
	((UPCGExFilterVtxSettings*)Obj)->bSplitOutputsByConnectivity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSplitOutputsByConnectivity = { "bSplitOutputsByConnectivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFilterVtxSettings), &Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSplitOutputsByConnectivity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitOutputsByConnectivity_MetaData), NewProp_bSplitOutputsByConnectivity_MetaData) };
void Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSwap_SetBit(void* Obj)
{
	((UPCGExFilterVtxSettings*)Obj)->bSwap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSwap = { "bSwap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFilterVtxSettings), &Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwap_MetaData), NewProp_bSwap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterVtxSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_ResultOutputVtx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bInvertEdgeFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_ResultAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSplitOutputsByConnectivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_bSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFilterVtxSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::ClassParams = {
	&UPCGExFilterVtxSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::Class_MetaDataParams)
};
void UPCGExFilterVtxSettings::StaticRegisterNativesUPCGExFilterVtxSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFilterVtxSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFilterVtxSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFilterVtxSettings.OuterSingleton, Z_Construct_UClass_UPCGExFilterVtxSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFilterVtxSettings.OuterSingleton;
}
UPCGExFilterVtxSettings::UPCGExFilterVtxSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFilterVtxSettings);
UPCGExFilterVtxSettings::~UPCGExFilterVtxSettings() {}
// ********** End Class UPCGExFilterVtxSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExVtxFilterOutput_StaticEnum, TEXT("EPCGExVtxFilterOutput"), &Z_Registration_Info_UEnum_EPCGExVtxFilterOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2084924547U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFilterVtxSettings, UPCGExFilterVtxSettings::StaticClass, TEXT("UPCGExFilterVtxSettings"), &Z_Registration_Info_UClass_UPCGExFilterVtxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFilterVtxSettings), 2027006045U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_447124155{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
