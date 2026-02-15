// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExBevelPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBevelPath_generated_h
#error "PCGExBevelPath.generated.h already included, missing '#pragma once' in PCGExBevelPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBevelPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBevelPathSettings **************************************************
struct Z_Construct_UClass_UPCGExBevelPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBevelPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBevelPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBevelPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBevelPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBevelPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBevelPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBevelPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBevelPathSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBevelPathSettings(UPCGExBevelPathSettings&&) = delete; \
	UPCGExBevelPathSettings(const UPCGExBevelPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBevelPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBevelPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBevelPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBevelPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_64_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_67_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBevelPathSettings;

// ********** End Class UPCGExBevelPathSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h

// ********** Begin Enum EPCGExBevelMode ***********************************************************
#define FOREACH_ENUM_EPCGEXBEVELMODE(op) \
	op(EPCGExBevelMode::Radius) \
	op(EPCGExBevelMode::Distance) 

enum class EPCGExBevelMode : uint8;
template<> struct TIsUEnumClass<EPCGExBevelMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelMode>();
// ********** End Enum EPCGExBevelMode *************************************************************

// ********** Begin Enum EPCGExBevelProfileType ****************************************************
#define FOREACH_ENUM_EPCGEXBEVELPROFILETYPE(op) \
	op(EPCGExBevelProfileType::Line) \
	op(EPCGExBevelProfileType::Arc) \
	op(EPCGExBevelProfileType::Custom) 

enum class EPCGExBevelProfileType : uint8;
template<> struct TIsUEnumClass<EPCGExBevelProfileType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelProfileType>();
// ********** End Enum EPCGExBevelProfileType ******************************************************

// ********** Begin Enum EPCGExBevelLimit **********************************************************
#define FOREACH_ENUM_EPCGEXBEVELLIMIT(op) \
	op(EPCGExBevelLimit::None) \
	op(EPCGExBevelLimit::ClosestNeighbor) \
	op(EPCGExBevelLimit::Balanced) 

enum class EPCGExBevelLimit : uint8;
template<> struct TIsUEnumClass<EPCGExBevelLimit> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelLimit>();
// ********** End Enum EPCGExBevelLimit ************************************************************

// ********** Begin Enum EPCGExBevelCustomProfileScaling *******************************************
#define FOREACH_ENUM_EPCGEXBEVELCUSTOMPROFILESCALING(op) \
	op(EPCGExBevelCustomProfileScaling::Uniform) \
	op(EPCGExBevelCustomProfileScaling::Scale) \
	op(EPCGExBevelCustomProfileScaling::Distance) 

enum class EPCGExBevelCustomProfileScaling : uint8;
template<> struct TIsUEnumClass<EPCGExBevelCustomProfileScaling> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelCustomProfileScaling>();
// ********** End Enum EPCGExBevelCustomProfileScaling *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
