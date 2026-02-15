// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsSubdivision.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsSubdivision() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExManhattanDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSubdivideMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSubdivideMode;
static UEnum* EPCGExSubdivideMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubdivideMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSubdivideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSubdivideMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSubdivideMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubdivideMode>()
{
	return EPCGExSubdivideMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.DisplayName", "Count" },
		{ "Count.Name", "EPCGExSubdivideMode::Count" },
		{ "Count.ToolTip", "Number of subdivisions is fixed" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExSubdivideMode::Distance" },
		{ "Distance.ToolTip", "Number of subdivisions depends on length" },
		{ "Manhattan.DisplayName", "Manhattan" },
		{ "Manhattan.Name", "EPCGExSubdivideMode::Manhattan" },
		{ "Manhattan.ToolTip", "Manhattan subdivision, number of subdivisions depends on spatial relationship between the points; will be in the [0..2] range." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSubdivideMode::Distance", (int64)EPCGExSubdivideMode::Distance },
		{ "EPCGExSubdivideMode::Count", (int64)EPCGExSubdivideMode::Count },
		{ "EPCGExSubdivideMode::Manhattan", (int64)EPCGExSubdivideMode::Manhattan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSubdivideMode",
	"EPCGExSubdivideMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubdivideMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSubdivideMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSubdivideMode.InnerSingleton;
}
// ********** End Enum EPCGExSubdivideMode *********************************************************

// ********** Begin Enum EPCGExManhattanMethod *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExManhattanMethod;
static UEnum* EPCGExManhattanMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExManhattanMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExManhattanMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExManhattanMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExManhattanMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExManhattanMethod>()
{
	return EPCGExManhattanMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GridCount.DisplayName", "Grid (Count)" },
		{ "GridCount.Name", "EPCGExManhattanMethod::GridCount" },
		{ "GridCount.ToolTip", "Grid Manhattan subdivision, will subdivide space according to a grid size." },
		{ "GridDistance.DisplayName", "Grid (Distance)" },
		{ "GridDistance.Name", "EPCGExManhattanMethod::GridDistance" },
		{ "GridDistance.ToolTip", "Grid Manhattan subdivision, will subdivide space according to a grid size." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "Simple.DisplayName", "Simple" },
		{ "Simple.Name", "EPCGExManhattanMethod::Simple" },
		{ "Simple.ToolTip", "Simple Manhattan subdivision, will generate 0..2 points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExManhattanMethod::Simple", (int64)EPCGExManhattanMethod::Simple },
		{ "EPCGExManhattanMethod::GridDistance", (int64)EPCGExManhattanMethod::GridDistance },
		{ "EPCGExManhattanMethod::GridCount", (int64)EPCGExManhattanMethod::GridCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExManhattanMethod",
	"EPCGExManhattanMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExManhattanMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExManhattanMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExManhattanMethod.InnerSingleton;
}
// ********** End Enum EPCGExManhattanMethod *******************************************************

// ********** Begin Enum EPCGExManhattanAlign ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExManhattanAlign;
static UEnum* EPCGExManhattanAlign_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExManhattanAlign.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExManhattanAlign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExManhattanAlign"));
	}
	return Z_Registration_Info_UEnum_EPCGExManhattanAlign.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExManhattanAlign>()
{
	return EPCGExManhattanAlign_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExManhattanAlign::Custom" },
		{ "Custom.ToolTip", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "SegmentX.DisplayName", "Segment X" },
		{ "SegmentX.Name", "EPCGExManhattanAlign::SegmentX" },
		{ "SegmentX.ToolTip", "" },
		{ "SegmentY.DisplayName", "Segment Y" },
		{ "SegmentY.Name", "EPCGExManhattanAlign::SegmentY" },
		{ "SegmentY.ToolTip", "" },
		{ "SegmentZ.DisplayName", "Segment Z" },
		{ "SegmentZ.Name", "EPCGExManhattanAlign::SegmentZ" },
		{ "SegmentZ.ToolTip", "" },
		{ "World.DisplayName", "World" },
		{ "World.Name", "EPCGExManhattanAlign::World" },
		{ "World.ToolTip", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExManhattanAlign::World", (int64)EPCGExManhattanAlign::World },
		{ "EPCGExManhattanAlign::Custom", (int64)EPCGExManhattanAlign::Custom },
		{ "EPCGExManhattanAlign::SegmentX", (int64)EPCGExManhattanAlign::SegmentX },
		{ "EPCGExManhattanAlign::SegmentY", (int64)EPCGExManhattanAlign::SegmentY },
		{ "EPCGExManhattanAlign::SegmentZ", (int64)EPCGExManhattanAlign::SegmentZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExManhattanAlign",
	"EPCGExManhattanAlign",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign()
{
	if (!Z_Registration_Info_UEnum_EPCGExManhattanAlign.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExManhattanAlign.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExManhattanAlign.InnerSingleton;
}
// ********** End Enum EPCGExManhattanAlign ********************************************************

// ********** Begin ScriptStruct FPCGExManhattanDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExManhattanDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExManhattanDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bSupportAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Length Attribute */" },
		{ "DisplayName", "Grid Size (Attr)" },
		{ "EditCondition", "bSupportAttribute && Method != EPCGExManhattanMethod::Simple && GridSizeInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Max Length Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Grid Size Constant -- If using count, values will be rounded down to the nearest int. */" },
		{ "DisplayName", "Grid Size" },
		{ "EditCondition", "Method != EPCGExManhattanMethod::Simple && (!bSupportAttribute || GridSizeInput == EPCGExInputValueType::Constant)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Grid Size Constant -- If using count, values will be rounded down to the nearest int." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceAlign_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bSupportAttribute && SpaceAlign == EPCGExManhattanAlign::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Orient (Attr)" },
		{ "EditCondition", "bSupportAttribute && OrientInput != EPCGExInputValueType::Constant && SpaceAlign == EPCGExManhattanAlign::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Orient" },
		{ "EditCondition", "SpaceAlign == EPCGExManhattanAlign::Custom && (!bSupportAttribute || OrientInput == EPCGExInputValueType::Constant)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsSubdivision.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExManhattanDetails constinit property declarations ************
	static void NewProp_bSupportAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridSizeInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridSizeInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GridSizeAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpaceAlign_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceAlign;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrientInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExManhattanDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExManhattanDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails;
class UScriptStruct* FPCGExManhattanDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExManhattanDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExManhattanDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExManhattanDetails Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_bSupportAttribute_SetBit(void* Obj)
{
	((FPCGExManhattanDetails*)Obj)->bSupportAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_bSupportAttribute = { "bSupportAttribute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExManhattanDetails), &Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_bSupportAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportAttribute_MetaData), NewProp_bSupportAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2099066278
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, Order), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 3484752427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeInput = { "GridSizeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, GridSizeInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeInput_MetaData), NewProp_GridSizeInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeAttribute = { "GridSizeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, GridSizeAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeAttribute_MetaData), NewProp_GridSizeAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_SpaceAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_SpaceAlign = { "SpaceAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, SpaceAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExManhattanAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceAlign_MetaData), NewProp_SpaceAlign_MetaData) }; // 2619314349
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientInput = { "OrientInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, OrientInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientInput_MetaData), NewProp_OrientInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientAttribute = { "OrientAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, OrientAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientAttribute_MetaData), NewProp_OrientAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientConstant = { "OrientConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExManhattanDetails, OrientConstant), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientConstant_MetaData), NewProp_OrientConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_bSupportAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Order_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSizeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_SpaceAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_SpaceAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewProp_OrientConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExManhattanDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExManhattanDetails",
	Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::PropPointers),
	sizeof(FPCGExManhattanDetails),
	alignof(FPCGExManhattanDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExManhattanDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExManhattanDetails **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSubdivideMode_StaticEnum, TEXT("EPCGExSubdivideMode"), &Z_Registration_Info_UEnum_EPCGExSubdivideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 56681284U) },
		{ EPCGExManhattanMethod_StaticEnum, TEXT("EPCGExManhattanMethod"), &Z_Registration_Info_UEnum_EPCGExManhattanMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2099066278U) },
		{ EPCGExManhattanAlign_StaticEnum, TEXT("EPCGExManhattanAlign"), &Z_Registration_Info_UEnum_EPCGExManhattanAlign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2619314349U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExManhattanDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExManhattanDetails_Statics::NewStructOps, TEXT("PCGExManhattanDetails"),&Z_Registration_Info_UScriptStruct_FPCGExManhattanDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExManhattanDetails), 3119287054U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_1338457209{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsSubdivision_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
