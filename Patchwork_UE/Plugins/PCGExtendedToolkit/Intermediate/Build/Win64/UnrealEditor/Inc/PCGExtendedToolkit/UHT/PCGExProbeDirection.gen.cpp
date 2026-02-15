// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeDirection.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeDirection() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeDirectionProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryDirection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryDirection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigDirection();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExProbeDirectionPriorization ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization;
static UEnum* EPCGExProbeDirectionPriorization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExProbeDirectionPriorization"));
	}
	return Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExProbeDirectionPriorization>()
{
	return EPCGExProbeDirectionPriorization_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Dist.DisplayName", "Closest position" },
		{ "Dist.Name", "EPCGExProbeDirectionPriorization::Dist" },
		{ "Dist.ToolTip", "Favor the candidates that are the closest, even if they were not the best aligned." },
		{ "Dot.DisplayName", "Best alignment" },
		{ "Dot.Name", "EPCGExProbeDirectionPriorization::Dot" },
		{ "Dot.ToolTip", "Favor the candidates that best align with the direction, as opposed to closest ones." },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExProbeDirectionPriorization::Dot", (int64)EPCGExProbeDirectionPriorization::Dot },
		{ "EPCGExProbeDirectionPriorization::Dist", (int64)EPCGExProbeDirectionPriorization::Dist },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExProbeDirectionPriorization",
	"EPCGExProbeDirectionPriorization",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization()
{
	if (!Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization.InnerSingleton;
}
// ********** End Enum EPCGExProbeDirectionPriorization ********************************************

// ********** Begin ScriptStruct FPCGExProbeConfigDirection ****************************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigDirection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigDirection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComponentWiseAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max angle to search within. */" },
		{ "EditCondition", "!bUseComponentWiseAngle" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max angle to search within." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngles_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max angle to search within. */" },
		{ "EditCondition", "bUseComponentWiseAngle" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max angle to search within." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnsignedCheck_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read the direction from */" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read the direction from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant direction */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "DirectionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform the direction with the point's */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform the direction with the point's" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Favor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What matters more? */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What matters more?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoChainedProcessing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This probe will sample candidates after the other. Can yield different results. */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This probe will sample candidates after the other. Can yield different results." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigDirection constinit property declarations ********
	static void NewProp_bUseComponentWiseAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComponentWiseAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAngles;
	static void NewProp_bUnsignedCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnsignedCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionAttribute;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionConstant;
	static void NewProp_bTransformDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Favor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Favor;
	static void NewProp_bDoChainedProcessing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoChainedProcessing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigDirection constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigDirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics
static_assert(std::is_polymorphic<FPCGExProbeConfigDirection>() == std::is_polymorphic<FPCGExProbeConfigBase>(), "USTRUCT FPCGExProbeConfigDirection cannot be polymorphic unless super FPCGExProbeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection;
class UScriptStruct* FPCGExProbeConfigDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigDirection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigDirection"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigDirection Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUseComponentWiseAngle_SetBit(void* Obj)
{
	((FPCGExProbeConfigDirection*)Obj)->bUseComponentWiseAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUseComponentWiseAngle = { "bUseComponentWiseAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigDirection), &Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUseComponentWiseAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComponentWiseAngle_MetaData), NewProp_bUseComponentWiseAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_MaxAngles = { "MaxAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, MaxAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngles_MetaData), NewProp_MaxAngles_MetaData) };
void Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUnsignedCheck_SetBit(void* Obj)
{
	((FPCGExProbeConfigDirection*)Obj)->bUnsignedCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUnsignedCheck = { "bUnsignedCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigDirection), &Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUnsignedCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnsignedCheck_MetaData), NewProp_bUnsignedCheck_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionInput = { "DirectionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, DirectionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionInput_MetaData), NewProp_DirectionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionAttribute = { "DirectionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, DirectionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAttribute_MetaData), NewProp_DirectionAttribute_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExProbeConfigDirection*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigDirection), &Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, DirectionConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bTransformDirection_SetBit(void* Obj)
{
	((FPCGExProbeConfigDirection*)Obj)->bTransformDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bTransformDirection = { "bTransformDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigDirection), &Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bTransformDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformDirection_MetaData), NewProp_bTransformDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_Favor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_Favor = { "Favor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigDirection, Favor), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Favor_MetaData), NewProp_Favor_MetaData) }; // 1029997031
void Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bDoChainedProcessing_SetBit(void* Obj)
{
	((FPCGExProbeConfigDirection*)Obj)->bDoChainedProcessing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bDoChainedProcessing = { "bDoChainedProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigDirection), &Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bDoChainedProcessing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoChainedProcessing_MetaData), NewProp_bDoChainedProcessing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUseComponentWiseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_MaxAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bUnsignedCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bTransformDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_Favor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_Favor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewProp_bDoChainedProcessing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigDirection Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase,
	&NewStructOps,
	"PCGExProbeConfigDirection",
	Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::PropPointers),
	sizeof(FPCGExProbeConfigDirection),
	alignof(FPCGExProbeConfigDirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigDirection()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigDirection ******************************************

// ********** Begin Class UPCGExProbeFactoryDirection **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryDirection;
UClass* UPCGExProbeFactoryDirection::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryDirection;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryDirection"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryDirection,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryDirection_NoRegister()
{
	return UPCGExProbeFactoryDirection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Probes/PCGExProbeDirection.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points/probe-direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryDirection constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeFactoryDirection constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryDirection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics

// ********** Begin Class UPCGExProbeFactoryDirection Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryDirection, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4034828325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeFactoryDirection Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::ClassParams = {
	&UPCGExProbeFactoryDirection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryDirection::StaticRegisterNativesUPCGExProbeFactoryDirection()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryDirection()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryDirection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryDirection.OuterSingleton;
}
UPCGExProbeFactoryDirection::UPCGExProbeFactoryDirection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryDirection);
UPCGExProbeFactoryDirection::~UPCGExProbeFactoryDirection() {}
// ********** End Class UPCGExProbeFactoryDirection ************************************************

// ********** Begin Class UPCGExProbeDirectionProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings;
UClass* UPCGExProbeDirectionProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeDirectionProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeDirectionProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeDirectionProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_NoRegister()
{
	return UPCGExProbeDirectionProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeDirection.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeDirectionProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeDirectionProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeDirectionProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics

// ********** Begin Class UPCGExProbeDirectionProviderSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeDirectionProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4034828325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeDirectionProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::ClassParams = {
	&UPCGExProbeDirectionProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeDirectionProviderSettings::StaticRegisterNativesUPCGExProbeDirectionProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeDirectionProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeDirectionProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings.OuterSingleton;
}
UPCGExProbeDirectionProviderSettings::UPCGExProbeDirectionProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeDirectionProviderSettings);
UPCGExProbeDirectionProviderSettings::~UPCGExProbeDirectionProviderSettings() {}
// ********** End Class UPCGExProbeDirectionProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExProbeDirectionPriorization_StaticEnum, TEXT("EPCGExProbeDirectionPriorization"), &Z_Registration_Info_UEnum_EPCGExProbeDirectionPriorization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1029997031U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigDirection::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigDirection_Statics::NewStructOps, TEXT("PCGExProbeConfigDirection"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigDirection), 4034828325U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryDirection, UPCGExProbeFactoryDirection::StaticClass, TEXT("UPCGExProbeFactoryDirection"), &Z_Registration_Info_UClass_UPCGExProbeFactoryDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryDirection), 638617351U) },
		{ Z_Construct_UClass_UPCGExProbeDirectionProviderSettings, UPCGExProbeDirectionProviderSettings::StaticClass, TEXT("UPCGExProbeDirectionProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeDirectionProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeDirectionProviderSettings), 2940184340U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_2996690967{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeDirection_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
