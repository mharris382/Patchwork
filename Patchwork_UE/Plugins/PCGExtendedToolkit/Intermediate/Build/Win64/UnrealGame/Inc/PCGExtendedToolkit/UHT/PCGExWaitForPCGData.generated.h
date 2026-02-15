// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/PCGExWaitForPCGData.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExWaitForPCGData_generated_h
#error "PCGExWaitForPCGData.generated.h already included, missing '#pragma once' in PCGExWaitForPCGData.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExWaitForPCGData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExWaitForPCGDataSettings *********************************************
#if WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execEDITOR_RefreshPins);
#else // WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWaitForPCGDataSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExWaitForPCGDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExWaitForPCGDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExWaitForPCGDataSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExWaitForPCGDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExWaitForPCGDataSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExWaitForPCGDataSettings(UPCGExWaitForPCGDataSettings&&) = delete; \
	UPCGExWaitForPCGDataSettings(const UPCGExWaitForPCGDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExWaitForPCGDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExWaitForPCGDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExWaitForPCGDataSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExWaitForPCGDataSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_32_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExWaitForPCGDataSettings;

// ********** End Class UPCGExWaitForPCGDataSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h

// ********** Begin Enum EPCGExGenerationTriggerAction *********************************************
#define FOREACH_ENUM_EPCGEXGENERATIONTRIGGERACTION(op) \
	op(EPCGExGenerationTriggerAction::Ignore) \
	op(EPCGExGenerationTriggerAction::AsIs) \
	op(EPCGExGenerationTriggerAction::Generate) \
	op(EPCGExGenerationTriggerAction::ForceGenerate) 

enum class EPCGExGenerationTriggerAction : uint8;
template<> struct TIsUEnumClass<EPCGExGenerationTriggerAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGenerationTriggerAction>();
// ********** End Enum EPCGExGenerationTriggerAction ***********************************************

// ********** Begin Enum EPCGExRuntimeGenerationTriggerAction **************************************
#define FOREACH_ENUM_EPCGEXRUNTIMEGENERATIONTRIGGERACTION(op) \
	op(EPCGExRuntimeGenerationTriggerAction::Ignore) \
	op(EPCGExRuntimeGenerationTriggerAction::AsIs) \
	op(EPCGExRuntimeGenerationTriggerAction::RefreshFirst) 

enum class EPCGExRuntimeGenerationTriggerAction : uint8;
template<> struct TIsUEnumClass<EPCGExRuntimeGenerationTriggerAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRuntimeGenerationTriggerAction>();
// ********** End Enum EPCGExRuntimeGenerationTriggerAction ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
