// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGoalPickerAttribute_generated_h
#error "PCGExGoalPickerAttribute.generated.h already included, missing '#pragma once' in PCGExGoalPickerAttribute.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGoalPickerAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExGoalPickerAttribute ************************************************
struct Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPickerAttribute_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExGoalPickerAttribute(); \
	friend struct ::Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExGoalPickerAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExGoalPickerAttribute, UPCGExGoalPicker, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExGoalPickerAttribute_NoRegister) \
	DECLARE_SERIALIZER(UPCGExGoalPickerAttribute)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExGoalPickerAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExGoalPickerAttribute(UPCGExGoalPickerAttribute&&) = delete; \
	UPCGExGoalPickerAttribute(const UPCGExGoalPickerAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExGoalPickerAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExGoalPickerAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExGoalPickerAttribute) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExGoalPickerAttribute();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_30_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_33_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExGoalPickerAttribute;

// ********** End Class UPCGExGoalPickerAttribute **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h

// ********** Begin Enum EPCGExGoalPickAttributeAmount *********************************************
#define FOREACH_ENUM_EPCGEXGOALPICKATTRIBUTEAMOUNT(op) \
	op(EPCGExGoalPickAttributeAmount::Single) \
	op(EPCGExGoalPickAttributeAmount::List) 

enum class EPCGExGoalPickAttributeAmount : uint8;
template<> struct TIsUEnumClass<EPCGExGoalPickAttributeAmount> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGoalPickAttributeAmount>();
// ********** End Enum EPCGExGoalPickAttributeAmount ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
