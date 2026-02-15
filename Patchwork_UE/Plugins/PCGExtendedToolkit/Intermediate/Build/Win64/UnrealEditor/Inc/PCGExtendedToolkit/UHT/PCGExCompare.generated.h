// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExCompare.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCompare_generated_h
#error "PCGExCompare.generated.h already included, missing '#pragma once' in PCGExCompare.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCompare_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExVectorHashComparisonDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_423_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExVectorHashComparisonDetails;
// ********** End ScriptStruct FPCGExVectorHashComparisonDetails ***********************************

// ********** Begin ScriptStruct FPCGExStaticDotComparisonDetails **********************************
struct Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_465_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExStaticDotComparisonDetails;
// ********** End ScriptStruct FPCGExStaticDotComparisonDetails ************************************

// ********** Begin ScriptStruct FPCGExDotComparisonDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_512_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDotComparisonDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExDotComparisonDetails;
// ********** End ScriptStruct FPCGExDotComparisonDetails ******************************************

// ********** Begin ScriptStruct FClampedBit *******************************************************
struct Z_Construct_UScriptStruct_FClampedBit_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_736_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClampedBit_Statics; \
	static class UScriptStruct* StaticStruct();


struct FClampedBit;
// ********** End ScriptStruct FClampedBit *********************************************************

// ********** Begin ScriptStruct FClampedBitOp *****************************************************
struct Z_Construct_UScriptStruct_FClampedBitOp_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_757_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClampedBitOp_Statics; \
	static class UScriptStruct* StaticStruct();


struct FClampedBitOp;
// ********** End ScriptStruct FClampedBitOp *******************************************************

// ********** Begin ScriptStruct FPCGExBitmask *****************************************************
struct Z_Construct_UScriptStruct_FPCGExBitmask_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_781_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExBitmask_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExBitmask;
// ********** End ScriptStruct FPCGExBitmask *******************************************************

// ********** Begin ScriptStruct FPCGExBitmaskWithOperation ****************************************
struct Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h_827_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExBitmaskWithOperation_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExBitmaskWithOperation;
// ********** End ScriptStruct FPCGExBitmaskWithOperation ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCompare_h

// ********** Begin Enum EPCGExIndexMode ***********************************************************
#define FOREACH_ENUM_EPCGEXINDEXMODE(op) \
	op(EPCGExIndexMode::Pick) \
	op(EPCGExIndexMode::Offset) 

enum class EPCGExIndexMode : uint8;
template<> struct TIsUEnumClass<EPCGExIndexMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIndexMode>();
// ********** End Enum EPCGExIndexMode *************************************************************

// ********** Begin Enum EPCGExAngularDomain *******************************************************
#define FOREACH_ENUM_EPCGEXANGULARDOMAIN(op) \
	op(EPCGExAngularDomain::Scalar) \
	op(EPCGExAngularDomain::Degrees) 

enum class EPCGExAngularDomain : uint8;
template<> struct TIsUEnumClass<EPCGExAngularDomain> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAngularDomain>();
// ********** End Enum EPCGExAngularDomain *********************************************************

// ********** Begin Enum EPCGExComparison **********************************************************
#define FOREACH_ENUM_EPCGEXCOMPARISON(op) \
	op(EPCGExComparison::StrictlyEqual) \
	op(EPCGExComparison::StrictlyNotEqual) \
	op(EPCGExComparison::EqualOrGreater) \
	op(EPCGExComparison::EqualOrSmaller) \
	op(EPCGExComparison::StrictlyGreater) \
	op(EPCGExComparison::StrictlySmaller) \
	op(EPCGExComparison::NearlyEqual) \
	op(EPCGExComparison::NearlyNotEqual) 

enum class EPCGExComparison : uint8;
template<> struct TIsUEnumClass<EPCGExComparison> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExComparison>();
// ********** End Enum EPCGExComparison ************************************************************

