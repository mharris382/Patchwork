// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExBlendPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBlendPath_generated_h
#error "PCGExBlendPath.generated.h already included, missing '#pragma once' in PCGExBlendPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBlendPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBlendPathSettings **************************************************
struct Z_Construct_UClass_UPCGExBlendPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBlendPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBlendPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBlendPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBlendPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBlendPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBlendPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBlendPathSettings(UPCGExBlendPathSettings&&) = delete; \
	UPCGExBlendPathSettings(const UPCGExBlendPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBlendPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBlendPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBlendPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBlendPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_32_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBlendPathSettings;

// ********** End Class UPCGExBlendPathSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBlendPath_h

// ********** Begin Enum EPCGExPathBlendMode *******************************************************
#define FOREACH_ENUM_EPCGEXPATHBLENDMODE(op) \
	op(EPCGExPathBlendMode::Full) \
	op(EPCGExPathBlendMode::Switch) 

enum class EPCGExPathBlendMode : uint8;
template<> struct TIsUEnumClass<EPCGExPathBlendMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathBlendMode>();
// ********** End Enum EPCGExPathBlendMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
