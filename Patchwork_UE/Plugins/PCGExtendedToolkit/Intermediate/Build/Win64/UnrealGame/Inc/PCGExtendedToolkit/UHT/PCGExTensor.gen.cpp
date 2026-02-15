// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensor.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTensorSamplingMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTensorSamplingMode;
static UEnum* EPCGExTensorSamplingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTensorSamplingMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorSamplingMode>()
{
	return EPCGExTensorSamplingMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "OrderedInPlace.DisplayName", "Ordered (in place)" },
		{ "OrderedInPlace.Name", "EPCGExTensorSamplingMode::OrderedInPlace" },
		{ "OrderedInPlace.ToolTip", "Applies tensor one after another in order, using the same original position" },
		{ "OrderedMutated.DisplayName", "Ordered (mutated)" },
		{ "OrderedMutated.Name", "EPCGExTensorSamplingMode::OrderedMutated" },
		{ "OrderedMutated.ToolTip", "Applies tensor & update sampling position one after another in order" },
		{ "Weighted.DisplayName", "Weighted" },
		{ "Weighted.Name", "EPCGExTensorSamplingMode::Weighted" },
		{ "Weighted.ToolTip", "Compute a weighted average of the sampled tensors" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTensorSamplingMode::Weighted", (int64)EPCGExTensorSamplingMode::Weighted },
		{ "EPCGExTensorSamplingMode::OrderedInPlace", (int64)EPCGExTensorSamplingMode::OrderedInPlace },
		{ "EPCGExTensorSamplingMode::OrderedMutated", (int64)EPCGExTensorSamplingMode::OrderedMutated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTensorSamplingMode",
	"EPCGExTensorSamplingMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorSamplingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTensorSamplingMode.InnerSingleton;
}
// ********** End Enum EPCGExTensorSamplingMode ****************************************************

// ********** Begin Enum EPCGExEffectorFlattenMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode;
static UEnum* EPCGExEffectorFlattenMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEffectorFlattenMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEffectorFlattenMode>()
{
	return EPCGExEffectorFlattenMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Closest.DisplayName", "Closest" },
		{ "Closest.Name", "EPCGExEffectorFlattenMode::Closest" },
		{ "Closest.ToolTip", "Uses the closest effector only" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "StrongestPotency.DisplayName", "Strongest (Potency)" },
		{ "StrongestPotency.Name", "EPCGExEffectorFlattenMode::StrongestPotency" },
		{ "StrongestPotency.ToolTip", "Uses the effector with the highest potency only" },
		{ "StrongestWeight.DisplayName", "Strongest (Weight)" },
		{ "StrongestWeight.Name", "EPCGExEffectorFlattenMode::StrongestWeight" },
		{ "StrongestWeight.ToolTip", "Uses the effector with the highest weight only" },
		{ "Weighted.DisplayName", "Weighted" },
		{ "Weighted.Name", "EPCGExEffectorFlattenMode::Weighted" },
		{ "Weighted.ToolTip", "Compute a weighted average of the sampled effectors" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEffectorFlattenMode::Weighted", (int64)EPCGExEffectorFlattenMode::Weighted },
		{ "EPCGExEffectorFlattenMode::Closest", (int64)EPCGExEffectorFlattenMode::Closest },
		{ "EPCGExEffectorFlattenMode::StrongestWeight", (int64)EPCGExEffectorFlattenMode::StrongestWeight },
		{ "EPCGExEffectorFlattenMode::StrongestPotency", (int64)EPCGExEffectorFlattenMode::StrongestPotency },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEffectorFlattenMode",
	"EPCGExEffectorFlattenMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode.InnerSingleton;
}
// ********** End Enum EPCGExEffectorFlattenMode ***************************************************

// ********** Begin Enum EPCGExEffectorInfluenceShape **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape;
static UEnum* EPCGExEffectorInfluenceShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEffectorInfluenceShape"));
	}
	return Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEffectorInfluenceShape>()
{
	return EPCGExEffectorInfluenceShape_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EPCGExEffectorInfluenceShape::Box" },
		{ "Box.Tooltip", "Point' bounds" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EPCGExEffectorInfluenceShape::Sphere" },
		{ "Sphere.Tooltip", "Sphere which radius is defined by the bounds' extents size" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEffectorInfluenceShape::Box", (int64)EPCGExEffectorInfluenceShape::Box },
		{ "EPCGExEffectorInfluenceShape::Sphere", (int64)EPCGExEffectorInfluenceShape::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEffectorInfluenceShape",
	"EPCGExEffectorInfluenceShape",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape()
{
	if (!Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorInfluenceShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape.InnerSingleton;
}
// ********** End Enum EPCGExEffectorInfluenceShape ************************************************

// ********** Begin Enum EPCGExTensorStopConditionHandling *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling;
static UEnum* EPCGExTensorStopConditionHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTensorStopConditionHandling"));
	}
	return Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorStopConditionHandling>()
{
	return EPCGExTensorStopConditionHandling_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Exclude.DisplayName", "Exclude" },
		{ "Exclude.Name", "EPCGExTensorStopConditionHandling::Exclude" },
		{ "Exclude.Tooltip", "Ignore the stopping sample and don't add it to the path." },
		{ "Include.DisplayName", "Include" },
		{ "Include.Name", "EPCGExTensorStopConditionHandling::Include" },
		{ "Include.Tooltip", "Include the stopping sample to the path." },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTensorStopConditionHandling::Exclude", (int64)EPCGExTensorStopConditionHandling::Exclude },
		{ "EPCGExTensorStopConditionHandling::Include", (int64)EPCGExTensorStopConditionHandling::Include },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTensorStopConditionHandling",
	"EPCGExTensorStopConditionHandling",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling.InnerSingleton;
}
// ********** End Enum EPCGExTensorStopConditionHandling *******************************************

// ********** Begin ScriptStruct FPCGExTensorSamplingMutationsDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorSamplingMutationsDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorSamplingMutationsDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, sample will be mirrored. Computed before bidirectional. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, sample will be mirrored. Computed before bidirectional." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBidirectional_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, perform a dot product with the direction of the input transform and the resuting sample. If that dot product is < 0, the sampled direction and size is reversed. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, perform a dot product with the direction of the input transform and the resuting sample. If that dot product is < 0, the sampled direction and size is reversed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BidirectionalAxisReference_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Local axis from input transform used to test if the sampled direction should be inverted */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Reference Axis" },
		{ "EditCondition", "bBidirectional" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Local axis from input transform used to test if the sampled direction should be inverted" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorSamplingMutationsDetails constinit property declarations 
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bBidirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBidirectional;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BidirectionalAxisReference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BidirectionalAxisReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorSamplingMutationsDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorSamplingMutationsDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails;
class UScriptStruct* FPCGExTensorSamplingMutationsDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorSamplingMutationsDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorSamplingMutationsDetails Property Definitions *********
void Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExTensorSamplingMutationsDetails*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorSamplingMutationsDetails), &Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bBidirectional_SetBit(void* Obj)
{
	((FPCGExTensorSamplingMutationsDetails*)Obj)->bBidirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bBidirectional = { "bBidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorSamplingMutationsDetails), &Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bBidirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBidirectional_MetaData), NewProp_bBidirectional_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_BidirectionalAxisReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_BidirectionalAxisReference = { "BidirectionalAxisReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSamplingMutationsDetails, BidirectionalAxisReference), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BidirectionalAxisReference_MetaData), NewProp_BidirectionalAxisReference_MetaData) }; // 1564008668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_bBidirectional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_BidirectionalAxisReference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewProp_BidirectionalAxisReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorSamplingMutationsDetails Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTensorSamplingMutationsDetails",
	Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::PropPointers),
	sizeof(FPCGExTensorSamplingMutationsDetails),
	alignof(FPCGExTensorSamplingMutationsDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorSamplingMutationsDetails ********************************

// ********** Begin ScriptStruct FPCGExTensorConfigBase ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportMutations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalGuideCurve_MetaData[] = {
		{ "Category", "Settings|Guide" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalGuideCurve_MetaData[] = {
		{ "Category", "Settings|Guide" },
		{ "Comment", "/** Per-point Guide curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Guide Curve" },
		{ "EditCondition", "bUseLocalGuideCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Per-point Guide curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuideCurve_MetaData[] = {
		{ "Category", "Settings|Guide" },
		{ "Comment", "/** Per-point Weight falloff curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Guide Curve" },
		{ "EditCondition", "!bUseLocalGuideCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point Weight falloff curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotencyInput_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Per-point internal Weight input type */" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bSupportAttributes" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Per-point internal Weight input type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotencyAttribute_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Per-point Potency. */" },
		{ "DisplayName", "Potency (Attr)" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bSupportAttributes && PotencyInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point Potency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Potency_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Constant Potency. */" },
		{ "DisplayName", "Potency" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "PotencyInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Potency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalPotencyFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPotencyFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Per-point Potency falloff curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Potency Falloff Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bUseLocalPotencyFalloffCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Per-point Potency falloff curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotencyFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** Per-point Potency falloff curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Potency Falloff Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bUseLocalPotencyFalloffCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point Potency falloff curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotencyScale_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** A multiplier applied to Potency after it's computed. Makes it easy to scale entire tensors up or down, or invert their influence altogether. */" },
		{ "DisplayName", "Potency Scale" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A multiplier applied to Potency after it's computed. Makes it easy to scale entire tensors up or down, or invert their influence altogether." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightInput_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Per-point internal Weight input type */" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bSupportAttributes" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Per-point internal Weight input type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttribute_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Per-point internal Weight Attribute. */" },
		{ "DisplayName", "Weight (Attr)" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bSupportAttributes && WeightInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point internal Weight Attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Per-point internal Weight Constant. */" },
		{ "DisplayName", "Weight" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "WeightInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point internal Weight Constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalWeightFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Per-point Weight falloff curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Weight Falloff Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "bUseLocalWeightFalloffCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Per-point Weight falloff curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightFalloffCurve_MetaData[] = {
		{ "Category", "Settings|Weighting" },
		{ "Comment", "/** Per-point Weight falloff curve sampled using distance to effector origin. */" },
		{ "DisplayName", "Weight Falloff Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bUseLocalWeightFalloffCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point Weight falloff curve sampled using distance to effector origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorFlattenMode_MetaData[] = {
		{ "Category", "Settings|Potency" },
		{ "Comment", "/** How should overlapping effector influence be flattened (not implemented yet)*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How should overlapping effector influence be flattened (not implemented yet)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mutations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor mutations settings. */" },
		{ "DisplayName", "Sampling Mutations" },
		{ "EditCondition", "bSupportMutations" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor mutations settings." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorConfigBase constinit property declarations ************
	static void NewProp_bSupportAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAttributes;
	static void NewProp_bSupportMutations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportMutations;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TensorWeight;
	static void NewProp_bUseLocalGuideCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalGuideCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalGuideCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GuideCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PotencyInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PotencyInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PotencyAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Potency;
	static void NewProp_bUseLocalPotencyFalloffCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalPotencyFalloffCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPotencyFalloffCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PotencyFalloffCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PotencyScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Weight;
	static void NewProp_bUseLocalWeightFalloffCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalWeightFalloffCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightFalloffCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightFalloffCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorFlattenMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectorFlattenMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mutations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorConfigBase constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase;
class UScriptStruct* FPCGExTensorConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorConfigBase Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportAttributes_SetBit(void* Obj)
{
	((FPCGExTensorConfigBase*)Obj)->bSupportAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportAttributes = { "bSupportAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorConfigBase), &Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportAttributes_MetaData), NewProp_bSupportAttributes_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportMutations_SetBit(void* Obj)
{
	((FPCGExTensorConfigBase*)Obj)->bSupportMutations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportMutations = { "bSupportMutations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorConfigBase), &Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportMutations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportMutations_MetaData), NewProp_bSupportMutations_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_TensorWeight = { "TensorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, TensorWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorWeight_MetaData), NewProp_TensorWeight_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalGuideCurve_SetBit(void* Obj)
{
	((FPCGExTensorConfigBase*)Obj)->bUseLocalGuideCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalGuideCurve = { "bUseLocalGuideCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorConfigBase), &Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalGuideCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalGuideCurve_MetaData), NewProp_bUseLocalGuideCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalGuideCurve = { "LocalGuideCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, LocalGuideCurve), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalGuideCurve_MetaData), NewProp_LocalGuideCurve_MetaData) }; // 995694241
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_GuideCurve = { "GuideCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, GuideCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuideCurve_MetaData), NewProp_GuideCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyInput = { "PotencyInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, PotencyInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotencyInput_MetaData), NewProp_PotencyInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyAttribute = { "PotencyAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, PotencyAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotencyAttribute_MetaData), NewProp_PotencyAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Potency = { "Potency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, Potency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Potency_MetaData), NewProp_Potency_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalPotencyFalloffCurve_SetBit(void* Obj)
{
	((FPCGExTensorConfigBase*)Obj)->bUseLocalPotencyFalloffCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalPotencyFalloffCurve = { "bUseLocalPotencyFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorConfigBase), &Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalPotencyFalloffCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalPotencyFalloffCurve_MetaData), NewProp_bUseLocalPotencyFalloffCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalPotencyFalloffCurve = { "LocalPotencyFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, LocalPotencyFalloffCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPotencyFalloffCurve_MetaData), NewProp_LocalPotencyFalloffCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyFalloffCurve = { "PotencyFalloffCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, PotencyFalloffCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotencyFalloffCurve_MetaData), NewProp_PotencyFalloffCurve_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyScale = { "PotencyScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, PotencyScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotencyScale_MetaData), NewProp_PotencyScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightInput = { "WeightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, WeightInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightInput_MetaData), NewProp_WeightInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightAttribute = { "WeightAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, WeightAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttribute_MetaData), NewProp_WeightAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalWeightFalloffCurve_SetBit(void* Obj)
{
	((FPCGExTensorConfigBase*)Obj)->bUseLocalWeightFalloffCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalWeightFalloffCurve = { "bUseLocalWeightFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorConfigBase), &Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalWeightFalloffCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalWeightFalloffCurve_MetaData), NewProp_bUseLocalWeightFalloffCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalWeightFalloffCurve = { "LocalWeightFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, LocalWeightFalloffCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightFalloffCurve_MetaData), NewProp_LocalWeightFalloffCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightFalloffCurve = { "WeightFalloffCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, WeightFalloffCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightFalloffCurve_MetaData), NewProp_WeightFalloffCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_EffectorFlattenMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_EffectorFlattenMode = { "EffectorFlattenMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, EffectorFlattenMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEffectorFlattenMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorFlattenMode_MetaData), NewProp_EffectorFlattenMode_MetaData) }; // 297999612
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Mutations = { "Mutations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConfigBase, Mutations), Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mutations_MetaData), NewProp_Mutations_MetaData) }; // 115199747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bSupportMutations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_TensorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalGuideCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalGuideCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_GuideCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Potency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalPotencyFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalPotencyFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_PotencyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_bUseLocalWeightFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_LocalWeightFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_WeightFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_EffectorFlattenMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_EffectorFlattenMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewProp_Mutations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorConfigBase Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTensorConfigBase",
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::PropPointers),
	sizeof(FPCGExTensorConfigBase),
	alignof(FPCGExTensorConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorConfigBase **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTensorSamplingMode_StaticEnum, TEXT("EPCGExTensorSamplingMode"), &Z_Registration_Info_UEnum_EPCGExTensorSamplingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4159238922U) },
		{ EPCGExEffectorFlattenMode_StaticEnum, TEXT("EPCGExEffectorFlattenMode"), &Z_Registration_Info_UEnum_EPCGExEffectorFlattenMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 297999612U) },
		{ EPCGExEffectorInfluenceShape_StaticEnum, TEXT("EPCGExEffectorInfluenceShape"), &Z_Registration_Info_UEnum_EPCGExEffectorInfluenceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1238381514U) },
		{ EPCGExTensorStopConditionHandling_StaticEnum, TEXT("EPCGExTensorStopConditionHandling"), &Z_Registration_Info_UEnum_EPCGExTensorStopConditionHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3054165883U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorSamplingMutationsDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics::NewStructOps, TEXT("PCGExTensorSamplingMutationsDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTensorSamplingMutationsDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorSamplingMutationsDetails), 115199747U) },
		{ FPCGExTensorConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics::NewStructOps, TEXT("PCGExTensorConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExTensorConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorConfigBase), 108974856U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_2529718106{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
