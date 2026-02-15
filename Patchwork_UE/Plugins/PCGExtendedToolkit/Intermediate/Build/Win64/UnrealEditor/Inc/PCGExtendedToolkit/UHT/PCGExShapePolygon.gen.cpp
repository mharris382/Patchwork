// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/Builders/PCGExShapePolygon.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapePolygon() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapePolygonSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapePolygonSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapePolygonFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapePolygonFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapePolygonConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPolygonShapeType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPolygonShapeType;
static UEnum* EPCGExPolygonShapeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonShapeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPolygonShapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPolygonShapeType"));
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonShapeType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPolygonShapeType>()
{
	return EPCGExPolygonShapeType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Not sure if this should be the same class or a different one...\n" },
		{ "Convex.DisplayName", "Polygon" },
		{ "Convex.Name", "EPCGExPolygonShapeType::Convex" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "Star.DisplayName", "Star" },
		{ "Star.Name", "EPCGExPolygonShapeType::Star" },
		{ "ToolTip", "Not sure if this should be the same class or a different one..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPolygonShapeType::Convex", (int64)EPCGExPolygonShapeType::Convex },
		{ "EPCGExPolygonShapeType::Star", (int64)EPCGExPolygonShapeType::Star },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPolygonShapeType",
	"EPCGExPolygonShapeType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonShapeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPolygonShapeType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonShapeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonShapeType.InnerSingleton;
}
// ********** End Enum EPCGExPolygonShapeType ******************************************************

