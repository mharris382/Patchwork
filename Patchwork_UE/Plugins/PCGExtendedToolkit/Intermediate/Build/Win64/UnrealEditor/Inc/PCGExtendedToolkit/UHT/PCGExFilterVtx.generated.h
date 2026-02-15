// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/PCGExFilterVtx.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFilterVtx_generated_h
#error "PCGExFilterVtx.generated.h already included, missing '#pragma once' in PCGExFilterVtx.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFilterVtx_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExFilterVtxSettings **************************************************
struct Z_Construct_UClass_UPCGExFilterVtxSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterVtxSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFilterVtxSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExFilterVtxSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFilterVtxSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFilterVtxSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFilterVtxSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFilterVtxSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExFilterVtxSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFilterVtxSettings(UPCGExFilterVtxSettings&&) = delete; \
	UPCGExFilterVtxSettings(const UPCGExFilterVtxSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExFilterVtxSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFilterVtxSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFilterVtxSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExFilterVtxSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_30_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_33_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFilterVtxSettings;

// ********** End Class UPCGExFilterVtxSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExFilterVtx_h

// ********** Begin Enum EPCGExVtxFilterOutput *****************************************************
#define FOREACH_ENUM_EPCGEXVTXFILTEROUTPUT(op) \
	op(EPCGExVtxFilterOutput::Clusters) \
	op(EPCGExVtxFilterOutput::Points) \
	op(EPCGExVtxFilterOutput::Attribute) 

enum class EPCGExVtxFilterOutput : uint8;
template<> struct TIsUEnumClass<EPCGExVtxFilterOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVtxFilterOutput>();
// ********** End Enum EPCGExVtxFilterOutput *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
