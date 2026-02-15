// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicAttribute() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAttributeHeuristicInputMode *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode;
static UEnum* EPCGExAttributeHeuristicInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttributeHeuristicInputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeHeuristicInputMode>()
{
	return EPCGExAttributeHeuristicInputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoCurve.DisplayName", "Auto Curve" },
		{ "AutoCurve.Name", "EPCGExAttributeHeuristicInputMode::AutoCurve" },
		{ "AutoCurve.ToolTip", "Automatically sample the curve using normalized value from existing min/max input." },
		{ "ManualCurve.DisplayName", "Manual Curve" },
		{ "ManualCurve.Name", "EPCGExAttributeHeuristicInputMode::ManualCurve" },
		{ "ManualCurve.ToolTip", "Sample the curve using normalized value from manual min/max values." },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "Raw.DisplayName", "Raw" },
		{ "Raw.Name", "EPCGExAttributeHeuristicInputMode::Raw" },
		{ "Raw.ToolTip", "Use raw attribute as score. Use at your own risks!" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttributeHeuristicInputMode::AutoCurve", (int64)EPCGExAttributeHeuristicInputMode::AutoCurve },
		{ "EPCGExAttributeHeuristicInputMode::ManualCurve", (int64)EPCGExAttributeHeuristicInputMode::ManualCurve },
		{ "EPCGExAttributeHeuristicInputMode::Raw", (int64)EPCGExAttributeHeuristicInputMode::Raw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttributeHeuristicInputMode",
	"EPCGExAttributeHeuristicInputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode.InnerSingleton;
}
// ********** End Enum EPCGExAttributeHeuristicInputMode *******************************************

// ********** Begin ScriptStruct FPCGExHeuristicAttributeConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicAttributeConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicAttributeConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify how to deal with the attribute value */" },
		{ "DisplayPriority", "-2" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Specify how to deal with the attribute value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Read the data from either vertices or edges */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Read the data from either vertices or edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read modifier value from. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read modifier value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will use this value as input min remap reference instead of the one found on the attribute. */" },
		{ "EditCondition", "Mode == EPCGExAttributeHeuristicInputMode::ManualCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will use this value as input min remap reference instead of the one found on the attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will use this value as input max remap reference instead of the one found on the attribute. */" },
		{ "EditCondition", "Mode == EPCGExAttributeHeuristicInputMode::ManualCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will use this value as input max remap reference instead of the one found on the attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default weight when no valid internal normalization can be made (e.g, all points have the same values so min == max). If left unset, will use min/max clamped between 0 & 1. */" },
		{ "EditCondition", "bUseCustomFallback" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Default weight when no valid internal normalization can be made (e.g, all points have the same values so min == max). If left unset, will use min/max clamped between 0 & 1." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicAttributeConfig constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InMax;
	static void NewProp_bUseCustomFallback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFallback;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallbackValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicAttributeConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicAttributeConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicAttributeConfig>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicAttributeConfig cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig;
class UScriptStruct* FPCGExHeuristicAttributeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicAttributeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicAttributeConfig Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeHeuristicInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2304444647
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, Attribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, InMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMin_MetaData), NewProp_InMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, InMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMax_MetaData), NewProp_InMax_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_bUseCustomFallback_SetBit(void* Obj)
{
	((FPCGExHeuristicAttributeConfig*)Obj)->bUseCustomFallback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_bUseCustomFallback = { "bUseCustomFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicAttributeConfig), &Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_bUseCustomFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomFallback_MetaData), NewProp_bUseCustomFallback_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_FallbackValue = { "FallbackValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicAttributeConfig, FallbackValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackValue_MetaData), NewProp_FallbackValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_bUseCustomFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewProp_FallbackValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicAttributeConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicAttributeConfig",
	Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::PropPointers),
	sizeof(FPCGExHeuristicAttributeConfig),
	alignof(FPCGExHeuristicAttributeConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicAttributeConfig **************************************

// ********** Begin Class UPCGExHeuristicsFactoryAttribute *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute;
UClass* UPCGExHeuristicsFactoryAttribute::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryAttribute;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryAttribute"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryAttribute,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_NoRegister()
{
	return UPCGExHeuristicsFactoryAttribute::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryAttribute constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryAttribute constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics

// ********** Begin Class UPCGExHeuristicsFactoryAttribute Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryAttribute, Config), Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 217065005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryAttribute Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryAttribute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryAttribute::StaticRegisterNativesUPCGExHeuristicsFactoryAttribute()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute.OuterSingleton;
}
UPCGExHeuristicsFactoryAttribute::UPCGExHeuristicsFactoryAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryAttribute);
UPCGExHeuristicsFactoryAttribute::~UPCGExHeuristicsFactoryAttribute() {}
// ********** End Class UPCGExHeuristicsFactoryAttribute *******************************************

// ********** Begin Class UPCGExCreateHeuristicAttributeSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings;
UClass* UPCGExCreateHeuristicAttributeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateHeuristicAttributeSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateHeuristicAttributeSettings"),
			Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateHeuristicAttributeSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_NoRegister()
{
	return UPCGExCreateHeuristicAttributeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Modifier properties */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Modifier properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateHeuristicAttributeSettings constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateHeuristicAttributeSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateHeuristicAttributeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics

// ********** Begin Class UPCGExCreateHeuristicAttributeSettings Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateHeuristicAttributeSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 217065005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateHeuristicAttributeSettings Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::ClassParams = {
	&UPCGExCreateHeuristicAttributeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateHeuristicAttributeSettings::StaticRegisterNativesUPCGExCreateHeuristicAttributeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings.OuterSingleton;
}
UPCGExCreateHeuristicAttributeSettings::UPCGExCreateHeuristicAttributeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateHeuristicAttributeSettings);
UPCGExCreateHeuristicAttributeSettings::~UPCGExCreateHeuristicAttributeSettings() {}
// ********** End Class UPCGExCreateHeuristicAttributeSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAttributeHeuristicInputMode_StaticEnum, TEXT("EPCGExAttributeHeuristicInputMode"), &Z_Registration_Info_UEnum_EPCGExAttributeHeuristicInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2304444647U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicAttributeConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicAttributeConfig_Statics::NewStructOps, TEXT("PCGExHeuristicAttributeConfig"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicAttributeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicAttributeConfig), 217065005U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryAttribute, UPCGExHeuristicsFactoryAttribute::StaticClass, TEXT("UPCGExHeuristicsFactoryAttribute"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryAttribute), 76935224U) },
		{ Z_Construct_UClass_UPCGExCreateHeuristicAttributeSettings, UPCGExCreateHeuristicAttributeSettings::StaticClass, TEXT("UPCGExCreateHeuristicAttributeSettings"), &Z_Registration_Info_UClass_UPCGExCreateHeuristicAttributeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateHeuristicAttributeSettings), 1117093673U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_3713917349{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
