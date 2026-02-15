// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSelfPruning.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSelfPruning() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSelfPruningSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSelfPruningSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSelfPruningMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSelfPruningMode;
static UEnum* EPCGExSelfPruningMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfPruningMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSelfPruningMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSelfPruningMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSelfPruningMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfPruningMode>()
{
	return EPCGExSelfPruningMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "Prune.DisplayName", "Prune" },
		{ "Prune.Name", "EPCGExSelfPruningMode::Prune" },
		{ "Prune.ToolTip", "Prune points" },
		{ "WriteResult.DisplayName", "Write Result" },
		{ "WriteResult.Name", "EPCGExSelfPruningMode::WriteResult" },
		{ "WriteResult.ToolTip", "Write the number of overlaps" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSelfPruningMode::Prune", (int64)EPCGExSelfPruningMode::Prune },
		{ "EPCGExSelfPruningMode::WriteResult", (int64)EPCGExSelfPruningMode::WriteResult },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSelfPruningMode",
	"EPCGExSelfPruningMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfPruningMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSelfPruningMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSelfPruningMode.InnerSingleton;
}
// ********** End Enum EPCGExSelfPruningMode *******************************************************

// ********** Begin Enum EPCGExSelfPruningExpandOrder **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder;
static UEnum* EPCGExSelfPruningExpandOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSelfPruningExpandOrder"));
	}
	return Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfPruningExpandOrder>()
{
	return EPCGExSelfPruningExpandOrder_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "After.DisplayName", "After Transform" },
		{ "After.Name", "EPCGExSelfPruningExpandOrder::After" },
		{ "After.ToolTip", "Expand bounds after world transform" },
		{ "Before.DisplayName", "Before Transform" },
		{ "Before.Name", "EPCGExSelfPruningExpandOrder::Before" },
		{ "Before.ToolTip", "Expand bounds before world transform" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExSelfPruningExpandOrder::None" },
		{ "None.ToolTip", "Do not expand bounds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSelfPruningExpandOrder::None", (int64)EPCGExSelfPruningExpandOrder::None },
		{ "EPCGExSelfPruningExpandOrder::Before", (int64)EPCGExSelfPruningExpandOrder::Before },
		{ "EPCGExSelfPruningExpandOrder::After", (int64)EPCGExSelfPruningExpandOrder::After },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSelfPruningExpandOrder",
	"EPCGExSelfPruningExpandOrder",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder()
{
	if (!Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder.InnerSingleton;
}
// ********** End Enum EPCGExSelfPruningExpandOrder ************************************************

// ********** Begin Class UPCGExSelfPruningSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSelfPruningSettings;
UClass* UPCGExSelfPruningSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSelfPruningSettings;
	if (!Z_Registration_Info_UClass_UPCGExSelfPruningSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSelfPruningSettings"),
			Z_Registration_Info_UClass_UPCGExSelfPruningSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSelfPruningSettings,
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
	return Z_Registration_Info_UClass_UPCGExSelfPruningSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSelfPruningSettings_NoRegister()
{
	return UPCGExSelfPruningSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSelfPruningSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSelfPruning.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCGExNodeLibraryDoc", "sampling/self-pruning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to prune points or write the number of overlaps */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to prune points or write the number of overlaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to sort hash components or not. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Sort Direction" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to sort hash components or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sort over a random per-point value */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Randomize" },
		{ "EditCondition", "Mode == EPCGExSelfPruningMode::Prune" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort over a random per-point value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sort over a random per-point value */" },
		{ "DisplayName", "\xe2\x94\x80\xe2\x94\x94\xe2\x94\x80 Range" },
		{ "EditCondition", "bRandomize && Mode == EPCGExSelfPruningMode::Prune" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort over a random per-point value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOverlapAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the number of overlap to. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Output to" },
		{ "EditCondition", "Mode == EPCGExSelfPruningMode::WriteResult" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the number of overlap to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Discrete mode write the number as-is, relative will normalize against the highest number of overlaps found. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Units" },
		{ "EditCondition", "Mode == EPCGExSelfPruningMode::WriteResult" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discrete mode write the number as-is, relative will normalize against the highest number of overlaps found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputOneMinusOverlap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to do a OneMinus on the normalized overlap count value */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 OneMinus" },
		{ "EditCondition", "Mode == EPCGExSelfPruningMode::WriteResult && Units == EPCGExMeanMeasure::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to do a OneMinus on the normalized overlap count value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreciseTest_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** If enabled, does very precise and EXPENSIVE spatial tests. Only supported for pruning. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, does very precise and EXPENSIVE spatial tests. Only supported for pruning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMode_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** If and how to expand the primary bounds (bounds used for the main point being evaluated) */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If and how to expand the primary bounds (bounds used for the main point being evaluated)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryExpansionInput_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Type of primary expansion */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Input" },
		{ "EditCondition", "PrimaryMode != EPCGExSelfPruningExpandOrder::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of primary expansion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryExpansionAttribute_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Primary Expansion value. Uniform, discrete offset applied to bounds. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Primary Expansion (Attr)" },
		{ "EditCondition", "PrimaryMode != EPCGExSelfPruningExpandOrder::None && PrimaryExpansionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Primary Expansion value. Uniform, discrete offset applied to bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryExpansion_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Primary Expansion value. Uniform, discrete offset applied to bounds. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Primary Expansion" },
		{ "EditCondition", "PrimaryMode != EPCGExSelfPruningExpandOrder::None && PrimaryExpansionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Primary Expansion value. Uniform, discrete offset applied to bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMode_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** If and how to expand the primary bounds (bounds used for neighbors points against the main point being evaluated) */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If and how to expand the primary bounds (bounds used for neighbors points against the main point being evaluated)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryExpansionInput_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Type of secondary expansion */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Input" },
		{ "EditCondition", "SecondaryMode != EPCGExSelfPruningExpandOrder::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of secondary expansion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryExpansionAttribute_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Secondary Expansion value. Uniform, discrete offset applied to bounds. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Secondary Expansion (Attr)" },
		{ "EditCondition", "SecondaryMode != EPCGExSelfPruningExpandOrder::None && SecondaryExpansionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Secondary Expansion value. Uniform, discrete offset applied to bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryExpansion_MetaData[] = {
		{ "Category", "Settings|Expansion" },
		{ "Comment", "/** Secondary Expansion value. Uniform, discrete offset applied to bounds. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Secondary Expansion" },
		{ "EditCondition", "SecondaryMode != EPCGExSelfPruningExpandOrder::None && SecondaryExpansionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSelfPruning.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Secondary Expansion value. Uniform, discrete offset applied to bounds." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSelfPruningSettings constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static void NewProp_bRandomize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RandomRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumOverlapAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Units;
	static void NewProp_bOutputOneMinusOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOneMinusOverlap;
	static void NewProp_bPreciseTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreciseTest;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryExpansionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryExpansionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryExpansionAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PrimaryExpansion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondaryMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondaryMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondaryExpansionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondaryExpansionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryExpansionAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SecondaryExpansion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSelfPruningSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSelfPruningSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSelfPruningSettings_Statics

// ********** Begin Class UPCGExSelfPruningSettings Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3075688563
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
void Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bRandomize_SetBit(void* Obj)
{
	((UPCGExSelfPruningSettings*)Obj)->bRandomize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bRandomize = { "bRandomize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSelfPruningSettings), &Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bRandomize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomize_MetaData), NewProp_bRandomize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_RandomRange = { "RandomRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, RandomRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRange_MetaData), NewProp_RandomRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_NumOverlapAttributeName = { "NumOverlapAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, NumOverlapAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOverlapAttributeName_MetaData), NewProp_NumOverlapAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, Units), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) }; // 356721050
void Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bOutputOneMinusOverlap_SetBit(void* Obj)
{
	((UPCGExSelfPruningSettings*)Obj)->bOutputOneMinusOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bOutputOneMinusOverlap = { "bOutputOneMinusOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSelfPruningSettings), &Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bOutputOneMinusOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinusOverlap_MetaData), NewProp_bOutputOneMinusOverlap_MetaData) };
void Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bPreciseTest_SetBit(void* Obj)
{
	((UPCGExSelfPruningSettings*)Obj)->bPreciseTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bPreciseTest = { "bPreciseTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSelfPruningSettings), &Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bPreciseTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreciseTest_MetaData), NewProp_bPreciseTest_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryMode = { "PrimaryMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, PrimaryMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMode_MetaData), NewProp_PrimaryMode_MetaData) }; // 2628175991
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionInput = { "PrimaryExpansionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, PrimaryExpansionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryExpansionInput_MetaData), NewProp_PrimaryExpansionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionAttribute = { "PrimaryExpansionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, PrimaryExpansionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryExpansionAttribute_MetaData), NewProp_PrimaryExpansionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansion = { "PrimaryExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, PrimaryExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryExpansion_MetaData), NewProp_PrimaryExpansion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryMode = { "SecondaryMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, SecondaryMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSelfPruningExpandOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMode_MetaData), NewProp_SecondaryMode_MetaData) }; // 2628175991
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionInput = { "SecondaryExpansionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, SecondaryExpansionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryExpansionInput_MetaData), NewProp_SecondaryExpansionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionAttribute = { "SecondaryExpansionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, SecondaryExpansionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryExpansionAttribute_MetaData), NewProp_SecondaryExpansionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansion = { "SecondaryExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSelfPruningSettings, SecondaryExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryExpansion_MetaData), NewProp_SecondaryExpansion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bRandomize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_RandomRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_NumOverlapAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Units_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_Units,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bOutputOneMinusOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_bPreciseTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_PrimaryExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::NewProp_SecondaryExpansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSelfPruningSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::ClassParams = {
	&UPCGExSelfPruningSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::Class_MetaDataParams)
};
void UPCGExSelfPruningSettings::StaticRegisterNativesUPCGExSelfPruningSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSelfPruningSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSelfPruningSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSelfPruningSettings.OuterSingleton, Z_Construct_UClass_UPCGExSelfPruningSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSelfPruningSettings.OuterSingleton;
}
UPCGExSelfPruningSettings::UPCGExSelfPruningSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSelfPruningSettings);
UPCGExSelfPruningSettings::~UPCGExSelfPruningSettings() {}
// ********** End Class UPCGExSelfPruningSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSelfPruningMode_StaticEnum, TEXT("EPCGExSelfPruningMode"), &Z_Registration_Info_UEnum_EPCGExSelfPruningMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3075688563U) },
		{ EPCGExSelfPruningExpandOrder_StaticEnum, TEXT("EPCGExSelfPruningExpandOrder"), &Z_Registration_Info_UEnum_EPCGExSelfPruningExpandOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2628175991U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSelfPruningSettings, UPCGExSelfPruningSettings::StaticClass, TEXT("UPCGExSelfPruningSettings"), &Z_Registration_Info_UClass_UPCGExSelfPruningSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSelfPruningSettings), 1735561377U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_2093437805{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
