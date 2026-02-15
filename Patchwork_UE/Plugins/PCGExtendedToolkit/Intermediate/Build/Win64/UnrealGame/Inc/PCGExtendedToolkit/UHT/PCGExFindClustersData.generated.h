// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExFindClustersData.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFindClustersData_generated_h
#error "PCGExFindClustersData.generated.h already included, missing '#pragma once' in PCGExFindClustersData.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFindClustersData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExFindClustersDataSettings *******************************************
struct Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindClustersDataSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFindClustersDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFindClustersDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFindClustersDataSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFindClustersDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFindClustersDataSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExFindClustersDataSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFindClustersDataSettings(UPCGExFindClustersDataSettings&&) = delete; \
	UPCGExFindClustersDataSettings(const UPCGExFindClustersDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExFindClustersDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFindClustersDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFindClustersDataSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExFindClustersDataSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_25_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFindClustersDataSettings;

// ********** End Class UPCGExFindClustersDataSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h

// ********** Begin Enum EPCGExClusterDataSearchMode ***********************************************
#define FOREACH_ENUM_EPCGEXCLUSTERDATASEARCHMODE(op) \
	op(EPCGExClusterDataSearchMode::All) \
	op(EPCGExClusterDataSearchMode::VtxFromEdges) \
	op(EPCGExClusterDataSearchMode::EdgesFromVtx) 

enum class EPCGExClusterDataSearchMode : uint8;
template<> struct TIsUEnumClass<EPCGExClusterDataSearchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterDataSearchMode>();
// ********** End Enum EPCGExClusterDataSearchMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
