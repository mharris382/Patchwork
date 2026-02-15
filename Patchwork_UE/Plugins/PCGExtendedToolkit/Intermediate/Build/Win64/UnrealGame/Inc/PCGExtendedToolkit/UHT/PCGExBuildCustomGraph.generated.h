// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExBuildCustomGraph.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBuildCustomGraph_generated_h
#error "PCGExBuildCustomGraph.generated.h already included, missing '#pragma once' in PCGExBuildCustomGraph.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBuildCustomGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGExCustomGraphSettings;
struct FPCGPoint;
struct FSoftClassPath;
struct FSoftObjectPath;

// ********** Begin Class UPCGExCustomGraphSettings ************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateNodePoint_Implementation(FPCGPoint const& InPoint, int64 InNodeIdx, int32 InPointIndex, FPCGPoint& OutPoint); \
	virtual void InitPointAttributes_Implementation(bool& OutSuccess); \
	virtual void BuildGraph_Implementation(bool& OutSuccess); \
	virtual void InitializeSettings_Implementation(bool& OutSuccess, int32& OutNodeReserve, int32& OutEdgeReserve); \
	DECLARE_FUNCTION(execSetNodeSoftClassPath); \
	DECLARE_FUNCTION(execSetNodeSoftObjectPath); \
	DECLARE_FUNCTION(execSetNodeName); \
	DECLARE_FUNCTION(execSetNodeRotator); \
	DECLARE_FUNCTION(execSetNodeBool); \
	DECLARE_FUNCTION(execSetNodeString); \
	DECLARE_FUNCTION(execSetNodeTransform); \
	DECLARE_FUNCTION(execSetNodeQuat); \
	DECLARE_FUNCTION(execSetNodeVector4); \
	DECLARE_FUNCTION(execSetNodeVector); \
	DECLARE_FUNCTION(execSetNodeVector2); \
	DECLARE_FUNCTION(execSetNodeDouble); \
	DECLARE_FUNCTION(execSetNodeFloat); \
	DECLARE_FUNCTION(execSetNodeInt64); \
	DECLARE_FUNCTION(execSetNodeInt32); \
	DECLARE_FUNCTION(execInitNodeSoftClassPath); \
	DECLARE_FUNCTION(execInitNodeSoftObjectPath); \
	DECLARE_FUNCTION(execInitNodeName); \
	DECLARE_FUNCTION(execInitNodeRotator); \
	DECLARE_FUNCTION(execInitNodeBool); \
	DECLARE_FUNCTION(execInitNodeString); \
	DECLARE_FUNCTION(execInitNodeTransform); \
	DECLARE_FUNCTION(execInitNodeQuat); \
	DECLARE_FUNCTION(execInitNodeVector4); \
	DECLARE_FUNCTION(execInitNodeVector); \
	DECLARE_FUNCTION(execInitNodeVector2); \
	DECLARE_FUNCTION(execInitNodeDouble); \
	DECLARE_FUNCTION(execInitNodeFloat); \
	DECLARE_FUNCTION(execInitNodeInt64); \
	DECLARE_FUNCTION(execInitNodeInt32); \
	DECLARE_FUNCTION(execUpdateNodePoint); \
	DECLARE_FUNCTION(execInitPointAttributes); \
	DECLARE_FUNCTION(execBuildGraph); \
	DECLARE_FUNCTION(execInitializeSettings); \
	DECLARE_FUNCTION(execRemoveEdge); \
	DECLARE_FUNCTION(execAddEdge);


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGExCustomGraphSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCustomGraphSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCustomGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCustomGraphSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCustomGraphSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExCustomGraphSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCustomGraphSettings(UPCGExCustomGraphSettings&&) = delete; \
	UPCGExCustomGraphSettings(const UPCGExCustomGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExCustomGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCustomGraphSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCustomGraphSettings) \
	NO_API virtual ~UPCGExCustomGraphSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_27_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_CALLBACK_WRAPPERS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCustomGraphSettings;

// ********** End Class UPCGExCustomGraphSettings **************************************************

// ********** Begin ScriptStruct FNewGraphSettingsResult *******************************************
struct Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_385_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FNewGraphSettingsResult;
// ********** End ScriptStruct FNewGraphSettingsResult *********************************************

// ********** Begin Class UPCGExCustomGraphBuilder *************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BuildGraph_Implementation(UPCGExCustomGraphSettings* InCustomGraphSettings, bool& OutSuccess); \
	virtual void Initialize_Implementation(bool& OutSuccess); \
	DECLARE_FUNCTION(execBuildGraph); \
	DECLARE_FUNCTION(execCreateGraphSettings); \
	DECLARE_FUNCTION(execInitialize);


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCustomGraphBuilder(); \
	friend struct ::Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCustomGraphBuilder, UPCGExInstancedFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCustomGraphBuilder)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExCustomGraphBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCustomGraphBuilder(UPCGExCustomGraphBuilder&&) = delete; \
	UPCGExCustomGraphBuilder(const UPCGExCustomGraphBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExCustomGraphBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCustomGraphBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCustomGraphBuilder) \
	NO_API virtual ~UPCGExCustomGraphBuilder();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_397_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_CALLBACK_WRAPPERS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_400_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCustomGraphBuilder;

// ********** End Class UPCGExCustomGraphBuilder ***************************************************

// ********** Begin Class UPCGExBuildCustomGraphSettings *******************************************
struct Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildCustomGraphSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_456_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBuildCustomGraphSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBuildCustomGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBuildCustomGraphSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBuildCustomGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBuildCustomGraphSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_456_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBuildCustomGraphSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBuildCustomGraphSettings(UPCGExBuildCustomGraphSettings&&) = delete; \
	UPCGExBuildCustomGraphSettings(const UPCGExBuildCustomGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBuildCustomGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBuildCustomGraphSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBuildCustomGraphSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBuildCustomGraphSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_453_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_456_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_456_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h_456_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBuildCustomGraphSettings;

// ********** End Class UPCGExBuildCustomGraphSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h

// ********** Begin Enum EPCGExCustomGraphActorSourceMode ******************************************
#define FOREACH_ENUM_EPCGEXCUSTOMGRAPHACTORSOURCEMODE(op) \
	op(EPCGExCustomGraphActorSourceMode::Owner) \
	op(EPCGExCustomGraphActorSourceMode::ActorReferences) 

enum class EPCGExCustomGraphActorSourceMode : uint8;
template<> struct TIsUEnumClass<EPCGExCustomGraphActorSourceMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCustomGraphActorSourceMode>();
// ********** End Enum EPCGExCustomGraphActorSourceMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
