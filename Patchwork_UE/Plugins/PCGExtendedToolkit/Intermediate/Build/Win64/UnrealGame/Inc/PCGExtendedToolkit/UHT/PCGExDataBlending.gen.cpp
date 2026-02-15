// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Blending/PCGExDataBlending.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDataBlending() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBlendOver ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBlendOver;
static UEnum* EPCGExBlendOver_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendOver.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBlendOver.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBlendOver"));
	}
	return Z_Registration_Info_UEnum_EPCGExBlendOver.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBlendOver>()
{
	return EPCGExBlendOver_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExBlendOver::Distance" },
		{ "Distance.ToolTip", "Blend is based on distance over max distance" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EPCGExBlendOver::Fixed" },
		{ "Fixed.ToolTip", "Fixed blend lerp/weight value" },
		{ "Index.DisplayName", "Count" },
		{ "Index.Name", "EPCGExBlendOver::Index" },
		{ "Index.ToolTip", "Blend is based on index over total count" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBlendOver::Distance", (int64)EPCGExBlendOver::Distance },
		{ "EPCGExBlendOver::Index", (int64)EPCGExBlendOver::Index },
		{ "EPCGExBlendOver::Fixed", (int64)EPCGExBlendOver::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBlendOver",
	"EPCGExBlendOver",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendOver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBlendOver.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBlendOver.InnerSingleton;
}
// ********** End Enum EPCGExBlendOver *************************************************************

// ********** Begin Enum EPCGExBlendingInterface ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBlendingInterface;
static UEnum* EPCGExBlendingInterface_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendingInterface.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBlendingInterface.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBlendingInterface"));
	}
	return Z_Registration_Info_UEnum_EPCGExBlendingInterface.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBlendingInterface>()
{
	return EPCGExBlendingInterface_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Individual.DisplayName", "Individual" },
		{ "Individual.Name", "EPCGExBlendingInterface::Individual" },
		{ "Individual.ToolTip", "Uses individual blend operation subnodes to get full control. Best if you're looking to pick only a few specific things." },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "Monolithic.DisplayName", "Monolithic" },
		{ "Monolithic.Name", "EPCGExBlendingInterface::Monolithic" },
		{ "Monolithic.ToolTip", "Blend attributes & properties using monolithic settings. Best if you want to grab everything, or only select things to leave out." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBlendingInterface::Individual", (int64)EPCGExBlendingInterface::Individual },
		{ "EPCGExBlendingInterface::Monolithic", (int64)EPCGExBlendingInterface::Monolithic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBlendingInterface",
	"EPCGExBlendingInterface",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendingInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBlendingInterface.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBlendingInterface.InnerSingleton;
}
// ********** End Enum EPCGExBlendingInterface *****************************************************

// ********** Begin Enum EPCGExDataBlendingType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDataBlendingType;
static UEnum* EPCGExDataBlendingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataBlendingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDataBlendingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDataBlendingType"));
	}
	return Z_Registration_Info_UEnum_EPCGExDataBlendingType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataBlendingType>()
{
	return EPCGExDataBlendingType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteMax.DisplayName", "Absolute Max" },
		{ "AbsoluteMax.Name", "EPCGExDataBlendingType::AbsoluteMax" },
		{ "AbsoluteMax.ToolTip", "Component-wise MAX of absolute value." },
		{ "AbsoluteMin.DisplayName", "Absolute Min" },
		{ "AbsoluteMin.Name", "EPCGExDataBlendingType::AbsoluteMin" },
		{ "AbsoluteMin.ToolTip", "Component-wise MIN of absolute value." },
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExDataBlendingType::Average" },
		{ "Average.ToolTip", "Average all sampled values." },
		{ "BlueprintType", "true" },
		{ "Copy.DisplayName", "Copy (Target)" },
		{ "Copy.Name", "EPCGExDataBlendingType::Copy" },
		{ "Copy.ToolTip", "Copy target data (second value)" },
		{ "CopyOther.DisplayName", "Copy (Source)" },
		{ "CopyOther.Name", "EPCGExDataBlendingType::CopyOther" },
		{ "CopyOther.ToolTip", "Copy source data (first value)" },
		{ "Hash.DisplayName", "Hash" },
		{ "Hash.Name", "EPCGExDataBlendingType::Hash" },
		{ "Hash.ToolTip", "Combine the values into a hash" },
		{ "Lerp.DisplayName", "Lerp" },
		{ "Lerp.Name", "EPCGExDataBlendingType::Lerp" },
		{ "Lerp.ToolTip", "Uses weight as lerp. If the results are unexpected, try 'Weight' instead." },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExDataBlendingType::Max" },
		{ "Max.ToolTip", "Component-wise MAX operation" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExDataBlendingType::Min" },
		{ "Min.ToolTip", "Component-wise MIN operation" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExDataBlendingType::None" },
		{ "None.ToolTip", "No blending is applied, keep the original value." },
		{ "Subtract.DisplayName", "Subtract" },
		{ "Subtract.Name", "EPCGExDataBlendingType::Subtract" },
		{ "Subtract.ToolTip", "Subtract." },
		{ "Sum.DisplayName", "Sum" },
		{ "Sum.Name", "EPCGExDataBlendingType::Sum" },
		{ "Sum.ToolTip", "Sum" },
		{ "Unset.Hidden", "" },
		{ "Unset.Name", "EPCGExDataBlendingType::Unset" },
		{ "UnsignedHash.DisplayName", "Hash (Unsigned)" },
		{ "UnsignedHash.Name", "EPCGExDataBlendingType::UnsignedHash" },
		{ "UnsignedHash.ToolTip", "Combine the values into a hash but sort the values first to create an order-independent hash." },
		{ "UnsignedMax.DisplayName", "Unsigned Max" },
		{ "UnsignedMax.Name", "EPCGExDataBlendingType::UnsignedMax" },
		{ "UnsignedMax.ToolTip", "Component-wise MAX on unsigned value, but keeps the sign on written data." },
		{ "UnsignedMin.DisplayName", "Unsigned Min" },
		{ "UnsignedMin.Name", "EPCGExDataBlendingType::UnsignedMin" },
		{ "UnsignedMin.ToolTip", "Component-wise MIN on unsigned value, but keeps the sign on written data." },
		{ "Weight.DisplayName", "Weight" },
		{ "Weight.Name", "EPCGExDataBlendingType::Weight" },
		{ "Weight.ToolTip", "Weights based on distance to blend targets. If the results are unexpected, try 'Lerp' instead" },
		{ "WeightedSubtract.DisplayName", "Weighted Subtract" },
		{ "WeightedSubtract.Name", "EPCGExDataBlendingType::WeightedSubtract" },
		{ "WeightedSubtract.ToolTip", "Substraction of all the data, weighted" },
		{ "WeightedSum.DisplayName", "Weighted Sum" },
		{ "WeightedSum.Name", "EPCGExDataBlendingType::WeightedSum" },
		{ "WeightedSum.ToolTip", "Sum of all the data, weighted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDataBlendingType::None", (int64)EPCGExDataBlendingType::None },
		{ "EPCGExDataBlendingType::Average", (int64)EPCGExDataBlendingType::Average },
		{ "EPCGExDataBlendingType::Weight", (int64)EPCGExDataBlendingType::Weight },
		{ "EPCGExDataBlendingType::Min", (int64)EPCGExDataBlendingType::Min },
		{ "EPCGExDataBlendingType::Max", (int64)EPCGExDataBlendingType::Max },
		{ "EPCGExDataBlendingType::Copy", (int64)EPCGExDataBlendingType::Copy },
		{ "EPCGExDataBlendingType::Sum", (int64)EPCGExDataBlendingType::Sum },
		{ "EPCGExDataBlendingType::WeightedSum", (int64)EPCGExDataBlendingType::WeightedSum },
		{ "EPCGExDataBlendingType::Lerp", (int64)EPCGExDataBlendingType::Lerp },
		{ "EPCGExDataBlendingType::Subtract", (int64)EPCGExDataBlendingType::Subtract },
		{ "EPCGExDataBlendingType::UnsignedMin", (int64)EPCGExDataBlendingType::UnsignedMin },
		{ "EPCGExDataBlendingType::UnsignedMax", (int64)EPCGExDataBlendingType::UnsignedMax },
		{ "EPCGExDataBlendingType::AbsoluteMin", (int64)EPCGExDataBlendingType::AbsoluteMin },
		{ "EPCGExDataBlendingType::AbsoluteMax", (int64)EPCGExDataBlendingType::AbsoluteMax },
		{ "EPCGExDataBlendingType::WeightedSubtract", (int64)EPCGExDataBlendingType::WeightedSubtract },
		{ "EPCGExDataBlendingType::CopyOther", (int64)EPCGExDataBlendingType::CopyOther },
		{ "EPCGExDataBlendingType::Hash", (int64)EPCGExDataBlendingType::Hash },
		{ "EPCGExDataBlendingType::UnsignedHash", (int64)EPCGExDataBlendingType::UnsignedHash },
		{ "EPCGExDataBlendingType::Unset", (int64)EPCGExDataBlendingType::Unset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDataBlendingType",
	"EPCGExDataBlendingType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataBlendingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDataBlendingType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDataBlendingType.InnerSingleton;
}
// ********** End Enum EPCGExDataBlendingType ******************************************************

// ********** Begin Enum EPCGExABBlendingType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExABBlendingType;
static UEnum* EPCGExABBlendingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExABBlendingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExABBlendingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExABBlendingType"));
	}
	return Z_Registration_Info_UEnum_EPCGExABBlendingType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExABBlendingType>()
{
	return EPCGExABBlendingType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteMax.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "AbsoluteMax.DisplayName", "Absolute Max" },
		{ "AbsoluteMax.Name", "EPCGExABBlendingType::AbsoluteMax" },
		{ "AbsoluteMax.ToolTip", "+Max(A, B)" },
		{ "AbsoluteMin.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "AbsoluteMin.DisplayName", "Absolute Min" },
		{ "AbsoluteMin.Name", "EPCGExABBlendingType::AbsoluteMin" },
		{ "AbsoluteMin.ToolTip", "+Min(A, B)" },
		{ "Add.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Add.DisplayName", "Add" },
		{ "Add.Name", "EPCGExABBlendingType::Add" },
		{ "Add.SearchHints", "+" },
		{ "Add.ToolTip", "A + B" },
		{ "Average.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExABBlendingType::Average" },
		{ "Average.SearchHints", "Average" },
		{ "Average.ToolTip", "(A + B) / 2" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is a different blending list that makes more sense for AxB blending\n// and also includes extra modes that don't make sense in regular multi-source data blending\n" },
		{ "CopySource.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "CopySource.DisplayName", "Copy (Source)" },
		{ "CopySource.Name", "EPCGExABBlendingType::CopySource" },
		{ "CopySource.ToolTip", "= A" },
		{ "CopyTarget.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "CopyTarget.DisplayName", "Copy (Target)" },
		{ "CopyTarget.Name", "EPCGExABBlendingType::CopyTarget" },
		{ "CopyTarget.ToolTip", "= B" },
		{ "Divide.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Divide.DisplayName", "Divide" },
		{ "Divide.Name", "EPCGExABBlendingType::Divide" },
		{ "Divide.SearchHints", "Average" },
		{ "Divide.ToolTip", "A / B" },
		{ "Hash.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Hash.DisplayName", "Hash" },
		{ "Hash.Name", "EPCGExABBlendingType::Hash" },
		{ "Hash.ToolTip", "Hash(A, B)" },
		{ "Lerp.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Lerp.DisplayName", "Lerp" },
		{ "Lerp.Name", "EPCGExABBlendingType::Lerp" },
		{ "Lerp.ToolTip", "Lerp(A, B, Weight)" },
		{ "Max.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExABBlendingType::Max" },
		{ "Max.ToolTip", "Max(A, B)" },
		{ "Min.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExABBlendingType::Min" },
		{ "Min.ToolTip", "Min(A, B)" },
		{ "Mod.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Mod.DisplayName", "Modulo (Simple)" },
		{ "Mod.Name", "EPCGExABBlendingType::Mod" },
		{ "Mod.SearchHints", "%" },
		{ "Mod.ToolTip", "FMod(A, cast(B))" },
		{ "ModCW.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "ModCW.DisplayName", "Modulo (Component Wise)" },
		{ "ModCW.Name", "EPCGExABBlendingType::ModCW" },
		{ "ModCW.SearchHints", "%" },
		{ "ModCW.ToolTip", "FMod(A, B)" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "Multiply.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Multiply.DisplayName", "Multiply" },
		{ "Multiply.Name", "EPCGExABBlendingType::Multiply" },
		{ "Multiply.SearchHints", "*" },
		{ "Multiply.ToolTip", "A * B" },
		{ "None.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "None.DisplayName", "None" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExABBlendingType::None" },
		{ "None.ToolTip", "No blending is applied, keep the original value." },
		{ "Subtract.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Subtract.DisplayName", "Subtract" },
		{ "Subtract.Name", "EPCGExABBlendingType::Subtract" },
		{ "Subtract.SearchHints", "-" },
		{ "Subtract.ToolTip", "A - B" },
		{ "ToolTip", "This is a different blending list that makes more sense for AxB blending\nand also includes extra modes that don't make sense in regular multi-source data blending" },
		{ "UnsignedHash.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "UnsignedHash.DisplayName", "Hash (Unsigned)" },
		{ "UnsignedHash.Name", "EPCGExABBlendingType::UnsignedHash" },
		{ "UnsignedHash.ToolTip", "Hash(Min(A, B), Max(A, B))" },
		{ "UnsignedMax.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "UnsignedMax.DisplayName", "Unsigned Max" },
		{ "UnsignedMax.Name", "EPCGExABBlendingType::UnsignedMax" },
		{ "UnsignedMax.ToolTip", "Max(A, B) * Sign" },
		{ "UnsignedMin.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "UnsignedMin.DisplayName", "Unsigned Min" },
		{ "UnsignedMin.Name", "EPCGExABBlendingType::UnsignedMin" },
		{ "UnsignedMin.ToolTip", "Min(A, B) * Sign" },
		{ "Weight.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "Weight.DisplayName", "Weight" },
		{ "Weight.Name", "EPCGExABBlendingType::Weight" },
		{ "Weight.SearchHints", "Weight" },
		{ "Weight.ToolTip", "(A + B) / Weight" },
		{ "WeightedAdd.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "WeightedAdd.DisplayName", "Weighted Add" },
		{ "WeightedAdd.Name", "EPCGExABBlendingType::WeightedAdd" },
		{ "WeightedAdd.ToolTip", "A + (B * Weight)" },
		{ "WeightedSubtract.ActionIcon", "PCGEx.Pin.OUT_BlendOp" },
		{ "WeightedSubtract.DisplayName", "Weighted Subtract" },
		{ "WeightedSubtract.Name", "EPCGExABBlendingType::WeightedSubtract" },
		{ "WeightedSubtract.ToolTip", "A - (B * Weight)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExABBlendingType::None", (int64)EPCGExABBlendingType::None },
		{ "EPCGExABBlendingType::Average", (int64)EPCGExABBlendingType::Average },
		{ "EPCGExABBlendingType::Weight", (int64)EPCGExABBlendingType::Weight },
		{ "EPCGExABBlendingType::Multiply", (int64)EPCGExABBlendingType::Multiply },
		{ "EPCGExABBlendingType::Divide", (int64)EPCGExABBlendingType::Divide },
		{ "EPCGExABBlendingType::Min", (int64)EPCGExABBlendingType::Min },
		{ "EPCGExABBlendingType::Max", (int64)EPCGExABBlendingType::Max },
		{ "EPCGExABBlendingType::CopyTarget", (int64)EPCGExABBlendingType::CopyTarget },
		{ "EPCGExABBlendingType::CopySource", (int64)EPCGExABBlendingType::CopySource },
		{ "EPCGExABBlendingType::Add", (int64)EPCGExABBlendingType::Add },
		{ "EPCGExABBlendingType::Subtract", (int64)EPCGExABBlendingType::Subtract },
		{ "EPCGExABBlendingType::WeightedAdd", (int64)EPCGExABBlendingType::WeightedAdd },
		{ "EPCGExABBlendingType::WeightedSubtract", (int64)EPCGExABBlendingType::WeightedSubtract },
		{ "EPCGExABBlendingType::Lerp", (int64)EPCGExABBlendingType::Lerp },
		{ "EPCGExABBlendingType::UnsignedMin", (int64)EPCGExABBlendingType::UnsignedMin },
		{ "EPCGExABBlendingType::UnsignedMax", (int64)EPCGExABBlendingType::UnsignedMax },
		{ "EPCGExABBlendingType::AbsoluteMin", (int64)EPCGExABBlendingType::AbsoluteMin },
		{ "EPCGExABBlendingType::AbsoluteMax", (int64)EPCGExABBlendingType::AbsoluteMax },
		{ "EPCGExABBlendingType::Hash", (int64)EPCGExABBlendingType::Hash },
		{ "EPCGExABBlendingType::UnsignedHash", (int64)EPCGExABBlendingType::UnsignedHash },
		{ "EPCGExABBlendingType::Mod", (int64)EPCGExABBlendingType::Mod },
		{ "EPCGExABBlendingType::ModCW", (int64)EPCGExABBlendingType::ModCW },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExABBlendingType",
	"EPCGExABBlendingType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType()
{
	if (!Z_Registration_Info_UEnum_EPCGExABBlendingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExABBlendingType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExABBlendingType.InnerSingleton;
}
// ********** End Enum EPCGExABBlendingType ********************************************************

// ********** Begin ScriptStruct FPCGExAttributeBlendToTargetDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeBlendToTargetDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeBlendToTargetDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** BlendMode */" },
		{ "DisplayAfter", "Source" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "BlendMode" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeBlendToTargetDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Blending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeBlendToTargetDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeBlendToTargetDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics
static_assert(std::is_polymorphic<FPCGExAttributeBlendToTargetDetails>() == std::is_polymorphic<FPCGExAttributeSourceToTargetDetails>(), "USTRUCT FPCGExAttributeBlendToTargetDetails cannot be polymorphic unless super FPCGExAttributeSourceToTargetDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails;
class UScriptStruct* FPCGExAttributeBlendToTargetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeBlendToTargetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeBlendToTargetDetails Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::NewProp_Blending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendToTargetDetails, Blending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) }; // 4044480617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::NewProp_Blending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::NewProp_Blending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeBlendToTargetDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails,
	&NewStructOps,
	"PCGExAttributeBlendToTargetDetails",
	Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::PropPointers),
	sizeof(FPCGExAttributeBlendToTargetDetails),
	alignof(FPCGExAttributeBlendToTargetDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeBlendToTargetDetails *********************************

// ********** Begin ScriptStruct FPCGExPointPropertyBlendingOverrides ******************************
struct Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPointPropertyBlendingOverrides); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPointPropertyBlendingOverrides); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Density" },
		{ "EditCondition", "bOverrideDensity" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBoundsMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMinBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "BoundsMin" },
		{ "EditCondition", "bOverrideBoundsMin" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBoundsMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaxBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "BoundsMax" },
		{ "EditCondition", "bOverrideBoundsMax" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Position" },
		{ "EditCondition", "bOverridePosition" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Rotation" },
		{ "EditCondition", "bOverrideRotation" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Scale" },
		{ "EditCondition", "bOverrideScale" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSteepness_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteepnessBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Steepness" },
		{ "EditCondition", "bOverrideSteepness" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Seed" },
		{ "EditCondition", "bOverrideSeed" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPointPropertyBlendingOverrides constinit property declarations 
	static void NewProp_bOverrideDensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DensityBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityBlending;
	static void NewProp_bOverrideBoundsMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBoundsMin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsMinBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsMinBlending;
	static void NewProp_bOverrideBoundsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBoundsMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsMaxBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsMaxBlending;
	static void NewProp_bOverrideColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorBlending;
	static void NewProp_bOverridePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionBlending;
	static void NewProp_bOverrideRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationBlending;
	static void NewProp_bOverrideScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleBlending;
	static void NewProp_bOverrideSteepness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSteepness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SteepnessBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SteepnessBlending;
	static void NewProp_bOverrideSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedBlending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPointPropertyBlendingOverrides constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPointPropertyBlendingOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides;
class UScriptStruct* FPCGExPointPropertyBlendingOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPointPropertyBlendingOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPointPropertyBlendingOverrides Property Definitions *********
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideDensity_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideDensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideDensity = { "bOverrideDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDensity_MetaData), NewProp_bOverrideDensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_DensityBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_DensityBlending = { "DensityBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, DensityBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityBlending_MetaData), NewProp_DensityBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMin_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideBoundsMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMin = { "bOverrideBoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBoundsMin_MetaData), NewProp_bOverrideBoundsMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMinBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMinBlending = { "BoundsMinBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, BoundsMinBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMinBlending_MetaData), NewProp_BoundsMinBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMax_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideBoundsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMax = { "bOverrideBoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBoundsMax_MetaData), NewProp_bOverrideBoundsMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMaxBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMaxBlending = { "BoundsMaxBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, BoundsMaxBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMaxBlending_MetaData), NewProp_BoundsMaxBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideColor_MetaData), NewProp_bOverrideColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ColorBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ColorBlending = { "ColorBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, ColorBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlending_MetaData), NewProp_ColorBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverridePosition_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverridePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverridePosition = { "bOverridePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverridePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosition_MetaData), NewProp_bOverridePosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_PositionBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_PositionBlending = { "PositionBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, PositionBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBlending_MetaData), NewProp_PositionBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideRotation_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideRotation = { "bOverrideRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotation_MetaData), NewProp_bOverrideRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_RotationBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_RotationBlending = { "RotationBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, RotationBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationBlending_MetaData), NewProp_RotationBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideScale_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideScale = { "bOverrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideScale_MetaData), NewProp_bOverrideScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ScaleBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ScaleBlending = { "ScaleBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, ScaleBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleBlending_MetaData), NewProp_ScaleBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSteepness_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideSteepness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSteepness = { "bOverrideSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSteepness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSteepness_MetaData), NewProp_bOverrideSteepness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SteepnessBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SteepnessBlending = { "SteepnessBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, SteepnessBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteepnessBlending_MetaData), NewProp_SteepnessBlending_MetaData) }; // 4044480617
void Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSeed_SetBit(void* Obj)
{
	((FPCGExPointPropertyBlendingOverrides*)Obj)->bOverrideSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSeed = { "bOverrideSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPropertyBlendingOverrides), &Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSeed_MetaData), NewProp_bOverrideSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SeedBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SeedBlending = { "SeedBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPropertyBlendingOverrides, SeedBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedBlending_MetaData), NewProp_SeedBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_DensityBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_DensityBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMinBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMinBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideBoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMaxBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_BoundsMaxBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ColorBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ColorBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverridePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_PositionBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_PositionBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_RotationBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_RotationBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ScaleBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_ScaleBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSteepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SteepnessBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SteepnessBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_bOverrideSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SeedBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewProp_SeedBlending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPointPropertyBlendingOverrides Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPointPropertyBlendingOverrides",
	Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::PropPointers),
	sizeof(FPCGExPointPropertyBlendingOverrides),
	alignof(FPCGExPointPropertyBlendingOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPointPropertyBlendingOverrides ********************************

// ********** Begin ScriptStruct FPCGExPropertiesBlendingDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPropertiesBlendingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPropertiesBlendingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Density" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMinBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "BoundsMin" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaxBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "BoundsMax" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Position" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteepnessBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Steepness" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPropertiesBlendingDetails constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_DensityBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsMinBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsMinBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsMaxBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsMaxBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SteepnessBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SteepnessBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedBlending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPropertiesBlendingDetails constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPropertiesBlendingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails;
class UScriptStruct* FPCGExPropertiesBlendingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPropertiesBlendingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPropertiesBlendingDetails Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_DensityBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_DensityBlending = { "DensityBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, DensityBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityBlending_MetaData), NewProp_DensityBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMinBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMinBlending = { "BoundsMinBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, BoundsMinBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMinBlending_MetaData), NewProp_BoundsMinBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMaxBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMaxBlending = { "BoundsMaxBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, BoundsMaxBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMaxBlending_MetaData), NewProp_BoundsMaxBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ColorBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ColorBlending = { "ColorBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, ColorBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlending_MetaData), NewProp_ColorBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_PositionBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_PositionBlending = { "PositionBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, PositionBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBlending_MetaData), NewProp_PositionBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_RotationBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_RotationBlending = { "RotationBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, RotationBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationBlending_MetaData), NewProp_RotationBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ScaleBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ScaleBlending = { "ScaleBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, ScaleBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleBlending_MetaData), NewProp_ScaleBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SteepnessBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SteepnessBlending = { "SteepnessBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, SteepnessBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteepnessBlending_MetaData), NewProp_SteepnessBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SeedBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SeedBlending = { "SeedBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesBlendingDetails, SeedBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedBlending_MetaData), NewProp_SeedBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_DensityBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_DensityBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMinBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMinBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMaxBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_BoundsMaxBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ColorBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ColorBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_PositionBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_PositionBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_RotationBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_RotationBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ScaleBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_ScaleBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SteepnessBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SteepnessBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SeedBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewProp_SeedBlending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPropertiesBlendingDetails Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPropertiesBlendingDetails",
	Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::PropPointers),
	sizeof(FPCGExPropertiesBlendingDetails),
	alignof(FPCGExPropertiesBlendingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPropertiesBlendingDetails *************************************

// ********** Begin ScriptStruct FPCGExBlendingDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBlendingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBlendingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "BlendingFilter != EPCGExAttributeFilter::All" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlending_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExDataBlending.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBlendingDetails constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingFilter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredAttributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBlending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultBlending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesOverrides;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributesOverrides_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributesOverrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributesOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributesOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBlendingDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBlendingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails;
class UScriptStruct* FPCGExBlendingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBlendingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBlendingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBlendingDetails Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_BlendingFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_BlendingFilter = { "BlendingFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBlendingDetails, BlendingFilter), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingFilter_MetaData), NewProp_BlendingFilter_MetaData) }; // 3768222847
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_FilteredAttributes_Inner = { "FilteredAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_FilteredAttributes = { "FilteredAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBlendingDetails, FilteredAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredAttributes_MetaData), NewProp_FilteredAttributes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_DefaultBlending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_DefaultBlending = { "DefaultBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBlendingDetails, DefaultBlending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlending_MetaData), NewProp_DefaultBlending_MetaData) }; // 4044480617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_PropertiesOverrides = { "PropertiesOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBlendingDetails, PropertiesOverrides), Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertiesOverrides_MetaData), NewProp_PropertiesOverrides_MetaData) }; // 717711494
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_ValueProp = { "AttributesOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(0, nullptr) }; // 4044480617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_Key_KeyProp = { "AttributesOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides = { "AttributesOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBlendingDetails, AttributesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesOverrides_MetaData), NewProp_AttributesOverrides_MetaData) }; // 4044480617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_BlendingFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_BlendingFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_FilteredAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_FilteredAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_DefaultBlending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_DefaultBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_PropertiesOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewProp_AttributesOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBlendingDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBlendingDetails",
	Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::PropPointers),
	sizeof(FPCGExBlendingDetails),
	alignof(FPCGExBlendingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBlendingDetails ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBlendOver_StaticEnum, TEXT("EPCGExBlendOver"), &Z_Registration_Info_UEnum_EPCGExBlendOver, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 336339527U) },
		{ EPCGExBlendingInterface_StaticEnum, TEXT("EPCGExBlendingInterface"), &Z_Registration_Info_UEnum_EPCGExBlendingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1762397716U) },
		{ EPCGExDataBlendingType_StaticEnum, TEXT("EPCGExDataBlendingType"), &Z_Registration_Info_UEnum_EPCGExDataBlendingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4044480617U) },
		{ EPCGExABBlendingType_StaticEnum, TEXT("EPCGExABBlendingType"), &Z_Registration_Info_UEnum_EPCGExABBlendingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1196643237U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeBlendToTargetDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeBlendToTargetDetails_Statics::NewStructOps, TEXT("PCGExAttributeBlendToTargetDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendToTargetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeBlendToTargetDetails), 1607736499U) },
		{ FPCGExPointPropertyBlendingOverrides::StaticStruct, Z_Construct_UScriptStruct_FPCGExPointPropertyBlendingOverrides_Statics::NewStructOps, TEXT("PCGExPointPropertyBlendingOverrides"),&Z_Registration_Info_UScriptStruct_FPCGExPointPropertyBlendingOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPointPropertyBlendingOverrides), 717711494U) },
		{ FPCGExPropertiesBlendingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails_Statics::NewStructOps, TEXT("PCGExPropertiesBlendingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPropertiesBlendingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPropertiesBlendingDetails), 1047595412U) },
		{ FPCGExBlendingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExBlendingDetails_Statics::NewStructOps, TEXT("PCGExBlendingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExBlendingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBlendingDetails), 1694264898U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_2922259259{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExDataBlending_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
