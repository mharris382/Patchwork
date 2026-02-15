// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExSubSystem.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSubSystem_generated_h
#error "PCGExSubSystem.generated.h already included, missing '#pragma once' in PCGExSubSystem.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSubSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGComponent;
enum class EPCGExSubsystemEventType : uint8;

// ********** Begin Delegate FOnGlobalEvent ********************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_32_DELEGATE \
PCGEXTENDEDTOOLKIT_API void FOnGlobalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalEvent, UPCGComponent* Source, EPCGExSubsystemEventType EventType, uint32 EventId);


// ********** End Delegate FOnGlobalEvent **********************************************************

// ********** Begin Class UPCGExSubSystem **********************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlushBeacons);


struct Z_Construct_UClass_UPCGExSubSystem_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubSystem_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSubSystem(); \
	friend struct ::Z_Construct_UClass_UPCGExSubSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSubSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSubSystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSubSystem_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSubSystem)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSubSystem(UPCGExSubSystem&&) = delete; \
	UPCGExSubSystem(const UPCGExSubSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGExSubSystem) \
	NO_API virtual ~UPCGExSubSystem();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_56_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSubSystem;

// ********** End Class UPCGExSubSystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h

// ********** Begin Enum EPCGExSubsystemEventType **************************************************
#define FOREACH_ENUM_EPCGEXSUBSYSTEMEVENTTYPE(op) \
	op(EPCGExSubsystemEventType::None) \
	op(EPCGExSubsystemEventType::Regenerate) \
	op(EPCGExSubsystemEventType::DataUpdate) 

enum class EPCGExSubsystemEventType : uint8;
template<> struct TIsUEnumClass<EPCGExSubsystemEventType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubsystemEventType>();
// ********** End Enum EPCGExSubsystemEventType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
