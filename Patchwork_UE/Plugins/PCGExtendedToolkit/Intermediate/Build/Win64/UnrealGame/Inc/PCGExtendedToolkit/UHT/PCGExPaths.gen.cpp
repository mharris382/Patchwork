// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPaths.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPaths() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathFilterSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathOutputDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSplinePointTypeRedux ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux;
static UEnum* EPCGExSplinePointTypeRedux_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplinePointTypeRedux"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplinePointTypeRedux>()
{
	return EPCGExSplinePointTypeRedux_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant (2)" },
		{ "Constant.Name", "EPCGExSplinePointTypeRedux::Constant" },
		{ "Constant.Tooltip", "Constant (2)." },
		{ "Curve.DisplayName", "Curve (1)" },
		{ "Curve.Name", "EPCGExSplinePointTypeRedux::Curve" },
		{ "Curve.Tooltip", "Curve (1)." },
		{ "CurveClamped.DisplayName", "CurveClamped (3)" },
		{ "CurveClamped.Name", "EPCGExSplinePointTypeRedux::CurveClamped" },
		{ "CurveClamped.Tooltip", "CurveClamped (3)." },
		{ "Linear.DisplayName", "Linear (0)" },
		{ "Linear.Name", "EPCGExSplinePointTypeRedux::Linear" },
		{ "Linear.Tooltip", "Linear (0)." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplinePointTypeRedux::Linear", (int64)EPCGExSplinePointTypeRedux::Linear },
		{ "EPCGExSplinePointTypeRedux::Curve", (int64)EPCGExSplinePointTypeRedux::Curve },
		{ "EPCGExSplinePointTypeRedux::Constant", (int64)EPCGExSplinePointTypeRedux::Constant },
		{ "EPCGExSplinePointTypeRedux::CurveClamped", (int64)EPCGExSplinePointTypeRedux::CurveClamped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplinePointTypeRedux",
	"EPCGExSplinePointTypeRedux",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux.InnerSingleton;
}
// ********** End Enum EPCGExSplinePointTypeRedux **************************************************

// ********** Begin Enum EPCGExInlinePathProcessingOrder *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder;
static UEnum* EPCGExInlinePathProcessingOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExInlinePathProcessingOrder"));
	}
	return Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInlinePathProcessingOrder>()
{
	return EPCGExInlinePathProcessingOrder_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EndpointCompare.DisplayName", "Endpoint Comparison" },
		{ "EndpointCompare.Name", "EPCGExInlinePathProcessingOrder::EndpointCompare" },
		{ "EndpointCompare.ToolTip", "Compare an attribute on start and end point to determine which endpoint to start with. If the comparison returns true, start with first point." },
		{ "FromStart.DisplayName", "From Start" },
		{ "FromStart.Name", "EPCGExInlinePathProcessingOrder::FromStart" },
		{ "FromStart.ToolTip", "Start at the index 0 of the path. If inverted, start at the last index." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "TaggedAll.DisplayName", "Tagged (All)" },
		{ "TaggedAll.Name", "EPCGExInlinePathProcessingOrder::TaggedAll" },
		{ "TaggedAll.ToolTip", "Check for all tag matches on the input data. If all tags are found, start with first point." },
		{ "TaggedAny.DisplayName", "Tagged (Any)" },
		{ "TaggedAny.Name", "EPCGExInlinePathProcessingOrder::TaggedAny" },
		{ "TaggedAny.ToolTip", "Check for a tag match on the input data. If the tag is found, start with first point." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExInlinePathProcessingOrder::FromStart", (int64)EPCGExInlinePathProcessingOrder::FromStart },
		{ "EPCGExInlinePathProcessingOrder::EndpointCompare", (int64)EPCGExInlinePathProcessingOrder::EndpointCompare },
		{ "EPCGExInlinePathProcessingOrder::TaggedAny", (int64)EPCGExInlinePathProcessingOrder::TaggedAny },
		{ "EPCGExInlinePathProcessingOrder::TaggedAll", (int64)EPCGExInlinePathProcessingOrder::TaggedAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExInlinePathProcessingOrder",
	"EPCGExInlinePathProcessingOrder",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder()
{
	if (!Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInlinePathProcessingOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder.InnerSingleton;
}
// ********** End Enum EPCGExInlinePathProcessingOrder *********************************************

// ********** Begin Enum EPCGExInputScope **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExInputScope;
static UEnum* EPCGExInputScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExInputScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExInputScope"));
	}
	return Z_Registration_Info_UEnum_EPCGExInputScope.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputScope>()
{
	return EPCGExInputScope_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExInputScope::All" },
		{ "All.Tooltip", "All paths are considered to have the same open or closed status." },
		{ "AllButTagged.DisplayName", "All but tagged" },
		{ "AllButTagged.Name", "EPCGExInputScope::AllButTagged" },
		{ "AllButTagged.Tooltip", "All paths are considered open or closed by default, except the ones with the specified tags which will use the opposite value." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExInputScope::All", (int64)EPCGExInputScope::All },
		{ "EPCGExInputScope::AllButTagged", (int64)EPCGExInputScope::AllButTagged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExInputScope",
	"EPCGExInputScope",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope()
{
	if (!Z_Registration_Info_UEnum_EPCGExInputScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExInputScope.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExInputScope.InnerSingleton;
}
// ********** End Enum EPCGExInputScope ************************************************************

// ********** Begin Enum EPCGExPathNormalDirection *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathNormalDirection;
static UEnum* EPCGExPathNormalDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathNormalDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathNormalDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathNormalDirection"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathNormalDirection.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathNormalDirection>()
{
	return EPCGExPathNormalDirection_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AverageNormal.DisplayName", "Average Normal" },
		{ "AverageNormal.Name", "EPCGExPathNormalDirection::AverageNormal" },
		{ "AverageNormal.ToolTip", "..." },
		{ "Binormal.DisplayName", "Binormal" },
		{ "Binormal.Name", "EPCGExPathNormalDirection::Binormal" },
		{ "Binormal.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EPCGExPathNormalDirection::Normal" },
		{ "Normal.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathNormalDirection::Normal", (int64)EPCGExPathNormalDirection::Normal },
		{ "EPCGExPathNormalDirection::Binormal", (int64)EPCGExPathNormalDirection::Binormal },
		{ "EPCGExPathNormalDirection::AverageNormal", (int64)EPCGExPathNormalDirection::AverageNormal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathNormalDirection",
	"EPCGExPathNormalDirection",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathNormalDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathNormalDirection.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathNormalDirection.InnerSingleton;
}
// ********** End Enum EPCGExPathNormalDirection ***************************************************

// ********** Begin Enum EPCGExSplineMeshUpMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode;
static UEnum* EPCGExSplineMeshUpMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplineMeshUpMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineMeshUpMode>()
{
	return EPCGExSplineMeshUpMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExSplineMeshUpMode::Attribute" },
		{ "Attribute.Tooltip", "Per-point attribute value" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExSplineMeshUpMode::Constant" },
		{ "Constant.Tooltip", "Constant up vector" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "Tangents.DisplayName", "From Tangents (Gimbal fix)" },
		{ "Tangents.Name", "EPCGExSplineMeshUpMode::Tangents" },
		{ "Tangents.Tooltip", "Automatically computed up vector from tangents to enforce gimbal fix" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplineMeshUpMode::Constant", (int64)EPCGExSplineMeshUpMode::Constant },
		{ "EPCGExSplineMeshUpMode::Attribute", (int64)EPCGExSplineMeshUpMode::Attribute },
		{ "EPCGExSplineMeshUpMode::Tangents", (int64)EPCGExSplineMeshUpMode::Tangents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplineMeshUpMode",
	"EPCGExSplineMeshUpMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode.InnerSingleton;
}
// ********** End Enum EPCGExSplineMeshUpMode ******************************************************

// ********** Begin ScriptStruct FPCGExPathOutputDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathOutputDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathOutputDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveSmallPaths_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output paths if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output paths if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Minimum points threshold */" },
		{ "EditCondition", "bRemoveSmallPaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum points threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveLargePaths_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output paths if they have more points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output paths if they have more points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Maximum points threshold */" },
		{ "EditCondition", "bRemoveLargePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum points threshold" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathOutputDetails constinit property declarations ***********
	static void NewProp_bRemoveSmallPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveSmallPaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bRemoveLargePaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveLargePaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathOutputDetails constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathOutputDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails;
class UScriptStruct* FPCGExPathOutputDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathOutputDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathOutputDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathOutputDetails Property Definitions **********************
void Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveSmallPaths_SetBit(void* Obj)
{
	((FPCGExPathOutputDetails*)Obj)->bRemoveSmallPaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveSmallPaths = { "bRemoveSmallPaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathOutputDetails), &Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveSmallPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveSmallPaths_MetaData), NewProp_bRemoveSmallPaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathOutputDetails, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveLargePaths_SetBit(void* Obj)
{
	((FPCGExPathOutputDetails*)Obj)->bRemoveLargePaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveLargePaths = { "bRemoveLargePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathOutputDetails), &Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveLargePaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveLargePaths_MetaData), NewProp_bRemoveLargePaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathOutputDetails, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveSmallPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_bRemoveLargePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewProp_MaxPointCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathOutputDetails Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathOutputDetails",
	Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::PropPointers),
	sizeof(FPCGExPathOutputDetails),
	alignof(FPCGExPathOutputDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathOutputDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathOutputDetails *********************************************

// ********** Begin ScriptStruct FPCGExPathEdgeIntersectionDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathEdgeIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathEdgeIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSelfIntersection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSelfIntersection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If disabled, edges will only be checked against other datasets. */" },
		{ "EditCondition", "bSupportSelfIntersection" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If disabled, edges will only be checked against other datasets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance at which two edges are considered intersecting. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance at which two edges are considered intersecting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Min angle. */" },
		{ "EditCondition", "bUseMinAngle" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Min angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle. */" },
		{ "EditCondition", "bUseMaxAngle" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCrossing_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingAttributeName_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/** Name of the attribute to flag point as crossing (result of an Edge/Edge intersection) */" },
		{ "EditCondition", "bWriteCrossing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to flag point as crossing (result of an Edge/Edge intersection)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathEdgeIntersectionDetails constinit property declarations *
	static void NewProp_bSupportSelfIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSelfIntersection;
	static void NewProp_bEnableSelfIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSelfIntersection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bUseMinAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinAngle;
	static void NewProp_bUseMaxAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static void NewProp_bWriteCrossing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCrossing;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossingAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathEdgeIntersectionDetails constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathEdgeIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails;
class UScriptStruct* FPCGExPathEdgeIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathEdgeIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathEdgeIntersectionDetails Property Definitions ************
void Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bSupportSelfIntersection_SetBit(void* Obj)
{
	((FPCGExPathEdgeIntersectionDetails*)Obj)->bSupportSelfIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bSupportSelfIntersection = { "bSupportSelfIntersection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bSupportSelfIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSelfIntersection_MetaData), NewProp_bSupportSelfIntersection_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit(void* Obj)
{
	((FPCGExPathEdgeIntersectionDetails*)Obj)->bEnableSelfIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection = { "bEnableSelfIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSelfIntersection_MetaData), NewProp_bEnableSelfIntersection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathEdgeIntersectionDetails, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit(void* Obj)
{
	((FPCGExPathEdgeIntersectionDetails*)Obj)->bUseMinAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle = { "bUseMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinAngle_MetaData), NewProp_bUseMinAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathEdgeIntersectionDetails, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngle_MetaData), NewProp_MinAngle_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit(void* Obj)
{
	((FPCGExPathEdgeIntersectionDetails*)Obj)->bUseMaxAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle = { "bUseMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxAngle_MetaData), NewProp_bUseMaxAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathEdgeIntersectionDetails, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing_SetBit(void* Obj)
{
	((FPCGExPathEdgeIntersectionDetails*)Obj)->bWriteCrossing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing = { "bWriteCrossing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCrossing_MetaData), NewProp_bWriteCrossing_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_CrossingAttributeName = { "CrossingAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathEdgeIntersectionDetails, CrossingAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingAttributeName_MetaData), NewProp_CrossingAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bSupportSelfIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewProp_CrossingAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathEdgeIntersectionDetails Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathEdgeIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExPathEdgeIntersectionDetails),
	alignof(FPCGExPathEdgeIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathEdgeIntersectionDetails ***********************************

// ********** Begin ScriptStruct FPCGExPathFilterSettings ******************************************
struct Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathFilterSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathFilterSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Method to pick the edge direction amongst various possibilities.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Method to pick the edge direction amongst various possibilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionChoice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Further refine the direction method. Not all methods make use of this property.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Further refine the direction method. Not all methods make use of this property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute picker for the selected Direction Method.*/" },
		{ "EditCondition", "DirectionMethod == EPCGExEdgeDirectionMethod::EdgeDotAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute picker for the selected Direction Method." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathFilterSettings constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionChoice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionChoice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirSourceAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathFilterSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathFilterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings;
class UScriptStruct* FPCGExPathFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathFilterSettings, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathFilterSettings Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionMethod = { "DirectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathFilterSettings, DirectionMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMethod_MetaData), NewProp_DirectionMethod_MetaData) }; // 2550565730
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionChoice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionChoice = { "DirectionChoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathFilterSettings, DirectionChoice), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionChoice_MetaData), NewProp_DirectionChoice_MetaData) }; // 2539041373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirSourceAttribute = { "DirSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathFilterSettings, DirSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirSourceAttribute_MetaData), NewProp_DirSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionChoice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirectionChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewProp_DirSourceAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathFilterSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathFilterSettings",
	Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::PropPointers),
	sizeof(FPCGExPathFilterSettings),
	alignof(FPCGExPathFilterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathFilterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathFilterSettings ********************************************

// ********** Begin ScriptStruct FPCGExPathIntersectionDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance at which two edges are considered intersecting. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance at which two edges are considered intersecting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Min angle. */" },
		{ "EditCondition", "bUseMinAngle" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Min angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle. */" },
		{ "EditCondition", "bUseMaxAngle" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strictness_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExIntersectionStrictness" },
		{ "Category", "Settings" },
		{ "Comment", "/** Strictness of the intersection detection. Different modes allow for some edge cases to be considered intersection. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Strictness of the intersection detection. Different modes allow for some edge cases to be considered intersection." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathIntersectionDetails constinit property declarations *****
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bUseMinAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinAngle;
	static void NewProp_bUseMaxAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Strictness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathIntersectionDetails constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails;
class UScriptStruct* FPCGExPathIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathIntersectionDetails Property Definitions ****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathIntersectionDetails, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit(void* Obj)
{
	((FPCGExPathIntersectionDetails*)Obj)->bUseMinAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMinAngle = { "bUseMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinAngle_MetaData), NewProp_bUseMinAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathIntersectionDetails, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngle_MetaData), NewProp_MinAngle_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit(void* Obj)
{
	((FPCGExPathIntersectionDetails*)Obj)->bUseMaxAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMaxAngle = { "bUseMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxAngle_MetaData), NewProp_bUseMaxAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathIntersectionDetails, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_Strictness = { "Strictness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathIntersectionDetails, Strictness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strictness_MetaData), NewProp_Strictness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_bUseMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewProp_Strictness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathIntersectionDetails Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExPathIntersectionDetails),
	alignof(FPCGExPathIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathIntersectionDetails ***************************************

// ********** Begin ScriptStruct FPCGExSplineMeshMutationDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSplineMeshMutationDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSplineMeshMutationDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPushStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPushInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bPushStart" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPushInputAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Amount (Attr)" },
		{ "EditCondition", "bPushStart && StartPushInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPushConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Amount" },
		{ "EditCondition", "bPushStart && StartPushInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, value will relative to the size of the segment */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Relative" },
		{ "EditCondition", "bPushStart" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, value will relative to the size of the segment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPushEnd_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPushInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bPushEnd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPushInputAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Amount (Attr)" },
		{ "EditCondition", "bPushEnd && EndPushInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPushConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Amount" },
		{ "EditCondition", "bPushEnd && EndPushInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeEnd_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, value will relative to the size of the segment */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Relative" },
		{ "EditCondition", "bPushEnd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, value will relative to the size of the segment" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSplineMeshMutationDetails constinit property declarations ***
	static void NewProp_bPushStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushStart;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartPushInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartPushInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPushInputAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartPushConstant;
	static void NewProp_bRelativeStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeStart;
	static void NewProp_bPushEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushEnd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPushInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndPushInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPushInputAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndPushConstant;
	static void NewProp_bRelativeEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSplineMeshMutationDetails constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSplineMeshMutationDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails;
class UScriptStruct* FPCGExSplineMeshMutationDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSplineMeshMutationDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSplineMeshMutationDetails Property Definitions **************
void Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushStart_SetBit(void* Obj)
{
	((FPCGExSplineMeshMutationDetails*)Obj)->bPushStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushStart = { "bPushStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSplineMeshMutationDetails), &Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPushStart_MetaData), NewProp_bPushStart_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInput = { "StartPushInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, StartPushInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPushInput_MetaData), NewProp_StartPushInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInputAttribute = { "StartPushInputAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, StartPushInputAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPushInputAttribute_MetaData), NewProp_StartPushInputAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushConstant = { "StartPushConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, StartPushConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPushConstant_MetaData), NewProp_StartPushConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeStart_SetBit(void* Obj)
{
	((FPCGExSplineMeshMutationDetails*)Obj)->bRelativeStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeStart = { "bRelativeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSplineMeshMutationDetails), &Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelativeStart_MetaData), NewProp_bRelativeStart_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushEnd_SetBit(void* Obj)
{
	((FPCGExSplineMeshMutationDetails*)Obj)->bPushEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushEnd = { "bPushEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSplineMeshMutationDetails), &Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPushEnd_MetaData), NewProp_bPushEnd_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInput = { "EndPushInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, EndPushInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPushInput_MetaData), NewProp_EndPushInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInputAttribute = { "EndPushInputAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, EndPushInputAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPushInputAttribute_MetaData), NewProp_EndPushInputAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushConstant = { "EndPushConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSplineMeshMutationDetails, EndPushConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPushConstant_MetaData), NewProp_EndPushConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeEnd_SetBit(void* Obj)
{
	((FPCGExSplineMeshMutationDetails*)Obj)->bRelativeEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeEnd = { "bRelativeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSplineMeshMutationDetails), &Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelativeEnd_MetaData), NewProp_bRelativeEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushInputAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_StartPushConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bPushEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushInputAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_EndPushConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewProp_bRelativeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSplineMeshMutationDetails Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSplineMeshMutationDetails",
	Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::PropPointers),
	sizeof(FPCGExSplineMeshMutationDetails),
	alignof(FPCGExSplineMeshMutationDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSplineMeshMutationDetails *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSplinePointTypeRedux_StaticEnum, TEXT("EPCGExSplinePointTypeRedux"), &Z_Registration_Info_UEnum_EPCGExSplinePointTypeRedux, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1037731003U) },
		{ EPCGExInlinePathProcessingOrder_StaticEnum, TEXT("EPCGExInlinePathProcessingOrder"), &Z_Registration_Info_UEnum_EPCGExInlinePathProcessingOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1825543010U) },
		{ EPCGExInputScope_StaticEnum, TEXT("EPCGExInputScope"), &Z_Registration_Info_UEnum_EPCGExInputScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2035546545U) },
		{ EPCGExPathNormalDirection_StaticEnum, TEXT("EPCGExPathNormalDirection"), &Z_Registration_Info_UEnum_EPCGExPathNormalDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2315435228U) },
		{ EPCGExSplineMeshUpMode_StaticEnum, TEXT("EPCGExSplineMeshUpMode"), &Z_Registration_Info_UEnum_EPCGExSplineMeshUpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2035307606U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPathOutputDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics::NewStructOps, TEXT("PCGExPathOutputDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPathOutputDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathOutputDetails), 131082863U) },
		{ FPCGExPathEdgeIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics::NewStructOps, TEXT("PCGExPathEdgeIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPathEdgeIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathEdgeIntersectionDetails), 2450089009U) },
		{ FPCGExPathFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics::NewStructOps, TEXT("PCGExPathFilterSettings"),&Z_Registration_Info_UScriptStruct_FPCGExPathFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathFilterSettings), 2452534942U) },
		{ FPCGExPathIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics::NewStructOps, TEXT("PCGExPathIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPathIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathIntersectionDetails), 3968882769U) },
		{ FPCGExSplineMeshMutationDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics::NewStructOps, TEXT("PCGExSplineMeshMutationDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSplineMeshMutationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSplineMeshMutationDetails), 668750296U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_2625775182{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
