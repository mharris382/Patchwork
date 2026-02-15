// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExAttributeRolling.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAttributeRolling_generated_h
#error "PCGExAttributeRolling.generated.h already included, missing '#pragma once' in PCGExAttributeRolling.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAttributeRolling_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExAttributeRollingSettings *******************************************
struct Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeRollingSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAttributeRollingSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAttributeRollingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAttributeRollingSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAttributeRollingSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAttributeRollingSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAttributeRollingSettings(UPCGExAttributeRollingSettings&&) = delete; \
	UPCGExAttributeRollingSettings(const UPCGExAttributeRollingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExAttributeRollingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAttributeRollingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAttributeRollingSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExAttributeRollingSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_50_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_53_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAttributeRollingSettings;

// ********** End Class UPCGExAttributeRollingSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h

// ********** Begin Enum EPCGExRollingRangeControl *************************************************
#define FOREACH_ENUM_EPCGEXROLLINGRANGECONTROL(op) \
	op(EPCGExRollingRangeControl::StartStop) \
	op(EPCGExRollingRangeControl::Toggle) 

enum class EPCGExRollingRangeControl : uint8;
template<> struct TIsUEnumClass<EPCGExRollingRangeControl> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingRangeControl>();
// ********** End Enum EPCGExRollingRangeControl ***************************************************

// ********** Begin Enum EPCGExRollingToggleInitialValue *******************************************
#define FOREACH_ENUM_EPCGEXROLLINGTOGGLEINITIALVALUE(op) \
	op(EPCGExRollingToggleInitialValue::Constant) \
	op(EPCGExRollingToggleInitialValue::ConstantPreserve) \
	op(EPCGExRollingToggleInitialValue::FromPoint) 

enum class EPCGExRollingToggleInitialValue : uint8;
template<> struct TIsUEnumClass<EPCGExRollingToggleInitialValue> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingToggleInitialValue>();
// ********** End Enum EPCGExRollingToggleInitialValue *********************************************

// ********** Begin Enum EPCGExRollingValueControl *************************************************
#define FOREACH_ENUM_EPCGEXROLLINGVALUECONTROL(op) \
	op(EPCGExRollingValueControl::Pin) \
	op(EPCGExRollingValueControl::Previous) \
	op(EPCGExRollingValueControl::RangeStart) 

enum class EPCGExRollingValueControl : uint8;
template<> struct TIsUEnumClass<EPCGExRollingValueControl> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingValueControl>();
// ********** End Enum EPCGExRollingValueControl ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