// ********** Begin Enum EPCGExEquality ************************************************************
#define FOREACH_ENUM_EPCGEXEQUALITY(op) \
	op(EPCGExEquality::Equal) \
	op(EPCGExEquality::NotEqual) 

enum class EPCGExEquality : uint8;
template<> struct TIsUEnumClass<EPCGExEquality> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEquality>();
// ********** End Enum EPCGExEquality **************************************************************

// ********** Begin Enum EPCGExStringComparison ****************************************************
#define FOREACH_ENUM_EPCGEXSTRINGCOMPARISON(op) \
	op(EPCGExStringComparison::StrictlyEqual) \
	op(EPCGExStringComparison::StrictlyNotEqual) \
	op(EPCGExStringComparison::LengthStrictlyEqual) \
	op(EPCGExStringComparison::LengthStrictlyUnequal) \
	op(EPCGExStringComparison::LengthEqualOrGreater) \
	op(EPCGExStringComparison::LengthEqualOrSmaller) \
	op(EPCGExStringComparison::StrictlyGreater) \
	op(EPCGExStringComparison::StrictlySmaller) \
	op(EPCGExStringComparison::LocaleStrictlyGreater) \
	op(EPCGExStringComparison::LocaleStrictlySmaller) \
	op(EPCGExStringComparison::Contains) \
	op(EPCGExStringComparison::StartsWith) \
	op(EPCGExStringComparison::EndsWith) 

enum class EPCGExStringComparison : uint8;
template<> struct TIsUEnumClass<EPCGExStringComparison> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStringComparison>();
// ********** End Enum EPCGExStringComparison ******************************************************

// ********** Begin Enum EPCGExStringMatchMode *****************************************************
#define FOREACH_ENUM_EPCGEXSTRINGMATCHMODE(op) \
	op(EPCGExStringMatchMode::Equals) \
	op(EPCGExStringMatchMode::Contains) \
	op(EPCGExStringMatchMode::StartsWith) \
	op(EPCGExStringMatchMode::EndsWith) 

enum class EPCGExStringMatchMode : uint8;
template<> struct TIsUEnumClass<EPCGExStringMatchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStringMatchMode>();
// ********** End Enum EPCGExStringMatchMode *******************************************************

// ********** Begin Enum EPCGExBitflagComparison ***************************************************
#define FOREACH_ENUM_EPCGEXBITFLAGCOMPARISON(op) \
	op(EPCGExBitflagComparison::MatchPartial) \
	op(EPCGExBitflagComparison::MatchFull) \
	op(EPCGExBitflagComparison::MatchStrict) \
	op(EPCGExBitflagComparison::NoMatchPartial) \
	op(EPCGExBitflagComparison::NoMatchFull) 

enum class EPCGExBitflagComparison : uint8;
template<> struct TIsUEnumClass<EPCGExBitflagComparison> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitflagComparison>();
// ********** End Enum EPCGExBitflagComparison *****************************************************

// ********** Begin Enum EPCGExComparisonDataType **************************************************
#define FOREACH_ENUM_EPCGEXCOMPARISONDATATYPE(op) \
	op(EPCGExComparisonDataType::Numeric) \
	op(EPCGExComparisonDataType::String) 

enum class EPCGExComparisonDataType : uint8;
template<> struct TIsUEnumClass<EPCGExComparisonDataType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExComparisonDataType>();
// ********** End Enum EPCGExComparisonDataType ****************************************************

// ********** Begin Enum EPCGExDirectionCheckMode **************************************************
#define FOREACH_ENUM_EPCGEXDIRECTIONCHECKMODE(op) \
	op(EPCGExDirectionCheckMode::Dot) \
	op(EPCGExDirectionCheckMode::Hash) 

enum class EPCGExDirectionCheckMode : uint8;
template<> struct TIsUEnumClass<EPCGExDirectionCheckMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDirectionCheckMode>();
// ********** End Enum EPCGExDirectionCheckMode ****************************************************

