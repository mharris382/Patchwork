// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExSplitPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSplitPath() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSplitPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSplitPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathSplitAction *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathSplitAction;
static UEnum* EPCGExPathSplitAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSplitAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathSplitAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathSplitAction"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathSplitAction.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSplitAction>()
{
	return EPCGExPathSplitAction_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disconnect.DisplayName", "Disconnect" },
		{ "Disconnect.Name", "EPCGExPathSplitAction::Disconnect" },
		{ "Disconnect.ToolTip", "Disconnect the split point from the next one, starting a new path from the next." },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "Partition.DisplayName", "Partition" },
		{ "Partition.Name", "EPCGExPathSplitAction::Partition" },
		{ "Partition.ToolTip", "Works like split but only create new data set as soon as the filter result changes from its previous result." },
		{ "Remove.DisplayName", "Remove" },
		{ "Remove.Name", "EPCGExPathSplitAction::Remove" },
		{ "Remove.ToolTip", "Remove the split point, shrinking both the previous and next paths." },
		{ "Split.DisplayName", "Split" },
		{ "Split.Name", "EPCGExPathSplitAction::Split" },
		{ "Split.ToolTip", "Duplicate the split point so the original becomes a new end, and the copy a new start." },
		{ "Switch.DisplayName", "Switch" },
		{ "Switch.Name", "EPCGExPathSplitAction::Switch" },
		{ "Switch.ToolTip", "Use the result of the filter as a switch signal to change between keep/prune behavior." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathSplitAction::Split", (int64)EPCGExPathSplitAction::Split },
		{ "EPCGExPathSplitAction::Remove", (int64)EPCGExPathSplitAction::Remove },
		{ "EPCGExPathSplitAction::Disconnect", (int64)EPCGExPathSplitAction::Disconnect },
		{ "EPCGExPathSplitAction::Partition", (int64)EPCGExPathSplitAction::Partition },
		{ "EPCGExPathSplitAction::Switch", (int64)EPCGExPathSplitAction::Switch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathSplitAction",
	"EPCGExPathSplitAction",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSplitAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathSplitAction.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathSplitAction.InnerSingleton;
}
// ********** End Enum EPCGExPathSplitAction *******************************************************

// ********** Begin Enum EPCGExPathSplitInitialValue ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue;
static UEnum* EPCGExPathSplitInitialValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathSplitInitialValue"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSplitInitialValue>()
{
	return EPCGExPathSplitInitialValue_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExPathSplitInitialValue::Constant" },
		{ "Constant.ToolTip", "Use a constant value." },
		{ "ConstantPreserve.DisplayName", "Constant (Preserve)" },
		{ "ConstantPreserve.Name", "EPCGExPathSplitInitialValue::ConstantPreserve" },
		{ "ConstantPreserve.ToolTip", "Use a constant value, but does not switch if the first value is the same." },
		{ "FromPoint.DisplayName", "From Point" },
		{ "FromPoint.Name", "EPCGExPathSplitInitialValue::FromPoint" },
		{ "FromPoint.ToolTip", "Use the first point starting value." },
		{ "FromPointPreserve.DisplayName", "From Point (Preserve)" },
		{ "FromPointPreserve.Name", "EPCGExPathSplitInitialValue::FromPointPreserve" },
		{ "FromPointPreserve.ToolTip", "Use the first point starting value, but preserve its behavior." },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathSplitInitialValue::Constant", (int64)EPCGExPathSplitInitialValue::Constant },
		{ "EPCGExPathSplitInitialValue::ConstantPreserve", (int64)EPCGExPathSplitInitialValue::ConstantPreserve },
		{ "EPCGExPathSplitInitialValue::FromPoint", (int64)EPCGExPathSplitInitialValue::FromPoint },
		{ "EPCGExPathSplitInitialValue::FromPointPreserve", (int64)EPCGExPathSplitInitialValue::FromPointPreserve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathSplitInitialValue",
	"EPCGExPathSplitInitialValue",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue.InnerSingleton;
}
// ********** End Enum EPCGExPathSplitInitialValue *************************************************

// ********** Begin Class UPCGExSplitPathSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSplitPathSettings;
UClass* UPCGExSplitPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSplitPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExSplitPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSplitPathSettings"),
			Z_Registration_Info_UClass_UPCGExSplitPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSplitPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExSplitPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSplitPathSettings_NoRegister()
{
	return UPCGExSplitPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSplitPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExSplitPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCGExNodeLibraryDoc", "paths/split" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If both split and remove are true, the selected behavior takes priority */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If both split and remove are true, the selected behavior takes priority" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "SplitAction == EPCGExPathSplitAction::Switch || SplitAction == EPCGExPathSplitAction::Partition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The initial switch value to start from. If false, will only starting to create paths after the first true result. If false, will start to create paths from the beginning and stop at the first true result instead.*/" },
		{ "EditCondition", "InitialBehavior == EPCGExPathSplitInitialValue::Constant && (SplitAction == EPCGExPathSplitAction::Switch || SplitAction == EPCGExPathSplitAction::Partition)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The initial switch value to start from. If false, will only starting to create paths after the first true result. If false, will start to create paths from the beginning and stop at the first true result instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should point insertion be inclusive of the behavior change */" },
		{ "EditCondition", "SplitAction == EPCGExPathSplitAction::Switch || SplitAction == EPCGExPathSplitAction::Partition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Should point insertion be inclusive of the behavior change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitSinglePointOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output single-point data or not */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output single-point data or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfEvenSplit_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEvenTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfEvenSplit" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfOddSplit_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOddTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfOddSplit" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplitPath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSplitPathSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplitAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialBehavior;
	static void NewProp_bInitialValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialValue;
	static void NewProp_bInclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
	static void NewProp_bOmitSinglePointOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitSinglePointOutputs;
	static void NewProp_bTagIfEvenSplit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfEvenSplit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsEvenTag;
	static void NewProp_bTagIfOddSplit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfOddSplit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsOddTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSplitPathSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSplitPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSplitPathSettings_Statics

// ********** Begin Class UPCGExSplitPathSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_SplitAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_SplitAction = { "SplitAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplitPathSettings, SplitAction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAction_MetaData), NewProp_SplitAction_MetaData) }; // 1686305672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_InitialBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_InitialBehavior = { "InitialBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplitPathSettings, InitialBehavior), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathSplitInitialValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialBehavior_MetaData), NewProp_InitialBehavior_MetaData) }; // 900624006
void Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInitialValue_SetBit(void* Obj)
{
	((UPCGExSplitPathSettings*)Obj)->bInitialValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInitialValue = { "bInitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplitPathSettings), &Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInitialValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialValue_MetaData), NewProp_bInitialValue_MetaData) };
void Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInclusive_SetBit(void* Obj)
{
	((UPCGExSplitPathSettings*)Obj)->bInclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplitPathSettings), &Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInclusive_MetaData), NewProp_bInclusive_MetaData) };
void Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bOmitSinglePointOutputs_SetBit(void* Obj)
{
	((UPCGExSplitPathSettings*)Obj)->bOmitSinglePointOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bOmitSinglePointOutputs = { "bOmitSinglePointOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplitPathSettings), &Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bOmitSinglePointOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitSinglePointOutputs_MetaData), NewProp_bOmitSinglePointOutputs_MetaData) };
void Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfEvenSplit_SetBit(void* Obj)
{
	((UPCGExSplitPathSettings*)Obj)->bTagIfEvenSplit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfEvenSplit = { "bTagIfEvenSplit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplitPathSettings), &Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfEvenSplit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfEvenSplit_MetaData), NewProp_bTagIfEvenSplit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_IsEvenTag = { "IsEvenTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplitPathSettings, IsEvenTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEvenTag_MetaData), NewProp_IsEvenTag_MetaData) };
void Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfOddSplit_SetBit(void* Obj)
{
	((UPCGExSplitPathSettings*)Obj)->bTagIfOddSplit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfOddSplit = { "bTagIfOddSplit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplitPathSettings), &Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfOddSplit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfOddSplit_MetaData), NewProp_bTagIfOddSplit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_IsOddTag = { "IsOddTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplitPathSettings, IsOddTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOddTag_MetaData), NewProp_IsOddTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSplitPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_SplitAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_SplitAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_InitialBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_InitialBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInitialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bOmitSinglePointOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfEvenSplit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_IsEvenTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_bTagIfOddSplit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplitPathSettings_Statics::NewProp_IsOddTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplitPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSplitPathSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExSplitPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplitPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSplitPathSettings_Statics::ClassParams = {
	&UPCGExSplitPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSplitPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplitPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplitPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSplitPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExSplitPathSettings::StaticRegisterNativesUPCGExSplitPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSplitPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSplitPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSplitPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExSplitPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSplitPathSettings.OuterSingleton;
}
UPCGExSplitPathSettings::UPCGExSplitPathSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSplitPathSettings);
UPCGExSplitPathSettings::~UPCGExSplitPathSettings() {}
// ********** End Class UPCGExSplitPathSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathSplitAction_StaticEnum, TEXT("EPCGExPathSplitAction"), &Z_Registration_Info_UEnum_EPCGExPathSplitAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1686305672U) },
		{ EPCGExPathSplitInitialValue_StaticEnum, TEXT("EPCGExPathSplitInitialValue"), &Z_Registration_Info_UEnum_EPCGExPathSplitInitialValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 900624006U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSplitPathSettings, UPCGExSplitPathSettings::StaticClass, TEXT("UPCGExSplitPathSettings"), &Z_Registration_Info_UClass_UPCGExSplitPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSplitPathSettings), 3451849678U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_894335537{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplitPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
