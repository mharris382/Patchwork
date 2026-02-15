// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExHeuristicsFactoryProvider_generated_h
#error "PCGExHeuristicsFactoryProvider.generated.h already included, missing '#pragma once' in PCGExHeuristicsFactoryProvider.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExHeuristicsFactoryProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExDataTypeInfoHeuristics **************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExFactoryDataTypeInfo Super;


struct FPCGExDataTypeInfoHeuristics;
// ********** End ScriptStruct FPCGExDataTypeInfoHeuristics ****************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigBase *****************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExHeuristicConfigBase;
// ********** End ScriptStruct FPCGExHeuristicConfigBase *******************************************

// ********** Begin Class UPCGExHeuristicsFactoryData **********************************************
struct Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExHeuristicsFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExHeuristicsFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExHeuristicsFactoryData, UPCGExFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExHeuristicsFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExHeuristicsFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExHeuristicsFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExHeuristicsFactoryData(UPCGExHeuristicsFactoryData&&) = delete; \
	UPCGExHeuristicsFactoryData(const UPCGExHeuristicsFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExHeuristicsFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExHeuristicsFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExHeuristicsFactoryData) \
	NO_API virtual ~UPCGExHeuristicsFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_114_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_117_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExHeuristicsFactoryData;

// ********** End Class UPCGExHeuristicsFactoryData ************************************************

// ********** Begin Class UPCGExHeuristicsFactoryProviderSettings **********************************
struct Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExHeuristicsFactoryProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExHeuristicsFactoryProviderSettings, UPCGExFactoryProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExHeuristicsFactoryProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExHeuristicsFactoryProviderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExHeuristicsFactoryProviderSettings(UPCGExHeuristicsFactoryProviderSettings&&) = delete; \
	UPCGExHeuristicsFactoryProviderSettings(const UPCGExHeuristicsFactoryProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExHeuristicsFactoryProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExHeuristicsFactoryProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExHeuristicsFactoryProviderSettings) \
	NO_API virtual ~UPCGExHeuristicsFactoryProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_132_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_135_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExHeuristicsFactoryProviderSettings;

// ********** End Class UPCGExHeuristicsFactoryProviderSettings ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
