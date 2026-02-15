// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExTransform.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTransform() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttachmentRules();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAxisDeformDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAxisTwistDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocket();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketFitDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExUVW();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTransformMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTransformMode;
static UEnum* EPCGExTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTransformMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExTransformMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTransformMode>()
{
	return EPCGExTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "EPCGExTransformMode::Absolute" },
		{ "Absolute.ToolTip", "Absolute, ignores source transform." },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "Relative.DisplayName", "Relative" },
		{ "Relative.Name", "EPCGExTransformMode::Relative" },
		{ "Relative.ToolTip", "Relative to source transform." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTransformMode::Absolute", (int64)EPCGExTransformMode::Absolute },
		{ "EPCGExTransformMode::Relative", (int64)EPCGExTransformMode::Relative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTransformMode",
	"EPCGExTransformMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTransformMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTransformMode.InnerSingleton;
}
// ********** End Enum EPCGExTransformMode *********************************************************

// ********** Begin Enum EPCGExTransformAlphaUsage *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage;
static UEnum* EPCGExTransformAlphaUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTransformAlphaUsage"));
	}
	return Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTransformAlphaUsage>()
{
	return EPCGExTransformAlphaUsage_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CenterAndSize.DisplayName", "Center & Size" },
		{ "CenterAndSize.Name", "EPCGExTransformAlphaUsage::CenterAndSize" },
		{ "CenterAndSize.Tooltip", "First alpha is to be used as center % along the axis, and second alpha is a % of the axis length, before and after the center." },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "StartAndEnd.DisplayName", "Start & End" },
		{ "StartAndEnd.Name", "EPCGExTransformAlphaUsage::StartAndEnd" },
		{ "StartAndEnd.Tooltip", "First alpha is to be used as start % along the axis, and second alpha is the end % along that same axis." },
		{ "StartAndSize.DisplayName", "Start & Size" },
		{ "StartAndSize.Name", "EPCGExTransformAlphaUsage::StartAndSize" },
		{ "StartAndSize.Tooltip", "First alpha is to be used as start % along the axis, and second alpha is a % of the axis length, from first alpha." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTransformAlphaUsage::StartAndEnd", (int64)EPCGExTransformAlphaUsage::StartAndEnd },
		{ "EPCGExTransformAlphaUsage::StartAndSize", (int64)EPCGExTransformAlphaUsage::StartAndSize },
		{ "EPCGExTransformAlphaUsage::CenterAndSize", (int64)EPCGExTransformAlphaUsage::CenterAndSize },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTransformAlphaUsage",
	"EPCGExTransformAlphaUsage",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage()
{
	if (!Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage.InnerSingleton;
}
// ********** End Enum EPCGExTransformAlphaUsage ***************************************************

// ********** Begin ScriptStruct FPCGExAttachmentRules *********************************************
struct Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttachmentRules); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttachmentRules); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The rule to apply to location when attaching */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "ToolTip", "The rule to apply to location when attaching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The rule to apply to rotation when attaching */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "ToolTip", "The rule to apply to rotation when attaching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The rule to apply to scale when attaching */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "ToolTip", "The rule to apply to scale when attaching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to weld simulated bodies together when attaching */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "ToolTip", "Whether to weld simulated bodies together when attaching" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttachmentRules constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttachmentRules constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttachmentRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules;
class UScriptStruct* FPCGExAttachmentRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttachmentRules, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttachmentRules"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttachmentRules Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttachmentRules, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationRule_MetaData), NewProp_LocationRule_MetaData) }; // 372168307
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttachmentRules, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRule_MetaData), NewProp_RotationRule_MetaData) }; // 372168307
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttachmentRules, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRule_MetaData), NewProp_ScaleRule_MetaData) }; // 372168307
void Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
{
	((FPCGExAttachmentRules*)Obj)->bWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttachmentRules), &Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeldSimulatedBodies_MetaData), NewProp_bWeldSimulatedBodies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_ScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewProp_bWeldSimulatedBodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttachmentRules Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttachmentRules",
	Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::PropPointers),
	sizeof(FPCGExAttachmentRules),
	alignof(FPCGExAttachmentRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttachmentRules()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttachmentRules ***********************************************

// ********** Begin ScriptStruct FPCGExSocket ******************************************************
struct Z_Construct_UScriptStruct_FPCGExSocket_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSocket); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSocket); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManaged_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bManaged" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bManaged" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bManaged" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSocket constinit property declarations **********************
	static void NewProp_bManaged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManaged;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSocket constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSocket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSocket_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSocket;
