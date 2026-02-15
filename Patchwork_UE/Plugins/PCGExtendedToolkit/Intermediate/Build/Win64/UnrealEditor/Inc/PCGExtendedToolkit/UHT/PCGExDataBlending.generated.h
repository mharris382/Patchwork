// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Blending/PCGExDataBlending.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDataBlending_generated_h
#error "PCGExDataBlending.generated.h already included, missing '#pragma once' in PCGExDataBlending.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDataBlending_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAttributeBlendToTargetDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExAttributeSourceToTargetDetails Super;


struct FPCGExAttributeBlendToTargetDetails;
// ********** End ScriptStruct FPCGExAttributeBlendToTargetDetails *********************************

// ********** Begin ScriptStruct FPCGExPointPropertyBlendingOverrides ******************************
struct Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h_196_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPointPropertyBlendingOverrides;
// ********** End ScriptStruct FPCGExPointPropertyBlendingOverrides ********************************

// ********** Begin ScriptStruct FPCGExPropertiesBlendingDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPropertiesBlendingDetails;
// ********** End ScriptStruct FPCGExPropertiesBlendingDetails *************************************

// ********** Begin ScriptStruct FPCGExBlendingDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExBlendingDetails;
// ********** End ScriptStruct FPCGExBlendingDetails ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h

// ********** Begin Enum EPCGExBlendOver ***********************************************************
#define FOREACH_ENUM_EPCGEXBLENDOVER(op) \
	op(EPCGExBlendOver::Distance) \
	op(EPCGExBlendOver::Index) \
	op(EPCGExBlendOver::Fixed) 

enum class EPCGExBlendOver : uint8;
template<> struct TIsUEnumClass<EPCGExBlendOver> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBlendOver>();
// ********** End Enum EPCGExBlendOver *************************************************************

// ********** Begin Enum EPCGExBlendingInterface ***************************************************
#define FOREACH_ENUM_EPCGEXBLENDINGINTERFACE(op) \
	op(EPCGExBlendingInterface::Individual) \
	op(EPCGExBlendingInterface::Monolithic) 

enum class EPCGExBlendingInterface : uint8;
template<> struct TIsUEnumClass<EPCGExBlendingInterface> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBlendingInterface>();
// ********** End Enum EPCGExBlendingInterface *****************************************************

// ********** Begin Enum EPCGExDataBlendingType ****************************************************
#define FOREACH_ENUM_EPCGEXDATABLENDINGTYPE(op) \
	op(EPCGExDataBlendingType::None) \
	op(EPCGExDataBlendingType::Average) \
	op(EPCGExDataBlendingType::Weight) \
	op(EPCGExDataBlendingType::Min) \
	op(EPCGExDataBlendingType::Max) \
	op(EPCGExDataBlendingType::Copy) \
	op(EPCGExDataBlendingType::Sum) \
	op(EPCGExDataBlendingType::WeightedSum) \
	op(EPCGExDataBlendingType::Lerp) \
	op(EPCGExDataBlendingType::Subtract) \
	op(EPCGExDataBlendingType::UnsignedMin) \
	op(EPCGExDataBlendingType::UnsignedMax) \
	op(EPCGExDataBlendingType::AbsoluteMin) \
	op(EPCGExDataBlendingType::AbsoluteMax) \
	op(EPCGExDataBlendingType::WeightedSubtract) \
	op(EPCGExDataBlendingType::CopyOther) \
	op(EPCGExDataBlendingType::Hash) \
	op(EPCGExDataBlendingType::UnsignedHash) \
	op(EPCGExDataBlendingType::Unset) 

enum class EPCGExDataBlendingType : uint8;
template<> struct TIsUEnumClass<EPCGExDataBlendingType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataBlendingType>();
// ********** End Enum EPCGExDataBlendingType ******************************************************

// ********** Begin Enum EPCGExABBlendingType ******************************************************
#define FOREACH_ENUM_EPCGEXABBLENDINGTYPE(op) \
	op(EPCGExABBlendingType::None) \
	op(EPCGExABBlendingType::Average) \
	op(EPCGExABBlendingType::Weight) \
	op(EPCGExABBlendingType::Multiply) \
	op(EPCGExABBlendingType::Divide) \
	op(EPCGExABBlendingType::Min) \
	op(EPCGExABBlendingType::Max) \
	op(EPCGExABBlendingType::CopyTarget) \
	op(EPCGExABBlendingType::CopySource) \
	op(EPCGExABBlendingType::Add) \
	op(EPCGExABBlendingType::Subtract) \
	op(EPCGExABBlendingType::WeightedAdd) \
	op(EPCGExABBlendingType::WeightedSubtract) \
	op(EPCGExABBlendingType::Lerp) \
	op(EPCGExABBlendingType::UnsignedMin) \
	op(EPCGExABBlendingType::UnsignedMax) \
	op(EPCGExABBlendingType::AbsoluteMin) \
	op(EPCGExABBlendingType::AbsoluteMax) \
	op(EPCGExABBlendingType::Hash) \
	op(EPCGExABBlendingType::UnsignedHash) \
	op(EPCGExABBlendingType::Mod) \
	op(EPCGExABBlendingType::ModCW) 

enum class EPCGExABBlendingType : uint8;
template<> struct TIsUEnumClass<EPCGExABBlendingType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExABBlendingType>();
// ********** End Enum EPCGExABBlendingType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
