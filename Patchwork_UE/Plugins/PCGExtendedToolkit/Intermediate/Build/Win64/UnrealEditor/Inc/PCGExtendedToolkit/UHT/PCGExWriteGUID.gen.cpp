// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExWriteGUID.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWriteGUID() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteGUIDSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteGUIDSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGUIDDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGUIDUniquenessFlags *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags;
static UEnum* EPCGExGUIDUniquenessFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGUIDUniquenessFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDUniquenessFlags>()
{
	return EPCGExGUIDUniquenessFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExGUIDUniquenessFlags::All" },
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] GUID Uniqueness Flags" },
		{ "Grid.DisplayName", "Grid" },
		{ "Grid.Name", "EPCGExGUIDUniquenessFlags::Grid" },
		{ "Grid.ToolTip", "Uses PCG component Grid as a marker of uniqueness" },
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EPCGExGUIDUniquenessFlags::Index" },
		{ "Index.ToolTip", "Uses point index as a marker of uniqueness" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "None.Name", "EPCGExGUIDUniquenessFlags::None" },
		{ "Position.DisplayName", "Position" },
		{ "Position.Name", "EPCGExGUIDUniquenessFlags::Position" },
		{ "Position.ToolTip", "Uses point position as a marker of uniqueness" },
		{ "Seed.DisplayName", "Seed" },
		{ "Seed.Name", "EPCGExGUIDUniquenessFlags::Seed" },
		{ "Seed.ToolTip", "Uses point seed as a marker of uniqueness" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGUIDUniquenessFlags::None", (int64)EPCGExGUIDUniquenessFlags::None },
		{ "EPCGExGUIDUniquenessFlags::Index", (int64)EPCGExGUIDUniquenessFlags::Index },
		{ "EPCGExGUIDUniquenessFlags::Position", (int64)EPCGExGUIDUniquenessFlags::Position },
		{ "EPCGExGUIDUniquenessFlags::Seed", (int64)EPCGExGUIDUniquenessFlags::Seed },
		{ "EPCGExGUIDUniquenessFlags::Grid", (int64)EPCGExGUIDUniquenessFlags::Grid },
		{ "EPCGExGUIDUniquenessFlags::All", (int64)EPCGExGUIDUniquenessFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGUIDUniquenessFlags",
	"EPCGExGUIDUniquenessFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDUniquenessFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags.InnerSingleton;
}
// ********** End Enum EPCGExGUIDUniquenessFlags ***************************************************

// ********** Begin Enum EPCGExGUIDOutputType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGUIDOutputType;
static UEnum* EPCGExGUIDOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGUIDOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGUIDOutputType"));
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDOutputType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDOutputType>()
{
	return EPCGExGUIDOutputType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Integer.DisplayName", "Integer" },
		{ "Integer.Name", "EPCGExGUIDOutputType::Integer" },
		{ "Integer.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "String.DisplayName", "String" },
		{ "String.Name", "EPCGExGUIDOutputType::String" },
		{ "String.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGUIDOutputType::Integer", (int64)EPCGExGUIDOutputType::Integer },
		{ "EPCGExGUIDOutputType::String", (int64)EPCGExGUIDOutputType::String },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGUIDOutputType",
	"EPCGExGUIDOutputType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGUIDOutputType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDOutputType.InnerSingleton;
}
// ********** End Enum EPCGExGUIDOutputType ********************************************************

// ********** Begin Enum EPCGExGUIDFormat **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGUIDFormat;
static UEnum* EPCGExGUIDFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGUIDFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGUIDFormat"));
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDFormat.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDFormat>()
{
	return EPCGExGUIDFormat_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Base36Encoded.DisplayName", "Short (Base36)" },
		{ "Base36Encoded.Name", "EPCGExGUIDFormat::Base36Encoded" },
		{ "Base36Encoded.ToolTip", "Base-36 encoded, compatible with case-insensitive OS file systems (such as Windows). For example: 1DPF6ARFCM4XH5RMWPU8TGR0J" },
		{ "Digits.DisplayName", "Digits" },
		{ "Digits.Name", "EPCGExGUIDFormat::Digits" },
		{ "Digits.ToolTip", "32 digits. For example: `00000000000000000000000000000000`" },
		{ "DigitsLower.DisplayName", "Digits (Lowercase)" },
		{ "DigitsLower.Name", "EPCGExGUIDFormat::DigitsLower" },
		{ "DigitsLower.ToolTip", "32 digits in lowercase. For example: `0123abc456def789abcd123ef4a5b6c7`" },
		{ "DigitsWithHyphens.DisplayName", "Digits (Hyphens)" },
		{ "DigitsWithHyphens.Name", "EPCGExGUIDFormat::DigitsWithHyphens" },
		{ "DigitsWithHyphens.ToolTip", "32 digits separated by hyphens. For example: 00000000-0000-0000-0000-000000000000" },
		{ "DigitsWithHyphensInBraces.DisplayName", "{Digits}" },
		{ "DigitsWithHyphensInBraces.Name", "EPCGExGUIDFormat::DigitsWithHyphensInBraces" },
		{ "DigitsWithHyphensInBraces.ToolTip", "32 digits separated by hyphens and enclosed in braces. For example: {00000000-0000-0000-0000-000000000000}" },
		{ "DigitsWithHyphensInParentheses.DisplayName", "(Digits)" },
		{ "DigitsWithHyphensInParentheses.Name", "EPCGExGUIDFormat::DigitsWithHyphensInParentheses" },
		{ "DigitsWithHyphensInParentheses.ToolTip", "32 digits separated by hyphens and enclosed in parentheses. For example: (00000000-0000-0000-0000-000000000000)" },
		{ "DigitsWithHyphensLower.DisplayName", "Digits (RFC 4122)" },
		{ "DigitsWithHyphensLower.Name", "EPCGExGUIDFormat::DigitsWithHyphensLower" },
		{ "DigitsWithHyphensLower.ToolTip", "32 digits separated by hyphens, in lowercase as described by RFC 4122. For example: bd048ce3-358b-46c5-8cee-627c719418f8" },
		{ "HexValuesInBraces.DisplayName", "{Hex}" },
		{ "HexValuesInBraces.Name", "EPCGExGUIDFormat::HexValuesInBraces" },
		{ "HexValuesInBraces.ToolTip", "Comma-separated hexadecimal values enclosed in braces. For example: {0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}}" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "Short.DisplayName", "Short (Base64)" },
		{ "Short.Name", "EPCGExGUIDFormat::Short" },
		{ "Short.ToolTip", "Base64 characters with dashes and underscores instead of pluses and slashes (respectively), For example: AQsMCQ0PAAUKCgQEBAgADQ" },
		{ "UniqueObjectGuid.DisplayName", "Unique Object GUID" },
		{ "UniqueObjectGuid.Name", "EPCGExGUIDFormat::UniqueObjectGuid" },
		{ "UniqueObjectGuid.ToolTip", "This format is currently used by the FUniqueObjectGuid class. For example: 00000000-00000000-00000000-00000000" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGUIDFormat::Digits", (int64)EPCGExGUIDFormat::Digits },
		{ "EPCGExGUIDFormat::DigitsLower", (int64)EPCGExGUIDFormat::DigitsLower },
		{ "EPCGExGUIDFormat::DigitsWithHyphens", (int64)EPCGExGUIDFormat::DigitsWithHyphens },
		{ "EPCGExGUIDFormat::DigitsWithHyphensLower", (int64)EPCGExGUIDFormat::DigitsWithHyphensLower },
		{ "EPCGExGUIDFormat::DigitsWithHyphensInBraces", (int64)EPCGExGUIDFormat::DigitsWithHyphensInBraces },
		{ "EPCGExGUIDFormat::DigitsWithHyphensInParentheses", (int64)EPCGExGUIDFormat::DigitsWithHyphensInParentheses },
		{ "EPCGExGUIDFormat::HexValuesInBraces", (int64)EPCGExGUIDFormat::HexValuesInBraces },
		{ "EPCGExGUIDFormat::UniqueObjectGuid", (int64)EPCGExGUIDFormat::UniqueObjectGuid },
		{ "EPCGExGUIDFormat::Short", (int64)EPCGExGUIDFormat::Short },
		{ "EPCGExGUIDFormat::Base36Encoded", (int64)EPCGExGUIDFormat::Base36Encoded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGUIDFormat",
	"EPCGExGUIDFormat",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat()
{
	if (!Z_Registration_Info_UEnum_EPCGExGUIDFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGUIDFormat.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGUIDFormat.InnerSingleton;
}
// ********** End Enum EPCGExGUIDFormat ************************************************************

// ********** Begin ScriptStruct FPCGExGUIDDetails *************************************************
struct Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExGUIDDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExGUIDDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write its index to.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write its index to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output type.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output format. Still relevant for integer, as the integer value is the TypeHash of the GUID String.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Output format. Still relevant for integer, as the integer value is the TypeHash of the GUID String." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uniqueness_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExGUIDUniquenessFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** What components are used for Uniqueness. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What components are used for Uniqueness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueKeyInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueKeyAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A base value for the GUID. Treat it like a seed. */" },
		{ "DisplayName", "Unique Key (Attr)" },
		{ "EditCondition", "UniqueKeyInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A base value for the GUID. Treat it like a seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueKeyConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A base value for the GUID. Treat it like a seed.  */" },
		{ "DisplayName", "Unique Key" },
		{ "EditCondition", "UniqueKeyInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A base value for the GUID. Treat it like a seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHashCollision_MetaData[] = {
		{ "Category", "Settings|Hashes" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionHashCollision_MetaData[] = {
		{ "Category", "Settings|Hashes" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionHashOffset_MetaData[] = {
		{ "Category", "Settings|Hashes" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterpolation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the created attribute allows interpolation or not.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether the created attribute allows interpolation or not." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExGUIDDetails constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Uniqueness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UniqueKeyInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UniqueKeyInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueKeyAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UniqueKeyConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridHashCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionHashCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionHashOffset;
	static void NewProp_bAllowInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExGUIDDetails constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExGUIDDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails;
class UScriptStruct* FPCGExGUIDDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExGUIDDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExGUIDDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExGUIDDetails Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, OutputAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputAttributeName_MetaData), NewProp_OutputAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, OutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 3443093475
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, Format), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGUIDFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 3524896322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Uniqueness = { "Uniqueness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, Uniqueness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uniqueness_MetaData), NewProp_Uniqueness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyInput = { "UniqueKeyInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, UniqueKeyInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueKeyInput_MetaData), NewProp_UniqueKeyInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyAttribute = { "UniqueKeyAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, UniqueKeyAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueKeyAttribute_MetaData), NewProp_UniqueKeyAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyConstant = { "UniqueKeyConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, UniqueKeyConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueKeyConstant_MetaData), NewProp_UniqueKeyConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_GridHashCollision = { "GridHashCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, GridHashCollision), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHashCollision_MetaData), NewProp_GridHashCollision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_PositionHashCollision = { "PositionHashCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, PositionHashCollision), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionHashCollision_MetaData), NewProp_PositionHashCollision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_PositionHashOffset = { "PositionHashOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGUIDDetails, PositionHashOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionHashOffset_MetaData), NewProp_PositionHashOffset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_bAllowInterpolation_SetBit(void* Obj)
{
	((FPCGExGUIDDetails*)Obj)->bAllowInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_bAllowInterpolation = { "bAllowInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGUIDDetails), &Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_bAllowInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInterpolation_MetaData), NewProp_bAllowInterpolation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_Uniqueness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_UniqueKeyConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_GridHashCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_PositionHashCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_PositionHashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewProp_bAllowInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExGUIDDetails Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExGUIDDetails",
	Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::PropPointers),
	sizeof(FPCGExGUIDDetails),
	alignof(FPCGExGUIDDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExGUIDDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExGUIDDetails ***************************************************

// ********** Begin Class UPCGExWriteGUIDSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWriteGUIDSettings;
UClass* UPCGExWriteGUIDSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWriteGUIDSettings;
	if (!Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWriteGUIDSettings"),
			Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWriteGUIDSettings,
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
	return Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWriteGUIDSettings_NoRegister()
{
	return UPCGExWriteGUIDSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExWriteGUID.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCGExNodeLibraryDoc", "metadata/write-guid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExWriteGUID.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Config" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWriteGUIDSettings constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWriteGUIDSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWriteGUIDSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics

// ********** Begin Class UPCGExWriteGUIDSettings Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteGUIDSettings, Config), Z_Construct_UScriptStruct_FPCGExGUIDDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4012219999
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWriteGUIDSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::ClassParams = {
	&UPCGExWriteGUIDSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::Class_MetaDataParams)
};
void UPCGExWriteGUIDSettings::StaticRegisterNativesUPCGExWriteGUIDSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWriteGUIDSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.OuterSingleton, Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWriteGUIDSettings.OuterSingleton;
}
UPCGExWriteGUIDSettings::UPCGExWriteGUIDSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWriteGUIDSettings);
UPCGExWriteGUIDSettings::~UPCGExWriteGUIDSettings() {}
// ********** End Class UPCGExWriteGUIDSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGUIDUniquenessFlags_StaticEnum, TEXT("EPCGExGUIDUniquenessFlags"), &Z_Registration_Info_UEnum_EPCGExGUIDUniquenessFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2667393961U) },
		{ EPCGExGUIDOutputType_StaticEnum, TEXT("EPCGExGUIDOutputType"), &Z_Registration_Info_UEnum_EPCGExGUIDOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3443093475U) },
		{ EPCGExGUIDFormat_StaticEnum, TEXT("EPCGExGUIDFormat"), &Z_Registration_Info_UEnum_EPCGExGUIDFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3524896322U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExGUIDDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics::NewStructOps, TEXT("PCGExGUIDDetails"),&Z_Registration_Info_UScriptStruct_FPCGExGUIDDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExGUIDDetails), 4012219999U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWriteGUIDSettings, UPCGExWriteGUIDSettings::StaticClass, TEXT("UPCGExWriteGUIDSettings"), &Z_Registration_Info_UClass_UPCGExWriteGUIDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWriteGUIDSettings), 1816215739U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_3207536184{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