// ********** Begin Enum EPCGExBitOp ***************************************************************
#define FOREACH_ENUM_EPCGEXBITOP(op) \
	op(EPCGExBitOp::Set) \
	op(EPCGExBitOp::AND) \
	op(EPCGExBitOp::OR) \
	op(EPCGExBitOp::NOT) \
	op(EPCGExBitOp::XOR) 

enum class EPCGExBitOp : uint8;
template<> struct TIsUEnumClass<EPCGExBitOp> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitOp>();
// ********** End Enum EPCGExBitOp *****************************************************************

// ********** Begin Enum EPCGExBitmaskMode *********************************************************
#define FOREACH_ENUM_EPCGEXBITMASKMODE(op) \
	op(EPCGExBitmaskMode::Direct) \
	op(EPCGExBitmaskMode::Individual) \
	op(EPCGExBitmaskMode::Composite) 

enum class EPCGExBitmaskMode : uint8;
template<> struct TIsUEnumClass<EPCGExBitmaskMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmaskMode>();
// ********** End Enum EPCGExBitmaskMode ***********************************************************

// ********** Begin Enum EPCGExBitmask8_00_08 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_00_08(op) \
	op(EPCGExBitmask8_00_08::None) \
	op(EPCGExBitmask8_00_08::Flag_1) \
	op(EPCGExBitmask8_00_08::Flag_2) \
	op(EPCGExBitmask8_00_08::Flag_3) \
	op(EPCGExBitmask8_00_08::Flag_4) \
	op(EPCGExBitmask8_00_08::Flag_5) \
	op(EPCGExBitmask8_00_08::Flag_6) \
	op(EPCGExBitmask8_00_08::Flag_7) \
	op(EPCGExBitmask8_00_08::Flag_8) 

enum class EPCGExBitmask8_00_08 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_00_08> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_00_08>();
// ********** End Enum EPCGExBitmask8_00_08 ********************************************************

// ********** Begin Enum EPCGExBitmask8_08_16 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_08_16(op) \
	op(EPCGExBitmask8_08_16::None) \
	op(EPCGExBitmask8_08_16::Flag_9) \
	op(EPCGExBitmask8_08_16::Flag_10) \
	op(EPCGExBitmask8_08_16::Flag_11) \
	op(EPCGExBitmask8_08_16::Flag_12) \
	op(EPCGExBitmask8_08_16::Flag_13) \
	op(EPCGExBitmask8_08_16::Flag_14) \
	op(EPCGExBitmask8_08_16::Flag_15) \
	op(EPCGExBitmask8_08_16::Flag_16) 

enum class EPCGExBitmask8_08_16 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_08_16> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_08_16>();
// ********** End Enum EPCGExBitmask8_08_16 ********************************************************

// ********** Begin Enum EPCGExBitmask8_16_24 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_16_24(op) \
	op(EPCGExBitmask8_16_24::None) \
	op(EPCGExBitmask8_16_24::Flag_17) \
	op(EPCGExBitmask8_16_24::Flag_18) \
	op(EPCGExBitmask8_16_24::Flag_19) \
	op(EPCGExBitmask8_16_24::Flag_20) \
	op(EPCGExBitmask8_16_24::Flag_21) \
	op(EPCGExBitmask8_16_24::Flag_22) \
	op(EPCGExBitmask8_16_24::Flag_23) \
	op(EPCGExBitmask8_16_24::Flag_24) 

enum class EPCGExBitmask8_16_24 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_16_24> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_16_24>();
// ********** End Enum EPCGExBitmask8_16_24 ********************************************************

// ********** Begin Enum EPCGExBitmask8_24_32 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_24_32(op) \
	op(EPCGExBitmask8_24_32::None) \
	op(EPCGExBitmask8_24_32::Flag_25) \
	op(EPCGExBitmask8_24_32::Flag_26) \
	op(EPCGExBitmask8_24_32::Flag_27) \
	op(EPCGExBitmask8_24_32::Flag_28) \
	op(EPCGExBitmask8_24_32::Flag_29) \
	op(EPCGExBitmask8_24_32::Flag_30) \
	op(EPCGExBitmask8_24_32::Flag_31) \
	op(EPCGExBitmask8_24_32::Flag_32) 

