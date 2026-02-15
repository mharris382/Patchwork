// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/PCGExRefineEdges.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExRefineEdges_generated_h
#error "PCGExRefineEdges.generated.h already included, missing '#pragma once' in PCGExRefineEdges.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExRefineEdges_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExRefineEdgesSettings ************************************************
struct Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRefineEdgesSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExRefineEdgesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExRefineEdgesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExRefineEdgesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExRefineEdgesSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExRefineEdgesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExRefineEdgesSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExRefineEdgesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExRefineEdgesSettings(UPCGExRefineEdgesSettings&&) = delete; \
	UPCGExRefineEdgesSettings(const UPCGExRefineEdgesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExRefineEdgesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExRefineEdgesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExRefineEdgesSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExRefineEdgesSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_39_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_42_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExRefineEdgesSettings;

// ********** End Class UPCGExRefineEdgesSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRefineEdges_h

// ********** Begin Enum EPCGExRefineSanitization **************************************************
#define FOREACH_ENUM_EPCGEXREFINESANITIZATION(op) \
	op(EPCGExRefineSanitization::None) \
	op(EPCGExRefineSanitization::Shortest) \
	op(EPCGExRefineSanitization::Longest) \
	op(EPCGExRefineSanitization::Filters) 

enum class EPCGExRefineSanitization : uint8;
template<> struct TIsUEnumClass<EPCGExRefineSanitization> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRefineSanitization>();
// ********** End Enum EPCGExRefineSanitization ****************************************************

// ********** Begin Enum EPCGExRefineEdgesOutput ***************************************************
#define FOREACH_ENUM_EPCGEXREFINEEDGESOUTPUT(op) \
	op(EPCGExRefineEdgesOutput::Clusters) \
	op(EPCGExRefineEdgesOutput::Points) \
	op(EPCGExRefineEdgesOutput::Attribute) 

enum class EPCGExRefineEdgesOutput : uint8;
template<> struct TIsUEnumClass<EPCGExRefineEdgesOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRefineEdgesOutput>();
// ********** End Enum EPCGExRefineEdgesOutput *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
