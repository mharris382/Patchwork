// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfinding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfinding() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathStatistics();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathComposition *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathComposition;
static UEnum* EPCGExPathComposition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathComposition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathComposition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathComposition"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathComposition.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathComposition>()
{
	return EPCGExPathComposition_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edges.DisplayName", "Edge" },
		{ "Edges.Name", "EPCGExPathComposition::Edges" },
		{ "Edges.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
		{ "Vtx.DisplayName", "Vtx" },
		{ "Vtx.Name", "EPCGExPathComposition::Vtx" },
		{ "Vtx.Tooltip", "..." },
		{ "VtxAndEdges.DisplayName", "Vtx & Edges" },
		{ "VtxAndEdges.Hidden", "" },
		{ "VtxAndEdges.Name", "EPCGExPathComposition::VtxAndEdges" },
		{ "VtxAndEdges.Tooltip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathComposition::Vtx", (int64)EPCGExPathComposition::Vtx },
		{ "EPCGExPathComposition::Edges", (int64)EPCGExPathComposition::Edges },
		{ "EPCGExPathComposition::VtxAndEdges", (int64)EPCGExPathComposition::VtxAndEdges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathComposition",
	"EPCGExPathComposition",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathComposition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathComposition.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathComposition.InnerSingleton;
}
// ********** End Enum EPCGExPathComposition *******************************************************

// ********** Begin ScriptStruct FPCGExPathStatistics **********************************************
struct Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathStatistics); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathStatistics); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointUseCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write the point use count. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the point use count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointUseCountAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write point use count to.*/" },
		{ "DisplayName", "PointUseCount" },
		{ "EditCondition", "bWritePointUseCount" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write point use count to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeUseCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write the edge use count. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the edge use count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeUseCountAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write edge use count to.*/" },
		{ "DisplayName", "EdgeUseCount" },
		{ "EditCondition", "bWriteEdgeUseCount" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfinding.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write edge use count to." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathStatistics constinit property declarations **************
	static void NewProp_bWritePointUseCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointUseCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointUseCountAttributeName;
	static void NewProp_bWriteEdgeUseCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeUseCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeUseCountAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathStatistics constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathStatistics;
class UScriptStruct* FPCGExPathStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathStatistics, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathStatistics Property Definitions *************************
void Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWritePointUseCount_SetBit(void* Obj)
{
	((FPCGExPathStatistics*)Obj)->bWritePointUseCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWritePointUseCount = { "bWritePointUseCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathStatistics), &Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWritePointUseCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointUseCount_MetaData), NewProp_bWritePointUseCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_PointUseCountAttributeName = { "PointUseCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathStatistics, PointUseCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointUseCountAttributeName_MetaData), NewProp_PointUseCountAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWriteEdgeUseCount_SetBit(void* Obj)
{
	((FPCGExPathStatistics*)Obj)->bWriteEdgeUseCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWriteEdgeUseCount = { "bWriteEdgeUseCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathStatistics), &Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWriteEdgeUseCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeUseCount_MetaData), NewProp_bWriteEdgeUseCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_EdgeUseCountAttributeName = { "EdgeUseCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathStatistics, EdgeUseCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeUseCountAttributeName_MetaData), NewProp_EdgeUseCountAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWritePointUseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_PointUseCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_bWriteEdgeUseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewProp_EdgeUseCountAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathStatistics Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathStatistics",
	Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::PropPointers),
	sizeof(FPCGExPathStatistics),
	alignof(FPCGExPathStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathStatistics.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathStatistics ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathComposition_StaticEnum, TEXT("EPCGExPathComposition"), &Z_Registration_Info_UEnum_EPCGExPathComposition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1962836700U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPathStatistics::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathStatistics_Statics::NewStructOps, TEXT("PCGExPathStatistics"),&Z_Registration_Info_UScriptStruct_FPCGExPathStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathStatistics), 1744817090U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_4046179528{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfinding_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
