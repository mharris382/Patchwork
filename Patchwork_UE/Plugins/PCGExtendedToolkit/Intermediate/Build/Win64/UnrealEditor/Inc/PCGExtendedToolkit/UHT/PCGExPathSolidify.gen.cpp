// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathSolidify.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathSolidify() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSolidifySettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSolidifySettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSolidificationSpace *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSolidificationSpace;
static UEnum* EPCGExSolidificationSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSolidificationSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSolidificationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSolidificationSpace"));
	}
	return Z_Registration_Info_UEnum_EPCGExSolidificationSpace.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSolidificationSpace>()
{
	return EPCGExSolidificationSpace_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EPCGExSolidificationSpace::Local" },
		{ "Local.ToolTip", "Solidifies in local space. Units ignore scale." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "Scaled.DisplayName", "Scaled" },
		{ "Scaled.Name", "EPCGExSolidificationSpace::Scaled" },
		{ "Scaled.ToolTip", "Solidifies accounting for scale. Units will account for scale." },
		{ "Unscale.DisplayName", "Unscaled" },
		{ "Unscale.Name", "EPCGExSolidificationSpace::Unscale" },
		{ "Unscale.ToolTip", "Solidifies in local space, resets scale to 1" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSolidificationSpace::Local", (int64)EPCGExSolidificationSpace::Local },
		{ "EPCGExSolidificationSpace::Scaled", (int64)EPCGExSolidificationSpace::Scaled },
		{ "EPCGExSolidificationSpace::Unscale", (int64)EPCGExSolidificationSpace::Unscale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSolidificationSpace",
	"EPCGExSolidificationSpace",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace()
{
	if (!Z_Registration_Info_UEnum_EPCGExSolidificationSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSolidificationSpace.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSolidificationSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSolidificationSpace.InnerSingleton;
}
// ********** End Enum EPCGExSolidificationSpace ***************************************************

// ********** Begin ScriptStruct FPCGExPathSolidificationAxisDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathSolidificationAxisDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathSolidificationAxisDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Input value type for flip */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Input value type for flip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to flip this axis or not */" },
		{ "DisplayName", "Flip" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "FlipInput == EPCGExInputValueToggle::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to flip this axis or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to flip this axis or not */" },
		{ "DisplayName", "Flip (Attr)" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "FlipInput == EPCGExInputValueToggle::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to flip this axis or not" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathSolidificationAxisDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlipInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlipInput;
	static void NewProp_bFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlipAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathSolidificationAxisDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathSolidificationAxisDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails;
class UScriptStruct* FPCGExPathSolidificationAxisDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathSolidificationAxisDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathSolidificationAxisDetails Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipInput = { "FlipInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathSolidificationAxisDetails, FlipInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipInput_MetaData), NewProp_FlipInput_MetaData) }; // 4278026874
void Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_bFlip_SetBit(void* Obj)
{
	((FPCGExPathSolidificationAxisDetails*)Obj)->bFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPathSolidificationAxisDetails), &Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlip_MetaData), NewProp_bFlip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipAttributeName = { "FlipAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathSolidificationAxisDetails, FlipAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipAttributeName_MetaData), NewProp_FlipAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_bFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewProp_FlipAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathSolidificationAxisDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPathSolidificationAxisDetails",
	Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::PropPointers),
	sizeof(FPCGExPathSolidificationAxisDetails),
	alignof(FPCGExPathSolidificationAxisDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathSolidificationAxisDetails *********************************

// ********** Begin ScriptStruct FPCGExPathSolidificationRadiusDetails *****************************
struct Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPathSolidificationRadiusDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPathSolidificationRadiusDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Input value type for Radius */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Input value type for Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Constant Radius for this axis */" },
		{ "DisplayName", "Radius" },
		{ "EditCondition", "RadiusInput == EPCGExInputValueToggle::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Radius for this axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute-driven radius for this axis */" },
		{ "DisplayName", "Radius (Attr)" },
		{ "EditCondition", "RadiusInput == EPCGExInputValueToggle::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute-driven radius for this axis" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPathSolidificationRadiusDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusInput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPathSolidificationRadiusDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPathSolidificationRadiusDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics
static_assert(std::is_polymorphic<FPCGExPathSolidificationRadiusDetails>() == std::is_polymorphic<FPCGExPathSolidificationAxisDetails>(), "USTRUCT FPCGExPathSolidificationRadiusDetails cannot be polymorphic unless super FPCGExPathSolidificationAxisDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails;
class UScriptStruct* FPCGExPathSolidificationRadiusDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPathSolidificationRadiusDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPathSolidificationRadiusDetails Property Definitions ********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusInput = { "RadiusInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathSolidificationRadiusDetails, RadiusInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueToggle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusInput_MetaData), NewProp_RadiusInput_MetaData) }; // 4278026874
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathSolidificationRadiusDetails, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusAttribute = { "RadiusAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPathSolidificationRadiusDetails, RadiusAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusAttribute_MetaData), NewProp_RadiusAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewProp_RadiusAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPathSolidificationRadiusDetails Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails,
	&NewStructOps,
	"PCGExPathSolidificationRadiusDetails",
	Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::PropPointers),
	sizeof(FPCGExPathSolidificationRadiusDetails),
	alignof(FPCGExPathSolidificationRadiusDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPathSolidificationRadiusDetails *******************************

// ********** Begin Class UPCGExPathSolidifySettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathSolidifySettings;
UClass* UPCGExPathSolidifySettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathSolidifySettings;
	if (!Z_Registration_Info_UClass_UPCGExPathSolidifySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathSolidifySettings"),
			Z_Registration_Info_UClass_UPCGExPathSolidifySettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathSolidifySettings,
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
	return Z_Registration_Info_UClass_UPCGExPathSolidifySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathSolidifySettings_NoRegister()
{
	return UPCGExPathSolidifySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathSolidifySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathSolidify.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCGExNodeLibraryDoc", "paths/solidify" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveLastPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the path is not closed, the last point cannot be solidified, thus it's usually preferable to remove it. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the path is not closed, the last point cannot be solidified, thus it's usually preferable to remove it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Axis order. First axis will use the segment direction, second is the path normal. These are Primary > Secondary > Tertiary. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis order. First axis will use the segment direction, second is the path normal. These are Primary > Secondary > Tertiary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationConstruction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines how the selected axis will be used to construct the point' rotation. This will be using remapped axis from the selected order. X = Primary, Y = Secondary, Z = Tertiary*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how the selected axis will be used to construct the point' rotation. This will be using remapped axis from the selected order. X = Primary, Y = Secondary, Z = Tertiary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Primary axis settings (direction aligned to the segment) */" },
		{ "DisplayName", "Primary" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Primary axis settings (direction aligned to the segment)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Secondary axis settings, relative to the selected order */" },
		{ "DisplayName", "Secondary" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Secondary axis settings, relative to the selected order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TertiaryAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tertiary axis settings, relative to the selected order */" },
		{ "DisplayName", "Tertiary" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tertiary axis settings, relative to the selected order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should the cross direction (Cross) be computed.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How should the cross direction (Cross) be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the cross direction vector from a local point attribute. */" },
		{ "DisplayName", "Normal (Attr)" },
		{ "EditCondition", "NormalType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the cross direction vector from a local point attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of arithmetic path point cross direction.*/" },
		{ "DisplayName", "Normal" },
		{ "EditCondition", "NormalType == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of arithmetic path point cross direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Inverts normal direction.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert Direction" },
		{ "EditCondition", "NormalType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverts normal direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Solidification Lerp attribute (read from Edge).*/" },
		{ "DisplayName", "Solidification Lerp (Attr)" },
		{ "EditCondition", "SolidificationLerpInput == EPCGExInputValueType::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Solidification Lerp attribute (read from Edge)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationLerpConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Solidification Lerp constant.*/" },
		{ "DisplayName", "Solidification Lerp" },
		{ "EditCondition", "SolidificationLerpInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Solidification Lerp constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXSourceAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusXConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYSourceAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusYConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRadiusZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZSourceAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusZConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSolidify.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathSolidifySettings constinit property declarations ***************
	static void NewProp_bRemoveLastPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveLastPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationConstruction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationConstruction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TertiaryAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NormalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Normal_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Normal;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationLerpInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationLerpInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolidificationLerpAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SolidificationLerpConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationAxis;
	static void NewProp_bWriteRadiusX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusXInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusXInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusXSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusXConstant;
	static void NewProp_bWriteRadiusY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusYInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusYInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusYSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusYConstant;
	static void NewProp_bWriteRadiusZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRadiusZ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusZInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusZInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusZSourceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusZConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathSolidifySettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathSolidifySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathSolidifySettings_Statics

// ********** Begin Class UPCGExPathSolidifySettings Property Definitions **************************
void Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bRemoveLastPoint_SetBit(void* Obj)
{
	((UPCGExPathSolidifySettings*)Obj)->bRemoveLastPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bRemoveLastPoint = { "bRemoveLastPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSolidifySettings), &Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bRemoveLastPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveLastPoint_MetaData), NewProp_bRemoveLastPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationOrder = { "SolidificationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SolidificationOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationOrder_MetaData), NewProp_SolidificationOrder_MetaData) }; // 3484752427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RotationConstruction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RotationConstruction = { "RotationConstruction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RotationConstruction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationConstruction_MetaData), NewProp_RotationConstruction_MetaData) }; // 332592364
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, PrimaryAxis), Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) }; // 2645508841
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SecondaryAxis), Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) }; // 734329947
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_TertiaryAxis = { "TertiaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, TertiaryAxis), Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TertiaryAxis_MetaData), NewProp_TertiaryAxis_MetaData) }; // 734329947
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalType = { "NormalType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, NormalType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalType_MetaData), NewProp_NormalType_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalAttribute = { "NormalAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, NormalAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAttribute_MetaData), NewProp_NormalAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_Normal_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, Normal), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathNormalDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) }; // 2315435228
void Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((UPCGExPathSolidifySettings*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSolidifySettings), &Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpInput = { "SolidificationLerpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SolidificationLerpInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpInput_MetaData), NewProp_SolidificationLerpInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpAttribute = { "SolidificationLerpAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SolidificationLerpAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpAttribute_MetaData), NewProp_SolidificationLerpAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpConstant = { "SolidificationLerpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SolidificationLerpConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationLerpConstant_MetaData), NewProp_SolidificationLerpConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationAxis = { "SolidificationAxis", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, SolidificationAxis_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationAxis_MetaData), NewProp_SolidificationAxis_MetaData) }; // 904353693
void Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusX_SetBit(void* Obj)
{
	((UPCGExPathSolidifySettings*)Obj)->bWriteRadiusX_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusX = { "bWriteRadiusX", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSolidifySettings), &Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusX_MetaData), NewProp_bWriteRadiusX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXInput = { "RadiusXInput", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusXInput_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXInput_MetaData), NewProp_RadiusXInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXSourceAttribute = { "RadiusXSourceAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusXSourceAttribute_DEPRECATED), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXSourceAttribute_MetaData), NewProp_RadiusXSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXConstant = { "RadiusXConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusXConstant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusXConstant_MetaData), NewProp_RadiusXConstant_MetaData) };
void Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusY_SetBit(void* Obj)
{
	((UPCGExPathSolidifySettings*)Obj)->bWriteRadiusY_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusY = { "bWriteRadiusY", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSolidifySettings), &Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusY_MetaData), NewProp_bWriteRadiusY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYInput = { "RadiusYInput", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusYInput_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYInput_MetaData), NewProp_RadiusYInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYSourceAttribute = { "RadiusYSourceAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusYSourceAttribute_DEPRECATED), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYSourceAttribute_MetaData), NewProp_RadiusYSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYConstant = { "RadiusYConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusYConstant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusYConstant_MetaData), NewProp_RadiusYConstant_MetaData) };
void Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusZ_SetBit(void* Obj)
{
	((UPCGExPathSolidifySettings*)Obj)->bWriteRadiusZ_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusZ = { "bWriteRadiusZ", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSolidifySettings), &Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRadiusZ_MetaData), NewProp_bWriteRadiusZ_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZInput = { "RadiusZInput", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusZInput_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZInput_MetaData), NewProp_RadiusZInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZSourceAttribute = { "RadiusZSourceAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusZSourceAttribute_DEPRECATED), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZSourceAttribute_MetaData), NewProp_RadiusZSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZConstant = { "RadiusZConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSolidifySettings, RadiusZConstant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusZConstant_MetaData), NewProp_RadiusZConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bRemoveLastPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RotationConstruction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RotationConstruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_TertiaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_NormalAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_Normal_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationLerpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_SolidificationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusXConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusYConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_bWriteRadiusZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::NewProp_RadiusZConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathSolidifySettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::ClassParams = {
	&UPCGExPathSolidifySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::Class_MetaDataParams)
};
void UPCGExPathSolidifySettings::StaticRegisterNativesUPCGExPathSolidifySettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathSolidifySettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathSolidifySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathSolidifySettings.OuterSingleton, Z_Construct_UClass_UPCGExPathSolidifySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathSolidifySettings.OuterSingleton;
}
UPCGExPathSolidifySettings::UPCGExPathSolidifySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathSolidifySettings);
UPCGExPathSolidifySettings::~UPCGExPathSolidifySettings() {}
// ********** End Class UPCGExPathSolidifySettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSolidificationSpace_StaticEnum, TEXT("EPCGExSolidificationSpace"), &Z_Registration_Info_UEnum_EPCGExSolidificationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2051393980U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPathSolidificationAxisDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathSolidificationAxisDetails_Statics::NewStructOps, TEXT("PCGExPathSolidificationAxisDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationAxisDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathSolidificationAxisDetails), 2645508841U) },
		{ FPCGExPathSolidificationRadiusDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPathSolidificationRadiusDetails_Statics::NewStructOps, TEXT("PCGExPathSolidificationRadiusDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPathSolidificationRadiusDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPathSolidificationRadiusDetails), 734329947U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathSolidifySettings, UPCGExPathSolidifySettings::StaticClass, TEXT("UPCGExPathSolidifySettings"), &Z_Registration_Info_UClass_UPCGExPathSolidifySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathSolidifySettings), 2253373650U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_2534991978{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSolidify_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
