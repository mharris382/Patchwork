// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExShrinkPath.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShrinkPath() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShrinkPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShrinkPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathShrinkMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathShrinkMode;
static UEnum* EPCGExPathShrinkMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathShrinkMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathShrinkMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathShrinkMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathShrinkMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathShrinkMode>()
{
	return EPCGExPathShrinkMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.DisplayName", "Count" },
		{ "Count.Name", "EPCGExPathShrinkMode::Count" },
		{ "Count.ToolTip", "TBD" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExPathShrinkMode::Distance" },
		{ "Distance.ToolTip", "TBD." },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathShrinkMode::Count", (int64)EPCGExPathShrinkMode::Count },
		{ "EPCGExPathShrinkMode::Distance", (int64)EPCGExPathShrinkMode::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathShrinkMode",
	"EPCGExPathShrinkMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathShrinkMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathShrinkMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathShrinkMode.InnerSingleton;
}
// ********** End Enum EPCGExPathShrinkMode ********************************************************

// ********** Begin Enum EPCGExPathShrinkDistanceCutType *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType;
static UEnum* EPCGExPathShrinkDistanceCutType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathShrinkDistanceCutType"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathShrinkDistanceCutType>()
{
	return EPCGExPathShrinkDistanceCutType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Closest.DisplayName", "Closest (Round)" },
		{ "Closest.Name", "EPCGExPathShrinkDistanceCutType::Closest" },
		{ "Closest.ToolTip", "TBD." },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "NewPoint.DisplayName", "New Point" },
		{ "NewPoint.Name", "EPCGExPathShrinkDistanceCutType::NewPoint" },
		{ "NewPoint.ToolTip", "TBD" },
		{ "Next.DisplayName", "Next (Floor)" },
		{ "Next.Name", "EPCGExPathShrinkDistanceCutType::Next" },
		{ "Next.ToolTip", "TBD." },
		{ "Previous.DisplayName", "Previous (Ceil)" },
		{ "Previous.Name", "EPCGExPathShrinkDistanceCutType::Previous" },
		{ "Previous.ToolTip", "TBD." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathShrinkDistanceCutType::NewPoint", (int64)EPCGExPathShrinkDistanceCutType::NewPoint },
		{ "EPCGExPathShrinkDistanceCutType::Previous", (int64)EPCGExPathShrinkDistanceCutType::Previous },
		{ "EPCGExPathShrinkDistanceCutType::Next", (int64)EPCGExPathShrinkDistanceCutType::Next },
		{ "EPCGExPathShrinkDistanceCutType::Closest", (int64)EPCGExPathShrinkDistanceCutType::Closest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathShrinkDistanceCutType",
	"EPCGExPathShrinkDistanceCutType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType.InnerSingleton;
}
// ********** End Enum EPCGExPathShrinkDistanceCutType *********************************************

// ********** Begin Enum EPCGExShrinkEndpoint ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShrinkEndpoint;
static UEnum* EPCGExShrinkEndpoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShrinkEndpoint"));
	}
	return Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShrinkEndpoint>()
{
	return EPCGExShrinkEndpoint_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Both.DisplayName", "Start and End" },
		{ "Both.Name", "EPCGExShrinkEndpoint::Both" },
		{ "Both.ToolTip", "TBD" },
		{ "End.DisplayName", "End" },
		{ "End.Name", "EPCGExShrinkEndpoint::End" },
		{ "End.ToolTip", "TBD." },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "EPCGExShrinkEndpoint::Start" },
		{ "Start.ToolTip", "TBD." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShrinkEndpoint::Both", (int64)EPCGExShrinkEndpoint::Both },
		{ "EPCGExShrinkEndpoint::Start", (int64)EPCGExShrinkEndpoint::Start },
		{ "EPCGExShrinkEndpoint::End", (int64)EPCGExShrinkEndpoint::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShrinkEndpoint",
	"EPCGExShrinkEndpoint",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint()
{
	if (!Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShrinkEndpoint.InnerSingleton;
}
// ********** End Enum EPCGExShrinkEndpoint ********************************************************

// ********** Begin Enum EPCGExShrinkConstantMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShrinkConstantMode;
static UEnum* EPCGExShrinkConstantMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShrinkConstantMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShrinkConstantMode>()
{
	return EPCGExShrinkConstantMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "Separate.DisplayName", "Separate" },
		{ "Separate.Name", "EPCGExShrinkConstantMode::Separate" },
		{ "Separate.ToolTip", "Start will use the primary value, end will use the secondary value.." },
		{ "Shared.DisplayName", "Shared" },
		{ "Shared.Name", "EPCGExShrinkConstantMode::Shared" },
		{ "Shared.ToolTip", "Both start & end distance use the primary value." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShrinkConstantMode::Shared", (int64)EPCGExShrinkConstantMode::Shared },
		{ "EPCGExShrinkConstantMode::Separate", (int64)EPCGExShrinkConstantMode::Separate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShrinkConstantMode",
	"EPCGExShrinkConstantMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShrinkConstantMode.InnerSingleton;
}
// ********** End Enum EPCGExShrinkConstantMode ****************************************************

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointDistanceDetails ***************************
struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShrinkPathEndpointDistanceDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShrinkPathEndpointDistanceDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance or count */" },
		{ "DisplayName", "Distance (Attr)" },
		{ "EditCondition", "AmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance or count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "DisplayName", "Distance" },
		{ "EditCondition", "AmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointDistanceDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CutType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExShrinkPathEndpointDistanceDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShrinkPathEndpointDistanceDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails;
class UScriptStruct* FPCGExShrinkPathEndpointDistanceDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShrinkPathEndpointDistanceDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointDistanceDetails Property Definitions ******
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_AmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_AmountInput = { "AmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointDistanceDetails, AmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountInput_MetaData), NewProp_AmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_DistanceAttribute = { "DistanceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointDistanceDetails, DistanceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAttribute_MetaData), NewProp_DistanceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointDistanceDetails, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_CutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_CutType = { "CutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointDistanceDetails, CutType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkDistanceCutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutType_MetaData), NewProp_CutType_MetaData) }; // 4290885854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_AmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_AmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_DistanceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_CutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewProp_CutType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExShrinkPathEndpointDistanceDetails Property Definitions ********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExShrinkPathEndpointDistanceDetails",
	Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::PropPointers),
	sizeof(FPCGExShrinkPathEndpointDistanceDetails),
	alignof(FPCGExShrinkPathEndpointDistanceDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShrinkPathEndpointDistanceDetails *****************************

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointCountDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShrinkPathEndpointCountDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShrinkPathEndpointCountDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance or count */" },
		{ "DisplayName", "Count (Attr)" },
		{ "EditCondition", "ValueSource != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance or count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** TBD */" },
		{ "DisplayName", "Count" },
		{ "EditCondition", "ValueSource == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointCountDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CountAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExShrinkPathEndpointCountDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShrinkPathEndpointCountDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails;
class UScriptStruct* FPCGExShrinkPathEndpointCountDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShrinkPathEndpointCountDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExShrinkPathEndpointCountDetails Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_ValueSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_ValueSource = { "ValueSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointCountDetails, ValueSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueSource_MetaData), NewProp_ValueSource_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_CountAttribute = { "CountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointCountDetails, CountAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountAttribute_MetaData), NewProp_CountAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShrinkPathEndpointCountDetails, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_ValueSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_ValueSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_CountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExShrinkPathEndpointCountDetails Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExShrinkPathEndpointCountDetails",
	Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::PropPointers),
	sizeof(FPCGExShrinkPathEndpointCountDetails),
	alignof(FPCGExShrinkPathEndpointCountDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShrinkPathEndpointCountDetails ********************************

// ********** Begin Class UPCGExShrinkPathSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShrinkPathSettings;
UClass* UPCGExShrinkPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExShrinkPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExShrinkPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShrinkPathSettings"),
			Z_Registration_Info_UClass_UPCGExShrinkPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExShrinkPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExShrinkPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShrinkPathSettings_NoRegister()
{
	return UPCGExShrinkPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShrinkPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExShrinkPath.h" },
		{ "Keywords", "reduce extend" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/shrink" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkEndpoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "ShrinkEndpoint == EPCGExShrinkEndpoint::Both" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryDistanceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "ShrinkMode == EPCGExPathShrinkMode::Distance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryDistanceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "ShrinkMode == EPCGExPathShrinkMode::Distance && ShrinkEndpoint == EPCGExShrinkEndpoint::Both && SettingsMode == EPCGExShrinkConstantMode::Separate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCountDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "ShrinkMode == EPCGExPathShrinkMode::Count" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCountDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "ShrinkMode == EPCGExPathShrinkMode::Count && ShrinkEndpoint == EPCGExShrinkEndpoint::Both && SettingsMode == EPCGExShrinkConstantMode::Separate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndpointsIgnoreStopConditions_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveFirstMetadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the point cut from the start will inherit from the original first point */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the point cut from the start will inherit from the original first point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveLastMetadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the point cut from the start will inherit from the original last point */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the point cut from the start will inherit from the original last point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietClosedLoopWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShrinkPath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShrinkPathSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShrinkEndpoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShrinkEndpoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SettingsMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShrinkMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShrinkMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryDistanceDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryDistanceDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCountDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCountDetails;
	static void NewProp_bEndpointsIgnoreStopConditions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndpointsIgnoreStopConditions;
	static void NewProp_bPreserveFirstMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveFirstMetadata;
	static void NewProp_bPreserveLastMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveLastMetadata;
	static void NewProp_bQuietClosedLoopWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietClosedLoopWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShrinkPathSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShrinkPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShrinkPathSettings_Statics

// ********** Begin Class UPCGExShrinkPathSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkEndpoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkEndpoint = { "ShrinkEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, ShrinkEndpoint), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkEndpoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkEndpoint_MetaData), NewProp_ShrinkEndpoint_MetaData) }; // 4255327162
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SettingsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SettingsMode = { "SettingsMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, SettingsMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShrinkConstantMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsMode_MetaData), NewProp_SettingsMode_MetaData) }; // 1693590860
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkMode = { "ShrinkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, ShrinkMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathShrinkMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkMode_MetaData), NewProp_ShrinkMode_MetaData) }; // 537386094
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_PrimaryDistanceDetails = { "PrimaryDistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, PrimaryDistanceDetails), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryDistanceDetails_MetaData), NewProp_PrimaryDistanceDetails_MetaData) }; // 874219158
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SecondaryDistanceDetails = { "SecondaryDistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, SecondaryDistanceDetails), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryDistanceDetails_MetaData), NewProp_SecondaryDistanceDetails_MetaData) }; // 874219158
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_PrimaryCountDetails = { "PrimaryCountDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, PrimaryCountDetails), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryCountDetails_MetaData), NewProp_PrimaryCountDetails_MetaData) }; // 2458733802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SecondaryCountDetails = { "SecondaryCountDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShrinkPathSettings, SecondaryCountDetails), Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCountDetails_MetaData), NewProp_SecondaryCountDetails_MetaData) }; // 2458733802
void Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bEndpointsIgnoreStopConditions_SetBit(void* Obj)
{
	((UPCGExShrinkPathSettings*)Obj)->bEndpointsIgnoreStopConditions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bEndpointsIgnoreStopConditions = { "bEndpointsIgnoreStopConditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShrinkPathSettings), &Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bEndpointsIgnoreStopConditions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndpointsIgnoreStopConditions_MetaData), NewProp_bEndpointsIgnoreStopConditions_MetaData) };
void Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveFirstMetadata_SetBit(void* Obj)
{
	((UPCGExShrinkPathSettings*)Obj)->bPreserveFirstMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveFirstMetadata = { "bPreserveFirstMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShrinkPathSettings), &Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveFirstMetadata_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveFirstMetadata_MetaData), NewProp_bPreserveFirstMetadata_MetaData) };
void Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveLastMetadata_SetBit(void* Obj)
{
	((UPCGExShrinkPathSettings*)Obj)->bPreserveLastMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveLastMetadata = { "bPreserveLastMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShrinkPathSettings), &Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveLastMetadata_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveLastMetadata_MetaData), NewProp_bPreserveLastMetadata_MetaData) };
void Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bQuietClosedLoopWarning_SetBit(void* Obj)
{
	((UPCGExShrinkPathSettings*)Obj)->bQuietClosedLoopWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bQuietClosedLoopWarning = { "bQuietClosedLoopWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShrinkPathSettings), &Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bQuietClosedLoopWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietClosedLoopWarning_MetaData), NewProp_bQuietClosedLoopWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkEndpoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SettingsMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SettingsMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_ShrinkMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_PrimaryDistanceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SecondaryDistanceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_PrimaryCountDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_SecondaryCountDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bEndpointsIgnoreStopConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveFirstMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bPreserveLastMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::NewProp_bQuietClosedLoopWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShrinkPathSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::ClassParams = {
	&UPCGExShrinkPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExShrinkPathSettings::StaticRegisterNativesUPCGExShrinkPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExShrinkPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExShrinkPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShrinkPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExShrinkPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShrinkPathSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShrinkPathSettings);
UPCGExShrinkPathSettings::~UPCGExShrinkPathSettings() {}
// ********** End Class UPCGExShrinkPathSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathShrinkMode_StaticEnum, TEXT("EPCGExPathShrinkMode"), &Z_Registration_Info_UEnum_EPCGExPathShrinkMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 537386094U) },
		{ EPCGExPathShrinkDistanceCutType_StaticEnum, TEXT("EPCGExPathShrinkDistanceCutType"), &Z_Registration_Info_UEnum_EPCGExPathShrinkDistanceCutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4290885854U) },
		{ EPCGExShrinkEndpoint_StaticEnum, TEXT("EPCGExShrinkEndpoint"), &Z_Registration_Info_UEnum_EPCGExShrinkEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4255327162U) },
		{ EPCGExShrinkConstantMode_StaticEnum, TEXT("EPCGExShrinkConstantMode"), &Z_Registration_Info_UEnum_EPCGExShrinkConstantMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1693590860U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExShrinkPathEndpointDistanceDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails_Statics::NewStructOps, TEXT("PCGExShrinkPathEndpointDistanceDetails"),&Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointDistanceDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShrinkPathEndpointDistanceDetails), 874219158U) },
		{ FPCGExShrinkPathEndpointCountDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExShrinkPathEndpointCountDetails_Statics::NewStructOps, TEXT("PCGExShrinkPathEndpointCountDetails"),&Z_Registration_Info_UScriptStruct_FPCGExShrinkPathEndpointCountDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShrinkPathEndpointCountDetails), 2458733802U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShrinkPathSettings, UPCGExShrinkPathSettings::StaticClass, TEXT("UPCGExShrinkPathSettings"), &Z_Registration_Info_UClass_UPCGExShrinkPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShrinkPathSettings), 131171823U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_2978148011{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShrinkPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