class UScriptStruct* FPCGExSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSocket, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSocket"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSocket.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSocket Property Definitions *********************************
void Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_bManaged_SetBit(void* Obj)
{
	((FPCGExSocket*)Obj)->bManaged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_bManaged = { "bManaged", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocket), &Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_bManaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManaged_MetaData), NewProp_bManaged_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocket, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocket, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocket, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_bManaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocket_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSocket Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSocket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSocket",
	Z_Construct_UScriptStruct_FPCGExSocket_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocket_Statics::PropPointers),
	sizeof(FPCGExSocket),
	alignof(FPCGExSocket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSocket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocket()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSocket.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSocket_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSocket.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSocket ********************************************************

// ********** Begin ScriptStruct FPCGExSocketFitDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSocketFitDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSocketFitDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether socket fit is enabled or not */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether socket fit is enabled or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Socket name input */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Socket name input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read socket name from. */" },
		{ "DisplayName", "Socket Name (Attr)" },
		{ "EditCondition", "bEnabled && SocketNameInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read socket name from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Socket name */" },
		{ "DisplayName", "Socket Name" },
		{ "EditCondition", "bEnabled && SocketNameInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Socket name" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSocketFitDetails constinit property declarations ************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SocketNameInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SocketNameInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSocketFitDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSocketFitDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails;
class UScriptStruct* FPCGExSocketFitDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSocketFitDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSocketFitDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSocketFitDetails Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExSocketFitDetails*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSocketFitDetails), &Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameInput = { "SocketNameInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketFitDetails, SocketNameInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameInput_MetaData), NewProp_SocketNameInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameAttribute = { "SocketNameAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketFitDetails, SocketNameAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameAttribute_MetaData), NewProp_SocketNameAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSocketFitDetails, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketNameAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSocketFitDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSocketFitDetails",
	Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::PropPointers),
	sizeof(FPCGExSocketFitDetails),
	alignof(FPCGExSocketFitDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketFitDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSocketFitDetails **********************************************

// ********** Begin ScriptStruct FPCGExUVW *********************************************************
struct Z_Construct_UScriptStruct_FPCGExUVW_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExUVW); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExUVW); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsReference_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** U Source */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "U Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** U Attribute */" },
		{ "DisplayName", "U (Attr)" },
		{ "EditCondition", "UInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "U Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** U Constant */" },
		{ "DisplayName", "U" },
		{ "EditCondition", "UInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "U Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** V Source */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "V Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** V Attribute */" },
		{ "DisplayName", "V (Attr)" },
		{ "EditCondition", "VInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "V Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** V Constant */" },
		{ "DisplayName", "V" },
		{ "EditCondition", "VInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "V Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** W Source */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "W Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** W Attribute */" },
		{ "DisplayName", "W (Attr)" },
		{ "EditCondition", "WInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "W Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** W Constant */" },
		{ "DisplayName", "W" },
		{ "EditCondition", "WInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "W Constant" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExUVW constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsReference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsReference;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExUVW constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExUVW>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExUVW_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExUVW;
class UScriptStruct* FPCGExUVW::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExUVW.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExUVW.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExUVW, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExUVW"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExUVW.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExUVW Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_BoundsReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_BoundsReference = { "BoundsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, BoundsReference), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsReference_MetaData), NewProp_BoundsReference_MetaData) }; // 926722312
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UInput = { "UInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, UInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UInput_MetaData), NewProp_UInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UAttribute = { "UAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, UAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UAttribute_MetaData), NewProp_UAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UConstant = { "UConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, UConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UConstant_MetaData), NewProp_UConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VInput = { "VInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, VInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VInput_MetaData), NewProp_VInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VAttribute = { "VAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, VAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VAttribute_MetaData), NewProp_VAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VConstant = { "VConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, VConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VConstant_MetaData), NewProp_VConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WInput = { "WInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, WInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WInput_MetaData), NewProp_WInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WAttribute = { "WAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, WAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WAttribute_MetaData), NewProp_WAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WConstant = { "WConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUVW, WConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WConstant_MetaData), NewProp_WConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExUVW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_BoundsReference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_BoundsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_UConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_VConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewProp_WConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUVW_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExUVW Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExUVW_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExUVW",
	Z_Construct_UScriptStruct_FPCGExUVW_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUVW_Statics::PropPointers),
	sizeof(FPCGExUVW),
	alignof(FPCGExUVW),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUVW_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExUVW_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExUVW()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExUVW.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExUVW.InnerSingleton, Z_Construct_UScriptStruct_FPCGExUVW_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExUVW.InnerSingleton);
}
// ********** End ScriptStruct FPCGExUVW ***********************************************************

