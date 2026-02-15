// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/PCGExDrawAttributes.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDrawAttributes_generated_h
#error "PCGExDrawAttributes.generated.h already included, missing '#pragma once' in PCGExDrawAttributes.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDrawAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAttributeDebugDrawConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttributeDebugDrawConfig_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExInputConfig Super;


struct FPCGExAttributeDebugDrawConfig;
// ********** End ScriptStruct FPCGExAttributeDebugDrawConfig **************************************

// ********** Begin ScriptStruct FPCGExAttributeDebugDraw ******************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttributeDebugDraw_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FPCGExAttributeDebugDraw;
// ********** End ScriptStruct FPCGExAttributeDebugDraw ********************************************

// ********** Begin Class UPCGExDrawAttributesSettings *********************************************
struct Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDrawAttributesSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExDrawAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExDrawAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExDrawAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExDrawAttributesSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExDrawAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExDrawAttributesSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_148_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExDrawAttributesSettings(UPCGExDrawAttributesSettings&&) = delete; \
	UPCGExDrawAttributesSettings(const UPCGExDrawAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExDrawAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExDrawAttributesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExDrawAttributesSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExDrawAttributesSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_145_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_148_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExDrawAttributesSettings;

// ********** End Class UPCGExDrawAttributesSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExDrawAttributes_h

// ********** Begin Enum EPCGExDebugExpression *****************************************************
#define FOREACH_ENUM_EPCGEXDEBUGEXPRESSION(op) \
	op(EPCGExDebugExpression::Direction) \
	op(EPCGExDebugExpression::ConnectionToIndex) \
	op(EPCGExDebugExpression::ConnectionToPosition) \
	op(EPCGExDebugExpression::Point) \
	op(EPCGExDebugExpression::Boolean) 

enum class EPCGExDebugExpression : uint8;
template<> struct TIsUEnumClass<EPCGExDebugExpression> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDebugExpression>();
// ********** End Enum EPCGExDebugExpression *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
