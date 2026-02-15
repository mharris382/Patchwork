// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Topology/PCGExTopologyEdgesProcessor.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTopologyEdgesProcessor_generated_h
#error "PCGExTopologyEdgesProcessor.generated.h already included, missing '#pragma once' in PCGExTopologyEdgesProcessor.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTopologyEdgesProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExTopologyEdgesProcessorSettings *************************************
struct Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTopologyEdgesProcessorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTopologyEdgesProcessorSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTopologyEdgesProcessorSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTopologyEdgesProcessorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTopologyEdgesProcessorSettings(UPCGExTopologyEdgesProcessorSettings&&) = delete; \
	UPCGExTopologyEdgesProcessorSettings(const UPCGExTopologyEdgesProcessorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTopologyEdgesProcessorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTopologyEdgesProcessorSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTopologyEdgesProcessorSettings) \
	NO_API virtual ~UPCGExTopologyEdgesProcessorSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_29_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_32_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTopologyEdgesProcessorSettings;

// ********** End Class UPCGExTopologyEdgesProcessorSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h

// ********** Begin Enum EPCGExTopologyOutputMode **************************************************
#define FOREACH_ENUM_EPCGEXTOPOLOGYOUTPUTMODE(op) \
	op(EPCGExTopologyOutputMode::Legacy) \
	op(EPCGExTopologyOutputMode::PCGDynamicMesh) 

enum class EPCGExTopologyOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExTopologyOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTopologyOutputMode>();
// ********** End Enum EPCGExTopologyOutputMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