// ********** Begin Enum EPCGExPolygonSkeletonConnectionType ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType;
static UEnum* EPCGExPolygonSkeletonConnectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPolygonSkeletonConnectionType"));
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPolygonSkeletonConnectionType>()
{
	return EPCGExPolygonSkeletonConnectionType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Description", "Connect skeleton to both edges and vertices" },
		{ "Both.Name", "EPCGExPolygonSkeletonConnectionType::Both" },
		{ "Edge.Description", "Connect skeleton to each edge" },
		{ "Edge.Name", "EPCGExPolygonSkeletonConnectionType::Edge" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "Vertex.Description", "Connect skeleton to each vertex" },
		{ "Vertex.Name", "EPCGExPolygonSkeletonConnectionType::Vertex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPolygonSkeletonConnectionType::Vertex", (int64)EPCGExPolygonSkeletonConnectionType::Vertex },
		{ "EPCGExPolygonSkeletonConnectionType::Edge", (int64)EPCGExPolygonSkeletonConnectionType::Edge },
		{ "EPCGExPolygonSkeletonConnectionType::Both", (int64)EPCGExPolygonSkeletonConnectionType::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPolygonSkeletonConnectionType",
	"EPCGExPolygonSkeletonConnectionType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType.InnerSingleton;
}
// ********** End Enum EPCGExPolygonSkeletonConnectionType *****************************************

// ********** Begin Enum EPCGExPolygonFittingMethod ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod;
static UEnum* EPCGExPolygonFittingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPolygonFittingMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPolygonFittingMethod>()
{
	return EPCGExPolygonFittingMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Description", "Use a custom angle" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExPolygonFittingMethod::Custom" },
		{ "EdgeForward.Description", "Aligns shape so the first edge is perpendicular to the local X axis" },
		{ "EdgeForward.DisplayName", "Edge Forward" },
		{ "EdgeForward.Name", "EPCGExPolygonFittingMethod::EdgeForward" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "VertexForward.Description", "Aligns shape so the first vertex faces along the local X axis" },
		{ "VertexForward.DisplayName", "Vertex Forward" },
		{ "VertexForward.Name", "EPCGExPolygonFittingMethod::VertexForward" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPolygonFittingMethod::VertexForward", (int64)EPCGExPolygonFittingMethod::VertexForward },
		{ "EPCGExPolygonFittingMethod::EdgeForward", (int64)EPCGExPolygonFittingMethod::EdgeForward },
		{ "EPCGExPolygonFittingMethod::Custom", (int64)EPCGExPolygonFittingMethod::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPolygonFittingMethod",
	"EPCGExPolygonFittingMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod.InnerSingleton;
}
// ********** End Enum EPCGExPolygonFittingMethod **************************************************

// ********** Begin ScriptStruct FPCGExShapePolygonConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShapePolygonConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShapePolygonConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticesInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09 * Number of vertices\n\x09 */// Source\n" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "* Number of vertices\n// Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticesAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Attribute\n" },
		{ "DisplayName", "Number of Vertices (Attr)" },
		{ "EditCondition", "NumVerticesInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticesConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Constant\n" },
		{ "DisplayName", "Number of Vertices" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSkeletonInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09 * Skeleton\n\x09 */// Source\n" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "* Skeleton\n// Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSkeletonAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Attribute\n" },
		{ "DisplayName", "Add Skeleton (Attr)" },
		{ "EditCondition", "AddSkeletonInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddSkeleton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Constant\n" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonConnectionMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Where the skeleton goes\n" },
		{ "EditCondition", "bAddSkeleton" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "ToolTip", "Where the skeleton goes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonOrientation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Alignment for the polygon within the bounds of the seed\n" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Alignment for the polygon within the bounds of the seed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPolygonOrientation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Custom alignment\n" },
		{ "EditCondition", "PolygonOrientation == EPCGExPolygonFittingMethod::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Custom alignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHullAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "// Output attributes\n" },
		{ "EditCondition", "bWriteHullAttribute" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "ToolTip", "Output attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteHullAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "EditCondition", "bWriteAngleAttribute" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAngleAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndexAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "EditCondition", "bWriteEdgeIndexAttribute" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeIndexAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeAlphaAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "EditCondition", "bWriteEdgeAlphaAttribute" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeAlphaAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will flag polygon as being closed if possible. */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will flag polygon as being closed if possible." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShapePolygonConfig constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumVerticesInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumVerticesInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumVerticesAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVerticesConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddSkeletonInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AddSkeletonInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddSkeletonAttribute;
	static void NewProp_bAddSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSkeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonConnectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonConnectionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PolygonOrientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PolygonOrientation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomPolygonOrientation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnHullAttribute;
	static void NewProp_bWriteHullAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteHullAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AngleAttribute;
	static void NewProp_bWriteAngleAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAngleAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeIndexAttribute;
	static void NewProp_bWriteEdgeIndexAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeIndexAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeAlphaAttribute;
	static void NewProp_bWriteEdgeAlphaAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeAlphaAttribute;
	static void NewProp_bIsClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosedLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExShapePolygonConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShapePolygonConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics
static_assert(std::is_polymorphic<FPCGExShapePolygonConfig>() == std::is_polymorphic<FPCGExShapeConfigBase>(), "USTRUCT FPCGExShapePolygonConfig cannot be polymorphic unless super FPCGExShapeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig;
class UScriptStruct* FPCGExShapePolygonConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShapePolygonConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShapePolygonConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExShapePolygonConfig Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesInput = { "NumVerticesInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, NumVerticesInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVerticesInput_MetaData), NewProp_NumVerticesInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesAttribute = { "NumVerticesAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, NumVerticesAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVerticesAttribute_MetaData), NewProp_NumVerticesAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesConstant = { "NumVerticesConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, NumVerticesConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVerticesConstant_MetaData), NewProp_NumVerticesConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonInput = { "AddSkeletonInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, AddSkeletonInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSkeletonInput_MetaData), NewProp_AddSkeletonInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonAttribute = { "AddSkeletonAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, AddSkeletonAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSkeletonAttribute_MetaData), NewProp_AddSkeletonAttribute_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bAddSkeleton_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bAddSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bAddSkeleton = { "bAddSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bAddSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddSkeleton_MetaData), NewProp_bAddSkeleton_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_SkeletonConnectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_SkeletonConnectionMode = { "SkeletonConnectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, SkeletonConnectionMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonSkeletonConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonConnectionMode_MetaData), NewProp_SkeletonConnectionMode_MetaData) }; // 1550387885
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_PolygonOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_PolygonOrientation = { "PolygonOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, PolygonOrientation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPolygonFittingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonOrientation_MetaData), NewProp_PolygonOrientation_MetaData) }; // 3743001384
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_CustomPolygonOrientation = { "CustomPolygonOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, CustomPolygonOrientation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPolygonOrientation_MetaData), NewProp_CustomPolygonOrientation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_OnHullAttribute = { "OnHullAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, OnHullAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHullAttribute_MetaData), NewProp_OnHullAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteHullAttribute_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bWriteHullAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteHullAttribute = { "bWriteHullAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteHullAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteHullAttribute_MetaData), NewProp_bWriteHullAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AngleAttribute = { "AngleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, AngleAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAttribute_MetaData), NewProp_AngleAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteAngleAttribute_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bWriteAngleAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteAngleAttribute = { "bWriteAngleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteAngleAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAngleAttribute_MetaData), NewProp_bWriteAngleAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_EdgeIndexAttribute = { "EdgeIndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, EdgeIndexAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndexAttribute_MetaData), NewProp_EdgeIndexAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeIndexAttribute_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bWriteEdgeIndexAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeIndexAttribute = { "bWriteEdgeIndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeIndexAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeIndexAttribute_MetaData), NewProp_bWriteEdgeIndexAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_EdgeAlphaAttribute = { "EdgeAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapePolygonConfig, EdgeAlphaAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeAlphaAttribute_MetaData), NewProp_EdgeAlphaAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeAlphaAttribute_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bWriteEdgeAlphaAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeAlphaAttribute = { "bWriteEdgeAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeAlphaAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeAlphaAttribute_MetaData), NewProp_bWriteEdgeAlphaAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bIsClosedLoop_SetBit(void* Obj)
{
	((FPCGExShapePolygonConfig*)Obj)->bIsClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bIsClosedLoop = { "bIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapePolygonConfig), &Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bIsClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosedLoop_MetaData), NewProp_bIsClosedLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_NumVerticesConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AddSkeletonAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bAddSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_SkeletonConnectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_SkeletonConnectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_PolygonOrientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_PolygonOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_CustomPolygonOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_OnHullAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteHullAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_AngleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteAngleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_EdgeIndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeIndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_EdgeAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bWriteEdgeAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewProp_bIsClosedLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExShapePolygonConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExShapeConfigBase,
	&NewStructOps,
	"PCGExShapePolygonConfig",
	Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::PropPointers),
	sizeof(FPCGExShapePolygonConfig),
	alignof(FPCGExShapePolygonConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapePolygonConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShapePolygonConfig ********************************************

// ********** Begin Class UPCGExShapePolygonFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapePolygonFactory;
UClass* UPCGExShapePolygonFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExShapePolygonFactory;
	if (!Z_Registration_Info_UClass_UPCGExShapePolygonFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapePolygonFactory"),
			Z_Registration_Info_UClass_UPCGExShapePolygonFactory.InnerSingleton,
			StaticRegisterNativesUPCGExShapePolygonFactory,
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
	return Z_Registration_Info_UClass_UPCGExShapePolygonFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapePolygonFactory_NoRegister()
{
	return UPCGExShapePolygonFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapePolygonFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapePolygon.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapePolygonFactory constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShapePolygonFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapePolygonFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapePolygonFactory_Statics

// ********** Begin Class UPCGExShapePolygonFactory Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShapePolygonFactory, Config), Z_Construct_UScriptStruct_FPCGExShapePolygonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4102280844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShapePolygonFactory Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::ClassParams = {
	&UPCGExShapePolygonFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::Class_MetaDataParams)
};
void UPCGExShapePolygonFactory::StaticRegisterNativesUPCGExShapePolygonFactory()
{
}
UClass* Z_Construct_UClass_UPCGExShapePolygonFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExShapePolygonFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapePolygonFactory.OuterSingleton, Z_Construct_UClass_UPCGExShapePolygonFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapePolygonFactory.OuterSingleton;
}
UPCGExShapePolygonFactory::UPCGExShapePolygonFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapePolygonFactory);
UPCGExShapePolygonFactory::~UPCGExShapePolygonFactory() {}
// ********** End Class UPCGExShapePolygonFactory **************************************************

// ********** Begin Class UPCGExCreateShapePolygonSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings;
UClass* UPCGExCreateShapePolygonSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateShapePolygonSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateShapePolygonSettings"),
			Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateShapePolygonSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateShapePolygonSettings_NoRegister()
{
	return UPCGExCreateShapePolygonSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Builder|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapePolygon.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCGExNodeLibraryDoc", "misc/shapes/shape-polygon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shape properties */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapePolygon.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Shape properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateShapePolygonSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateShapePolygonSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateShapePolygonSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics

// ********** Begin Class UPCGExCreateShapePolygonSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapePolygonSettings, Config), Z_Construct_UScriptStruct_FPCGExShapePolygonConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4102280844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateShapePolygonSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::ClassParams = {
	&UPCGExCreateShapePolygonSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateShapePolygonSettings::StaticRegisterNativesUPCGExCreateShapePolygonSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateShapePolygonSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateShapePolygonSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings.OuterSingleton;
}
UPCGExCreateShapePolygonSettings::UPCGExCreateShapePolygonSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateShapePolygonSettings);
UPCGExCreateShapePolygonSettings::~UPCGExCreateShapePolygonSettings() {}
// ********** End Class UPCGExCreateShapePolygonSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPolygonShapeType_StaticEnum, TEXT("EPCGExPolygonShapeType"), &Z_Registration_Info_UEnum_EPCGExPolygonShapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1147933445U) },
		{ EPCGExPolygonSkeletonConnectionType_StaticEnum, TEXT("EPCGExPolygonSkeletonConnectionType"), &Z_Registration_Info_UEnum_EPCGExPolygonSkeletonConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1550387885U) },
		{ EPCGExPolygonFittingMethod_StaticEnum, TEXT("EPCGExPolygonFittingMethod"), &Z_Registration_Info_UEnum_EPCGExPolygonFittingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3743001384U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExShapePolygonConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExShapePolygonConfig_Statics::NewStructOps, TEXT("PCGExShapePolygonConfig"),&Z_Registration_Info_UScriptStruct_FPCGExShapePolygonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShapePolygonConfig), 4102280844U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShapePolygonFactory, UPCGExShapePolygonFactory::StaticClass, TEXT("UPCGExShapePolygonFactory"), &Z_Registration_Info_UClass_UPCGExShapePolygonFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapePolygonFactory), 3750764972U) },
		{ Z_Construct_UClass_UPCGExCreateShapePolygonSettings, UPCGExCreateShapePolygonSettings::StaticClass, TEXT("UPCGExCreateShapePolygonSettings"), &Z_Registration_Info_UClass_UPCGExCreateShapePolygonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateShapePolygonSettings), 1010357883U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_1036180333{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapePolygon_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
