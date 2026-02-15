// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExShrinkPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExShrinkPath_generated_h
#error "PCGExShrinkPath.generated.h already included, missing '#pragma once' in PCGExShrinkPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExShrinkPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointDistanceDetails ***************************
struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FPCGExShrinkPathEndpointDistanceDetails;
// ********** End ScriptStruct FPCGExShrinkPathEndpointDistanceDetails *****************************

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointCountDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FPCGExShrinkPathEndpointCountDetails;
// ********** End ScriptStruct FPCGExShrinkPathEndpointCountDetails ********************************

// ********** Begin Class UPCGExShrinkPathSettings *************************************************
struct Z_Construct_UClass_UPCGExShrinkPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShrinkPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExShrinkPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExShrinkPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExShrinkPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExShrinkPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExShrinkPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExShrinkPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExShrinkPathSettings(UPCGExShrinkPathSettings&&) = delete; \
	UPCGExShrinkPathSettings(const UPCGExShrinkPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExShrinkPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExShrinkPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExShrinkPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExShrinkPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_101_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_104_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExShrinkPathSettings;

// ********** End Class UPCGExShrinkPathSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h

// ********** Begin Enum EPCGExPathShrinkMode ******************************************************
#define FOREACH_ENUM_EPCGEXPATHSHRINKMODE(op) \
	op(EPCGExPathShrinkMode::Count) \
	op(EPCGExPathShrinkMode::Distance) 

enum class EPCGExPathShrinkMode : uint8;
template<> struct TIsUEnumClass<EPCGExPathShrinkMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathShrinkMode>();
// ********** End Enum EPCGExPathShrinkMode ********************************************************

// ********** Begin Enum EPCGExPathShrinkDistanceCutType *******************************************
#define FOREACH_ENUM_EPCGEXPATHSHRINKDISTANCECUTTYPE(op) \
	op(EPCGExPathShrinkDistanceCutType::NewPoint) \
	op(EPCGExPathShrinkDistanceCutType::Previous) \
	op(EPCGExPathShrinkDistanceCutType::Next) \
	op(EPCGExPathShrinkDistanceCutType::Closest) 

enum class EPCGExPathShrinkDistanceCutType : uint8;
template<> struct TIsUEnumClass<EPCGExPathShrinkDistanceCutType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathShrinkDistanceCutType>();
// ********** End Enum EPCGExPathShrinkDistanceCutType *********************************************

// ********** Begin Enum EPCGExShrinkEndpoint ******************************************************
#define FOREACH_ENUM_EPCGEXSHRINKENDPOINT(op) \
	op(EPCGExShrinkEndpoint::Both) \
	op(EPCGExShrinkEndpoint::Start) \
	op(EPCGExShrinkEndpoint::End) 

enum class EPCGExShrinkEndpoint : uint8;
template<> struct TIsUEnumClass<EPCGExShrinkEndpoint> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShrinkEndpoint>();
// ********** End Enum EPCGExShrinkEndpoint ********************************************************

// ********** Begin Enum EPCGExShrinkConstantMode **************************************************
#define FOREACH_ENUM_EPCGEXSHRINKCONSTANTMODE(op) \
	op(EPCGExShrinkConstantMode::Shared) \
	op(EPCGExShrinkConstantMode::Separate) 

enum class EPCGExShrinkConstantMode : uint8;
template<> struct TIsUEnumClass<EPCGExShrinkConstantMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShrinkConstantMode>();
// ********** End Enum EPCGExShrinkConstantMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
