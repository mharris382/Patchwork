// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExEdge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdge() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExEdgeDirectionMethod *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod;
static UEnum* EPCGExEdgeDirectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEdgeDirectionMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeDirectionMethod>()
{
	return EPCGExEdgeDirectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EdgeDotAttribute.DisplayName", "Edge Dot Attribute" },
		{ "EdgeDotAttribute.Name", "EPCGExEdgeDirectionMethod::EdgeDotAttribute" },
		{ "EdgeDotAttribute.ToolTip", "Chooses the highest dot product against a vector property or attribute on the edge point" },
		{ "EndpointsIndices.DisplayName", "Endpoints Indices" },
		{ "EndpointsIndices.Name", "EPCGExEdgeDirectionMethod::EndpointsIndices" },
		{ "EndpointsIndices.ToolTip", "Uses the edge' Start & End indices" },
		{ "EndpointsOrder.DisplayName", "Endpoints Order" },
		{ "EndpointsOrder.Name", "EPCGExEdgeDirectionMethod::EndpointsOrder" },
		{ "EndpointsOrder.ToolTip", "Uses the edge' Start & End properties" },
		{ "EndpointsSort.DisplayName", "Endpoints Sort" },
		{ "EndpointsSort.Name", "EPCGExEdgeDirectionMethod::EndpointsSort" },
		{ "EndpointsSort.ToolTip", "Uses sorting rules to check endpoint is the Start or End." },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdge.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEdgeDirectionMethod::EndpointsOrder", (int64)EPCGExEdgeDirectionMethod::EndpointsOrder },
		{ "EPCGExEdgeDirectionMethod::EndpointsIndices", (int64)EPCGExEdgeDirectionMethod::EndpointsIndices },
		{ "EPCGExEdgeDirectionMethod::EndpointsSort", (int64)EPCGExEdgeDirectionMethod::EndpointsSort },
		{ "EPCGExEdgeDirectionMethod::EdgeDotAttribute", (int64)EPCGExEdgeDirectionMethod::EdgeDotAttribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEdgeDirectionMethod",
	"EPCGExEdgeDirectionMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod.InnerSingleton;
}
// ********** End Enum EPCGExEdgeDirectionMethod ***************************************************

// ********** Begin Enum EPCGExEdgeDirectionChoice *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice;
static UEnum* EPCGExEdgeDirectionChoice_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEdgeDirectionChoice"));
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeDirectionChoice>()
{
	return EPCGExEdgeDirectionChoice_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GreatestToSmallest.DisplayName", "Greatest to Smallest" },
		{ "GreatestToSmallest.Name", "EPCGExEdgeDirectionChoice::GreatestToSmallest" },
		{ "GreatestToSmallest.ToolTip", "Direction points from the greatest to smallest value" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdge.h" },
		{ "SmallestToGreatest.DisplayName", "Smallest to Greatest" },
		{ "SmallestToGreatest.Name", "EPCGExEdgeDirectionChoice::SmallestToGreatest" },
		{ "SmallestToGreatest.ToolTip", "Direction points from smallest to greatest value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEdgeDirectionChoice::SmallestToGreatest", (int64)EPCGExEdgeDirectionChoice::SmallestToGreatest },
		{ "EPCGExEdgeDirectionChoice::GreatestToSmallest", (int64)EPCGExEdgeDirectionChoice::GreatestToSmallest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEdgeDirectionChoice",
	"EPCGExEdgeDirectionChoice",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice.InnerSingleton;
}
// ********** End Enum EPCGExEdgeDirectionChoice ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExEdgeDirectionMethod_StaticEnum, TEXT("EPCGExEdgeDirectionMethod"), &Z_Registration_Info_UEnum_EPCGExEdgeDirectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2550565730U) },
		{ EPCGExEdgeDirectionChoice_StaticEnum, TEXT("EPCGExEdgeDirectionChoice"), &Z_Registration_Info_UEnum_EPCGExEdgeDirectionChoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2539041373U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h__Script_PCGExtendedToolkit_1153356628{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
