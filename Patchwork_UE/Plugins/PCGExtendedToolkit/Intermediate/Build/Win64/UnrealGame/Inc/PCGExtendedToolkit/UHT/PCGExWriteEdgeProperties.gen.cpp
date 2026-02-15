// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExWriteEdgeProperties.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Graph/PCGExEdgeDirectionSettings.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWriteEdgeProperties() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExHeuristicsWriteMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode;
static UEnum* EPCGExHeuristicsWriteMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExHeuristicsWriteMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExHeuristicsWriteMode>()
{
	return EPCGExHeuristicsWriteMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EndpointsOrder.DisplayName", "Endpoints Order" },
		{ "EndpointsOrder.Name", "EPCGExHeuristicsWriteMode::EndpointsOrder" },
		{ "EndpointsOrder.ToolTip", "Use endpoint order heuristics." },
		{ "Highest.DisplayName", "Highest Score" },
		{ "Highest.Name", "EPCGExHeuristicsWriteMode::Highest" },
		{ "Highest.ToolTip", "Compute heuristics both ways a keep highest score." },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "Smallest.DisplayName", "Smallest Score" },
		{ "Smallest.Name", "EPCGExHeuristicsWriteMode::Smallest" },
		{ "Smallest.ToolTip", "Compute heuristics both ways a keep smallest score" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExHeuristicsWriteMode::EndpointsOrder", (int64)EPCGExHeuristicsWriteMode::EndpointsOrder },
		{ "EPCGExHeuristicsWriteMode::Smallest", (int64)EPCGExHeuristicsWriteMode::Smallest },
		{ "EPCGExHeuristicsWriteMode::Highest", (int64)EPCGExHeuristicsWriteMode::Highest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExHeuristicsWriteMode",
	"EPCGExHeuristicsWriteMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode.InnerSingleton;
}
// ********** End Enum EPCGExHeuristicsWriteMode ***************************************************

// ********** Begin Class UPCGExWriteEdgePropertiesSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings;
UClass* UPCGExWriteEdgePropertiesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWriteEdgePropertiesSettings;
	if (!Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWriteEdgePropertiesSettings"),
			Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWriteEdgePropertiesSettings,
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
	return Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_NoRegister()
{
	return UPCGExWriteEdgePropertiesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCGExNodeLibraryDoc", "metadata/edge-properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the direction in which points will be ordered to form the final paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines the direction in which points will be ordered to form the final paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeLength_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Output Edge Length. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output Edge Length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLengthAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "EdgeLength" },
		{ "EditCondition", "bWriteEdgeLength" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeDirection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Output Edge Direction */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output Edge Direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeDirectionAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'boolean' attribute to write sampling success to.*/" },
		{ "DisplayName", "EdgeDirection" },
		{ "EditCondition", "bWriteEdgeDirection" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'boolean' attribute to write sampling success to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndpointsBlending_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Edges will inherit point attributes*/" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edges will inherit point attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointsWeights_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Balance between start/end point ( When enabled, this value will be overriden by EdgePositionLerp, and Solidification, in that order. )*/" },
		{ "EditCondition", "bEndpointsBlending && !bWriteEdgePosition && SolidificationAxis == EPCGExMinimalAxis::None" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Balance between start/end point ( When enabled, this value will be overriden by EdgePositionLerp, and Solidification, in that order. )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingInterface_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** How to blend data from sampled points */" },
		{ "EditCondition", "bEndpointsBlending" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to blend data from sampled points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingSettings_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together. */" },
		{ "EditCondition", "bEndpointsBlending && BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteHeuristics_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Output Edge Heuristics. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output Edge Heuristics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeuristicsAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write heuristics to.*/" },
		{ "DisplayName", "Heuristics" },
		{ "EditCondition", "bWriteHeuristics" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write heuristics to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeuristicsMode_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Heuristic write mode. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Heuristics Mode" },
		{ "EditCondition", "bWriteHeuristics" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Heuristic write mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgePosition_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "Comment", "/** Update Edge position as a lerp between endpoints (according to the direction method selected above) */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Update Edge position as a lerp between endpoints (according to the direction method selected above)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgePositionLerp_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Position position lerp between start & end points*/" },
		{ "EditCondition", "bWriteEdgePosition" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Position position lerp between start & end points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationAxis_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "Comment", "/** Align the edge point to the edge direction over the selected axis. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Align the edge point to the edge direction over the selected axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpInput_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "EditCondition", "SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpAttribute_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "Comment", "/** Solidification Lerp attribute (read from Edge).*/" },
		{ "DisplayName", "Solidification Lerp (Attr)" },
		{ "EditCondition", "SolidificationLerpInput == EPCGExInputValueType::Attribute && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Solidification Lerp attribute (read from Edge)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpConstant_MetaData[] = {
		{ "Category", "Settings|Solidification" },
		{ "Comment", "/** Solidification Lerp constant.*/" },
		{ "DisplayName", "Solidification Lerp" },
		{ "EditCondition", "SolidificationLerpInput == EPCGExInputValueType::Constant && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Solidification Lerp constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusX_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Whether or not to write the edge extents over the local X axis.*/" },
		{ "EditCondition", "SolidificationAxis != EPCGExMinimalAxis::X && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether or not to write the edge extents over the local X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXInput_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Type of Radius X value */" },
		{ "EditCondition", "bWriteRadiusX && SolidificationAxis != EPCGExMinimalAxis::X && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Radius X value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXSource_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Source from which to fetch the Radius X value */" },
		{ "EditCondition", "bWriteRadiusX && SolidificationAxis != EPCGExMinimalAxis::X && SolidificationAxis != EPCGExMinimalAxis::None && RadiusXInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Source from which to fetch the Radius X value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXSourceAttribute_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Attribute read on edge endpoints */" },
		{ "DisplayName", "Radius X (Attr)" },
		{ "EditCondition", "bWriteRadiusX && SolidificationAxis != EPCGExMinimalAxis::X && SolidificationAxis != EPCGExMinimalAxis::None && RadiusXInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute read on edge endpoints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXConstant_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Radius X Constant */" },
		{ "DisplayName", "Radius X" },
		{ "EditCondition", "bWriteRadiusX && SolidificationAxis != EPCGExMinimalAxis::X && SolidificationAxis != EPCGExMinimalAxis::None && RadiusXInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Radius X Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusY_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "SolidificationAxis != EPCGExMinimalAxis::Y && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYInput_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Type of Radius Y value */" },
		{ "EditCondition", "bWriteRadiusY && SolidificationAxis != EPCGExMinimalAxis::Y && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Radius Y value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYSource_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Source from which to fetch the Radius Y value */" },
		{ "EditCondition", "bWriteRadiusY && SolidificationAxis != EPCGExMinimalAxis::Y && SolidificationAxis != EPCGExMinimalAxis::None && RadiusYInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Source from which to fetch the Radius Y value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYSourceAttribute_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Attribute read on edge endpoints */" },
		{ "DisplayName", "Radius Y (Attr)" },
		{ "EditCondition", "bWriteRadiusY && SolidificationAxis != EPCGExMinimalAxis::Y && SolidificationAxis != EPCGExMinimalAxis::None && RadiusYInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute read on edge endpoints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYConstant_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Radius Y Constant */" },
		{ "DisplayName", "Radius Y" },
		{ "EditCondition", "bWriteRadiusY && SolidificationAxis != EPCGExMinimalAxis::Y && SolidificationAxis != EPCGExMinimalAxis::None && RadiusYInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Radius Y Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusZ_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "SolidificationAxis != EPCGExMinimalAxis::Z && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZInput_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Type of Radius Z value */" },
		{ "EditCondition", "bWriteRadiusZ && SolidificationAxis != EPCGExMinimalAxis::Z && SolidificationAxis != EPCGExMinimalAxis::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Radius Z value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZSource_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Source from which to fetch the Radius Z value */" },
		{ "EditCondition", "bWriteRadiusZ && SolidificationAxis != EPCGExMinimalAxis::Z && SolidificationAxis != EPCGExMinimalAxis::None && RadiusZInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Source from which to fetch the Radius Z value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZSourceAttribute_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Attribute read on edge endpoints */" },
		{ "DisplayName", "Radius Z (Attr)" },
		{ "EditCondition", "bWriteRadiusZ && SolidificationAxis != EPCGExMinimalAxis::Z && SolidificationAxis != EPCGExMinimalAxis::None && RadiusZInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute read on edge endpoints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZConstant_MetaData[] = {
		{ "Category", "Settings|Solidification|Radiuses" },
		{ "Comment", "/** Radius Z Constant */" },
		{ "DisplayName", "Radius Z" },
		{ "EditCondition", "bWriteRadiusZ && SolidificationAxis != EPCGExMinimalAxis::Z && SolidificationAxis != EPCGExMinimalAxis::None && RadiusZInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteEdgeProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Radius Z Constant" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWriteEdgePropertiesSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionSettings;
	static void NewProp_bWriteEdgeLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeLength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeLengthAttributeName;
	static void NewProp_bWriteEdgeDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeDirectionAttributeName;
	static void NewProp_bEndpointsBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndpointsBlending;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndpointsWeights;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingInterface_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingSettings;
	static void NewProp_bWriteHeuristics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteHeuristics;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeuristicsAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeuristicsMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeuristicsMode;
	static void NewProp_bWriteEdgePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgePosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgePositionLerp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationLerpInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationLerpInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolidificationLerpAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SolidificationLerpConstant;
	static void NewProp_bWriteRadiusX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusXInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusXInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusXSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusXSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusXSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusXConstant;
	static void NewProp_bWriteRadiusY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusYInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusYInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusYSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusYSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusYSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusYConstant;
	static void NewProp_bWriteRadiusZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusZ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusZInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusZInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusZSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusZSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusZSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusZConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWriteEdgePropertiesSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWriteEdgePropertiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics

// ********** Begin Class UPCGExWriteEdgePropertiesSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_DirectionSettings = { "DirectionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, DirectionSettings), Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionSettings_MetaData), NewProp_DirectionSettings_MetaData) }; // 1520832441
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeLength_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteEdgeLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeLength = { "bWriteEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeLength_MetaData), NewProp_bWriteEdgeLength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgeLengthAttributeName = { "EdgeLengthAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, EdgeLengthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLengthAttributeName_MetaData), NewProp_EdgeLengthAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeDirection_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteEdgeDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeDirection = { "bWriteEdgeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeDirection_MetaData), NewProp_bWriteEdgeDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgeDirectionAttributeName = { "EdgeDirectionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, EdgeDirectionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeDirectionAttributeName_MetaData), NewProp_EdgeDirectionAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bEndpointsBlending_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bEndpointsBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bEndpointsBlending = { "bEndpointsBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bEndpointsBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndpointsBlending_MetaData), NewProp_bEndpointsBlending_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EndpointsWeights = { "EndpointsWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, EndpointsWeights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointsWeights_MetaData), NewProp_EndpointsWeights_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingInterface_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingInterface = { "BlendingInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, BlendingInterface), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingInterface_MetaData), NewProp_BlendingInterface_MetaData) }; // 1762397716
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingSettings = { "BlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, BlendingSettings), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingSettings_MetaData), NewProp_BlendingSettings_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteHeuristics_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteHeuristics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteHeuristics = { "bWriteHeuristics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteHeuristics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteHeuristics_MetaData), NewProp_bWriteHeuristics_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsAttributeName = { "HeuristicsAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, HeuristicsAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeuristicsAttributeName_MetaData), NewProp_HeuristicsAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsMode = { "HeuristicsMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, HeuristicsMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicsWriteMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeuristicsMode_MetaData), NewProp_HeuristicsMode_MetaData) }; // 3127311491
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgePosition_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteEdgePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgePosition = { "bWriteEdgePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgePosition_MetaData), NewProp_bWriteEdgePosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgePositionLerp = { "EdgePositionLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, EdgePositionLerp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgePositionLerp_MetaData), NewProp_EdgePositionLerp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationAxis = { "SolidificationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, SolidificationAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationAxis_MetaData), NewProp_SolidificationAxis_MetaData) }; // 904353693
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpInput = { "SolidificationLerpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, SolidificationLerpInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpInput_MetaData), NewProp_SolidificationLerpInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpAttribute = { "SolidificationLerpAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, SolidificationLerpAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpAttribute_MetaData), NewProp_SolidificationLerpAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpConstant = { "SolidificationLerpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, SolidificationLerpConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpConstant_MetaData), NewProp_SolidificationLerpConstant_MetaData) };
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusX_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteRadiusX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusX = { "bWriteRadiusX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusX_MetaData), NewProp_bWriteRadiusX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXInput = { "RadiusXInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusXInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXInput_MetaData), NewProp_RadiusXInput_MetaData) }; // 504493006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSource = { "RadiusXSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusXSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXSource_MetaData), NewProp_RadiusXSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSourceAttribute = { "RadiusXSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusXSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXSourceAttribute_MetaData), NewProp_RadiusXSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXConstant = { "RadiusXConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusXConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXConstant_MetaData), NewProp_RadiusXConstant_MetaData) };
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusY_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteRadiusY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusY = { "bWriteRadiusY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusY_MetaData), NewProp_bWriteRadiusY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYInput = { "RadiusYInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusYInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYInput_MetaData), NewProp_RadiusYInput_MetaData) }; // 504493006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSource = { "RadiusYSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusYSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYSource_MetaData), NewProp_RadiusYSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSourceAttribute = { "RadiusYSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusYSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYSourceAttribute_MetaData), NewProp_RadiusYSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYConstant = { "RadiusYConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusYConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYConstant_MetaData), NewProp_RadiusYConstant_MetaData) };
void Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusZ_SetBit(void* Obj)
{
	((UPCGExWriteEdgePropertiesSettings*)Obj)->bWriteRadiusZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusZ = { "bWriteRadiusZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteEdgePropertiesSettings), &Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusZ_MetaData), NewProp_bWriteRadiusZ_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZInput = { "RadiusZInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusZInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZInput_MetaData), NewProp_RadiusZInput_MetaData) }; // 504493006
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSource = { "RadiusZSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusZSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZSource_MetaData), NewProp_RadiusZSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSourceAttribute = { "RadiusZSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusZSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZSourceAttribute_MetaData), NewProp_RadiusZSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZConstant = { "RadiusZConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteEdgePropertiesSettings, RadiusZConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZConstant_MetaData), NewProp_RadiusZConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_DirectionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgeLengthAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgeDirectionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bEndpointsBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EndpointsWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingInterface_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_BlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteHeuristics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_HeuristicsMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteEdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_EdgePositionLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_SolidificationLerpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusXConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusYConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_bWriteRadiusZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::NewProp_RadiusZConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWriteEdgePropertiesSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::ClassParams = {
	&UPCGExWriteEdgePropertiesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::Class_MetaDataParams)
};
void UPCGExWriteEdgePropertiesSettings::StaticRegisterNativesUPCGExWriteEdgePropertiesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.OuterSingleton, Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings.OuterSingleton;
}
UPCGExWriteEdgePropertiesSettings::UPCGExWriteEdgePropertiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWriteEdgePropertiesSettings);
UPCGExWriteEdgePropertiesSettings::~UPCGExWriteEdgePropertiesSettings() {}
// ********** End Class UPCGExWriteEdgePropertiesSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExHeuristicsWriteMode_StaticEnum, TEXT("EPCGExHeuristicsWriteMode"), &Z_Registration_Info_UEnum_EPCGExHeuristicsWriteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127311491U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings, UPCGExWriteEdgePropertiesSettings::StaticClass, TEXT("UPCGExWriteEdgePropertiesSettings"), &Z_Registration_Info_UClass_UPCGExWriteEdgePropertiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWriteEdgePropertiesSettings), 3724829980U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_3752721837{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
