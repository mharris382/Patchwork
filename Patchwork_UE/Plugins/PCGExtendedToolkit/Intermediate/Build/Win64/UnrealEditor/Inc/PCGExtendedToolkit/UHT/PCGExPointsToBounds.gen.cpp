// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExPointsToBounds.h"
#include "Data/Blending/PCGExDataBlending.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPointsToBounds() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsToBoundsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsToBoundsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPointsToBoundsOutputMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode;
static UEnum* EPCGExPointsToBoundsOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointsToBoundsOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointsToBoundsOutputMode>()
{
	return EPCGExPointsToBoundsOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Collapse.DisplayName", "Collapse" },
		{ "Collapse.Name", "EPCGExPointsToBoundsOutputMode::Collapse" },
		{ "Collapse.Tooltip", "Collapse point set to a single point with the blended properties of the whole." },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "WriteData.DisplayName", "Write Data" },
		{ "WriteData.Name", "EPCGExPointsToBoundsOutputMode::WriteData" },
		{ "WriteData.Tooltip", "Leave points unaffected and write the results to the data domain instead." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointsToBoundsOutputMode::Collapse", (int64)EPCGExPointsToBoundsOutputMode::Collapse },
		{ "EPCGExPointsToBoundsOutputMode::WriteData", (int64)EPCGExPointsToBoundsOutputMode::WriteData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointsToBoundsOutputMode",
	"EPCGExPointsToBoundsOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExPointsToBoundsOutputMode **********************************************

// ********** Begin ScriptStruct FPCGExPointsToBoundsDataDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPointsToBoundsDataDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPointsToBoundsDataDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteTransform" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteDensity" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundsMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMinAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteBoundsMin" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundsMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaxAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteBoundsMax" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteColor" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteSteepness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteepnessAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteSteepness" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBestFitPlane_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestFitPlaneAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteBestFitPlane" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Axis Order" },
		{ "EditCondition", "bWriteBestFitPlane" },
		{ "EditConditionHides", "" },
		{ "HideInlineEditCondition", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPointsToBoundsDataDetails constinit property declarations ***
	static void NewProp_bWriteTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransformAttributeName;
	static void NewProp_bWriteDensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDensity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DensityAttributeName;
	static void NewProp_bWriteBoundsMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundsMin;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundsMinAttributeName;
	static void NewProp_bWriteBoundsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundsMax;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundsMaxAttributeName;
	static void NewProp_bWriteColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorAttributeName;
	static void NewProp_bWriteSteepness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteSteepness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SteepnessAttributeName;
	static void NewProp_bWriteBestFitPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBestFitPlane;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BestFitPlaneAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPointsToBoundsDataDetails constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPointsToBoundsDataDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails;
class UScriptStruct* FPCGExPointsToBoundsDataDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPointsToBoundsDataDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPointsToBoundsDataDetails Property Definitions **************
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteTransform_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteTransform = { "bWriteTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTransform_MetaData), NewProp_bWriteTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_TransformAttributeName = { "TransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, TransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeName_MetaData), NewProp_TransformAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteDensity_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteDensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteDensity = { "bWriteDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDensity_MetaData), NewProp_bWriteDensity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_DensityAttributeName = { "DensityAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, DensityAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityAttributeName_MetaData), NewProp_DensityAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMin_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteBoundsMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMin = { "bWriteBoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundsMin_MetaData), NewProp_bWriteBoundsMin_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BoundsMinAttributeName = { "BoundsMinAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, BoundsMinAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMinAttributeName_MetaData), NewProp_BoundsMinAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMax_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteBoundsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMax = { "bWriteBoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundsMax_MetaData), NewProp_bWriteBoundsMax_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BoundsMaxAttributeName = { "BoundsMaxAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, BoundsMaxAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMaxAttributeName_MetaData), NewProp_BoundsMaxAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteColor_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteColor = { "bWriteColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteColor_MetaData), NewProp_bWriteColor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_ColorAttributeName = { "ColorAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, ColorAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAttributeName_MetaData), NewProp_ColorAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteSteepness_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteSteepness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteSteepness = { "bWriteSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteSteepness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteSteepness_MetaData), NewProp_bWriteSteepness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_SteepnessAttributeName = { "SteepnessAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, SteepnessAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteepnessAttributeName_MetaData), NewProp_SteepnessAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBestFitPlane_SetBit(void* Obj)
{
	((FPCGExPointsToBoundsDataDetails*)Obj)->bWriteBestFitPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBestFitPlane = { "bWriteBestFitPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointsToBoundsDataDetails), &Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBestFitPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBestFitPlane_MetaData), NewProp_bWriteBestFitPlane_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BestFitPlaneAttributeName = { "BestFitPlaneAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, BestFitPlaneAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestFitPlaneAttributeName_MetaData), NewProp_BestFitPlaneAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_AxisOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointsToBoundsDataDetails, AxisOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) }; // 3484752427
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_TransformAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_DensityAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BoundsMinAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BoundsMaxAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_ColorAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteSteepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_SteepnessAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_bWriteBestFitPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_BestFitPlaneAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_AxisOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewProp_AxisOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPointsToBoundsDataDetails Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPointsToBoundsDataDetails",
	Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::PropPointers),
	sizeof(FPCGExPointsToBoundsDataDetails),
	alignof(FPCGExPointsToBoundsDataDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPointsToBoundsDataDetails *************************************

// ********** Begin Class UPCGExPointsToBoundsSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings;
UClass* UPCGExPointsToBoundsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPointsToBoundsSettings;
	if (!Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPointsToBoundsSettings"),
			Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPointsToBoundsSettings,
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
	return Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPointsToBoundsSettings_NoRegister()
{
	return UPCGExPointsToBoundsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExPointsToBounds.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCGExNodeLibraryDoc", "misc/points-to-bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputOrientedBoundingBox_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output Object Oriented Bounds. Note that this only accounts for positions and will ignore point bounds. **/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output Object Oriented Bounds. Note that this only accounts for positions and will ignore point bounds. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Axis Order" },
		{ "EditCondition", "bOutputOrientedBoundingBox" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Overlap overlap test mode */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap overlap test mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to reduce data */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to reduce data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendProperties_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bound point is the result of its contents */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "ToolTip", "Bound point is the result of its contents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged into the final point. */" },
		{ "EditCondition", "bBlendProperties" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged into the final point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which data to write. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which data to write." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointsCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write point counts */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "ToolTip", "Write point counts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsCountAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to write points count to */" },
		{ "EditCondition", "bWritePointsCount" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPointsToBounds.h" },
		{ "ToolTip", "Attribute to write points count to" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPointsToBoundsSettings constinit property declarations *************
	static void NewProp_bOutputOrientedBoundingBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOrientedBoundingBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static void NewProp_bBlendProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataDetails;
	static void NewProp_bWritePointsCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointsCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointsCountAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPointsToBoundsSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPointsToBoundsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics

// ********** Begin Class UPCGExPointsToBoundsSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bOutputOrientedBoundingBox_SetBit(void* Obj)
{
	((UPCGExPointsToBoundsSettings*)Obj)->bOutputOrientedBoundingBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bOutputOrientedBoundingBox = { "bOutputOrientedBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsToBoundsSettings), &Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bOutputOrientedBoundingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOrientedBoundingBox_MetaData), NewProp_bOutputOrientedBoundingBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_AxisOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, AxisOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) }; // 3484752427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointsToBoundsOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 3962403702
void Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bBlendProperties_SetBit(void* Obj)
{
	((UPCGExPointsToBoundsSettings*)Obj)->bBlendProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bBlendProperties = { "bBlendProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsToBoundsSettings), &Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bBlendProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendProperties_MetaData), NewProp_bBlendProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BlendingSettings = { "BlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, BlendingSettings), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingSettings_MetaData), NewProp_BlendingSettings_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_DataDetails = { "DataDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, DataDetails), Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataDetails_MetaData), NewProp_DataDetails_MetaData) }; // 646660035
void Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bWritePointsCount_SetBit(void* Obj)
{
	((UPCGExPointsToBoundsSettings*)Obj)->bWritePointsCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bWritePointsCount = { "bWritePointsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsToBoundsSettings), &Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bWritePointsCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointsCount_MetaData), NewProp_bWritePointsCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_PointsCountAttributeName = { "PointsCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsToBoundsSettings, PointsCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsCountAttributeName_MetaData), NewProp_PointsCountAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bOutputOrientedBoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_AxisOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bBlendProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_BlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_DataDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_bWritePointsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::NewProp_PointsCountAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPointsToBoundsSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::ClassParams = {
	&UPCGExPointsToBoundsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::Class_MetaDataParams)
};
void UPCGExPointsToBoundsSettings::StaticRegisterNativesUPCGExPointsToBoundsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPointsToBoundsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.OuterSingleton, Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings.OuterSingleton;
}
UPCGExPointsToBoundsSettings::UPCGExPointsToBoundsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPointsToBoundsSettings);
UPCGExPointsToBoundsSettings::~UPCGExPointsToBoundsSettings() {}
// ********** End Class UPCGExPointsToBoundsSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPointsToBoundsOutputMode_StaticEnum, TEXT("EPCGExPointsToBoundsOutputMode"), &Z_Registration_Info_UEnum_EPCGExPointsToBoundsOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3962403702U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPointsToBoundsDataDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics::NewStructOps, TEXT("PCGExPointsToBoundsDataDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPointsToBoundsDataDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPointsToBoundsDataDetails), 646660035U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPointsToBoundsSettings, UPCGExPointsToBoundsSettings::StaticClass, TEXT("UPCGExPointsToBoundsSettings"), &Z_Registration_Info_UClass_UPCGExPointsToBoundsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPointsToBoundsSettings), 2483337400U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_163735539{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
