// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExEdgeRefineRemoveOverlap_generated_h
#error "PCGExEdgeRefineRemoveOverlap.generated.h already included, missing '#pragma once' in PCGExEdgeRefineRemoveOverlap.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExEdgeRefineRemoveOverlap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExEdgeRemoveOverlap **************************************************
struct Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveOverlap_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExEdgeRemoveOverlap(); \
	friend struct ::Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExEdgeRemoveOverlap_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExEdgeRemoveOverlap, UPCGExEdgeRefineInstancedFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExEdgeRemoveOverlap_NoRegister) \
	DECLARE_SERIALIZER(UPCGExEdgeRemoveOverlap)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExEdgeRemoveOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExEdgeRemoveOverlap(UPCGExEdgeRemoveOverlap&&) = delete; \
	UPCGExEdgeRemoveOverlap(const UPCGExEdgeRemoveOverlap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExEdgeRemoveOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExEdgeRemoveOverlap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExEdgeRemoveOverlap) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExEdgeRemoveOverlap();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_117_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_120_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExEdgeRemoveOverlap;

// ********** End Class UPCGExEdgeRemoveOverlap ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h

// ********** Begin Enum EPCGExEdgeOverlapPick *****************************************************
#define FOREACH_ENUM_EPCGEXEDGEOVERLAPPICK(op) \
	op(EPCGExEdgeOverlapPick::Shortest) \
	op(EPCGExEdgeOverlapPick::Longest) 

enum class EPCGExEdgeOverlapPick : uint8;
template<> struct TIsUEnumClass<EPCGExEdgeOverlapPick> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeOverlapPick>();
// ********** End Enum EPCGExEdgeOverlapPick *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
