// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExWriteGUID.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExWriteGUID_generated_h
#error "PCGExWriteGUID.generated.h already included, missing '#pragma once' in PCGExWriteGUID.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExWriteGUID_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExGUIDDetails *************************************************
struct Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExGUIDDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExGUIDDetails;
// ********** End ScriptStruct FPCGExGUIDDetails ***************************************************

// ********** Begin Class UPCGExWriteGUIDSettings **************************************************
struct Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteGUIDSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExWriteGUIDSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExWriteGUIDSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExWriteGUIDSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExWriteGUIDSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExWriteGUIDSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExWriteGUIDSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExWriteGUIDSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExWriteGUIDSettings(UPCGExWriteGUIDSettings&&) = delete; \
	UPCGExWriteGUIDSettings(const UPCGExWriteGUIDSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExWriteGUIDSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExWriteGUIDSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExWriteGUIDSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExWriteGUIDSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_125_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_128_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExWriteGUIDSettings;

// ********** End Class UPCGExWriteGUIDSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExWriteGUID_h

// ********** Begin Enum EPCGExGUIDUniquenessFlags *************************************************
#define FOREACH_ENUM_EPCGEXGUIDUNIQUENESSFLAGS(op) \
	op(EPCGExGUIDUniquenessFlags::None) \
	op(EPCGExGUIDUniquenessFlags::Index) \
	op(EPCGExGUIDUniquenessFlags::Position) \
	op(EPCGExGUIDUniquenessFlags::Seed) \
	op(EPCGExGUIDUniquenessFlags::Grid) \
	op(EPCGExGUIDUniquenessFlags::All) 

enum class EPCGExGUIDUniquenessFlags : uint8;
template<> struct TIsUEnumClass<EPCGExGUIDUniquenessFlags> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDUniquenessFlags>();
// ********** End Enum EPCGExGUIDUniquenessFlags ***************************************************

// ********** Begin Enum EPCGExGUIDOutputType ******************************************************
#define FOREACH_ENUM_EPCGEXGUIDOUTPUTTYPE(op) \
	op(EPCGExGUIDOutputType::Integer) \
	op(EPCGExGUIDOutputType::String) 

enum class EPCGExGUIDOutputType : uint8;
template<> struct TIsUEnumClass<EPCGExGUIDOutputType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDOutputType>();
// ********** End Enum EPCGExGUIDOutputType ********************************************************

// ********** Begin Enum EPCGExGUIDFormat **********************************************************
#define FOREACH_ENUM_EPCGEXGUIDFORMAT(op) \
	op(EPCGExGUIDFormat::Digits) \
	op(EPCGExGUIDFormat::DigitsLower) \
	op(EPCGExGUIDFormat::DigitsWithHyphens) \
	op(EPCGExGUIDFormat::DigitsWithHyphensLower) \
	op(EPCGExGUIDFormat::DigitsWithHyphensInBraces) \
	op(EPCGExGUIDFormat::DigitsWithHyphensInParentheses) \
	op(EPCGExGUIDFormat::HexValuesInBraces) \
	op(EPCGExGUIDFormat::UniqueObjectGuid) \
	op(EPCGExGUIDFormat::Short) \
	op(EPCGExGUIDFormat::Base36Encoded) 

enum class EPCGExGUIDFormat : uint8;
template<> struct TIsUEnumClass<EPCGExGUIDFormat> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGUIDFormat>();
// ********** End Enum EPCGExGUIDFormat ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
