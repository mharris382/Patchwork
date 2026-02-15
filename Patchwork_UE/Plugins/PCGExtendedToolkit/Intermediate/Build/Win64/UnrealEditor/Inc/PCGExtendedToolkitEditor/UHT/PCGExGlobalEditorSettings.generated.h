// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExGlobalEditorSettings.h"

#ifdef PCGEXTENDEDTOOLKITEDITOR_PCGExGlobalEditorSettings_generated_h
#error "PCGExGlobalEditorSettings.generated.h already included, missing '#pragma once' in PCGExGlobalEditorSettings.h"
#endif
#define PCGEXTENDEDTOOLKITEDITOR_PCGExGlobalEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExGlobalEditorSettings ***********************************************
struct Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics;
PCGEXTENDEDTOOLKITEDITOR_API UClass* Z_Construct_UClass_UPCGExGlobalEditorSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExGlobalEditorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExGlobalEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKITEDITOR_API UClass* ::Z_Construct_UClass_UPCGExGlobalEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExGlobalEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkitEditor"), Z_Construct_UClass_UPCGExGlobalEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExGlobalEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExGlobalEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExGlobalEditorSettings(UPCGExGlobalEditorSettings&&) = delete; \
	UPCGExGlobalEditorSettings(const UPCGExGlobalEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExGlobalEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExGlobalEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExGlobalEditorSettings) \
	NO_API virtual ~UPCGExGlobalEditorSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_13_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExGlobalEditorSettings;

// ********** End Class UPCGExGlobalEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkitEditor_Public_PCGExGlobalEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
