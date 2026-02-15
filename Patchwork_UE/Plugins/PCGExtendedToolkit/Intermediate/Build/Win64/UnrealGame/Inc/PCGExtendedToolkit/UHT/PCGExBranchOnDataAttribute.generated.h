// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExBranchOnDataAttribute.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBranchOnDataAttribute_generated_h
#error "PCGExBranchOnDataAttribute.generated.h already included, missing '#pragma once' in PCGExBranchOnDataAttribute.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBranchOnDataAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExBranchOnDataPin *********************************************
struct Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExBranchOnDataPin;
// ********** End ScriptStruct FPCGExBranchOnDataPin ***********************************************

// ********** Begin Class UPCGExBranchOnDataAttributeSettings **************************************
struct Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBranchOnDataAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBranchOnDataAttributeSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBranchOnDataAttributeSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExBranchOnDataAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBranchOnDataAttributeSettings(UPCGExBranchOnDataAttributeSettings&&) = delete; \
	UPCGExBranchOnDataAttributeSettings(const UPCGExBranchOnDataAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExBranchOnDataAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBranchOnDataAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBranchOnDataAttributeSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExBranchOnDataAttributeSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_69_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_72_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBranchOnDataAttributeSettings;

// ********** End Class UPCGExBranchOnDataAttributeSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h

// ********** Begin Enum EPCGExControlFlowSelectionMode ********************************************
#define FOREACH_ENUM_EPCGEXCONTROLFLOWSELECTIONMODE(op) \
	op(EPCGExControlFlowSelectionMode::UserDefined) \
	op(EPCGExControlFlowSelectionMode::EnumInteger) \
	op(EPCGExControlFlowSelectionMode::EnumName) 

enum class EPCGExControlFlowSelectionMode : uint8;
template<> struct TIsUEnumClass<EPCGExControlFlowSelectionMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExControlFlowSelectionMode>();
// ********** End Enum EPCGExControlFlowSelectionMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
