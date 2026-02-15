// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/FloodFill/PCGExFloodFillClusters.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFloodFillClusters_generated_h
#error "PCGExFloodFillClusters.generated.h already included, missing '#pragma once' in PCGExFloodFillClusters.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFloodFillClusters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExFloodFillSeedPickingDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExFloodFillSeedPickingDetails;
// ********** End ScriptStruct FPCGExFloodFillSeedPickingDetails ***********************************

// ********** Begin Class UPCGExClusterDiffusionSettings *******************************************
struct Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterDiffusionSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExClusterDiffusionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExClusterDiffusionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExClusterDiffusionSettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExClusterDiffusionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExClusterDiffusionSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExClusterDiffusionSettings(UPCGExClusterDiffusionSettings&&) = delete; \
	UPCGExClusterDiffusionSettings(const UPCGExClusterDiffusionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExClusterDiffusionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExClusterDiffusionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExClusterDiffusionSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExClusterDiffusionSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_76_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_79_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExClusterDiffusionSettings;

// ********** End Class UPCGExClusterDiffusionSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h

// ********** Begin Enum EPCGExFloodFillOrder ******************************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLORDER(op) \
	op(EPCGExFloodFillOrder::Index) \
	op(EPCGExFloodFillOrder::Sorting) 

enum class EPCGExFloodFillOrder : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillOrder> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillOrder>();
// ********** End Enum EPCGExFloodFillOrder ********************************************************

// ********** Begin Enum EPCGExFloodFillProcessing *************************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLPROCESSING(op) \
	op(EPCGExFloodFillProcessing::Parallel) \
	op(EPCGExFloodFillProcessing::Sequence) 

enum class EPCGExFloodFillProcessing : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillProcessing> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillProcessing>();
// ********** End Enum EPCGExFloodFillProcessing ***************************************************

// ********** Begin Enum EPCGExFloodFillPathOutput *************************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLPATHOUTPUT(op) \
	op(EPCGExFloodFillPathOutput::None) \
	op(EPCGExFloodFillPathOutput::Full) \
	op(EPCGExFloodFillPathOutput::Partitions) 

enum class EPCGExFloodFillPathOutput : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillPathOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPathOutput>();
// ********** End Enum EPCGExFloodFillPathOutput ***************************************************

// ********** Begin Enum EPCGExFloodFillPathPartitions *********************************************
#define FOREACH_ENUM_EPCGEXFLOODFILLPATHPARTITIONS(op) \
	op(EPCGExFloodFillPathPartitions::Length) \
	op(EPCGExFloodFillPathPartitions::Score) \
	op(EPCGExFloodFillPathPartitions::Depth) 

enum class EPCGExFloodFillPathPartitions : uint8;
template<> struct TIsUEnumClass<EPCGExFloodFillPathPartitions> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPathPartitions>();
// ********** End Enum EPCGExFloodFillPathPartitions ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
