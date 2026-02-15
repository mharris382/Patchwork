// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExConnectClusters.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExConnectClusters_generated_h
#error "PCGExConnectClusters.generated.h already included, missing '#pragma once' in PCGExConnectClusters.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExConnectClusters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExConnectClustersSettings ********************************************
struct Z_Construct_UClass_UPCGExConnectClustersSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConnectClustersSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExConnectClustersSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExConnectClustersSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExConnectClustersSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExConnectClustersSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExConnectClustersSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExConnectClustersSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExConnectClustersSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExConnectClustersSettings(UPCGExConnectClustersSettings&&) = delete; \
	UPCGExConnectClustersSettings(const UPCGExConnectClustersSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExConnectClustersSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExConnectClustersSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExConnectClustersSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExConnectClustersSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExConnectClustersSettings;

// ********** End Class UPCGExConnectClustersSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectClusters_h

// ********** Begin Enum EPCGExBridgeClusterMethod *************************************************
#define FOREACH_ENUM_EPCGEXBRIDGECLUSTERMETHOD(op) \
	op(EPCGExBridgeClusterMethod::Delaunay3D) \
	op(EPCGExBridgeClusterMethod::Delaunay2D) \
	op(EPCGExBridgeClusterMethod::LeastEdges) \
	op(EPCGExBridgeClusterMethod::MostEdges) \
	op(EPCGExBridgeClusterMethod::Filters) 

enum class EPCGExBridgeClusterMethod : uint8;
template<> struct TIsUEnumClass<EPCGExBridgeClusterMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBridgeClusterMethod>();
// ********** End Enum EPCGExBridgeClusterMethod ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
