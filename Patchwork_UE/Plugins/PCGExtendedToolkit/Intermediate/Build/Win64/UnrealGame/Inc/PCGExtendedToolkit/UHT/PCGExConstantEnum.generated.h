// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constants/PCGExConstantEnum.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExConstantEnum_generated_h
#error "PCGExConstantEnum.generated.h already included, missing '#pragma once' in PCGExConstantEnum.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExConstantEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExConstantEnumSettings ***********************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnumName);


struct Z_Construct_UClass_UPCGExConstantEnumSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantEnumSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExConstantEnumSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExConstantEnumSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExConstantEnumSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExConstantEnumSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExConstantEnumSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExConstantEnumSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExConstantEnumSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExConstantEnumSettings(UPCGExConstantEnumSettings&&) = delete; \
	UPCGExConstantEnumSettings(const UPCGExConstantEnumSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExConstantEnumSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExConstantEnumSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExConstantEnumSettings) \
	NO_API virtual ~UPCGExConstantEnumSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_51_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExConstantEnumSettings;

// ********** End Class UPCGExConstantEnumSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h

// ********** Begin Enum EPCGExEnumConstantSourceType **********************************************
#define FOREACH_ENUM_EPCGEXENUMCONSTANTSOURCETYPE(op) \
	op(EPCGExEnumConstantSourceType::Picker) \
	op(EPCGExEnumConstantSourceType::Selector) 

enum class EPCGExEnumConstantSourceType : uint8;
template<> struct TIsUEnumClass<EPCGExEnumConstantSourceType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumConstantSourceType>();
// ********** End Enum EPCGExEnumConstantSourceType ************************************************

// ********** Begin Enum EPCGExEnumConstantOutputType **********************************************
#define FOREACH_ENUM_EPCGEXENUMCONSTANTOUTPUTTYPE(op) \
	op(EPCGExEnumConstantOutputType::EECOT_Attribute) \
	op(EPCGExEnumConstantOutputType::EECOT_String) \
	op(EPCGExEnumConstantOutputType::EECOT_Tag) 

enum class EPCGExEnumConstantOutputType : uint8;
template<> struct TIsUEnumClass<EPCGExEnumConstantOutputType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumConstantOutputType>();
// ********** End Enum EPCGExEnumConstantOutputType ************************************************

// ********** Begin Enum EPCGExEnumOutputMode ******************************************************
#define FOREACH_ENUM_EPCGEXENUMOUTPUTMODE(op) \
	op(EPCGExEnumOutputMode::EEOM_Single) \
	op(EPCGExEnumOutputMode::EEOM_All) \
	op(EPCGExEnumOutputMode::EEOM_AllToMultiplePins) \
	op(EPCGExEnumOutputMode::EEOM_Selection) \
	op(EPCGExEnumOutputMode::EEOM_SelectionToMultiplePins) 

enum class EPCGExEnumOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExEnumOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumOutputMode>();
// ********** End Enum EPCGExEnumOutputMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
