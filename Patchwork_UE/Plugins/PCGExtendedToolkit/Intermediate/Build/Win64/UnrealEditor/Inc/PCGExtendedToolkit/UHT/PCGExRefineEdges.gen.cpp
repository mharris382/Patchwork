// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExRefineEdges.h"
#include "Details/PCGExDetailsFiltering.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRefineEdges() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRefineEdgesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRefineEdgesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFilterResultDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRefineSanitization **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRefineSanitization;
static UEnum* EPCGExRefineSanitization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineSanitization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRefineSanitization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRefineSanitization"));
	}
	return Z_Registration_Info_UEnum_EPCGExRefineSanitization.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRefineSanitization>()
{
	return EPCGExRefineSanitization_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Filters.DisplayName", "Filters" },
		{ "Filters.Name", "EPCGExRefineSanitization::Filters" },
		{ "Filters.ToolTip", "Use filters to find edges that must be preserved." },
		{ "Longest.DisplayName", "Longest" },
		{ "Longest.Name", "EPCGExRefineSanitization::Longest" },
		{ "Longest.ToolTip", "If a node has no edge left, restore the longest one." },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExRefineSanitization::None" },
		{ "None.ToolTip", "No sanitization." },
		{ "Shortest.DisplayName", "Shortest" },
		{ "Shortest.Name", "EPCGExRefineSanitization::Shortest" },
		{ "Shortest.ToolTip", "If a node has no edge left, restore the shortest one." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRefineSanitization::None", (int64)EPCGExRefineSanitization::None },
		{ "EPCGExRefineSanitization::Shortest", (int64)EPCGExRefineSanitization::Shortest },
		{ "EPCGExRefineSanitization::Longest", (int64)EPCGExRefineSanitization::Longest },
		{ "EPCGExRefineSanitization::Filters", (int64)EPCGExRefineSanitization::Filters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRefineSanitization",
	"EPCGExRefineSanitization",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineSanitization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRefineSanitization.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRefineSanitization.InnerSingleton;
}
// ********** End Enum EPCGExRefineSanitization ****************************************************

// ********** Begin Enum EPCGExRefineEdgesOutput ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput;
static UEnum* EPCGExRefineEdgesOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRefineEdgesOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRefineEdgesOutput>()
{
	return EPCGExRefineEdgesOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExRefineEdgesOutput::Attribute" },
		{ "Attribute.ToolTip", "Writes the result of the filters to an attribute." },
		{ "Clusters.DisplayName", "Clusters" },
		{ "Clusters.Name", "EPCGExRefineEdgesOutput::Clusters" },
		{ "Clusters.ToolTip", "Outputs clusters." },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "Points.DisplayName", "Points" },
		{ "Points.Name", "EPCGExRefineEdgesOutput::Points" },
		{ "Points.ToolTip", "Outputs regular points (edges only)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRefineEdgesOutput::Clusters", (int64)EPCGExRefineEdgesOutput::Clusters },
		{ "EPCGExRefineEdgesOutput::Points", (int64)EPCGExRefineEdgesOutput::Points },
		{ "EPCGExRefineEdgesOutput::Attribute", (int64)EPCGExRefineEdgesOutput::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRefineEdgesOutput",
	"EPCGExRefineEdgesOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput.InnerSingleton;
}
// ********** End Enum EPCGExRefineEdgesOutput *****************************************************

// ********** Begin Class UPCGExRefineEdgesSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRefineEdgesSettings;
UClass* UPCGExRefineEdgesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExRefineEdgesSettings;
	if (!Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRefineEdgesSettings"),
			Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExRefineEdgesSettings,
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
	return Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRefineEdgesSettings_NoRegister()
{
	return UPCGExRefineEdgesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExRefineEdges.h" },
		{ "Keywords", "filter edge mst minimum spanning tree skeleton gabriel" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refinement_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputVtx_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Vtx Result" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputEdges_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Edge Result" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputEdgesOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowZeroPointOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Points" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sanitization_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Clusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreEdgesThatConnectToValidNodes_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Clusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "EditCondition", "Mode == EPCGExRefineEdgesOutput::Clusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRefineEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRefineEdgesSettings constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Refinement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultOutputVtx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultOutputEdges;
	static void NewProp_bOutputEdgesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputEdgesOnly;
	static void NewProp_bAllowZeroPointOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowZeroPointOutputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Sanitization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Sanitization;
	static void NewProp_bRestoreEdgesThatConnectToValidNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreEdgesThatConnectToValidNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRefineEdgesSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRefineEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics

// ********** Begin Class UPCGExRefineEdgesSettings Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Refinement = { "Refinement", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, Refinement), Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refinement_MetaData), NewProp_Refinement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgesOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 548644655
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_ResultOutputVtx = { "ResultOutputVtx", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, ResultOutputVtx), Z_Construct_UScriptStruct_FPCGExFilterResultDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOutputVtx_MetaData), NewProp_ResultOutputVtx_MetaData) }; // 3268313030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_ResultOutputEdges = { "ResultOutputEdges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, ResultOutputEdges), Z_Construct_UScriptStruct_FPCGExFilterResultDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOutputEdges_MetaData), NewProp_ResultOutputEdges_MetaData) }; // 3268313030
void Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bOutputEdgesOnly_SetBit(void* Obj)
{
	((UPCGExRefineEdgesSettings*)Obj)->bOutputEdgesOnly_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bOutputEdgesOnly = { "bOutputEdgesOnly", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRefineEdgesSettings), &Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bOutputEdgesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputEdgesOnly_MetaData), NewProp_bOutputEdgesOnly_MetaData) };
void Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bAllowZeroPointOutputs_SetBit(void* Obj)
{
	((UPCGExRefineEdgesSettings*)Obj)->bAllowZeroPointOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bAllowZeroPointOutputs = { "bAllowZeroPointOutputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRefineEdgesSettings), &Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bAllowZeroPointOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowZeroPointOutputs_MetaData), NewProp_bAllowZeroPointOutputs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Sanitization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Sanitization = { "Sanitization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, Sanitization), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineSanitization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sanitization_MetaData), NewProp_Sanitization_MetaData) }; // 4143108653
void Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bRestoreEdgesThatConnectToValidNodes_SetBit(void* Obj)
{
	((UPCGExRefineEdgesSettings*)Obj)->bRestoreEdgesThatConnectToValidNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bRestoreEdgesThatConnectToValidNodes = { "bRestoreEdgesThatConnectToValidNodes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRefineEdgesSettings), &Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bRestoreEdgesThatConnectToValidNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreEdgesThatConnectToValidNodes_MetaData), NewProp_bRestoreEdgesThatConnectToValidNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefineEdgesSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Refinement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_ResultOutputVtx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_ResultOutputEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bOutputEdgesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bAllowZeroPointOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Sanitization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_Sanitization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_bRestoreEdgesThatConnectToValidNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRefineEdgesSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::ClassParams = {
	&UPCGExRefineEdgesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::Class_MetaDataParams)
};
void UPCGExRefineEdgesSettings::StaticRegisterNativesUPCGExRefineEdgesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExRefineEdgesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.OuterSingleton, Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRefineEdgesSettings.OuterSingleton;
}
UPCGExRefineEdgesSettings::UPCGExRefineEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRefineEdgesSettings);
UPCGExRefineEdgesSettings::~UPCGExRefineEdgesSettings() {}
// ********** End Class UPCGExRefineEdgesSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRefineSanitization_StaticEnum, TEXT("EPCGExRefineSanitization"), &Z_Registration_Info_UEnum_EPCGExRefineSanitization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4143108653U) },
		{ EPCGExRefineEdgesOutput_StaticEnum, TEXT("EPCGExRefineEdgesOutput"), &Z_Registration_Info_UEnum_EPCGExRefineEdgesOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 548644655U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRefineEdgesSettings, UPCGExRefineEdgesSettings::StaticClass, TEXT("UPCGExRefineEdgesSettings"), &Z_Registration_Info_UClass_UPCGExRefineEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRefineEdgesSettings), 2504045951U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_3031254329{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
