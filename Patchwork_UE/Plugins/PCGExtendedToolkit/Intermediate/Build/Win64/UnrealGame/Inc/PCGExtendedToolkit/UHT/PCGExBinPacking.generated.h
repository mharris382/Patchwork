// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layout/PCGExBinPacking.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBinPacking_generated_h
#error "PCGExBinPacking.generated.h already included, missing '#pragma once' in PCGExBinPacking.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBinPacking_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBinPackingSettings *************************************************
struct Z_Construct_UClass_UPCGExBinPackingSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBinPackingSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBinPackingSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBinPackingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBinPackingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBinPackingSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBinPackingSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBinPackingSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBinPackingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBinPackingSettings(UPCGExBinPackingSettings&&) = delete; \
	UPCGExBinPackingSettings(const UPCGExBinPackingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBinPackingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBinPackingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBinPackingSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBinPackingSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_32_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBinPackingSettings;

// ********** End Class UPCGExBinPackingSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h

// ********** Begin Enum EPCGExBinFreeSpacePartitionMode *******************************************
#define FOREACH_ENUM_EPCGEXBINFREESPACEPARTITIONMODE(op) \
	op(EPCGExBinFreeSpacePartitionMode::UVWConstant) \
	op(EPCGExBinFreeSpacePartitionMode::UVWAttribute) \
	op(EPCGExBinFreeSpacePartitionMode::PositionConstant) \
	op(EPCGExBinFreeSpacePartitionMode::PositionAttribute) 

enum class EPCGExBinFreeSpacePartitionMode : uint8;
template<> struct TIsUEnumClass<EPCGExBinFreeSpacePartitionMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBinFreeSpacePartitionMode>();
// ********** End Enum EPCGExBinFreeSpacePartitionMode *********************************************

// ********** Begin Enum EPCGExPlacementFavor ******************************************************
#define FOREACH_ENUM_EPCGEXPLACEMENTFAVOR(op) \
	op(EPCGExPlacementFavor::SeedProximity) \
	op(EPCGExPlacementFavor::Space) 

enum class EPCGExPlacementFavor : uint8;
template<> struct TIsUEnumClass<EPCGExPlacementFavor> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPlacementFavor>();
// ********** End Enum EPCGExPlacementFavor ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
