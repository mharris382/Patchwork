// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExShiftPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExShiftPath_generated_h
#error "PCGExShiftPath.generated.h already included, missing '#pragma once' in PCGExShiftPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExShiftPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExShiftPathSettings **************************************************
struct Z_Construct_UClass_UPCGExShiftPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShiftPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExShiftPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExShiftPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExShiftPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExShiftPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExShiftPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExShiftPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExShiftPathSettings(UPCGExShiftPathSettings&&) = delete; \
	UPCGExShiftPathSettings(const UPCGExShiftPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExShiftPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExShiftPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExShiftPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExShiftPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_41_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExShiftPathSettings;

// ********** End Class UPCGExShiftPathSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h

// ********** Begin Enum EPCGExShiftType ***********************************************************
#define FOREACH_ENUM_EPCGEXSHIFTTYPE(op) \
	op(EPCGExShiftType::Index) \
	op(EPCGExShiftType::Metadata) \
	op(EPCGExShiftType::Properties) \
	op(EPCGExShiftType::MetadataAndProperties) \
	op(EPCGExShiftType::CherryPick) 

enum class EPCGExShiftType : uint8;
template<> struct TIsUEnumClass<EPCGExShiftType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShiftType>();
// ********** End Enum EPCGExShiftType *************************************************************

// ********** Begin Enum EPCGExShiftPathMode *******************************************************
#define FOREACH_ENUM_EPCGEXSHIFTPATHMODE(op) \
	op(EPCGExShiftPathMode::Discrete) \
	op(EPCGExShiftPathMode::Relative) \
	op(EPCGExShiftPathMode::Filter) 

enum class EPCGExShiftPathMode : uint8;
template<> struct TIsUEnumClass<EPCGExShiftPathMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShiftPathMode>();
// ********** End Enum EPCGExShiftPathMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
