// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExSimplifyClusters.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSimplifyClusters_generated_h
#error "PCGExSimplifyClusters.generated.h already included, missing '#pragma once' in PCGExSimplifyClusters.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSimplifyClusters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSimplifyClustersSettings *******************************************
struct Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSimplifyClustersSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSimplifyClustersSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSimplifyClustersSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSimplifyClustersSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSimplifyClustersSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSimplifyClustersSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExSimplifyClustersSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSimplifyClustersSettings(UPCGExSimplifyClustersSettings&&) = delete; \
	UPCGExSimplifyClustersSettings(const UPCGExSimplifyClustersSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSimplifyClustersSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSimplifyClustersSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSimplifyClustersSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSimplifyClustersSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSimplifyClustersSettings;

// ********** End Class UPCGExSimplifyClustersSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h

// ********** Begin Enum EPCGExSimplifyClusterEdgeFilterRole ***************************************
#define FOREACH_ENUM_EPCGEXSIMPLIFYCLUSTEREDGEFILTERROLE(op) \
	op(EPCGExSimplifyClusterEdgeFilterRole::Preserve) \
	op(EPCGExSimplifyClusterEdgeFilterRole::Collapse) 

enum class EPCGExSimplifyClusterEdgeFilterRole : uint8;
template<> struct TIsUEnumClass<EPCGExSimplifyClusterEdgeFilterRole> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSimplifyClusterEdgeFilterRole>();
// ********** End Enum EPCGExSimplifyClusterEdgeFilterRole *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
