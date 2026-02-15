// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExBranchOnDataAttribute.h"
#include "Elements/ControlFlow/PCGControlFlow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBranchOnDataAttribute() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBranchOnDataPin();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExControlFlowSelectionMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode;
static UEnum* EPCGExControlFlowSelectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExControlFlowSelectionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExControlFlowSelectionMode>()
{
	return EPCGExControlFlowSelectionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EnumInteger.Name", "EPCGExControlFlowSelectionMode::EnumInteger" },
		{ "EnumName.Name", "EPCGExControlFlowSelectionMode::EnumName" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "UserDefined.Name", "EPCGExControlFlowSelectionMode::UserDefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExControlFlowSelectionMode::UserDefined", (int64)EPCGExControlFlowSelectionMode::UserDefined },
		{ "EPCGExControlFlowSelectionMode::EnumInteger", (int64)EPCGExControlFlowSelectionMode::EnumInteger },
		{ "EPCGExControlFlowSelectionMode::EnumName", (int64)EPCGExControlFlowSelectionMode::EnumName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExControlFlowSelectionMode",
	"EPCGExControlFlowSelectionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode.InnerSingleton;
}
// ********** End Enum EPCGExControlFlowSelectionMode **********************************************

// ********** Begin ScriptStruct FPCGExBranchOnDataPin *********************************************
struct Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBranchOnDataPin); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBranchOnDataPin); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the output pin */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the output pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Check_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should the data be compared. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How should the data be compared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericCompare_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Value */" },
		{ "DisplayName", "Value" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for near measures */" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::Numeric && NumericCompare == EPCGExComparison::NearlyEqual || NumericCompare == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for near measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringCompare_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Value */" },
		{ "DisplayName", "Value" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBranchOnDataPin constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Check_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Check;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericCompare_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericCompare;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_NumericValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StringCompare_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StringCompare;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBranchOnDataPin constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBranchOnDataPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin;
class UScriptStruct* FPCGExBranchOnDataPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBranchOnDataPin, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBranchOnDataPin"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBranchOnDataPin Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Check_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Check = { "Check", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, Check), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Check_MetaData), NewProp_Check_MetaData) }; // 1949993194
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericCompare_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericCompare = { "NumericCompare", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, NumericCompare), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericCompare_MetaData), NewProp_NumericCompare_MetaData) }; // 703604353
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericValue = { "NumericValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, NumericValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericValue_MetaData), NewProp_NumericValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringCompare_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringCompare = { "StringCompare", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, StringCompare), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringCompare_MetaData), NewProp_StringCompare_MetaData) }; // 4028780742
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBranchOnDataPin, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Check_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Check,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericCompare_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericCompare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_NumericValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringCompare_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringCompare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBranchOnDataPin Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBranchOnDataPin",
	Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::PropPointers),
	sizeof(FPCGExBranchOnDataPin),
	alignof(FPCGExBranchOnDataPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBranchOnDataPin()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBranchOnDataPin ***********************************************

// ********** Begin Class UPCGExBranchOnDataAttributeSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings;
UClass* UPCGExBranchOnDataAttributeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBranchOnDataAttributeSettings;
	if (!Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBranchOnDataAttributeSettings"),
			Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBranchOnDataAttributeSettings,
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
	return Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_NoRegister()
{
	return UPCGExBranchOnDataAttributeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExBranchOnDataAttribute.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/branch-on-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The @Data domain attribute to check */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The @Data domain attribute to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Determines the type of value to be used to select an output. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "ToolTip", "Determines the type of value to be used to select an output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "SelectionMode == EPCGExControlFlowSelectionMode::UserDefined" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalBranches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SelectionMode != EPCGExControlFlowSelectionMode::UserDefined" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Determines which Enum be used. */" },
		{ "EditCondition", "SelectionMode != EPCGExControlFlowSelectionMode::UserDefined && EnumSource == EPCGExEnumConstantSourceType::Picker" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Determines which Enum be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumPicker_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Determines which Enum be used. Enum selection is ignored here, it's only using the class value internally. */" },
		{ "EditCondition", "SelectionMode != EPCGExControlFlowSelectionMode::UserDefined && EnumSource == EPCGExEnumConstantSourceType::Selector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "PCG_NotOverridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Determines which Enum be used. Enum selection is ignored here, it's only using the class value internally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPinName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the default/fallback output pin. This is exposed because to allow easy disambiguation when 'default' is a valid switch. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBranchOnDataAttribute.h" },
		{ "ToolTip", "Name of the default/fallback output pin. This is exposed because to allow easy disambiguation when 'default' is a valid switch." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBranchOnDataAttributeSettings constinit property declarations ******
	static const UECodeGen_Private::FNamePropertyParams NewProp_BranchSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Branches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InternalBranches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalBranches;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnumClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumPicker;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPinName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBranchOnDataAttributeSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBranchOnDataAttributeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics

// ********** Begin Class UPCGExBranchOnDataAttributeSettings Property Definitions *****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_BranchSource = { "BranchSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, BranchSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchSource_MetaData), NewProp_BranchSource_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_SelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, SelectionMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExControlFlowSelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMode_MetaData), NewProp_SelectionMode_MetaData) }; // 968516212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExBranchOnDataPin, METADATA_PARAMS(0, nullptr) }; // 3443769492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branches_MetaData), NewProp_Branches_MetaData) }; // 3443769492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_InternalBranches_Inner = { "InternalBranches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExBranchOnDataPin, METADATA_PARAMS(0, nullptr) }; // 3443769492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_InternalBranches = { "InternalBranches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, InternalBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalBranches_MetaData), NewProp_InternalBranches_MetaData) }; // 3443769492
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumSource = { "EnumSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, EnumSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumSource_MetaData), NewProp_EnumSource_MetaData) }; // 194668694
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumClass = { "EnumClass", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, EnumClass), Z_Construct_UClass_UEnum_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumClass_MetaData), NewProp_EnumClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumPicker = { "EnumPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, EnumPicker), Z_Construct_UScriptStruct_FEnumSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumPicker_MetaData), NewProp_EnumPicker_MetaData) }; // 2678093522
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_DefaultPinName = { "DefaultPinName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBranchOnDataAttributeSettings, DefaultPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPinName_MetaData), NewProp_DefaultPinName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_BranchSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_SelectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_SelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_Branches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_Branches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_InternalBranches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_InternalBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_EnumPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::NewProp_DefaultPinName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBranchOnDataAttributeSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::ClassParams = {
	&UPCGExBranchOnDataAttributeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::Class_MetaDataParams)
};
void UPCGExBranchOnDataAttributeSettings::StaticRegisterNativesUPCGExBranchOnDataAttributeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.OuterSingleton, Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings.OuterSingleton;
}
UPCGExBranchOnDataAttributeSettings::UPCGExBranchOnDataAttributeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBranchOnDataAttributeSettings);
UPCGExBranchOnDataAttributeSettings::~UPCGExBranchOnDataAttributeSettings() {}
// ********** End Class UPCGExBranchOnDataAttributeSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExControlFlowSelectionMode_StaticEnum, TEXT("EPCGExControlFlowSelectionMode"), &Z_Registration_Info_UEnum_EPCGExControlFlowSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 968516212U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExBranchOnDataPin::StaticStruct, Z_Construct_UScriptStruct_FPCGExBranchOnDataPin_Statics::NewStructOps, TEXT("PCGExBranchOnDataPin"),&Z_Registration_Info_UScriptStruct_FPCGExBranchOnDataPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBranchOnDataPin), 3443769492U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBranchOnDataAttributeSettings, UPCGExBranchOnDataAttributeSettings::StaticClass, TEXT("UPCGExBranchOnDataAttributeSettings"), &Z_Registration_Info_UClass_UPCGExBranchOnDataAttributeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBranchOnDataAttributeSettings), 1405556371U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_581600700{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBranchOnDataAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
