// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExMeshToClusters.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMeshToClusters_generated_h
#error "PCGExMeshToClusters.generated.h already included, missing '#pragma once' in PCGExMeshToClusters.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMeshToClusters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExMeshToClustersSettings *********************************************
struct Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshToClustersSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExMeshToClustersSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExMeshToClustersSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExMeshToClustersSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExMeshToClustersSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExMeshToClustersSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExMeshToClustersSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExMeshToClustersSettings(UPCGExMeshToClustersSettings&&) = delete; \
	UPCGExMeshToClustersSettings(const UPCGExMeshToClustersSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExMeshToClustersSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExMeshToClustersSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExMeshToClustersSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExMeshToClustersSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_27_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_30_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExMeshToClustersSettings;

// ********** End Class UPCGExMeshToClustersSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h

// ********** Begin Enum EPCGExMeshAttributeHandling ***********************************************
#define FOREACH_ENUM_EPCGEXMESHATTRIBUTEHANDLING(op) \
	op(EPCGExMeshAttributeHandling::StaticMeshSoftPath) \
	op(EPCGExMeshAttributeHandling::ActorReference) 

enum class EPCGExMeshAttributeHandling : uint8;
template<> struct TIsUEnumClass<EPCGExMeshAttributeHandling> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeshAttributeHandling>();
// ********** End Enum EPCGExMeshAttributeHandling *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
