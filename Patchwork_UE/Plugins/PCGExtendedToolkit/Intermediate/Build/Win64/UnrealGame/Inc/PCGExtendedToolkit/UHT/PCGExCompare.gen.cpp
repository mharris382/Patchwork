// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExCompare.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCompare() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FClampedBit();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FClampedBitOp();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmask();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExIndexMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIndexMode;
static UEnum* EPCGExIndexMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIndexMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIndexMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExIndexMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIndexMode>()
{
	return EPCGExIndexMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "Offset.DisplayName", "Offset" },
		{ "Offset.Name", "EPCGExIndexMode::Offset" },
		{ "Offset.ToolTip", "Index value represent an offset from current point' index" },
		{ "Pick.DisplayName", "Pick" },
		{ "Pick.Name", "EPCGExIndexMode::Pick" },
		{ "Pick.ToolTip", "Index value represent a specific pick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIndexMode::Pick", (int64)EPCGExIndexMode::Pick },
		{ "EPCGExIndexMode::Offset", (int64)EPCGExIndexMode::Offset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIndexMode",
	"EPCGExIndexMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIndexMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIndexMode.InnerSingleton;
}
// ********** End Enum EPCGExIndexMode *************************************************************

// ********** Begin Enum EPCGExAngularDomain *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAngularDomain;
static UEnum* EPCGExAngularDomain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngularDomain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAngularDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAngularDomain"));
	}
	return Z_Registration_Info_UEnum_EPCGExAngularDomain.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAngularDomain>()
{
	return EPCGExAngularDomain_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Degrees.DisplayName", "Degrees" },
		{ "Degrees.Name", "EPCGExAngularDomain::Degrees" },
		{ "Degrees.Tooltip", "Read the value as degrees" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "Scalar.DisplayName", "Scalar" },
		{ "Scalar.Name", "EPCGExAngularDomain::Scalar" },
		{ "Scalar.Tooltip", "Read the value as the result of a normalized dot product" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAngularDomain::Scalar", (int64)EPCGExAngularDomain::Scalar },
		{ "EPCGExAngularDomain::Degrees", (int64)EPCGExAngularDomain::Degrees },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAngularDomain",
	"EPCGExAngularDomain",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngularDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAngularDomain.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAngularDomain.InnerSingleton;
}
// ********** End Enum EPCGExAngularDomain *********************************************************

// ********** Begin Enum EPCGExComparison **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExComparison;
static UEnum* EPCGExComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExComparison"));
	}
	return Z_Registration_Info_UEnum_EPCGExComparison.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExComparison>()
{
	return EPCGExComparison_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EqualOrGreater.DisplayName", " >= " },
		{ "EqualOrGreater.Name", "EPCGExComparison::EqualOrGreater" },
		{ "EqualOrGreater.Tooltip", "Operand A Equal or Greater to Operand B" },
		{ "EqualOrSmaller.DisplayName", " <= " },
		{ "EqualOrSmaller.Name", "EPCGExComparison::EqualOrSmaller" },
		{ "EqualOrSmaller.Tooltip", "Operand A Equal or Smaller to Operand B" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "NearlyEqual.DisplayName", " ~= " },
		{ "NearlyEqual.Name", "EPCGExComparison::NearlyEqual" },
		{ "NearlyEqual.Tooltip", "Operand A Nearly Equal to Operand B" },
		{ "NearlyNotEqual.DisplayName", " !~= " },
		{ "NearlyNotEqual.Name", "EPCGExComparison::NearlyNotEqual" },
		{ "NearlyNotEqual.Tooltip", "Operand A Nearly Not Equal to Operand B" },
		{ "StrictlyEqual.DisplayName", " == " },
		{ "StrictlyEqual.Name", "EPCGExComparison::StrictlyEqual" },
		{ "StrictlyEqual.Tooltip", "Operand A Strictly Equal to Operand B" },
		{ "StrictlyGreater.DisplayName", " > " },
		{ "StrictlyGreater.Name", "EPCGExComparison::StrictlyGreater" },
		{ "StrictlyGreater.Tooltip", "Operand A Strictly Greater to Operand B" },
		{ "StrictlyNotEqual.DisplayName", " != " },
		{ "StrictlyNotEqual.Name", "EPCGExComparison::StrictlyNotEqual" },
		{ "StrictlyNotEqual.Tooltip", "Operand A Strictly Not Equal to Operand B" },
		{ "StrictlySmaller.DisplayName", " < " },
		{ "StrictlySmaller.Name", "EPCGExComparison::StrictlySmaller" },
		{ "StrictlySmaller.Tooltip", "Operand A Strictly Smaller to Operand B" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExComparison::StrictlyEqual", (int64)EPCGExComparison::StrictlyEqual },
		{ "EPCGExComparison::StrictlyNotEqual", (int64)EPCGExComparison::StrictlyNotEqual },
		{ "EPCGExComparison::EqualOrGreater", (int64)EPCGExComparison::EqualOrGreater },
		{ "EPCGExComparison::EqualOrSmaller", (int64)EPCGExComparison::EqualOrSmaller },
		{ "EPCGExComparison::StrictlyGreater", (int64)EPCGExComparison::StrictlyGreater },
		{ "EPCGExComparison::StrictlySmaller", (int64)EPCGExComparison::StrictlySmaller },
		{ "EPCGExComparison::NearlyEqual", (int64)EPCGExComparison::NearlyEqual },
		{ "EPCGExComparison::NearlyNotEqual", (int64)EPCGExComparison::NearlyNotEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExComparison",
	"EPCGExComparison",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison()
{
	if (!Z_Registration_Info_UEnum_EPCGExComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExComparison.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExComparison.InnerSingleton;
}
// ********** End Enum EPCGExComparison ************************************************************

// ********** Begin Enum EPCGExEquality ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEquality;
static UEnum* EPCGExEquality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEquality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEquality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEquality"));
	}
	return Z_Registration_Info_UEnum_EPCGExEquality.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEquality>()
{
	return EPCGExEquality_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", " == " },
		{ "Equal.Name", "EPCGExEquality::Equal" },
		{ "Equal.Tooltip", "Operand A Equal to Operand B" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "NotEqual.DisplayName", " != " },
		{ "NotEqual.Name", "EPCGExEquality::NotEqual" },
		{ "NotEqual.Tooltip", "Operand A Not Equal to Operand B" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEquality::Equal", (int64)EPCGExEquality::Equal },
		{ "EPCGExEquality::NotEqual", (int64)EPCGExEquality::NotEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEquality",
	"EPCGExEquality",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality()
{
	if (!Z_Registration_Info_UEnum_EPCGExEquality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEquality.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEquality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEquality.InnerSingleton;
}
// ********** End Enum EPCGExEquality **************************************************************

// ********** Begin Enum EPCGExStringComparison ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStringComparison;
static UEnum* EPCGExStringComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStringComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStringComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStringComparison"));
	}
	return Z_Registration_Info_UEnum_EPCGExStringComparison.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStringComparison>()
{
	return EPCGExStringComparison_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Contains.DisplayName", " Contains " },
		{ "Contains.Name", "EPCGExStringComparison::Contains" },
		{ "Contains.Tooltip", "Operand A contains Operand B" },
		{ "EndsWith.DisplayName", " Ends With " },
		{ "EndsWith.Name", "EPCGExStringComparison::EndsWith" },
		{ "EndsWith.Tooltip", "Operand A ends with Operand B" },
		{ "LengthEqualOrGreater.DisplayName", " >= (Length)" },
		{ "LengthEqualOrGreater.Name", "EPCGExStringComparison::LengthEqualOrGreater" },
		{ "LengthEqualOrGreater.Tooltip", "Operand A Equal or Greater to Operand B" },
		{ "LengthEqualOrSmaller.DisplayName", " <= (Length)" },
		{ "LengthEqualOrSmaller.Name", "EPCGExStringComparison::LengthEqualOrSmaller" },
		{ "LengthEqualOrSmaller.Tooltip", "Operand A Equal or Smaller to Operand B" },
		{ "LengthStrictlyEqual.DisplayName", " == (Length) " },
		{ "LengthStrictlyEqual.Name", "EPCGExStringComparison::LengthStrictlyEqual" },
		{ "LengthStrictlyEqual.Tooltip", "Operand A Strictly Equal to Operand B" },
		{ "LengthStrictlyUnequal.DisplayName", " != (Length) " },
		{ "LengthStrictlyUnequal.Name", "EPCGExStringComparison::LengthStrictlyUnequal" },
		{ "LengthStrictlyUnequal.Tooltip", "Operand A Strictly Not Equal to Operand B" },
		{ "LocaleStrictlyGreater.DisplayName", " > (Locale)" },
		{ "LocaleStrictlyGreater.Name", "EPCGExStringComparison::LocaleStrictlyGreater" },
		{ "LocaleStrictlyGreater.Tooltip", "Operand A Locale Strictly Greater to Operand B Locale" },
		{ "LocaleStrictlySmaller.DisplayName", " < (Locale)" },
		{ "LocaleStrictlySmaller.Name", "EPCGExStringComparison::LocaleStrictlySmaller" },
		{ "LocaleStrictlySmaller.Tooltip", "Operand A Locale Strictly Smaller to Operand B Locale" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "StartsWith.DisplayName", " Starts With " },
		{ "StartsWith.Name", "EPCGExStringComparison::StartsWith" },
		{ "StartsWith.Tooltip", "Operand A starts with Operand B" },
		{ "StrictlyEqual.DisplayName", " == " },
		{ "StrictlyEqual.Name", "EPCGExStringComparison::StrictlyEqual" },
		{ "StrictlyEqual.Tooltip", "Operand A Strictly Equal to Operand B" },
		{ "StrictlyGreater.DisplayName", " > (Length)" },
		{ "StrictlyGreater.Name", "EPCGExStringComparison::StrictlyGreater" },
		{ "StrictlyGreater.Tooltip", "Operand A Strictly Greater to Operand B" },
		{ "StrictlyNotEqual.DisplayName", " != " },
		{ "StrictlyNotEqual.Name", "EPCGExStringComparison::StrictlyNotEqual" },
		{ "StrictlyNotEqual.Tooltip", "Operand A Strictly Not Equal to Operand B" },
		{ "StrictlySmaller.DisplayName", " < (Length)" },
		{ "StrictlySmaller.Name", "EPCGExStringComparison::StrictlySmaller" },
		{ "StrictlySmaller.Tooltip", "Operand A Strictly Smaller to Operand B" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStringComparison::StrictlyEqual", (int64)EPCGExStringComparison::StrictlyEqual },
		{ "EPCGExStringComparison::StrictlyNotEqual", (int64)EPCGExStringComparison::StrictlyNotEqual },
		{ "EPCGExStringComparison::LengthStrictlyEqual", (int64)EPCGExStringComparison::LengthStrictlyEqual },
		{ "EPCGExStringComparison::LengthStrictlyUnequal", (int64)EPCGExStringComparison::LengthStrictlyUnequal },
		{ "EPCGExStringComparison::LengthEqualOrGreater", (int64)EPCGExStringComparison::LengthEqualOrGreater },
		{ "EPCGExStringComparison::LengthEqualOrSmaller", (int64)EPCGExStringComparison::LengthEqualOrSmaller },
		{ "EPCGExStringComparison::StrictlyGreater", (int64)EPCGExStringComparison::StrictlyGreater },
		{ "EPCGExStringComparison::StrictlySmaller", (int64)EPCGExStringComparison::StrictlySmaller },
		{ "EPCGExStringComparison::LocaleStrictlyGreater", (int64)EPCGExStringComparison::LocaleStrictlyGreater },
		{ "EPCGExStringComparison::LocaleStrictlySmaller", (int64)EPCGExStringComparison::LocaleStrictlySmaller },
		{ "EPCGExStringComparison::Contains", (int64)EPCGExStringComparison::Contains },
		{ "EPCGExStringComparison::StartsWith", (int64)EPCGExStringComparison::StartsWith },
		{ "EPCGExStringComparison::EndsWith", (int64)EPCGExStringComparison::EndsWith },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStringComparison",
	"EPCGExStringComparison",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison()
{
	if (!Z_Registration_Info_UEnum_EPCGExStringComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStringComparison.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStringComparison.InnerSingleton;
}
// ********** End Enum EPCGExStringComparison ******************************************************

// ********** Begin Enum EPCGExStringMatchMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStringMatchMode;
static UEnum* EPCGExStringMatchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStringMatchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStringMatchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStringMatchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExStringMatchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStringMatchMode>()
{
	return EPCGExStringMatchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Contains.DisplayName", "Contains" },
		{ "Contains.Name", "EPCGExStringMatchMode::Contains" },
		{ "Contains.ToolTip", "" },
		{ "EndsWith.DisplayName", "Ends with" },
		{ "EndsWith.Name", "EPCGExStringMatchMode::EndsWith" },
		{ "EndsWith.ToolTip", "" },
		{ "Equals.DisplayName", "Equals" },
		{ "Equals.Name", "EPCGExStringMatchMode::Equals" },
		{ "Equals.ToolTip", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "StartsWith.DisplayName", "Starts with" },
		{ "StartsWith.Name", "EPCGExStringMatchMode::StartsWith" },
		{ "StartsWith.ToolTip", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStringMatchMode::Equals", (int64)EPCGExStringMatchMode::Equals },
		{ "EPCGExStringMatchMode::Contains", (int64)EPCGExStringMatchMode::Contains },
		{ "EPCGExStringMatchMode::StartsWith", (int64)EPCGExStringMatchMode::StartsWith },
		{ "EPCGExStringMatchMode::EndsWith", (int64)EPCGExStringMatchMode::EndsWith },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStringMatchMode",
	"EPCGExStringMatchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExStringMatchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStringMatchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStringMatchMode.InnerSingleton;
}
// ********** End Enum EPCGExStringMatchMode *******************************************************

// ********** Begin Enum EPCGExBitflagComparison ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitflagComparison;
static UEnum* EPCGExBitflagComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitflagComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitflagComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitflagComparison"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitflagComparison.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitflagComparison>()
{
	return EPCGExBitflagComparison_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MatchFull.DisplayName", "Match (all)" },
		{ "MatchFull.Name", "EPCGExBitflagComparison::MatchFull" },
		{ "MatchFull.Tooltip", "Value & Mask == Mask (All the flags in the mask are set)" },
		{ "MatchPartial.DisplayName", "Match (any)" },
		{ "MatchPartial.Name", "EPCGExBitflagComparison::MatchPartial" },
		{ "MatchPartial.Tooltip", "Value & Mask != 0 (At least some flags in the mask are set)" },
		{ "MatchStrict.DisplayName", "Match (strict)" },
		{ "MatchStrict.Name", "EPCGExBitflagComparison::MatchStrict" },
		{ "MatchStrict.Tooltip", "Value == Mask (Flags strictly equals mask)" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "NoMatchFull.DisplayName", "No match (all)" },
		{ "NoMatchFull.Name", "EPCGExBitflagComparison::NoMatchFull" },
		{ "NoMatchFull.Tooltip", "Value & Mask != Mask (Flags does not contains the mask)" },
		{ "NoMatchPartial.DisplayName", "No match (any)" },
		{ "NoMatchPartial.Name", "EPCGExBitflagComparison::NoMatchPartial" },
		{ "NoMatchPartial.Tooltip", "Value & Mask == 0 (Flags does not contains any from mask)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitflagComparison::MatchPartial", (int64)EPCGExBitflagComparison::MatchPartial },
		{ "EPCGExBitflagComparison::MatchFull", (int64)EPCGExBitflagComparison::MatchFull },
		{ "EPCGExBitflagComparison::MatchStrict", (int64)EPCGExBitflagComparison::MatchStrict },
		{ "EPCGExBitflagComparison::NoMatchPartial", (int64)EPCGExBitflagComparison::NoMatchPartial },
		{ "EPCGExBitflagComparison::NoMatchFull", (int64)EPCGExBitflagComparison::NoMatchFull },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitflagComparison",
	"EPCGExBitflagComparison",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitflagComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitflagComparison.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitflagComparison.InnerSingleton;
}
// ********** End Enum EPCGExBitflagComparison *****************************************************

// ********** Begin Enum EPCGExComparisonDataType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExComparisonDataType;
static UEnum* EPCGExComparisonDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExComparisonDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExComparisonDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExComparisonDataType"));
	}
	return Z_Registration_Info_UEnum_EPCGExComparisonDataType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExComparisonDataType>()
{
	return EPCGExComparisonDataType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "Numeric.ActionIcon", "Numeric" },
		{ "Numeric.DisplayName", "Numeric" },
		{ "Numeric.Name", "EPCGExComparisonDataType::Numeric" },
		{ "Numeric.Tooltip", "Compare numeric values" },
		{ "String.ActionIcon", "Text" },
		{ "String.DisplayName", "String" },
		{ "String.Name", "EPCGExComparisonDataType::String" },
		{ "String.Tooltip", "Compare string values" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExComparisonDataType::Numeric", (int64)EPCGExComparisonDataType::Numeric },
		{ "EPCGExComparisonDataType::String", (int64)EPCGExComparisonDataType::String },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExComparisonDataType",
	"EPCGExComparisonDataType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType()
{
	if (!Z_Registration_Info_UEnum_EPCGExComparisonDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExComparisonDataType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExComparisonDataType.InnerSingleton;
}
// ********** End Enum EPCGExComparisonDataType ****************************************************

// ********** Begin Enum EPCGExDirectionCheckMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDirectionCheckMode;
static UEnum* EPCGExDirectionCheckMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDirectionCheckMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDirectionCheckMode>()
{
	return EPCGExDirectionCheckMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Dot.DisplayName", "Dot (Precise)" },
		{ "Dot.Name", "EPCGExDirectionCheckMode::Dot" },
		{ "Dot.Tooltip", "Extensive comparison using Dot product" },
		{ "Hash.DisplayName", "Hash (Fast)" },
		{ "Hash.Name", "EPCGExDirectionCheckMode::Hash" },
		{ "Hash.Tooltip", "Simplified check using hash comparison with a destructive tolerance" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDirectionCheckMode::Dot", (int64)EPCGExDirectionCheckMode::Dot },
		{ "EPCGExDirectionCheckMode::Hash", (int64)EPCGExDirectionCheckMode::Hash },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDirectionCheckMode",
	"EPCGExDirectionCheckMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDirectionCheckMode.InnerSingleton;
}
// ********** End Enum EPCGExDirectionCheckMode ****************************************************

// ********** Begin ScriptStruct FPCGExVectorHashComparisonDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExVectorHashComparisonDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExVectorHashComparisonDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashToleranceInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Tolerance value source */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Tolerance value source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashToleranceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance value use for comparison */" },
		{ "DisplayName", "Hash Tolerance (Attr)" },
		{ "EditCondition", "HashToleranceInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance value use for comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashToleranceConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000010" },
		{ "Comment", "/** Tolerance value use for comparison */" },
		{ "DisplayName", "Hash Tolerance" },
		{ "EditCondition", "HashToleranceInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance value use for comparison" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExVectorHashComparisonDetails constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_HashToleranceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HashToleranceInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HashToleranceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HashToleranceConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExVectorHashComparisonDetails constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExVectorHashComparisonDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails;
class UScriptStruct* FPCGExVectorHashComparisonDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExVectorHashComparisonDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExVectorHashComparisonDetails Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceInput = { "HashToleranceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVectorHashComparisonDetails, HashToleranceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashToleranceInput_MetaData), NewProp_HashToleranceInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceAttribute = { "HashToleranceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVectorHashComparisonDetails, HashToleranceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashToleranceAttribute_MetaData), NewProp_HashToleranceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceConstant = { "HashToleranceConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVectorHashComparisonDetails, HashToleranceConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashToleranceConstant_MetaData), NewProp_HashToleranceConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewProp_HashToleranceConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExVectorHashComparisonDetails Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExVectorHashComparisonDetails",
	Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::PropPointers),
	sizeof(FPCGExVectorHashComparisonDetails),
	alignof(FPCGExVectorHashComparisonDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExVectorHashComparisonDetails ***********************************

// ********** Begin ScriptStruct FPCGExStaticDotComparisonDetails **********************************
struct Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExStaticDotComparisonDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExStaticDotComparisonDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Util object to encapsulate recurring dot comparison parameters, with no support for params\n */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "ToolTip", "Util object to encapsulate recurring dot comparison parameters, with no support for params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Value domain (units) */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Value domain (units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnsignedComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the dot product will be made absolute before testing. */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the dot product will be made absolute before testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Dot value use for comparison (In raw -1/1 range) */" },
		{ "DisplayName", "Scalar" },
		{ "EditCondition", "Domain == EPCGExAngularDomain::Scalar" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot value use for comparison (In raw -1/1 range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance for dot comparison. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tolerance" },
		{ "EditCondition", "(Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual) && Domain == EPCGExAngularDomain::Scalar" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance for dot comparison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DegreesConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Dot value use for comparison (In degrees) */" },
		{ "DisplayName", "Degrees" },
		{ "EditCondition", "Domain == EPCGExAngularDomain::Degrees" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot value use for comparison (In degrees)" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DegreesTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance for dot comparison. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tolerance" },
		{ "EditCondition", "(Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual) && Domain == EPCGExAngularDomain::Degrees" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance for dot comparison." },
		{ "Units", "Degrees" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExStaticDotComparisonDetails constinit property declarations **
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static void NewProp_bUnsignedComparison_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnsignedComparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DotConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DotTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DegreesConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DegreesTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExStaticDotComparisonDetails constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExStaticDotComparisonDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails;
class UScriptStruct* FPCGExStaticDotComparisonDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExStaticDotComparisonDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExStaticDotComparisonDetails Property Definitions *************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, Domain), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 3172692362
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
void Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_bUnsignedComparison_SetBit(void* Obj)
{
	((FPCGExStaticDotComparisonDetails*)Obj)->bUnsignedComparison = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_bUnsignedComparison = { "bUnsignedComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExStaticDotComparisonDetails), &Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_bUnsignedComparison_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnsignedComparison_MetaData), NewProp_bUnsignedComparison_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DotConstant = { "DotConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, DotConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotConstant_MetaData), NewProp_DotConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DotTolerance = { "DotTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, DotTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotTolerance_MetaData), NewProp_DotTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DegreesConstant = { "DegreesConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, DegreesConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DegreesConstant_MetaData), NewProp_DegreesConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DegreesTolerance = { "DegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStaticDotComparisonDetails, DegreesTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DegreesTolerance_MetaData), NewProp_DegreesTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_bUnsignedComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DotConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DotTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DegreesConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewProp_DegreesTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExStaticDotComparisonDetails Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExStaticDotComparisonDetails",
	Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::PropPointers),
	sizeof(FPCGExStaticDotComparisonDetails),
	alignof(FPCGExStaticDotComparisonDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExStaticDotComparisonDetails ************************************

// ********** Begin ScriptStruct FPCGExDotComparisonDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDotComparisonDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDotComparisonDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Util object to encapsulate recurring dot comparison parameters, including attribute-driven params\n */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "ToolTip", "Util object to encapsulate recurring dot comparison parameters, including attribute-driven params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Value domain (units) */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Value domain (units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnsignedComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the dot product will be made absolute before testing. */" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the dot product will be made absolute before testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Dot value source */" },
		{ "DisplayName", "Threshold Input" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Dot value source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute value use for comparison, whether Scalar or Degrees */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute value use for comparison, whether Scalar or Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Dot value use for comparison (In raw -1/1 range) */" },
		{ "DisplayName", "Scalar" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant && Domain == EPCGExAngularDomain::Scalar" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot value use for comparison (In raw -1/1 range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance for dot comparison. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tolerance" },
		{ "EditCondition", "(Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual) && Domain == EPCGExAngularDomain::Scalar" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance for dot comparison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DegreesConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Dot value use for comparison (In degrees) */" },
		{ "DisplayName", "Degrees" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant && Domain == EPCGExAngularDomain::Degrees" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot value use for comparison (In degrees)" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DegreesTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance for dot comparison. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tolerance" },
		{ "EditCondition", "(Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual) && Domain == EPCGExAngularDomain::Degrees" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance for dot comparison." },
		{ "Units", "Degrees" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDotComparisonDetails constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static void NewProp_bUnsignedComparison_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnsignedComparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DotConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DotTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DegreesConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DegreesTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExDotComparisonDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDotComparisonDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails;
class UScriptStruct* FPCGExDotComparisonDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDotComparisonDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExDotComparisonDetails Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, Domain), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngularDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 3172692362
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
void Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_bUnsignedComparison_SetBit(void* Obj)
{
	((FPCGExDotComparisonDetails*)Obj)->bUnsignedComparison = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_bUnsignedComparison = { "bUnsignedComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDotComparisonDetails), &Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_bUnsignedComparison_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnsignedComparison_MetaData), NewProp_bUnsignedComparison_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DotConstant = { "DotConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, DotConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotConstant_MetaData), NewProp_DotConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DotTolerance = { "DotTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, DotTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotTolerance_MetaData), NewProp_DotTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DegreesConstant = { "DegreesConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, DegreesConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DegreesConstant_MetaData), NewProp_DegreesConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DegreesTolerance = { "DegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotComparisonDetails, DegreesTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DegreesTolerance_MetaData), NewProp_DegreesTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_bUnsignedComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DotConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DotTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DegreesConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewProp_DegreesTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExDotComparisonDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExDotComparisonDetails",
	Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::PropPointers),
	sizeof(FPCGExDotComparisonDetails),
	alignof(FPCGExDotComparisonDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDotComparisonDetails ******************************************

// ********** Begin Enum EPCGExBitOp ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitOp;
static UEnum* EPCGExBitOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitOp"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitOp.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitOp>()
{
	return EPCGExBitOp_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AND.DisplayName", "AND" },
		{ "AND.Name", "EPCGExBitOp::AND" },
		{ "AND.ToolTip", "(Flags &= Mask) Output true if boths bits == 1, otherwise false." },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "NOT.DisplayName", "NOT" },
		{ "NOT.Name", "EPCGExBitOp::NOT" },
		{ "NOT.ToolTip", "(Flags &= ~Mask) Like AND, but inverts the masks." },
		{ "OR.DisplayName", "OR" },
		{ "OR.Name", "EPCGExBitOp::OR" },
		{ "OR.ToolTip", "(Flags |= Mask) Output true if any of the bits == 1, otherwise false." },
		{ "Set.DisplayName", "=" },
		{ "Set.Name", "EPCGExBitOp::Set" },
		{ "Set.ToolTip", "(Flags = Mask) Set the bit with the specified value." },
		{ "XOR.DisplayName", "XOR" },
		{ "XOR.Name", "EPCGExBitOp::XOR" },
		{ "XOR.ToolTip", "(Flags ^= Mask) Invert the flag bit where the mask == 1." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitOp::Set", (int64)EPCGExBitOp::Set },
		{ "EPCGExBitOp::AND", (int64)EPCGExBitOp::AND },
		{ "EPCGExBitOp::OR", (int64)EPCGExBitOp::OR },
		{ "EPCGExBitOp::NOT", (int64)EPCGExBitOp::NOT },
		{ "EPCGExBitOp::XOR", (int64)EPCGExBitOp::XOR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitOp",
	"EPCGExBitOp",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitOp.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitOp.InnerSingleton;
}
// ********** End Enum EPCGExBitOp *****************************************************************

// ********** Begin Enum EPCGExBitmaskMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmaskMode;
static UEnum* EPCGExBitmaskMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmaskMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmaskMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmaskMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmaskMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmaskMode>()
{
	return EPCGExBitmaskMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Composite.DisplayName", "Composite" },
		{ "Composite.Name", "EPCGExBitmaskMode::Composite" },
		{ "Composite.ToolTip", "Use a ton of dropdown to set the bits" },
		{ "Direct.DisplayName", "Direct" },
		{ "Direct.Name", "EPCGExBitmaskMode::Direct" },
		{ "Direct.ToolTip", "Used for easy override mostly" },
		{ "Individual.DisplayName", "Individual" },
		{ "Individual.Name", "EPCGExBitmaskMode::Individual" },
		{ "Individual.ToolTip", "Use an array to manually set the bits" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmaskMode::Direct", (int64)EPCGExBitmaskMode::Direct },
		{ "EPCGExBitmaskMode::Individual", (int64)EPCGExBitmaskMode::Individual },
		{ "EPCGExBitmaskMode::Composite", (int64)EPCGExBitmaskMode::Composite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmaskMode",
	"EPCGExBitmaskMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmaskMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmaskMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmaskMode.InnerSingleton;
}
// ********** End Enum EPCGExBitmaskMode ***********************************************************

// ********** Begin Enum EPCGExBitmask8_00_08 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_00_08;
static UEnum* EPCGExBitmask8_00_08_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_00_08"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_00_08>()
{
	return EPCGExBitmask8_00_08_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 0-8 Bits Range" },
		{ "Flag_1.DisplayName", "(0) Alpha" },
		{ "Flag_1.Name", "EPCGExBitmask8_00_08::Flag_1" },
		{ "Flag_2.DisplayName", "(1) Beta" },
		{ "Flag_2.Name", "EPCGExBitmask8_00_08::Flag_2" },
		{ "Flag_3.DisplayName", "(2) Gamma" },
		{ "Flag_3.Name", "EPCGExBitmask8_00_08::Flag_3" },
		{ "Flag_4.DisplayName", "(3) Delta" },
		{ "Flag_4.Name", "EPCGExBitmask8_00_08::Flag_4" },
		{ "Flag_5.DisplayName", "(4) Epsilon" },
		{ "Flag_5.Name", "EPCGExBitmask8_00_08::Flag_5" },
		{ "Flag_6.DisplayName", "(5) Zeta" },
		{ "Flag_6.Name", "EPCGExBitmask8_00_08::Flag_6" },
		{ "Flag_7.DisplayName", "(6) Eta" },
		{ "Flag_7.Name", "EPCGExBitmask8_00_08::Flag_7" },
		{ "Flag_8.DisplayName", "(7) Theta" },
		{ "Flag_8.Name", "EPCGExBitmask8_00_08::Flag_8" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_00_08::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_00_08::None", (int64)EPCGExBitmask8_00_08::None },
		{ "EPCGExBitmask8_00_08::Flag_1", (int64)EPCGExBitmask8_00_08::Flag_1 },
		{ "EPCGExBitmask8_00_08::Flag_2", (int64)EPCGExBitmask8_00_08::Flag_2 },
		{ "EPCGExBitmask8_00_08::Flag_3", (int64)EPCGExBitmask8_00_08::Flag_3 },
		{ "EPCGExBitmask8_00_08::Flag_4", (int64)EPCGExBitmask8_00_08::Flag_4 },
		{ "EPCGExBitmask8_00_08::Flag_5", (int64)EPCGExBitmask8_00_08::Flag_5 },
		{ "EPCGExBitmask8_00_08::Flag_6", (int64)EPCGExBitmask8_00_08::Flag_6 },
		{ "EPCGExBitmask8_00_08::Flag_7", (int64)EPCGExBitmask8_00_08::Flag_7 },
		{ "EPCGExBitmask8_00_08::Flag_8", (int64)EPCGExBitmask8_00_08::Flag_8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_00_08",
	"EPCGExBitmask8_00_08",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_00_08_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_00_08.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_00_08 ********************************************************

// ********** Begin Enum EPCGExBitmask8_08_16 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_08_16;
static UEnum* EPCGExBitmask8_08_16_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_08_16"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_08_16>()
{
	return EPCGExBitmask8_08_16_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 8-16 Bits Range" },
		{ "Flag_10.DisplayName", "(9) Kappa" },
		{ "Flag_10.Name", "EPCGExBitmask8_08_16::Flag_10" },
		{ "Flag_11.DisplayName", "(10) Lambda" },
		{ "Flag_11.Name", "EPCGExBitmask8_08_16::Flag_11" },
		{ "Flag_12.DisplayName", "(11) Mu" },
		{ "Flag_12.Name", "EPCGExBitmask8_08_16::Flag_12" },
		{ "Flag_13.DisplayName", "(12) Nu" },
		{ "Flag_13.Name", "EPCGExBitmask8_08_16::Flag_13" },
		{ "Flag_14.DisplayName", "(13) Xi" },
		{ "Flag_14.Name", "EPCGExBitmask8_08_16::Flag_14" },
		{ "Flag_15.DisplayName", "(14) Omicron" },
		{ "Flag_15.Name", "EPCGExBitmask8_08_16::Flag_15" },
		{ "Flag_16.DisplayName", "(15) Pi" },
		{ "Flag_16.Name", "EPCGExBitmask8_08_16::Flag_16" },
		{ "Flag_9.DisplayName", "(8) Iota" },
		{ "Flag_9.Name", "EPCGExBitmask8_08_16::Flag_9" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_08_16::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_08_16::None", (int64)EPCGExBitmask8_08_16::None },
		{ "EPCGExBitmask8_08_16::Flag_9", (int64)EPCGExBitmask8_08_16::Flag_9 },
		{ "EPCGExBitmask8_08_16::Flag_10", (int64)EPCGExBitmask8_08_16::Flag_10 },
		{ "EPCGExBitmask8_08_16::Flag_11", (int64)EPCGExBitmask8_08_16::Flag_11 },
		{ "EPCGExBitmask8_08_16::Flag_12", (int64)EPCGExBitmask8_08_16::Flag_12 },
		{ "EPCGExBitmask8_08_16::Flag_13", (int64)EPCGExBitmask8_08_16::Flag_13 },
		{ "EPCGExBitmask8_08_16::Flag_14", (int64)EPCGExBitmask8_08_16::Flag_14 },
		{ "EPCGExBitmask8_08_16::Flag_15", (int64)EPCGExBitmask8_08_16::Flag_15 },
		{ "EPCGExBitmask8_08_16::Flag_16", (int64)EPCGExBitmask8_08_16::Flag_16 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_08_16",
	"EPCGExBitmask8_08_16",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_08_16_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_08_16.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_08_16 ********************************************************

// ********** Begin Enum EPCGExBitmask8_16_24 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_16_24;
static UEnum* EPCGExBitmask8_16_24_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_16_24"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_16_24>()
{
	return EPCGExBitmask8_16_24_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 16-24 Bits Range" },
		{ "Flag_17.DisplayName", "(16) Rho" },
		{ "Flag_17.Name", "EPCGExBitmask8_16_24::Flag_17" },
		{ "Flag_18.DisplayName", "(17) Sigma" },
		{ "Flag_18.Name", "EPCGExBitmask8_16_24::Flag_18" },
		{ "Flag_19.DisplayName", "(18) Tau" },
		{ "Flag_19.Name", "EPCGExBitmask8_16_24::Flag_19" },
		{ "Flag_20.DisplayName", "(19) Upsilon" },
		{ "Flag_20.Name", "EPCGExBitmask8_16_24::Flag_20" },
		{ "Flag_21.DisplayName", "(20) Phi" },
		{ "Flag_21.Name", "EPCGExBitmask8_16_24::Flag_21" },
		{ "Flag_22.DisplayName", "(21) Chi" },
		{ "Flag_22.Name", "EPCGExBitmask8_16_24::Flag_22" },
		{ "Flag_23.DisplayName", "(22) Psi" },
		{ "Flag_23.Name", "EPCGExBitmask8_16_24::Flag_23" },
		{ "Flag_24.DisplayName", "(23) Omega" },
		{ "Flag_24.Name", "EPCGExBitmask8_16_24::Flag_24" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_16_24::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_16_24::None", (int64)EPCGExBitmask8_16_24::None },
		{ "EPCGExBitmask8_16_24::Flag_17", (int64)EPCGExBitmask8_16_24::Flag_17 },
		{ "EPCGExBitmask8_16_24::Flag_18", (int64)EPCGExBitmask8_16_24::Flag_18 },
		{ "EPCGExBitmask8_16_24::Flag_19", (int64)EPCGExBitmask8_16_24::Flag_19 },
		{ "EPCGExBitmask8_16_24::Flag_20", (int64)EPCGExBitmask8_16_24::Flag_20 },
		{ "EPCGExBitmask8_16_24::Flag_21", (int64)EPCGExBitmask8_16_24::Flag_21 },
		{ "EPCGExBitmask8_16_24::Flag_22", (int64)EPCGExBitmask8_16_24::Flag_22 },
		{ "EPCGExBitmask8_16_24::Flag_23", (int64)EPCGExBitmask8_16_24::Flag_23 },
		{ "EPCGExBitmask8_16_24::Flag_24", (int64)EPCGExBitmask8_16_24::Flag_24 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_16_24",
	"EPCGExBitmask8_16_24",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_16_24_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_16_24.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_16_24 ********************************************************

// ********** Begin Enum EPCGExBitmask8_24_32 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_24_32;
static UEnum* EPCGExBitmask8_24_32_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_24_32"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_24_32>()
{
	return EPCGExBitmask8_24_32_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 24-32 Bits Range" },
		{ "Flag_25.DisplayName", "(24) Ares" },
		{ "Flag_25.Name", "EPCGExBitmask8_24_32::Flag_25" },
		{ "Flag_26.DisplayName", "(25) Zeus" },
		{ "Flag_26.Name", "EPCGExBitmask8_24_32::Flag_26" },
		{ "Flag_27.DisplayName", "(26) Hera" },
		{ "Flag_27.Name", "EPCGExBitmask8_24_32::Flag_27" },
		{ "Flag_28.DisplayName", "(27) Apollo" },
		{ "Flag_28.Name", "EPCGExBitmask8_24_32::Flag_28" },
		{ "Flag_29.DisplayName", "(28) Hermes" },
		{ "Flag_29.Name", "EPCGExBitmask8_24_32::Flag_29" },
		{ "Flag_30.DisplayName", "(29) Athena" },
		{ "Flag_30.Name", "EPCGExBitmask8_24_32::Flag_30" },
		{ "Flag_31.DisplayName", "(30) Artemis" },
		{ "Flag_31.Name", "EPCGExBitmask8_24_32::Flag_31" },
		{ "Flag_32.DisplayName", "(31) Demeter" },
		{ "Flag_32.Name", "EPCGExBitmask8_24_32::Flag_32" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_24_32::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_24_32::None", (int64)EPCGExBitmask8_24_32::None },
		{ "EPCGExBitmask8_24_32::Flag_25", (int64)EPCGExBitmask8_24_32::Flag_25 },
		{ "EPCGExBitmask8_24_32::Flag_26", (int64)EPCGExBitmask8_24_32::Flag_26 },
		{ "EPCGExBitmask8_24_32::Flag_27", (int64)EPCGExBitmask8_24_32::Flag_27 },
		{ "EPCGExBitmask8_24_32::Flag_28", (int64)EPCGExBitmask8_24_32::Flag_28 },
		{ "EPCGExBitmask8_24_32::Flag_29", (int64)EPCGExBitmask8_24_32::Flag_29 },
		{ "EPCGExBitmask8_24_32::Flag_30", (int64)EPCGExBitmask8_24_32::Flag_30 },
		{ "EPCGExBitmask8_24_32::Flag_31", (int64)EPCGExBitmask8_24_32::Flag_31 },
		{ "EPCGExBitmask8_24_32::Flag_32", (int64)EPCGExBitmask8_24_32::Flag_32 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_24_32",
	"EPCGExBitmask8_24_32",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_24_32_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_24_32.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_24_32 ********************************************************

// ********** Begin Enum EPCGExBitmask8_32_40 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_32_40;
static UEnum* EPCGExBitmask8_32_40_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_32_40"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_32_40>()
{
	return EPCGExBitmask8_32_40_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 32-40 Bits Range" },
		{ "Flag_33.DisplayName", "(32) Dionysus" },
		{ "Flag_33.Name", "EPCGExBitmask8_32_40::Flag_33" },
		{ "Flag_34.DisplayName", "(33) Hades" },
		{ "Flag_34.Name", "EPCGExBitmask8_32_40::Flag_34" },
		{ "Flag_35.DisplayName", "(34) Hephaestus" },
		{ "Flag_35.Name", "EPCGExBitmask8_32_40::Flag_35" },
		{ "Flag_36.DisplayName", "(35) Hera" },
		{ "Flag_36.Name", "EPCGExBitmask8_32_40::Flag_36" },
		{ "Flag_37.DisplayName", "(36) Hestia" },
		{ "Flag_37.Name", "EPCGExBitmask8_32_40::Flag_37" },
		{ "Flag_38.DisplayName", "(37) Poseidon" },
		{ "Flag_38.Name", "EPCGExBitmask8_32_40::Flag_38" },
		{ "Flag_39.DisplayName", "(38) Janus" },
		{ "Flag_39.Name", "EPCGExBitmask8_32_40::Flag_39" },
		{ "Flag_40.DisplayName", "(39) Mars" },
		{ "Flag_40.Name", "EPCGExBitmask8_32_40::Flag_40" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_32_40::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_32_40::None", (int64)EPCGExBitmask8_32_40::None },
		{ "EPCGExBitmask8_32_40::Flag_33", (int64)EPCGExBitmask8_32_40::Flag_33 },
		{ "EPCGExBitmask8_32_40::Flag_34", (int64)EPCGExBitmask8_32_40::Flag_34 },
		{ "EPCGExBitmask8_32_40::Flag_35", (int64)EPCGExBitmask8_32_40::Flag_35 },
		{ "EPCGExBitmask8_32_40::Flag_36", (int64)EPCGExBitmask8_32_40::Flag_36 },
		{ "EPCGExBitmask8_32_40::Flag_37", (int64)EPCGExBitmask8_32_40::Flag_37 },
		{ "EPCGExBitmask8_32_40::Flag_38", (int64)EPCGExBitmask8_32_40::Flag_38 },
		{ "EPCGExBitmask8_32_40::Flag_39", (int64)EPCGExBitmask8_32_40::Flag_39 },
		{ "EPCGExBitmask8_32_40::Flag_40", (int64)EPCGExBitmask8_32_40::Flag_40 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_32_40",
	"EPCGExBitmask8_32_40",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_32_40_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_32_40.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_32_40 ********************************************************

// ********** Begin Enum EPCGExBitmask8_40_48 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_40_48;
static UEnum* EPCGExBitmask8_40_48_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_40_48"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_40_48>()
{
	return EPCGExBitmask8_40_48_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 40-48 Bits Range" },
		{ "Flag_41.DisplayName", "(40) Venus" },
		{ "Flag_41.Name", "EPCGExBitmask8_40_48::Flag_41" },
		{ "Flag_42.DisplayName", "(41) Jupiter" },
		{ "Flag_42.Name", "EPCGExBitmask8_40_48::Flag_42" },
		{ "Flag_43.DisplayName", "(42) Saturn" },
		{ "Flag_43.Name", "EPCGExBitmask8_40_48::Flag_43" },
		{ "Flag_44.DisplayName", "(43) Neptune" },
		{ "Flag_44.Name", "EPCGExBitmask8_40_48::Flag_44" },
		{ "Flag_45.DisplayName", "(44) Pluto" },
		{ "Flag_45.Name", "EPCGExBitmask8_40_48::Flag_45" },
		{ "Flag_46.DisplayName", "(45) Vesta" },
		{ "Flag_46.Name", "EPCGExBitmask8_40_48::Flag_46" },
		{ "Flag_47.DisplayName", "(46) Mercury" },
		{ "Flag_47.Name", "EPCGExBitmask8_40_48::Flag_47" },
		{ "Flag_48.DisplayName", "(47) Sol" },
		{ "Flag_48.Name", "EPCGExBitmask8_40_48::Flag_48" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_40_48::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_40_48::None", (int64)EPCGExBitmask8_40_48::None },
		{ "EPCGExBitmask8_40_48::Flag_41", (int64)EPCGExBitmask8_40_48::Flag_41 },
		{ "EPCGExBitmask8_40_48::Flag_42", (int64)EPCGExBitmask8_40_48::Flag_42 },
		{ "EPCGExBitmask8_40_48::Flag_43", (int64)EPCGExBitmask8_40_48::Flag_43 },
		{ "EPCGExBitmask8_40_48::Flag_44", (int64)EPCGExBitmask8_40_48::Flag_44 },
		{ "EPCGExBitmask8_40_48::Flag_45", (int64)EPCGExBitmask8_40_48::Flag_45 },
		{ "EPCGExBitmask8_40_48::Flag_46", (int64)EPCGExBitmask8_40_48::Flag_46 },
		{ "EPCGExBitmask8_40_48::Flag_47", (int64)EPCGExBitmask8_40_48::Flag_47 },
		{ "EPCGExBitmask8_40_48::Flag_48", (int64)EPCGExBitmask8_40_48::Flag_48 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_40_48",
	"EPCGExBitmask8_40_48",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_40_48_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_40_48.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_40_48 ********************************************************

// ********** Begin Enum EPCGExBitmask8_48_56 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_48_56;
static UEnum* EPCGExBitmask8_48_56_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_48_56"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_48_56>()
{
	return EPCGExBitmask8_48_56_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 48-56 Bits Range" },
		{ "Flag_49.DisplayName", "(48) Luna" },
		{ "Flag_49.Name", "EPCGExBitmask8_48_56::Flag_49" },
		{ "Flag_50.DisplayName", "(49) Terra" },
		{ "Flag_50.Name", "EPCGExBitmask8_48_56::Flag_50" },
		{ "Flag_51.DisplayName", "(50) Vulcan" },
		{ "Flag_51.Name", "EPCGExBitmask8_48_56::Flag_51" },
		{ "Flag_52.DisplayName", "(51) Juno" },
		{ "Flag_52.Name", "EPCGExBitmask8_48_56::Flag_52" },
		{ "Flag_53.DisplayName", "(52) Ceres" },
		{ "Flag_53.Name", "EPCGExBitmask8_48_56::Flag_53" },
		{ "Flag_54.DisplayName", "(53) Minerva" },
		{ "Flag_54.Name", "EPCGExBitmask8_48_56::Flag_54" },
		{ "Flag_55.DisplayName", "(54) Bacchus" },
		{ "Flag_55.Name", "EPCGExBitmask8_48_56::Flag_55" },
		{ "Flag_56.DisplayName", "(55) Aurora" },
		{ "Flag_56.Name", "EPCGExBitmask8_48_56::Flag_56" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_48_56::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_48_56::None", (int64)EPCGExBitmask8_48_56::None },
		{ "EPCGExBitmask8_48_56::Flag_49", (int64)EPCGExBitmask8_48_56::Flag_49 },
		{ "EPCGExBitmask8_48_56::Flag_50", (int64)EPCGExBitmask8_48_56::Flag_50 },
		{ "EPCGExBitmask8_48_56::Flag_51", (int64)EPCGExBitmask8_48_56::Flag_51 },
		{ "EPCGExBitmask8_48_56::Flag_52", (int64)EPCGExBitmask8_48_56::Flag_52 },
		{ "EPCGExBitmask8_48_56::Flag_53", (int64)EPCGExBitmask8_48_56::Flag_53 },
		{ "EPCGExBitmask8_48_56::Flag_54", (int64)EPCGExBitmask8_48_56::Flag_54 },
		{ "EPCGExBitmask8_48_56::Flag_55", (int64)EPCGExBitmask8_48_56::Flag_55 },
		{ "EPCGExBitmask8_48_56::Flag_56", (int64)EPCGExBitmask8_48_56::Flag_56 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_48_56",
	"EPCGExBitmask8_48_56",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_48_56_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_48_56.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_48_56 ********************************************************

// ********** Begin Enum EPCGExBitmask8_56_64 ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBitmask8_56_64;
static UEnum* EPCGExBitmask8_56_64_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBitmask8_56_64"));
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_56_64>()
{
	return EPCGExBitmask8_56_64_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Bitflag 56-64 Bits Range" },
		{ "Flag_57.DisplayName", "(56) Flora" },
		{ "Flag_57.Name", "EPCGExBitmask8_56_64::Flag_57" },
		{ "Flag_58.DisplayName", "(57) Faunus" },
		{ "Flag_58.Name", "EPCGExBitmask8_56_64::Flag_58" },
		{ "Flag_59.DisplayName", "(58) Iris" },
		{ "Flag_59.Name", "EPCGExBitmask8_56_64::Flag_59" },
		{ "Flag_60.DisplayName", "(59) Mithras" },
		{ "Flag_60.Name", "EPCGExBitmask8_56_64::Flag_60" },
		{ "Flag_61.DisplayName", "(60) Fortuna" },
		{ "Flag_61.Name", "EPCGExBitmask8_56_64::Flag_61" },
		{ "Flag_62.DisplayName", "(61) Bellona" },
		{ "Flag_62.Name", "EPCGExBitmask8_56_64::Flag_62" },
		{ "Flag_63.DisplayName", "(62) Fides" },
		{ "Flag_63.Name", "EPCGExBitmask8_56_64::Flag_63" },
		{ "Flag_64.DisplayName", "(63) Pax" },
		{ "Flag_64.Name", "EPCGExBitmask8_56_64::Flag_64" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "None.Name", "EPCGExBitmask8_56_64::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBitmask8_56_64::None", (int64)EPCGExBitmask8_56_64::None },
		{ "EPCGExBitmask8_56_64::Flag_57", (int64)EPCGExBitmask8_56_64::Flag_57 },
		{ "EPCGExBitmask8_56_64::Flag_58", (int64)EPCGExBitmask8_56_64::Flag_58 },
		{ "EPCGExBitmask8_56_64::Flag_59", (int64)EPCGExBitmask8_56_64::Flag_59 },
		{ "EPCGExBitmask8_56_64::Flag_60", (int64)EPCGExBitmask8_56_64::Flag_60 },
		{ "EPCGExBitmask8_56_64::Flag_61", (int64)EPCGExBitmask8_56_64::Flag_61 },
		{ "EPCGExBitmask8_56_64::Flag_62", (int64)EPCGExBitmask8_56_64::Flag_62 },
		{ "EPCGExBitmask8_56_64::Flag_63", (int64)EPCGExBitmask8_56_64::Flag_63 },
		{ "EPCGExBitmask8_56_64::Flag_64", (int64)EPCGExBitmask8_56_64::Flag_64 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBitmask8_56_64",
	"EPCGExBitmask8_56_64",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64()
{
	if (!Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmask8_56_64_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBitmask8_56_64.InnerSingleton;
}
// ********** End Enum EPCGExBitmask8_56_64 ********************************************************

// ********** Begin ScriptStruct FClampedBit *******************************************************
struct Z_Construct_UScriptStruct_FClampedBit_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FClampedBit); }
	static inline consteval int16 GetStructAlignment() { return alignof(FClampedBit); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "63" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FClampedBit constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitIndex;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FClampedBit constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClampedBit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FClampedBit_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClampedBit;
class UScriptStruct* FClampedBit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClampedBit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClampedBit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClampedBit, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("ClampedBit"));
	}
	return Z_Registration_Info_UScriptStruct_FClampedBit.OuterSingleton;
	}

// ********** Begin ScriptStruct FClampedBit Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_BitIndex = { "BitIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClampedBit, BitIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitIndex_MetaData), NewProp_BitIndex_MetaData) };
void Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((FClampedBit*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClampedBit), &Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValue_MetaData), NewProp_bValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClampedBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_BitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBit_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBit_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FClampedBit Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClampedBit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"ClampedBit",
	Z_Construct_UScriptStruct_FClampedBit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBit_Statics::PropPointers),
	sizeof(FClampedBit),
	alignof(FClampedBit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClampedBit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClampedBit()
{
	if (!Z_Registration_Info_UScriptStruct_FClampedBit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClampedBit.InnerSingleton, Z_Construct_UScriptStruct_FClampedBit_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FClampedBit.InnerSingleton);
}
// ********** End ScriptStruct FClampedBit *********************************************************

// ********** Begin ScriptStruct FClampedBitOp *****************************************************
struct Z_Construct_UScriptStruct_FClampedBitOp_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FClampedBitOp); }
	static inline consteval int16 GetStructAlignment() { return alignof(FClampedBitOp); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "63" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FClampedBitOp constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Op_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Op;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FClampedBitOp constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClampedBitOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FClampedBitOp_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClampedBitOp;
class UScriptStruct* FClampedBitOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClampedBitOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClampedBitOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClampedBitOp, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("ClampedBitOp"));
	}
	return Z_Registration_Info_UScriptStruct_FClampedBitOp.OuterSingleton;
	}

// ********** Begin ScriptStruct FClampedBitOp Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_BitIndex = { "BitIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClampedBitOp, BitIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitIndex_MetaData), NewProp_BitIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClampedBitOp, Op), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Op_MetaData), NewProp_Op_MetaData) }; // 1700527728
void Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((FClampedBitOp*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClampedBitOp), &Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValue_MetaData), NewProp_bValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClampedBitOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_BitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_Op_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_Op,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBitOp_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FClampedBitOp Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClampedBitOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"ClampedBitOp",
	Z_Construct_UScriptStruct_FClampedBitOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBitOp_Statics::PropPointers),
	sizeof(FClampedBitOp),
	alignof(FClampedBitOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClampedBitOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClampedBitOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClampedBitOp()
{
	if (!Z_Registration_Info_UScriptStruct_FClampedBitOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClampedBitOp.InnerSingleton, Z_Construct_UScriptStruct_FClampedBitOp_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FClampedBitOp.InnerSingleton);
}
// ********** End ScriptStruct FClampedBitOp *******************************************************

// ********** Begin ScriptStruct FPCGExBitmask *****************************************************
struct Z_Construct_UScriptStruct_FPCGExBitmask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBitmask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBitmask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bitmask_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Direct" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bits_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "TitleProperty", "Bit # {BitIndex} = {bValue}" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_00_08_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_00_08" },
		{ "Category", "Settings" },
		{ "DisplayName", "0-8 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_08_16_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_08_16" },
		{ "Category", "Settings" },
		{ "DisplayName", "8-16 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_16_24_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_16_24" },
		{ "Category", "Settings" },
		{ "DisplayName", "16-24 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_24_32_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_24_32" },
		{ "Category", "Settings" },
		{ "DisplayName", "24-32 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_32_40_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_32_40" },
		{ "Category", "Settings" },
		{ "DisplayName", "32-40 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_40_48_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_40_48" },
		{ "Category", "Settings" },
		{ "DisplayName", "40-48 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_48_56_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_48_56" },
		{ "Category", "Settings" },
		{ "DisplayName", "48-56 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_56_64_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_56_64" },
		{ "Category", "Settings" },
		{ "DisplayName", "56-64 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBitmask constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Bitmask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bits;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_00_08;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_08_16;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_16_24;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_24_32;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_32_40;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_40_48;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_48_56;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_56_64;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBitmask constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBitmask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBitmask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBitmask;
class UScriptStruct* FPCGExBitmask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBitmask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBitmask, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBitmask"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBitmask.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBitmask Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1990309572
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bitmask = { "Bitmask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Bitmask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bitmask_MetaData), NewProp_Bitmask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bits_Inner = { "Bits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClampedBit, METADATA_PARAMS(0, nullptr) }; // 3705611695
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Bits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bits_MetaData), NewProp_Bits_MetaData) }; // 3705611695
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_00_08 = { "Range_00_08", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_00_08), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_00_08_MetaData), NewProp_Range_00_08_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_08_16 = { "Range_08_16", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_08_16), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_08_16_MetaData), NewProp_Range_08_16_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_16_24 = { "Range_16_24", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_16_24), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_16_24_MetaData), NewProp_Range_16_24_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_24_32 = { "Range_24_32", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_24_32), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_24_32_MetaData), NewProp_Range_24_32_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_32_40 = { "Range_32_40", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_32_40), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_32_40_MetaData), NewProp_Range_32_40_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_40_48 = { "Range_40_48", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_40_48), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_40_48_MetaData), NewProp_Range_40_48_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_48_56 = { "Range_48_56", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_48_56), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_48_56_MetaData), NewProp_Range_48_56_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_56_64 = { "Range_56_64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmask, Range_56_64), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_56_64_MetaData), NewProp_Range_56_64_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBitmask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Bits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_00_08,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_08_16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_16_24,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_24_32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_32_40,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_40_48,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_48_56,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewProp_Range_56_64,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBitmask Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBitmask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBitmask",
	Z_Construct_UScriptStruct_FPCGExBitmask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmask_Statics::PropPointers),
	sizeof(FPCGExBitmask),
	alignof(FPCGExBitmask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBitmask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmask()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBitmask.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBitmask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBitmask.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBitmask *******************************************************

// ********** Begin ScriptStruct FPCGExBitmaskWithOperation ****************************************
struct Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBitmaskWithOperation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBitmaskWithOperation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bitmask_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Direct" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bits_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
		{ "TitleProperty", "Bit # {BitIndex} = {bValue}" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode != EPCGExBitmaskMode::Individual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_00_08_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_00_08" },
		{ "Category", "Settings" },
		{ "DisplayName", "0-8 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_08_16_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_08_16" },
		{ "Category", "Settings" },
		{ "DisplayName", "8-16 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_16_24_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_16_24" },
		{ "Category", "Settings" },
		{ "DisplayName", "16-24 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_24_32_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_24_32" },
		{ "Category", "Settings" },
		{ "DisplayName", "24-32 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_32_40_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_32_40" },
		{ "Category", "Settings" },
		{ "DisplayName", "32-40 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_40_48_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_40_48" },
		{ "Category", "Settings" },
		{ "DisplayName", "40-48 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_48_56_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_48_56" },
		{ "Category", "Settings" },
		{ "DisplayName", "48-56 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_56_64_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitmask8_56_64" },
		{ "Category", "Settings" },
		{ "DisplayName", "56-64 Bits" },
		{ "EditCondition", "Mode == EPCGExBitmaskMode::Composite" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGExCompare.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBitmaskWithOperation constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Bitmask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bits;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Op_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Op;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_00_08;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_08_16;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_16_24;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_24_32;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_32_40;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_40_48;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_48_56;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_56_64;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBitmaskWithOperation constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBitmaskWithOperation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation;
class UScriptStruct* FPCGExBitmaskWithOperation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBitmaskWithOperation"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBitmaskWithOperation Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitmaskMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1990309572
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bitmask = { "Bitmask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Bitmask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bitmask_MetaData), NewProp_Bitmask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bits_Inner = { "Bits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClampedBitOp, METADATA_PARAMS(0, nullptr) }; // 859479271
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Bits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bits_MetaData), NewProp_Bits_MetaData) }; // 859479271
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Op), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Op_MetaData), NewProp_Op_MetaData) }; // 1700527728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_00_08 = { "Range_00_08", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_00_08), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_00_08_MetaData), NewProp_Range_00_08_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_08_16 = { "Range_08_16", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_08_16), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_08_16_MetaData), NewProp_Range_08_16_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_16_24 = { "Range_16_24", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_16_24), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_16_24_MetaData), NewProp_Range_16_24_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_24_32 = { "Range_24_32", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_24_32), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_24_32_MetaData), NewProp_Range_24_32_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_32_40 = { "Range_32_40", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_32_40), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_32_40_MetaData), NewProp_Range_32_40_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_40_48 = { "Range_40_48", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_40_48), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_40_48_MetaData), NewProp_Range_40_48_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_48_56 = { "Range_48_56", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_48_56), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_48_56_MetaData), NewProp_Range_48_56_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_56_64 = { "Range_56_64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskWithOperation, Range_56_64), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_56_64_MetaData), NewProp_Range_56_64_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Bits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Op_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Op,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_00_08,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_08_16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_16_24,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_24_32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_32_40,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_40_48,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_48_56,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewProp_Range_56_64,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBitmaskWithOperation Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBitmaskWithOperation",
	Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::PropPointers),
	sizeof(FPCGExBitmaskWithOperation),
	alignof(FPCGExBitmaskWithOperation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBitmaskWithOperation ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExIndexMode_StaticEnum, TEXT("EPCGExIndexMode"), &Z_Registration_Info_UEnum_EPCGExIndexMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2236136904U) },
		{ EPCGExAngularDomain_StaticEnum, TEXT("EPCGExAngularDomain"), &Z_Registration_Info_UEnum_EPCGExAngularDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3172692362U) },
		{ EPCGExComparison_StaticEnum, TEXT("EPCGExComparison"), &Z_Registration_Info_UEnum_EPCGExComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 703604353U) },
		{ EPCGExEquality_StaticEnum, TEXT("EPCGExEquality"), &Z_Registration_Info_UEnum_EPCGExEquality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1157776951U) },
		{ EPCGExStringComparison_StaticEnum, TEXT("EPCGExStringComparison"), &Z_Registration_Info_UEnum_EPCGExStringComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4028780742U) },
		{ EPCGExStringMatchMode_StaticEnum, TEXT("EPCGExStringMatchMode"), &Z_Registration_Info_UEnum_EPCGExStringMatchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2911749281U) },
		{ EPCGExBitflagComparison_StaticEnum, TEXT("EPCGExBitflagComparison"), &Z_Registration_Info_UEnum_EPCGExBitflagComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3612544535U) },
		{ EPCGExComparisonDataType_StaticEnum, TEXT("EPCGExComparisonDataType"), &Z_Registration_Info_UEnum_EPCGExComparisonDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1949993194U) },
		{ EPCGExDirectionCheckMode_StaticEnum, TEXT("EPCGExDirectionCheckMode"), &Z_Registration_Info_UEnum_EPCGExDirectionCheckMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3501249217U) },
		{ EPCGExBitOp_StaticEnum, TEXT("EPCGExBitOp"), &Z_Registration_Info_UEnum_EPCGExBitOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1700527728U) },
		{ EPCGExBitmaskMode_StaticEnum, TEXT("EPCGExBitmaskMode"), &Z_Registration_Info_UEnum_EPCGExBitmaskMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1990309572U) },
		{ EPCGExBitmask8_00_08_StaticEnum, TEXT("EPCGExBitmask8_00_08"), &Z_Registration_Info_UEnum_EPCGExBitmask8_00_08, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 549995915U) },
		{ EPCGExBitmask8_08_16_StaticEnum, TEXT("EPCGExBitmask8_08_16"), &Z_Registration_Info_UEnum_EPCGExBitmask8_08_16, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3395666786U) },
		{ EPCGExBitmask8_16_24_StaticEnum, TEXT("EPCGExBitmask8_16_24"), &Z_Registration_Info_UEnum_EPCGExBitmask8_16_24, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3185138279U) },
		{ EPCGExBitmask8_24_32_StaticEnum, TEXT("EPCGExBitmask8_24_32"), &Z_Registration_Info_UEnum_EPCGExBitmask8_24_32, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4166860438U) },
		{ EPCGExBitmask8_32_40_StaticEnum, TEXT("EPCGExBitmask8_32_40"), &Z_Registration_Info_UEnum_EPCGExBitmask8_32_40, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3403924922U) },
		{ EPCGExBitmask8_40_48_StaticEnum, TEXT("EPCGExBitmask8_40_48"), &Z_Registration_Info_UEnum_EPCGExBitmask8_40_48, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3291875947U) },
		{ EPCGExBitmask8_48_56_StaticEnum, TEXT("EPCGExBitmask8_48_56"), &Z_Registration_Info_UEnum_EPCGExBitmask8_48_56, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191137056U) },
		{ EPCGExBitmask8_56_64_StaticEnum, TEXT("EPCGExBitmask8_56_64"), &Z_Registration_Info_UEnum_EPCGExBitmask8_56_64, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 117027620U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExVectorHashComparisonDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics::NewStructOps, TEXT("PCGExVectorHashComparisonDetails"),&Z_Registration_Info_UScriptStruct_FPCGExVectorHashComparisonDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExVectorHashComparisonDetails), 1421576008U) },
		{ FPCGExStaticDotComparisonDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics::NewStructOps, TEXT("PCGExStaticDotComparisonDetails"),&Z_Registration_Info_UScriptStruct_FPCGExStaticDotComparisonDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExStaticDotComparisonDetails), 151317088U) },
		{ FPCGExDotComparisonDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics::NewStructOps, TEXT("PCGExDotComparisonDetails"),&Z_Registration_Info_UScriptStruct_FPCGExDotComparisonDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDotComparisonDetails), 1550145757U) },
		{ FClampedBit::StaticStruct, Z_Construct_UScriptStruct_FClampedBit_Statics::NewStructOps, TEXT("ClampedBit"),&Z_Registration_Info_UScriptStruct_FClampedBit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClampedBit), 3705611695U) },
		{ FClampedBitOp::StaticStruct, Z_Construct_UScriptStruct_FClampedBitOp_Statics::NewStructOps, TEXT("ClampedBitOp"),&Z_Registration_Info_UScriptStruct_FClampedBitOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClampedBitOp), 859479271U) },
		{ FPCGExBitmask::StaticStruct, Z_Construct_UScriptStruct_FPCGExBitmask_Statics::NewStructOps, TEXT("PCGExBitmask"),&Z_Registration_Info_UScriptStruct_FPCGExBitmask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBitmask), 3310865356U) },
		{ FPCGExBitmaskWithOperation::StaticStruct, Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics::NewStructOps, TEXT("PCGExBitmaskWithOperation"),&Z_Registration_Info_UScriptStruct_FPCGExBitmaskWithOperation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBitmaskWithOperation), 1333450829U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_1189078134{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