enum class EPCGExBitmask8_24_32 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_24_32> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_24_32>();
// ********** End Enum EPCGExBitmask8_24_32 ********************************************************

// ********** Begin Enum EPCGExBitmask8_32_40 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_32_40(op) \
	op(EPCGExBitmask8_32_40::None) \
	op(EPCGExBitmask8_32_40::Flag_33) \
	op(EPCGExBitmask8_32_40::Flag_34) \
	op(EPCGExBitmask8_32_40::Flag_35) \
	op(EPCGExBitmask8_32_40::Flag_36) \
	op(EPCGExBitmask8_32_40::Flag_37) \
	op(EPCGExBitmask8_32_40::Flag_38) \
	op(EPCGExBitmask8_32_40::Flag_39) \
	op(EPCGExBitmask8_32_40::Flag_40) 

enum class EPCGExBitmask8_32_40 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_32_40> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_32_40>();
// ********** End Enum EPCGExBitmask8_32_40 ********************************************************

// ********** Begin Enum EPCGExBitmask8_40_48 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_40_48(op) \
	op(EPCGExBitmask8_40_48::None) \
	op(EPCGExBitmask8_40_48::Flag_41) \
	op(EPCGExBitmask8_40_48::Flag_42) \
	op(EPCGExBitmask8_40_48::Flag_43) \
	op(EPCGExBitmask8_40_48::Flag_44) \
	op(EPCGExBitmask8_40_48::Flag_45) \
	op(EPCGExBitmask8_40_48::Flag_46) \
	op(EPCGExBitmask8_40_48::Flag_47) \
	op(EPCGExBitmask8_40_48::Flag_48) 

enum class EPCGExBitmask8_40_48 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_40_48> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_40_48>();
// ********** End Enum EPCGExBitmask8_40_48 ********************************************************

// ********** Begin Enum EPCGExBitmask8_48_56 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_48_56(op) \
	op(EPCGExBitmask8_48_56::None) \
	op(EPCGExBitmask8_48_56::Flag_49) \
	op(EPCGExBitmask8_48_56::Flag_50) \
	op(EPCGExBitmask8_48_56::Flag_51) \
	op(EPCGExBitmask8_48_56::Flag_52) \
	op(EPCGExBitmask8_48_56::Flag_53) \
	op(EPCGExBitmask8_48_56::Flag_54) \
	op(EPCGExBitmask8_48_56::Flag_55) \
	op(EPCGExBitmask8_48_56::Flag_56) 

enum class EPCGExBitmask8_48_56 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_48_56> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_48_56>();
// ********** End Enum EPCGExBitmask8_48_56 ********************************************************

// ********** Begin Enum EPCGExBitmask8_56_64 ******************************************************
#define FOREACH_ENUM_EPCGEXBITMASK8_56_64(op) \
	op(EPCGExBitmask8_56_64::None) \
	op(EPCGExBitmask8_56_64::Flag_57) \
	op(EPCGExBitmask8_56_64::Flag_58) \
	op(EPCGExBitmask8_56_64::Flag_59) \
	op(EPCGExBitmask8_56_64::Flag_60) \
	op(EPCGExBitmask8_56_64::Flag_61) \
	op(EPCGExBitmask8_56_64::Flag_62) \
	op(EPCGExBitmask8_56_64::Flag_63) \
	op(EPCGExBitmask8_56_64::Flag_64) 

enum class EPCGExBitmask8_56_64 : uint8;
template<> struct TIsUEnumClass<EPCGExBitmask8_56_64> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBitmask8_56_64>();
// ********** End Enum EPCGExBitmask8_56_64 ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
