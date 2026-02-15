// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Topology/PCGExToggleTopology.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExToggleTopology_generated_h
#error "PCGExToggleTopology.generated.h already included, missing '#pragma once' in PCGExToggleTopology.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExToggleTopology_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExToggleTopologySettings *********************************************
struct Z_Construct_UClass_UPCGExToggleTopologySettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExToggleTopologySettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExToggleTopologySettings(); \
	friend struct ::Z_Construct_UClass_UPCGExToggleTopologySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExToggleTopologySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExToggleTopologySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExToggleTopologySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExToggleTopologySettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExToggleTopologySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExToggleTopologySettings(UPCGExToggleTopologySettings&&) = delete; \
	UPCGExToggleTopologySettings(const UPCGExToggleTopologySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExToggleTopologySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExToggleTopologySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExToggleTopologySettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExToggleTopologySettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_18_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExToggleTopologySettings;

// ********** End Class UPCGExToggleTopologySettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h

// ********** Begin Enum EPCGExToggleTopologyAction ************************************************
#define FOREACH_ENUM_EPCGEXTOGGLETOPOLOGYACTION(op) \
	op(EPCGExToggleTopologyAction::Toggle) \
	op(EPCGExToggleTopologyAction::Remove) 

enum class EPCGExToggleTopologyAction : uint8;
template<> struct TIsUEnumClass<EPCGExToggleTopologyAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExToggleTopologyAction>();
// ********** End Enum EPCGExToggleTopologyAction **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
