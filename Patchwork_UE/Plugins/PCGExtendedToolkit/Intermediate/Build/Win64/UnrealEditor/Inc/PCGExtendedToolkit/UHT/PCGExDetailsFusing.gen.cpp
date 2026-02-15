// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsFusing.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsFusing() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFuseDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFuseDetailsBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSourceFuseDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExFuseMethod **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFuseMethod;
static UEnum* EPCGExFuseMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFuseMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFuseMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFuseMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExFuseMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFuseMethod>()
{
	return EPCGExFuseMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "Octree.DisplayName", "Octree" },
		{ "Octree.Name", "EPCGExFuseMethod::Octree" },
		{ "Octree.Tooltip", "Slow but precise. Respectful of the original topology. Requires stable insertion with large values." },
		{ "Voxel.DisplayName", "Spatial Hash" },
		{ "Voxel.Name", "EPCGExFuseMethod::Voxel" },
		{ "Voxel.Tooltip", "Fast but blocky. Creates grid-looking approximation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFuseMethod::Voxel", (int64)EPCGExFuseMethod::Voxel },
		{ "EPCGExFuseMethod::Octree", (int64)EPCGExFuseMethod::Octree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFuseMethod",
	"EPCGExFuseMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExFuseMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFuseMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFuseMethod.InnerSingleton;
}
// ********** End Enum EPCGExFuseMethod ************************************************************

