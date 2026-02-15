// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExGlobalSettings.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGlobalSettings_generated_h
#error "PCGExGlobalSettings.generated.h already included, missing '#pragma once' in PCGExGlobalSettings.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGlobalSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExGlobalSettings *****************************************************
struct Z_Construct_UClass_UPCGExGlobalSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGlobalSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExGlobalSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExGlobalSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExGlobalSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExGlobalSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExGlobalSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExGlobalSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExGlobalSettings(UPCGExGlobalSettings&&) = delete; \
	UPCGExGlobalSettings(const UPCGExGlobalSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExGlobalSettings) \
	NO_API virtual ~UPCGExGlobalSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_57_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExGlobalSettings;

// ********** End Class UPCGExGlobalSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h

// ********** Begin Enum EPCGExDataBlendingTypeDefault *********************************************
#define FOREACH_ENUM_EPCGEXDATABLENDINGTYPEDEFAULT(op) \
	op(EPCGExDataBlendingTypeDefault::Default) \
	op(EPCGExDataBlendingTypeDefault::None) \
	op(EPCGExDataBlendingTypeDefault::Average) \
	op(EPCGExDataBlendingTypeDefault::Weight) \
	op(EPCGExDataBlendingTypeDefault::Min) \
	op(EPCGExDataBlendingTypeDefault::Max) \
	op(EPCGExDataBlendingTypeDefault::Copy) \
	op(EPCGExDataBlendingTypeDefault::Sum) \
	op(EPCGExDataBlendingTypeDefault::WeightedSum) \
	op(EPCGExDataBlendingTypeDefault::Lerp) \
	op(EPCGExDataBlendingTypeDefault::Subtract) \
	op(EPCGExDataBlendingTypeDefault::UnsignedMin) \
	op(EPCGExDataBlendingTypeDefault::UnsignedMax) \
	op(EPCGExDataBlendingTypeDefault::AbsoluteMin) \
	op(EPCGExDataBlendingTypeDefault::AbsoluteMax) \
	op(EPCGExDataBlendingTypeDefault::WeightedSubtract) \
	op(EPCGExDataBlendingTypeDefault::CopyOther) \
	op(EPCGExDataBlendingTypeDefault::Hash) \
	op(EPCGExDataBlendingTypeDefault::UnsignedHash) 

enum class EPCGExDataBlendingTypeDefault : uint8;
template<> struct TIsUEnumClass<EPCGExDataBlendingTypeDefault> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataBlendingTypeDefault>();
// ********** End Enum EPCGExDataBlendingTypeDefault ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
