// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/PCGExWriteEdgeProperties.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExWriteEdgeProperties_generated_h
#error "PCGExWriteEdgeProperties.generated.h already included, missing '#pragma once' in PCGExWriteEdgeProperties.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExWriteEdgeProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExWriteEdgePropertiesSettings ****************************************
struct Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExWriteEdgePropertiesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExWriteEdgePropertiesSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExWriteEdgePropertiesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExWriteEdgePropertiesSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExWriteEdgePropertiesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExWriteEdgePropertiesSettings(UPCGExWriteEdgePropertiesSettings&&) = delete; \
	UPCGExWriteEdgePropertiesSettings(const UPCGExWriteEdgePropertiesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExWriteEdgePropertiesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExWriteEdgePropertiesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExWriteEdgePropertiesSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExWriteEdgePropertiesSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_37_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_40_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExWriteEdgePropertiesSettings;

// ********** End Class UPCGExWriteEdgePropertiesSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteEdgeProperties_h

// ********** Begin Enum EPCGExHeuristicsWriteMode *************************************************
#define FOREACH_ENUM_EPCGEXHEURISTICSWRITEMODE(op) \
	op(EPCGExHeuristicsWriteMode::EndpointsOrder) \
	op(EPCGExHeuristicsWriteMode::Smallest) \
	op(EPCGExHeuristicsWriteMode::Highest) 

enum class EPCGExHeuristicsWriteMode : uint8;
template<> struct TIsUEnumClass<EPCGExHeuristicsWriteMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExHeuristicsWriteMode>();
// ********** End Enum EPCGExHeuristicsWriteMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
