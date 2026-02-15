// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Edges/Relaxing/PCGExFittingRelaxBase.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFittingRelaxBase_generated_h
#error "PCGExFittingRelaxBase.generated.h already included, missing '#pragma once' in PCGExFittingRelaxBase.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFittingRelaxBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExFittingRelaxBase ***************************************************
struct Z_Construct_UClass_UPCGExFittingRelaxBase_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFittingRelaxBase_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFittingRelaxBase(); \
	friend struct ::Z_Construct_UClass_UPCGExFittingRelaxBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFittingRelaxBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFittingRelaxBase, UPCGExRelaxClusterOperation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFittingRelaxBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFittingRelaxBase)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFittingRelaxBase(UPCGExFittingRelaxBase&&) = delete; \
	UPCGExFittingRelaxBase(const UPCGExFittingRelaxBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExFittingRelaxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFittingRelaxBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFittingRelaxBase) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExFittingRelaxBase();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_25_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFittingRelaxBase;

// ********** End Class UPCGExFittingRelaxBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h

// ********** Begin Enum EPCGExRelaxEdgeFitting ****************************************************
#define FOREACH_ENUM_EPCGEXRELAXEDGEFITTING(op) \
	op(EPCGExRelaxEdgeFitting::Ignore) \
	op(EPCGExRelaxEdgeFitting::Fixed) \
	op(EPCGExRelaxEdgeFitting::Existing) \
	op(EPCGExRelaxEdgeFitting::Attribute) 

enum class EPCGExRelaxEdgeFitting : uint8;
template<> struct TIsUEnumClass<EPCGExRelaxEdgeFitting> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelaxEdgeFitting>();
// ********** End Enum EPCGExRelaxEdgeFitting ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
