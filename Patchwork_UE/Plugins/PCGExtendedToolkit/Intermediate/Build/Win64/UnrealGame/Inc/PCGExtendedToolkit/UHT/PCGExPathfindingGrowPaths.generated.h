// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/PCGExPathfindingGrowPaths.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPathfindingGrowPaths_generated_h
#error "PCGExPathfindingGrowPaths.generated.h already included, missing '#pragma once' in PCGExPathfindingGrowPaths.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPathfindingGrowPaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExPathfindingGrowPathsSettings ***************************************
struct Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPathfindingGrowPathsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPathfindingGrowPathsSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPathfindingGrowPathsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExPathfindingGrowPathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPathfindingGrowPathsSettings(UPCGExPathfindingGrowPathsSettings&&) = delete; \
	UPCGExPathfindingGrowPathsSettings(const UPCGExPathfindingGrowPathsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPathfindingGrowPathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPathfindingGrowPathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPathfindingGrowPathsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPathfindingGrowPathsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_99_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_102_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPathfindingGrowPathsSettings;

// ********** End Class UPCGExPathfindingGrowPathsSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h

// ********** Begin Enum EPCGExGrowthIterationMode *************************************************
#define FOREACH_ENUM_EPCGEXGROWTHITERATIONMODE(op) \
	op(EPCGExGrowthIterationMode::Parallel) \
	op(EPCGExGrowthIterationMode::Sequence) 

enum class EPCGExGrowthIterationMode : uint8;
template<> struct TIsUEnumClass<EPCGExGrowthIterationMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthIterationMode>();
// ********** End Enum EPCGExGrowthIterationMode ***************************************************

// ********** Begin Enum EPCGExGrowthValueSource ***************************************************
#define FOREACH_ENUM_EPCGEXGROWTHVALUESOURCE(op) \
	op(EPCGExGrowthValueSource::Constant) \
	op(EPCGExGrowthValueSource::SeedAttribute) \
	op(EPCGExGrowthValueSource::VtxAttribute) 

enum class EPCGExGrowthValueSource : uint8;
template<> struct TIsUEnumClass<EPCGExGrowthValueSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthValueSource>();
// ********** End Enum EPCGExGrowthValueSource *****************************************************

// ********** Begin Enum EPCGExGrowthUpdateMode ****************************************************
#define FOREACH_ENUM_EPCGEXGROWTHUPDATEMODE(op) \
	op(EPCGExGrowthUpdateMode::Once) \
	op(EPCGExGrowthUpdateMode::SetEachIteration) \
	op(EPCGExGrowthUpdateMode::AddEachIteration) 

enum class EPCGExGrowthUpdateMode : uint8;
template<> struct TIsUEnumClass<EPCGExGrowthUpdateMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthUpdateMode>();
// ********** End Enum EPCGExGrowthUpdateMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
