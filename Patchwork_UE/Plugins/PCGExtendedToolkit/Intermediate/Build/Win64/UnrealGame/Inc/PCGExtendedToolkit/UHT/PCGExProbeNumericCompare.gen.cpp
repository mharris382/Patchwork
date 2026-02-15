// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeNumericCompare.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeNumericCompare() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryNumericCompare();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExProbeConfigNumericCompare ***********************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigNumericCompare); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigNumericCompare); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Max Connections (Attr)" },
		{ "EditCondition", "MaxConnectionsInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Connections" },
		{ "EditCondition", "MaxConnectionsInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to compare */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to compare" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "DisplayName", "Comparison" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for approx. comparison modes */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for approx. comparison modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCoincidence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attempts to prevent connections that are roughly in the same direction */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attempts to prevent connections that are roughly in the same direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoincidencePreventionTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000010" },
		{ "Comment", "/** Attempts to prevent connections that are roughly in the same direction */" },
		{ "EditCondition", "bPreventCoincidence" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attempts to prevent connections that are roughly in the same direction" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigNumericCompare constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxConnectionsInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxConnectionsInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxConnectionsAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConnectionsConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bPreventCoincidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCoincidence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CoincidencePreventionTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigNumericCompare constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigNumericCompare>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics
static_assert(std::is_polymorphic<FPCGExProbeConfigNumericCompare>() == std::is_polymorphic<FPCGExProbeConfigBase>(), "USTRUCT FPCGExProbeConfigNumericCompare cannot be polymorphic unless super FPCGExProbeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare;
class UScriptStruct* FPCGExProbeConfigNumericCompare::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigNumericCompare"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigNumericCompare Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsInput = { "MaxConnectionsInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, MaxConnectionsInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsInput_MetaData), NewProp_MaxConnectionsInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsAttribute = { "MaxConnectionsAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, MaxConnectionsAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsAttribute_MetaData), NewProp_MaxConnectionsAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsConstant = { "MaxConnectionsConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, MaxConnectionsConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsConstant_MetaData), NewProp_MaxConnectionsConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, Attribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_bPreventCoincidence_SetBit(void* Obj)
{
	((FPCGExProbeConfigNumericCompare*)Obj)->bPreventCoincidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_bPreventCoincidence = { "bPreventCoincidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigNumericCompare), &Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_bPreventCoincidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventCoincidence_MetaData), NewProp_bPreventCoincidence_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_CoincidencePreventionTolerance = { "CoincidencePreventionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigNumericCompare, CoincidencePreventionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoincidencePreventionTolerance_MetaData), NewProp_CoincidencePreventionTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_MaxConnectionsConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_bPreventCoincidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewProp_CoincidencePreventionTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigNumericCompare Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase,
	&NewStructOps,
	"PCGExProbeConfigNumericCompare",
	Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::PropPointers),
	sizeof(FPCGExProbeConfigNumericCompare),
	alignof(FPCGExProbeConfigNumericCompare),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigNumericCompare *************************************

// ********** Begin Class UPCGExProbeFactoryNumericCompare *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare;
UClass* UPCGExProbeFactoryNumericCompare::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryNumericCompare;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryNumericCompare"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryNumericCompare,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_NoRegister()
{
	return UPCGExProbeFactoryNumericCompare::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryNumericCompare constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeFactoryNumericCompare constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryNumericCompare>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics

// ********** Begin Class UPCGExProbeFactoryNumericCompare Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryNumericCompare, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2651966295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeFactoryNumericCompare Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::ClassParams = {
	&UPCGExProbeFactoryNumericCompare::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryNumericCompare::StaticRegisterNativesUPCGExProbeFactoryNumericCompare()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryNumericCompare()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryNumericCompare_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare.OuterSingleton;
}
UPCGExProbeFactoryNumericCompare::UPCGExProbeFactoryNumericCompare(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryNumericCompare);
UPCGExProbeFactoryNumericCompare::~UPCGExProbeFactoryNumericCompare() {}
// ********** End Class UPCGExProbeFactoryNumericCompare *******************************************

// ********** Begin Class UPCGExProbeNumericCompareProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings;
UClass* UPCGExProbeNumericCompareProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeNumericCompareProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeNumericCompareProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeNumericCompareProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_NoRegister()
{
	return UPCGExProbeNumericCompareProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points/probe-compare" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeNumericCompare.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeNumericCompareProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeNumericCompareProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeNumericCompareProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics

// ********** Begin Class UPCGExProbeNumericCompareProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeNumericCompareProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2651966295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeNumericCompareProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::ClassParams = {
	&UPCGExProbeNumericCompareProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeNumericCompareProviderSettings::StaticRegisterNativesUPCGExProbeNumericCompareProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings.OuterSingleton;
}
UPCGExProbeNumericCompareProviderSettings::UPCGExProbeNumericCompareProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeNumericCompareProviderSettings);
UPCGExProbeNumericCompareProviderSettings::~UPCGExProbeNumericCompareProviderSettings() {}
// ********** End Class UPCGExProbeNumericCompareProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigNumericCompare::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigNumericCompare_Statics::NewStructOps, TEXT("PCGExProbeConfigNumericCompare"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigNumericCompare, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigNumericCompare), 2651966295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryNumericCompare, UPCGExProbeFactoryNumericCompare::StaticClass, TEXT("UPCGExProbeFactoryNumericCompare"), &Z_Registration_Info_UClass_UPCGExProbeFactoryNumericCompare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryNumericCompare), 3897993543U) },
		{ Z_Construct_UClass_UPCGExProbeNumericCompareProviderSettings, UPCGExProbeNumericCompareProviderSettings::StaticClass, TEXT("UPCGExProbeNumericCompareProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeNumericCompareProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeNumericCompareProviderSettings), 1863980782U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_35785877{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeNumericCompare_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
