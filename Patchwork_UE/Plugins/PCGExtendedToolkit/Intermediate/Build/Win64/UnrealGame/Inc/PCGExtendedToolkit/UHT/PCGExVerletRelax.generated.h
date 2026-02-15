// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/Relaxing/PCGExVerletRelax.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExVerletRelax_generated_h
#error "PCGExVerletRelax.generated.h already included, missing '#pragma once' in PCGExVerletRelax.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExVerletRelax_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExVerletRelax ********************************************************
struct Z_Construct_UClass_UPCGExVerletRelax_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVerletRelax_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExVerletRelax(); \
	friend struct ::Z_Construct_UClass_UPCGExVerletRelax_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExVerletRelax_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExVerletRelax, UPCGExRelaxClusterOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExVerletRelax_NoRegister) \
	DECLARE_SERIALIZER(UPCGExVerletRelax)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExVerletRelax(UPCGExVerletRelax&&) = delete; \
	UPCGExVerletRelax(const UPCGExVerletRelax&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExVerletRelax); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExVerletRelax); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExVerletRelax) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExVerletRelax();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_23_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExVerletRelax;

// ********** End Class UPCGExVerletRelax **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h

// ********** Begin Enum EPCGExRelaxEdgeRestLength *************************************************
#define FOREACH_ENUM_EPCGEXRELAXEDGERESTLENGTH(op) \
	op(EPCGExRelaxEdgeRestLength::Fixed) \
	op(EPCGExRelaxEdgeRestLength::Existing) \
	op(EPCGExRelaxEdgeRestLength::Attribute) 

enum class EPCGExRelaxEdgeRestLength : uint8;
template<> struct TIsUEnumClass<EPCGExRelaxEdgeRestLength> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelaxEdgeRestLength>();
// ********** End Enum EPCGExRelaxEdgeRestLength ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