// ********** Begin ScriptStruct FPCGExFuseDetailsBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFuseDetailsBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFuseDetailsBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLocalTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComponentWiseTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Uses a per-axis radius, manathan-style */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Uses a per-axis radius, manathan-style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance source */" },
		{ "EditCondition", "bSupportLocalTolerance" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Tolerance source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fusing distance attribute.*/" },
		{ "DisplayName", "Tolerance (Attr)" },
		{ "EditCondition", "bSupportLocalTolerance && ToleranceInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Fusing distance attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/** Fusing distance */" },
		{ "EditCondition", "ToleranceInput == EPCGExInputValueType::Constant && !bComponentWiseTolerance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fusing distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerances_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/** Component-wise radiuses */" },
		{ "EditCondition", "ToleranceInput == EPCGExInputValueType::Constant && bComponentWiseTolerance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Component-wise radiuses" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFuseDetailsBase constinit property declarations *************
	static void NewProp_bSupportLocalTolerance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLocalTolerance;
	static void NewProp_bComponentWiseTolerance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentWiseTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToleranceInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToleranceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tolerances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFuseDetailsBase constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFuseDetailsBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase;
class UScriptStruct* FPCGExFuseDetailsBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFuseDetailsBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFuseDetailsBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFuseDetailsBase Property Definitions ************************
void Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bSupportLocalTolerance_SetBit(void* Obj)
{
	((FPCGExFuseDetailsBase*)Obj)->bSupportLocalTolerance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bSupportLocalTolerance = { "bSupportLocalTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFuseDetailsBase), &Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bSupportLocalTolerance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLocalTolerance_MetaData), NewProp_bSupportLocalTolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bComponentWiseTolerance_SetBit(void* Obj)
{
	((FPCGExFuseDetailsBase*)Obj)->bComponentWiseTolerance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bComponentWiseTolerance = { "bComponentWiseTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFuseDetailsBase), &Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bComponentWiseTolerance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComponentWiseTolerance_MetaData), NewProp_bComponentWiseTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceInput = { "ToleranceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetailsBase, ToleranceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceInput_MetaData), NewProp_ToleranceInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceAttribute = { "ToleranceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetailsBase, ToleranceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceAttribute_MetaData), NewProp_ToleranceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetailsBase, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_Tolerances = { "Tolerances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetailsBase, Tolerances), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerances_MetaData), NewProp_Tolerances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bSupportLocalTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_bComponentWiseTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_ToleranceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewProp_Tolerances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFuseDetailsBase Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFuseDetailsBase",
	Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::PropPointers),
	sizeof(FPCGExFuseDetailsBase),
	alignof(FPCGExFuseDetailsBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFuseDetailsBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFuseDetailsBase ***********************************************

// ********** Begin ScriptStruct FPCGExSourceFuseDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSourceFuseDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSourceFuseDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSourceFuseDetails constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceDistance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSourceFuseDetails constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSourceFuseDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics
static_assert(std::is_polymorphic<FPCGExSourceFuseDetails>() == std::is_polymorphic<FPCGExFuseDetailsBase>(), "USTRUCT FPCGExSourceFuseDetails cannot be polymorphic unless super FPCGExFuseDetailsBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails;
class UScriptStruct* FPCGExSourceFuseDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSourceFuseDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSourceFuseDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSourceFuseDetails Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::NewProp_SourceDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::NewProp_SourceDistance = { "SourceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSourceFuseDetails, SourceDistance), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDistance_MetaData), NewProp_SourceDistance_MetaData) }; // 1812963399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::NewProp_SourceDistance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::NewProp_SourceDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSourceFuseDetails Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFuseDetailsBase,
	&NewStructOps,
	"PCGExSourceFuseDetails",
	Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::PropPointers),
	sizeof(FPCGExSourceFuseDetails),
	alignof(FPCGExSourceFuseDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSourceFuseDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSourceFuseDetails *********************************************

// ********** Begin ScriptStruct FPCGExFuseDetails *************************************************
struct Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFuseDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFuseDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelGridOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset the voxelized grid by an amount */" },
		{ "EditCondition", "FuseMethod == EPCGExFuseMethod::Voxel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset the voxelized grid by an amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInlineInsertion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Check this box if you're fusing over a very large radius and want to ensure insertion order to avoid snapping to different points. NOTE : Will make things considerably slower. */" },
		{ "DisplayName", "Stabilize Insertion Order" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsFusing.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Check this box if you're fusing over a very large radius and want to ensure insertion order to avoid snapping to different points. NOTE : Will make things considerably slower." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFuseDetails constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetDistance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FuseMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FuseMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelGridOffset;
	static void NewProp_bInlineInsertion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInlineInsertion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFuseDetails constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFuseDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics
static_assert(std::is_polymorphic<FPCGExFuseDetails>() == std::is_polymorphic<FPCGExSourceFuseDetails>(), "USTRUCT FPCGExFuseDetails cannot be polymorphic unless super FPCGExSourceFuseDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFuseDetails;
class UScriptStruct* FPCGExFuseDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFuseDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFuseDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFuseDetails Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_TargetDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetails, TargetDistance), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDistance_MetaData), NewProp_TargetDistance_MetaData) }; // 1812963399
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_FuseMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_FuseMethod = { "FuseMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetails, FuseMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFuseMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseMethod_MetaData), NewProp_FuseMethod_MetaData) }; // 3740207232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_VoxelGridOffset = { "VoxelGridOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFuseDetails, VoxelGridOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelGridOffset_MetaData), NewProp_VoxelGridOffset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_bInlineInsertion_SetBit(void* Obj)
{
	((FPCGExFuseDetails*)Obj)->bInlineInsertion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_bInlineInsertion = { "bInlineInsertion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFuseDetails), &Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_bInlineInsertion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInlineInsertion_MetaData), NewProp_bInlineInsertion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_TargetDistance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_TargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_FuseMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_FuseMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_VoxelGridOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewProp_bInlineInsertion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFuseDetails Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExSourceFuseDetails,
	&NewStructOps,
	"PCGExFuseDetails",
	Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::PropPointers),
	sizeof(FPCGExFuseDetails),
	alignof(FPCGExFuseDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFuseDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFuseDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFuseDetails ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExFuseMethod_StaticEnum, TEXT("EPCGExFuseMethod"), &Z_Registration_Info_UEnum_EPCGExFuseMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3740207232U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFuseDetailsBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics::NewStructOps, TEXT("PCGExFuseDetailsBase"),&Z_Registration_Info_UScriptStruct_FPCGExFuseDetailsBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFuseDetailsBase), 1989956954U) },
		{ FPCGExSourceFuseDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics::NewStructOps, TEXT("PCGExSourceFuseDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSourceFuseDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSourceFuseDetails), 1284790224U) },
		{ FPCGExFuseDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics::NewStructOps, TEXT("PCGExFuseDetails"),&Z_Registration_Info_UScriptStruct_FPCGExFuseDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFuseDetails), 83583742U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_4036024805{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
