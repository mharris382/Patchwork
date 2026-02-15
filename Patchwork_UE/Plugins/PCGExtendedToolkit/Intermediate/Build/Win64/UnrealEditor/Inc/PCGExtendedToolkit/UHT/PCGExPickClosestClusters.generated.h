// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExPickClosestClusters.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPickClosestClusters_generated_h
#error "PCGExPickClosestClusters.generated.h already included, missing '#pragma once' in PCGExPickClosestClusters.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPickClosestClusters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExPickClosestClustersSettings ****************************************
struct Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickClosestClustersSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPickClosestClustersSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPickClosestClustersSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPickClosestClustersSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPickClosestClustersSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPickClosestClustersSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExPickClosestClustersSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPickClosestClustersSettings(UPCGExPickClosestClustersSettings&&) = delete; \
	UPCGExPickClosestClustersSettings(const UPCGExPickClosestClustersSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPickClosestClustersSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPickClosestClustersSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPickClosestClustersSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPickClosestClustersSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_20_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPickClosestClustersSettings;

// ********** End Class UPCGExPickClosestClustersSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h

// ********** Begin Enum EPCGExClusterClosestPickMode **********************************************
#define FOREACH_ENUM_EPCGEXCLUSTERCLOSESTPICKMODE(op) \
	op(EPCGExClusterClosestPickMode::OnlyBest) \
	op(EPCGExClusterClosestPickMode::NextBest) 

enum class EPCGExClusterClosestPickMode : uint8;
template<> struct TIsUEnumClass<EPCGExClusterClosestPickMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterClosestPickMode>();
// ********** End Enum EPCGExClusterClosestPickMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
