// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/PCGExPathfindingFindContours.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPathfindingFindContours_generated_h
#error "PCGExPathfindingFindContours.generated.h already included, missing '#pragma once' in PCGExPathfindingFindContours.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPathfindingFindContours_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExFindContoursSettings ***********************************************
struct Z_Construct_UClass_UPCGExFindContoursSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindContoursSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFindContoursSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExFindContoursSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFindContoursSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFindContoursSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFindContoursSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFindContoursSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExFindContoursSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFindContoursSettings(UPCGExFindContoursSettings&&) = delete; \
	UPCGExFindContoursSettings(const UPCGExFindContoursSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExFindContoursSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFindContoursSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFindContoursSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExFindContoursSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_30_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_33_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFindContoursSettings;

// ********** End Class UPCGExFindContoursSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h

// ********** Begin Enum EPCGExContourShapeTypeOutput **********************************************
#define FOREACH_ENUM_EPCGEXCONTOURSHAPETYPEOUTPUT(op) \
	op(EPCGExContourShapeTypeOutput::Both) \
	op(EPCGExContourShapeTypeOutput::ConvexOnly) \
	op(EPCGExContourShapeTypeOutput::ConcaveOnly) 

enum class EPCGExContourShapeTypeOutput : uint8;
template<> struct TIsUEnumClass<EPCGExContourShapeTypeOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExContourShapeTypeOutput>();
// ********** End Enum EPCGExContourShapeTypeOutput ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
