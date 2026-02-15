// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExSplitPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSplitPath_generated_h
#error "PCGExSplitPath.generated.h already included, missing '#pragma once' in PCGExSplitPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSplitPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSplitPathSettings **************************************************
struct Z_Construct_UClass_UPCGExSplitPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSplitPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSplitPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSplitPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSplitPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSplitPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSplitPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSplitPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExSplitPathSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSplitPathSettings(UPCGExSplitPathSettings&&) = delete; \
	UPCGExSplitPathSettings(const UPCGExSplitPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSplitPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSplitPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSplitPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSplitPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_42_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_45_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSplitPathSettings;

// ********** End Class UPCGExSplitPathSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h

// ********** Begin Enum EPCGExPathSplitAction *****************************************************
#define FOREACH_ENUM_EPCGEXPATHSPLITACTION(op) \
	op(EPCGExPathSplitAction::Split) \
	op(EPCGExPathSplitAction::Remove) \
	op(EPCGExPathSplitAction::Disconnect) \
	op(EPCGExPathSplitAction::Partition) \
	op(EPCGExPathSplitAction::Switch) 

enum class EPCGExPathSplitAction : uint8;
template<> struct TIsUEnumClass<EPCGExPathSplitAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSplitAction>();
// ********** End Enum EPCGExPathSplitAction *******************************************************

// ********** Begin Enum EPCGExPathSplitInitialValue ***********************************************
#define FOREACH_ENUM_EPCGEXPATHSPLITINITIALVALUE(op) \
	op(EPCGExPathSplitInitialValue::Constant) \
	op(EPCGExPathSplitInitialValue::ConstantPreserve) \
	op(EPCGExPathSplitInitialValue::FromPoint) \
	op(EPCGExPathSplitInitialValue::FromPointPreserve) 

enum class EPCGExPathSplitInitialValue : uint8;
template<> struct TIsUEnumClass<EPCGExPathSplitInitialValue> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSplitInitialValue>();
// ********** End Enum EPCGExPathSplitInitialValue *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