// ********** Begin ScriptStruct FPCGExAxisDeformDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAxisDeformDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAxisDeformDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstAlphaInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstAlphaAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read start value from. */" },
		{ "DisplayName", "First Alpha (Attr)" },
		{ "EditCondition", "FirstAlphaInput != EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read start value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstAlphaConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant start value. */" },
		{ "DisplayName", "First Alpha" },
		{ "EditCondition", "FirstAlphaInput == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant start value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondAlphaInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondAlphaAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read end value from. */" },
		{ "DisplayName", "Second Alpha (Attr)" },
		{ "EditCondition", "SecondAlphaInput != EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read end value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondAlphaConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant end value. */" },
		{ "DisplayName", "Second Alpha" },
		{ "EditCondition", "SecondAlphaInput == EPCGExSampleSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant end value." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAxisDeformDetails constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstAlphaInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstAlphaInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstAlphaAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FirstAlphaConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondAlphaInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondAlphaInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SecondAlphaAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SecondAlphaConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAxisDeformDetails constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAxisDeformDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails;
class UScriptStruct* FPCGExAxisDeformDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAxisDeformDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAxisDeformDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAxisDeformDetails Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, Usage), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformAlphaUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) }; // 3214646529
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaInput = { "FirstAlphaInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, FirstAlphaInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstAlphaInput_MetaData), NewProp_FirstAlphaInput_MetaData) }; // 925482475
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaAttribute = { "FirstAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, FirstAlphaAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstAlphaAttribute_MetaData), NewProp_FirstAlphaAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaConstant = { "FirstAlphaConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, FirstAlphaConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstAlphaConstant_MetaData), NewProp_FirstAlphaConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaInput = { "SecondAlphaInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, SecondAlphaInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondAlphaInput_MetaData), NewProp_SecondAlphaInput_MetaData) }; // 925482475
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaAttribute = { "SecondAlphaAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, SecondAlphaAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondAlphaAttribute_MetaData), NewProp_SecondAlphaAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaConstant = { "SecondAlphaConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAxisDeformDetails, SecondAlphaConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondAlphaConstant_MetaData), NewProp_SecondAlphaConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_Usage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_Usage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_FirstAlphaConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewProp_SecondAlphaConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAxisDeformDetails Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAxisDeformDetails",
	Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::PropPointers),
	sizeof(FPCGExAxisDeformDetails),
	alignof(FPCGExAxisDeformDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAxisDeformDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAxisDeformDetails *********************************************

// ********** Begin ScriptStruct FPCGExAxisTwistDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAxisTwistDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAxisTwistDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTransform.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAxisTwistDetails constinit property declarations ************
// ********** End ScriptStruct FPCGExAxisTwistDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAxisTwistDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails;
class UScriptStruct* FPCGExAxisTwistDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAxisTwistDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAxisTwistDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAxisTwistDetails",
	nullptr,
	0,
	sizeof(FPCGExAxisTwistDetails),
	alignof(FPCGExAxisTwistDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAxisTwistDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAxisTwistDetails **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTransformMode_StaticEnum, TEXT("EPCGExTransformMode"), &Z_Registration_Info_UEnum_EPCGExTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1160352698U) },
		{ EPCGExTransformAlphaUsage_StaticEnum, TEXT("EPCGExTransformAlphaUsage"), &Z_Registration_Info_UEnum_EPCGExTransformAlphaUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3214646529U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttachmentRules::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics::NewStructOps, TEXT("PCGExAttachmentRules"),&Z_Registration_Info_UScriptStruct_FPCGExAttachmentRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttachmentRules), 2108791550U) },
		{ FPCGExSocket::StaticStruct, Z_Construct_UScriptStruct_FPCGExSocket_Statics::NewStructOps, TEXT("PCGExSocket"),&Z_Registration_Info_UScriptStruct_FPCGExSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSocket), 61619117U) },
		{ FPCGExSocketFitDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics::NewStructOps, TEXT("PCGExSocketFitDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSocketFitDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSocketFitDetails), 3950459357U) },
		{ FPCGExUVW::StaticStruct, Z_Construct_UScriptStruct_FPCGExUVW_Statics::NewStructOps, TEXT("PCGExUVW"),&Z_Registration_Info_UScriptStruct_FPCGExUVW, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExUVW), 389750353U) },
		{ FPCGExAxisDeformDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics::NewStructOps, TEXT("PCGExAxisDeformDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAxisDeformDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAxisDeformDetails), 2035062236U) },
		{ FPCGExAxisTwistDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics::NewStructOps, TEXT("PCGExAxisTwistDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAxisTwistDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAxisTwistDetails), 1544269048U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_2337701875{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
