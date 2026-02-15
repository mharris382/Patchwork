// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Diagrams/PCGExBuildDelaunayGraph2D.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBuildDelaunayGraph2D_generated_h
#error "PCGExBuildDelaunayGraph2D.generated.h already included, missing '#pragma once' in PCGExBuildDelaunayGraph2D.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBuildDelaunayGraph2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBuildDelaunayGraph2DSettings ***************************************
struct Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBuildDelaunayGraph2DSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBuildDelaunayGraph2DSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBuildDelaunayGraph2DSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBuildDelaunayGraph2DSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBuildDelaunayGraph2DSettings(UPCGExBuildDelaunayGraph2DSettings&&) = delete; \
	UPCGExBuildDelaunayGraph2DSettings(const UPCGExBuildDelaunayGraph2DSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBuildDelaunayGraph2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBuildDelaunayGraph2DSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBuildDelaunayGraph2DSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBuildDelaunayGraph2DSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_27_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_30_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBuildDelaunayGraph2DSettings;

// ********** End Class UPCGExBuildDelaunayGraph2DSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h

// ********** Begin Enum EPCGExUrquhartSiteMergeMode ***********************************************
#define FOREACH_ENUM_EPCGEXURQUHARTSITEMERGEMODE(op) \
	op(EPCGExUrquhartSiteMergeMode::None) \
	op(EPCGExUrquhartSiteMergeMode::MergeSites) \
	op(EPCGExUrquhartSiteMergeMode::MergeEdges) 

enum class EPCGExUrquhartSiteMergeMode : uint8;
template<> struct TIsUEnumClass<EPCGExUrquhartSiteMergeMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUrquhartSiteMergeMode>();
// ********** End Enum EPCGExUrquhartSiteMergeMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
