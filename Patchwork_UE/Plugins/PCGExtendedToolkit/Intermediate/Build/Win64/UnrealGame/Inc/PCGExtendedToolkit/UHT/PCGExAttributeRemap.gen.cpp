// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExAttributeRemap.h"
#include "Curves/CurveFloat.h"
#include "Details/PCGExDetailsAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeRemap() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeRemapSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeRemapSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExClampDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExComponentRemapRule();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRemapDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExClampDetails ************************************************
struct Z_Construct_UScriptStruct_FPCGExClampDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExClampDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExClampDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Clamp minimum value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Clamp minimum value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Clamp minimum value. */" },
		{ "EditCondition", "bApplyClampMin" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Clamp minimum value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Clamp maximum value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Clamp maximum value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMaxValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Clamp maximum value. */" },
		{ "EditCondition", "bApplyClampMax" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Clamp maximum value." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExClampDetails constinit property declarations ****************
	static void NewProp_bApplyClampMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyClampMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClampMinValue;
	static void NewProp_bApplyClampMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyClampMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClampMaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExClampDetails constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExClampDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExClampDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExClampDetails;
class UScriptStruct* FPCGExClampDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExClampDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExClampDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExClampDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExClampDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExClampDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExClampDetails Property Definitions ***************************
void Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMin_SetBit(void* Obj)
{
	((FPCGExClampDetails*)Obj)->bApplyClampMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMin = { "bApplyClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExClampDetails), &Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyClampMin_MetaData), NewProp_bApplyClampMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_ClampMinValue = { "ClampMinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExClampDetails, ClampMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMinValue_MetaData), NewProp_ClampMinValue_MetaData) };
void Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMax_SetBit(void* Obj)
{
	((FPCGExClampDetails*)Obj)->bApplyClampMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMax = { "bApplyClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExClampDetails), &Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyClampMax_MetaData), NewProp_bApplyClampMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_ClampMaxValue = { "ClampMaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExClampDetails, ClampMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMaxValue_MetaData), NewProp_ClampMaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_ClampMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_bApplyClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewProp_ClampMaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExClampDetails Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExClampDetails",
	Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::PropPointers),
	sizeof(FPCGExClampDetails),
	alignof(FPCGExClampDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExClampDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExClampDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExClampDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExClampDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExClampDetails **************************************************

// ********** Begin ScriptStruct FPCGExRemapDetails ************************************************
struct Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExRemapDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExRemapDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to use only positive values to compute range.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to use only positive values to compute range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveSign_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to preserve value sign when using absolute range.*/" },
		{ "EditCondition", "bUseAbsoluteRange" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to preserve value sign when using absolute range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fixed In Min value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fixed In Min value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fixed In Min value. If disabled, will use the lowest input value.*/" },
		{ "EditCondition", "bUseInMin" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fixed In Min value. If disabled, will use the lowest input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fixed In Max value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fixed In Max value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fixed In Max value. If disabled, will use the highest input value.*/" },
		{ "EditCondition", "bUseInMax" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fixed In Max value. If disabled, will use the highest input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to remap before sampling the curve. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How to remap before sampling the curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale output value. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale output value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalScoreCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// TODO: DirtyCache for OnDependencyChanged when this float curve is an external asset\n" },
		{ "DisplayName", "Remap Curve" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "TODO: DirtyCache for OnDependencyChanged when this float curve is an external asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Remap Curve" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TruncateOutput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether and how to truncate output value. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to truncate output value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostTruncateScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale the value after it's been truncated. */" },
		{ "EditCondition", "TruncateOutput != EPCGExTruncateMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale the value after it's been truncated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset applied to the component after remap. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset applied to the component after remap." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExRemapDetails constinit property declarations ****************
	static void NewProp_bUseAbsoluteRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteRange;
	static void NewProp_bPreserveSign_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveSign;
	static void NewProp_bUseInMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InMin;
	static void NewProp_bUseInMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Scale;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalScoreCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RemapCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TruncateOutput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TruncateOutput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PostTruncateScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExRemapDetails constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExRemapDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExRemapDetails;
class UScriptStruct* FPCGExRemapDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExRemapDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExRemapDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExRemapDetails Property Definitions ***************************
void Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseAbsoluteRange_SetBit(void* Obj)
{
	((FPCGExRemapDetails*)Obj)->bUseAbsoluteRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseAbsoluteRange = { "bUseAbsoluteRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRemapDetails), &Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseAbsoluteRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAbsoluteRange_MetaData), NewProp_bUseAbsoluteRange_MetaData) };
void Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bPreserveSign_SetBit(void* Obj)
{
	((FPCGExRemapDetails*)Obj)->bPreserveSign = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bPreserveSign = { "bPreserveSign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRemapDetails), &Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bPreserveSign_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveSign_MetaData), NewProp_bPreserveSign_MetaData) };
void Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMin_SetBit(void* Obj)
{
	((FPCGExRemapDetails*)Obj)->bUseInMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMin = { "bUseInMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRemapDetails), &Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInMin_MetaData), NewProp_bUseInMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, InMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMin_MetaData), NewProp_InMin_MetaData) };
void Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMax_SetBit(void* Obj)
{
	((FPCGExRemapDetails*)Obj)->bUseInMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMax = { "bUseInMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRemapDetails), &Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInMax_MetaData), NewProp_bUseInMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, InMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMax_MetaData), NewProp_InMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RangeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RangeMethod = { "RangeMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, RangeMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMethod_MetaData), NewProp_RangeMethod_MetaData) }; // 1971727460
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
void Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((FPCGExRemapDetails*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExRemapDetails), &Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_LocalScoreCurve = { "LocalScoreCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, LocalScoreCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalScoreCurve_MetaData), NewProp_LocalScoreCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RemapCurve = { "RemapCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, RemapCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapCurve_MetaData), NewProp_RemapCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_TruncateOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_TruncateOutput = { "TruncateOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, TruncateOutput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TruncateOutput_MetaData), NewProp_TruncateOutput_MetaData) }; // 3854127603
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_PostTruncateScale = { "PostTruncateScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, PostTruncateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostTruncateScale_MetaData), NewProp_PostTruncateScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRemapDetails, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseAbsoluteRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bPreserveSign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseInMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RangeMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RangeMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_LocalScoreCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_RemapCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_TruncateOutput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_TruncateOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_PostTruncateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExRemapDetails Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExRemapDetails",
	Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::PropPointers),
	sizeof(FPCGExRemapDetails),
	alignof(FPCGExRemapDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExRemapDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExRemapDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExRemapDetails **************************************************

// ********** Begin ScriptStruct FPCGExComponentRemapRule ******************************************
struct Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExComponentRemapRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExComponentRemapRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputClampDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputClampDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExComponentRemapRule constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputClampDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemapDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputClampDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExComponentRemapRule constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExComponentRemapRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule;
class UScriptStruct* FPCGExComponentRemapRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExComponentRemapRule, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExComponentRemapRule"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExComponentRemapRule Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_InputClampDetails = { "InputClampDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExComponentRemapRule, InputClampDetails), Z_Construct_UScriptStruct_FPCGExClampDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputClampDetails_MetaData), NewProp_InputClampDetails_MetaData) }; // 3607861003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_RemapDetails = { "RemapDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExComponentRemapRule, RemapDetails), Z_Construct_UScriptStruct_FPCGExRemapDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapDetails_MetaData), NewProp_RemapDetails_MetaData) }; // 2035401771
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_OutputClampDetails = { "OutputClampDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExComponentRemapRule, OutputClampDetails), Z_Construct_UScriptStruct_FPCGExClampDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputClampDetails_MetaData), NewProp_OutputClampDetails_MetaData) }; // 3607861003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_InputClampDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_RemapDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewProp_OutputClampDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExComponentRemapRule Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExComponentRemapRule",
	Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::PropPointers),
	sizeof(FPCGExComponentRemapRule),
	alignof(FPCGExComponentRemapRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExComponentRemapRule()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.InnerSingleton, Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule.InnerSingleton);
}
// ********** End ScriptStruct FPCGExComponentRemapRule ********************************************

// ********** Begin Class UPCGExAttributeRemapSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeRemapSettings;
UClass* UPCGExAttributeRemapSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeRemapSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeRemapSettings"),
			Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeRemapSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeRemapSettings_NoRegister()
{
	return UPCGExAttributeRemapSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExAttributeRemap.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCGExNodeLibraryDoc", "metadata/attribute-remap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributeName_MetaData[] = {
		{ "Comment", "// Deprecated, old source/target\n" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "ToolTip", "Deprecated, old source/target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCastIntegerToDouble_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If enabled, will auto-cast integer to double. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will auto-cast integer to double." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRemap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The default remap rule, used for single component values, or first component (X), or all components if no individual override is specified. */" },
		{ "DisplayName", "Remap (Default)" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The default remap rule, used for single component values, or first component (X), or all components if no individual override is specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideComponent2_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component2RemapOverride_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "Comment", "/** Remap rule used for second (Y) value component. */" },
		{ "DisplayName", "Remap (2nd Component)" },
		{ "EditCondition", "bOverrideComponent2" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Remap rule used for second (Y) value component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideComponent3_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component3RemapOverride_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "Comment", "/** Remap rule used for third (Z) value component. */" },
		{ "DisplayName", "Remap (3rd Component)" },
		{ "EditCondition", "bOverrideComponent3" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Remap rule used for third (Z) value component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideComponent4_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component4RemapOverride_MetaData[] = {
		{ "Category", "Settings|Individual Components" },
		{ "Comment", "/** Remap rule used for fourth (W) value component. */" },
		{ "DisplayName", "Remap (4th Component)" },
		{ "EditCondition", "bOverrideComponent4" },
		{ "ModuleRelativePath", "Public/Misc/PCGExAttributeRemap.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Remap rule used for fourth (W) value component." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeRemapSettings constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static void NewProp_bAutoCastIntegerToDouble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCastIntegerToDouble;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRemap;
	static void NewProp_bOverrideComponent2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideComponent2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Component2RemapOverride;
	static void NewProp_bOverrideComponent3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideComponent3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Component3RemapOverride;
	static void NewProp_bOverrideComponent4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideComponent4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Component4RemapOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeRemapSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeRemapSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics

// ********** Begin Class UPCGExAttributeRemapSettings Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_SourceAttributeName = { "SourceAttributeName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, SourceAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributeName_MetaData), NewProp_SourceAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_TargetAttributeName = { "TargetAttributeName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, TargetAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributeName_MetaData), NewProp_TargetAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, Attributes), Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 2258194026
void Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bAutoCastIntegerToDouble_SetBit(void* Obj)
{
	((UPCGExAttributeRemapSettings*)Obj)->bAutoCastIntegerToDouble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bAutoCastIntegerToDouble = { "bAutoCastIntegerToDouble", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRemapSettings), &Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bAutoCastIntegerToDouble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCastIntegerToDouble_MetaData), NewProp_bAutoCastIntegerToDouble_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_BaseRemap = { "BaseRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, BaseRemap), Z_Construct_UScriptStruct_FPCGExComponentRemapRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRemap_MetaData), NewProp_BaseRemap_MetaData) }; // 2544150559
void Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent2_SetBit(void* Obj)
{
	((UPCGExAttributeRemapSettings*)Obj)->bOverrideComponent2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent2 = { "bOverrideComponent2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRemapSettings), &Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideComponent2_MetaData), NewProp_bOverrideComponent2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component2RemapOverride = { "Component2RemapOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, Component2RemapOverride), Z_Construct_UScriptStruct_FPCGExComponentRemapRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component2RemapOverride_MetaData), NewProp_Component2RemapOverride_MetaData) }; // 2544150559
void Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent3_SetBit(void* Obj)
{
	((UPCGExAttributeRemapSettings*)Obj)->bOverrideComponent3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent3 = { "bOverrideComponent3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRemapSettings), &Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideComponent3_MetaData), NewProp_bOverrideComponent3_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component3RemapOverride = { "Component3RemapOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, Component3RemapOverride), Z_Construct_UScriptStruct_FPCGExComponentRemapRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component3RemapOverride_MetaData), NewProp_Component3RemapOverride_MetaData) }; // 2544150559
void Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent4_SetBit(void* Obj)
{
	((UPCGExAttributeRemapSettings*)Obj)->bOverrideComponent4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent4 = { "bOverrideComponent4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRemapSettings), &Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideComponent4_MetaData), NewProp_bOverrideComponent4_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component4RemapOverride = { "Component4RemapOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRemapSettings, Component4RemapOverride), Z_Construct_UScriptStruct_FPCGExComponentRemapRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component4RemapOverride_MetaData), NewProp_Component4RemapOverride_MetaData) }; // 2544150559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_SourceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_TargetAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bAutoCastIntegerToDouble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_BaseRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component2RemapOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component3RemapOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_bOverrideComponent4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::NewProp_Component4RemapOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeRemapSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::ClassParams = {
	&UPCGExAttributeRemapSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributeRemapSettings::StaticRegisterNativesUPCGExAttributeRemapSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeRemapSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributeRemapSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeRemapSettings.OuterSingleton;
}
UPCGExAttributeRemapSettings::UPCGExAttributeRemapSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeRemapSettings);
UPCGExAttributeRemapSettings::~UPCGExAttributeRemapSettings() {}
// ********** End Class UPCGExAttributeRemapSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExClampDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExClampDetails_Statics::NewStructOps, TEXT("PCGExClampDetails"),&Z_Registration_Info_UScriptStruct_FPCGExClampDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExClampDetails), 3607861003U) },
		{ FPCGExRemapDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExRemapDetails_Statics::NewStructOps, TEXT("PCGExRemapDetails"),&Z_Registration_Info_UScriptStruct_FPCGExRemapDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExRemapDetails), 2035401771U) },
		{ FPCGExComponentRemapRule::StaticStruct, Z_Construct_UScriptStruct_FPCGExComponentRemapRule_Statics::NewStructOps, TEXT("PCGExComponentRemapRule"),&Z_Registration_Info_UScriptStruct_FPCGExComponentRemapRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExComponentRemapRule), 2544150559U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributeRemapSettings, UPCGExAttributeRemapSettings::StaticClass, TEXT("UPCGExAttributeRemapSettings"), &Z_Registration_Info_UClass_UPCGExAttributeRemapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeRemapSettings), 1588154874U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_490968130{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeRemap_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
