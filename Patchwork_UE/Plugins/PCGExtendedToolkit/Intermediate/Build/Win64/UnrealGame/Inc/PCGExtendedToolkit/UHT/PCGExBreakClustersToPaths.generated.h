// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExBreakClustersToPaths.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBreakClustersToPaths_generated_h
#error "PCGExBreakClustersToPaths.generated.h already included, missing '#pragma once' in PCGExBreakClustersToPaths.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBreakClustersToPaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBreakClustersToPathsSettings ***************************************
struct Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBreakClustersToPathsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBreakClustersToPathsSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBreakClustersToPathsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBreakClustersToPathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBreakClustersToPathsSettings(UPCGExBreakClustersToPathsSettings&&) = delete; \
	UPCGExBreakClustersToPathsSettings(const UPCGExBreakClustersToPathsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBreakClustersToPathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBreakClustersToPathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBreakClustersToPathsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBreakClustersToPathsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_28_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_31_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBreakClustersToPathsSettings;

// ********** End Class UPCGExBreakClustersToPathsSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h

// ********** Begin Enum EPCGExBreakClusterOperationTarget *****************************************
#define FOREACH_ENUM_EPCGEXBREAKCLUSTEROPERATIONTARGET(op) \
	op(EPCGExBreakClusterOperationTarget::Paths) \
	op(EPCGExBreakClusterOperationTarget::Edges) 

enum class EPCGExBreakClusterOperationTarget : uint8;
template<> struct TIsUEnumClass<EPCGExBreakClusterOperationTarget> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBreakClusterOperationTarget>();
// ********** End Enum EPCGExBreakClusterOperationTarget *******************************************

// ********** Begin Enum EPCGExBreakClusterLeavesHandling ******************************************
#define FOREACH_ENUM_EPCGEXBREAKCLUSTERLEAVESHANDLING(op) \
	op(EPCGExBreakClusterLeavesHandling::Include) \
	op(EPCGExBreakClusterLeavesHandling::Exclude) \
	op(EPCGExBreakClusterLeavesHandling::Only) 

enum class EPCGExBreakClusterLeavesHandling : uint8;
template<> struct TIsUEnumClass<EPCGExBreakClusterLeavesHandling> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBreakClusterLeavesHandling>();
// ********** End Enum EPCGExBreakClusterLeavesHandling ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
