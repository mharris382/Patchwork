// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/PCGExDrawAttributes.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDrawAttributes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDrawAttributesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDrawAttributesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInputConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExDebugExpression *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDebugExpression;
static UEnum* EPCGExDebugExpression_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDebugExpression.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDebugExpression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDebugExpression"));
	}
	return Z_Registration_Info_UEnum_EPCGExDebugExpression.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDebugExpression>()
{
	return EPCGExDebugExpression_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boolean.DisplayName", "Boolean" },
		{ "Boolean.Name", "EPCGExDebugExpression::Boolean" },
		{ "Boolean.ToolTip", "Attribute is treated as a boolean switch between two colors." },
		{ "ConnectionToIndex.DisplayName", "Connection (Point Index)" },
		{ "ConnectionToIndex.Name", "EPCGExDebugExpression::ConnectionToIndex" },
		{ "ConnectionToIndex.ToolTip", "Attribute is treated as a lookup index in the same data block." },
		{ "ConnectionToPosition.DisplayName", "Connection (Position)" },
		{ "ConnectionToPosition.Name", "EPCGExDebugExpression::ConnectionToPosition" },
		{ "ConnectionToPosition.ToolTip", "Attribute is treated as world space position in the same data block." },
		{ "Direction.DisplayName", "Direction" },
		{ "Direction.Name", "EPCGExDebugExpression::Direction" },
		{ "Direction.ToolTip", "Attribute is treated as a Normal." },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "Point.DisplayName", "Point" },
		{ "Point.Name", "EPCGExDebugExpression::Point" },
		{ "Point.ToolTip", "Attribute is treated as a world space position." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDebugExpression::Direction", (int64)EPCGExDebugExpression::Direction },
		{ "EPCGExDebugExpression::ConnectionToIndex", (int64)EPCGExDebugExpression::ConnectionToIndex },
		{ "EPCGExDebugExpression::ConnectionToPosition", (int64)EPCGExDebugExpression::ConnectionToPosition },
		{ "EPCGExDebugExpression::Point", (int64)EPCGExDebugExpression::Point },
		{ "EPCGExDebugExpression::Boolean", (int64)EPCGExDebugExpression::Boolean },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDebugExpression",
	"EPCGExDebugExpression",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression()
{
	if (!Z_Registration_Info_UEnum_EPCGExDebugExpression.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDebugExpression.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDebugExpression.InnerSingleton;
}
// ********** End Enum EPCGExDebugExpression *******************************************************

// ********** Begin ScriptStruct FPCGExAttributeDebugDrawConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeDebugDrawConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeDebugDrawConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable or disable this debug group. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Enable or disable this debug group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressedAs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Draw line thickness. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw line thickness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAsOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ExpressedAs == EPCGExDebugExpression::ConnectionToIndex || ExpressedAs == EPCGExDebugExpression::ConnectionToPosition || ExpressedAs == EPCGExDebugExpression::Point" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeBeforeSizing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "ExpressedAs == EPCGExDebugExpression::Direction" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Draw line thickness. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw line thickness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Size" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Draw size. What it means depends on the selected debug type. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw size. What it means depends on the selected debug type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSizeFromAttribute_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Fetch the size from a local attribute. The regular Size parameter then act as a scale.*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the size from a local attribute. The regular Size parameter then act as a scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSizeAttribute_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Fetch the size from a local attribute. The regular Size parameter then act as a scale.*/" },
		{ "EditCondition", "bSizeFromAttribute" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the size from a local attribute. The regular Size parameter then act as a scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Draw color. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Draw color. */" },
		{ "EditCondition", "ExpressedAs == EPCGExDebugExpression::Boolean" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColorFromAttribute_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Fetch the color from a local attribute.*/" },
		{ "EditCondition", "bEnabled" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the color from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalColorAttribute_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Fetch the color from a local attribute.*/" },
		{ "EditCondition", "bColorFromAttribute" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the color from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColorIsLinear_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Basically divides input values by 255*/" },
		{ "EditCondition", "bColorFromAttribute" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Basically divides input values by 255" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Depth priority. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Depth priority." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeDebugDrawConfig constinit property declarations ****
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExpressedAs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExpressedAs;
	static void NewProp_bAsOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsOffset;
	static void NewProp_bNormalizeBeforeSizing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeBeforeSizing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Size;
	static void NewProp_bSizeFromAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeFromAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSizeAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryColor;
	static void NewProp_bColorFromAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorFromAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalColorAttribute;
	static void NewProp_bColorIsLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorIsLinear;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeDebugDrawConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeDebugDrawConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics
static_assert(std::is_polymorphic<FPCGExAttributeDebugDrawConfig>() == std::is_polymorphic<FPCGExInputConfig>(), "USTRUCT FPCGExAttributeDebugDrawConfig cannot be polymorphic unless super FPCGExInputConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig;
class UScriptStruct* FPCGExAttributeDebugDrawConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeDebugDrawConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeDebugDrawConfig Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_ExpressedAs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_ExpressedAs = { "ExpressedAs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, ExpressedAs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDebugExpression, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressedAs_MetaData), NewProp_ExpressedAs_MetaData) }; // 1715603555
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bAsOffset_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bAsOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bAsOffset = { "bAsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bAsOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAsOffset_MetaData), NewProp_bAsOffset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bNormalizeBeforeSizing_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bNormalizeBeforeSizing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bNormalizeBeforeSizing = { "bNormalizeBeforeSizing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bNormalizeBeforeSizing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeBeforeSizing_MetaData), NewProp_bNormalizeBeforeSizing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bSizeFromAttribute_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bSizeFromAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bSizeFromAttribute = { "bSizeFromAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bSizeFromAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSizeFromAttribute_MetaData), NewProp_bSizeFromAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_LocalSizeAttribute = { "LocalSizeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, LocalSizeAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSizeAttribute_MetaData), NewProp_LocalSizeAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_SecondaryColor = { "SecondaryColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, SecondaryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryColor_MetaData), NewProp_SecondaryColor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorFromAttribute_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bColorFromAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorFromAttribute = { "bColorFromAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorFromAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColorFromAttribute_MetaData), NewProp_bColorFromAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_LocalColorAttribute = { "LocalColorAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, LocalColorAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalColorAttribute_MetaData), NewProp_LocalColorAttribute_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorIsLinear_SetBit(void* Obj)
{
	((FPCGExAttributeDebugDrawConfig*)Obj)->bColorIsLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorIsLinear = { "bColorIsLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeDebugDrawConfig), &Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorIsLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColorIsLinear_MetaData), NewProp_bColorIsLinear_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeDebugDrawConfig, DepthPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthPriority_MetaData), NewProp_DepthPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_ExpressedAs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_ExpressedAs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bAsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bNormalizeBeforeSizing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bSizeFromAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_LocalSizeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_SecondaryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorFromAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_LocalColorAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_bColorIsLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewProp_DepthPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeDebugDrawConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExInputConfig,
	&NewStructOps,
	"PCGExAttributeDebugDrawConfig",
	Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::PropPointers),
	sizeof(FPCGExAttributeDebugDrawConfig),
	alignof(FPCGExAttributeDebugDrawConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeDebugDrawConfig **************************************

// ********** Begin ScriptStruct FPCGExAttributeDebugDraw ******************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeDebugDraw); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeDebugDraw); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeDebugDraw constinit property declarations **********
// ********** End ScriptStruct FPCGExAttributeDebugDraw constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeDebugDraw>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw;
class UScriptStruct* FPCGExAttributeDebugDraw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeDebugDraw"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeDebugDraw",
	nullptr,
	0,
	sizeof(FPCGExAttributeDebugDraw),
	alignof(FPCGExAttributeDebugDraw),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeDebugDraw ********************************************

// ********** Begin Class UPCGExDrawAttributesSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDrawAttributesSettings;
UClass* UPCGExDrawAttributesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDrawAttributesSettings;
	if (!Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDrawAttributesSettings"),
			Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDrawAttributesSettings,
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
	return Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDrawAttributesSettings_NoRegister()
{
	return UPCGExDrawAttributesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Calculates the distance between two points (inherently a n*n operation)\n */" },
		{ "IncludePath", "Debug/PCGExDrawAttributes.h" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Calculates the distance between two points (inherently a n*n operation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugList_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes to draw.*/" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "TitleProperty", "{TitlePropertyName} as {ExpressedAs}" },
		{ "ToolTip", "Attributes to draw." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPCGExDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug drawing toggle. Exposed to have more control on debug draw in sub-graph. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExDrawAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Debug drawing toggle. Exposed to have more control on debug draw in sub-graph." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDrawAttributesSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugList;
	static void NewProp_bPCGExDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPCGExDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDrawAttributesSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDrawAttributesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics

// ********** Begin Class UPCGExDrawAttributesSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_DebugList_Inner = { "DebugList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig, METADATA_PARAMS(0, nullptr) }; // 2087919472
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_DebugList = { "DebugList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDrawAttributesSettings, DebugList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugList_MetaData), NewProp_DebugList_MetaData) }; // 2087919472
void Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_bPCGExDebug_SetBit(void* Obj)
{
	((UPCGExDrawAttributesSettings*)Obj)->bPCGExDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_bPCGExDebug = { "bPCGExDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDrawAttributesSettings), &Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_bPCGExDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPCGExDebug_MetaData), NewProp_bPCGExDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_DebugList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_DebugList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::NewProp_bPCGExDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDrawAttributesSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::ClassParams = {
	&UPCGExDrawAttributesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::Class_MetaDataParams)
};
void UPCGExDrawAttributesSettings::StaticRegisterNativesUPCGExDrawAttributesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDrawAttributesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.OuterSingleton, Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDrawAttributesSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDrawAttributesSettings);
UPCGExDrawAttributesSettings::~UPCGExDrawAttributesSettings() {}
// ********** End Class UPCGExDrawAttributesSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExDebugExpression_StaticEnum, TEXT("EPCGExDebugExpression"), &Z_Registration_Info_UEnum_EPCGExDebugExpression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1715603555U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeDebugDrawConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics::NewStructOps, TEXT("PCGExAttributeDebugDrawConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDrawConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeDebugDrawConfig), 2087919472U) },
		{ FPCGExAttributeDebugDraw::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics::NewStructOps, TEXT("PCGExAttributeDebugDraw"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeDebugDraw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeDebugDraw), 2731525655U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDrawAttributesSettings, UPCGExDrawAttributesSettings::StaticClass, TEXT("UPCGExDrawAttributesSettings"), &Z_Registration_Info_UClass_UPCGExDrawAttributesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDrawAttributesSettings), 1295600253U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_975191638{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
