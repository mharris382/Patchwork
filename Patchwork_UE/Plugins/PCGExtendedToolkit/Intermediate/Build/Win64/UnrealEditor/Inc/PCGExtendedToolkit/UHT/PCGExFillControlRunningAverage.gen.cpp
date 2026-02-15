// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlRunningAverage() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigRunningAverage *****************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigRunningAverage); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigRunningAverage); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSizeInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSizeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Window Size Attribute */" },
		{ "DisplayName", "Window Size (Attr)" },
		{ "EditCondition", "WindowSizeInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Window Size Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Window Size Constant */" },
		{ "DisplayName", "Window Size" },
		{ "EditCondition", "WindowSizeInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Window Size Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance Attribute */" },
		{ "DisplayName", "Tolerance (Attr)" },
		{ "EditCondition", "ToleranceInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance Constant */" },
		{ "DisplayName", "Tolerance" },
		{ "EditCondition", "ToleranceInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The property that will be averaged and checked against candidates -- will be broadcasted to a `double`. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The property that will be averaged and checked against candidates -- will be broadcasted to a `double`." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigRunningAverage constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowSizeInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowSizeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowSizeAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToleranceInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ToleranceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Operand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigRunningAverage constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigRunningAverage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics
static_assert(std::is_polymorphic<FPCGExFillControlConfigRunningAverage>() == std::is_polymorphic<FPCGExFillControlConfigBase>(), "USTRUCT FPCGExFillControlConfigRunningAverage cannot be polymorphic unless super FPCGExFillControlConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage;
class UScriptStruct* FPCGExFillControlConfigRunningAverage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigRunningAverage"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigRunningAverage Property Definitions ********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeInput = { "WindowSizeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, WindowSizeInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSizeInput_MetaData), NewProp_WindowSizeInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeAttribute = { "WindowSizeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, WindowSizeAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSizeAttribute_MetaData), NewProp_WindowSizeAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, WindowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSize_MetaData), NewProp_WindowSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceInput = { "ToleranceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, ToleranceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceInput_MetaData), NewProp_ToleranceInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceAttribute = { "ToleranceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, ToleranceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceAttribute_MetaData), NewProp_ToleranceAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigRunningAverage, Operand), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operand_MetaData), NewProp_Operand_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSizeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_WindowSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_ToleranceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewProp_Operand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigRunningAverage Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase,
	&NewStructOps,
	"PCGExFillControlConfigRunningAverage",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigRunningAverage),
	alignof(FPCGExFillControlConfigRunningAverage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigRunningAverage *******************************

// ********** Begin Class UPCGExFillControlsFactoryRunningAverage **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage;
UClass* UPCGExFillControlsFactoryRunningAverage::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryRunningAverage;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryRunningAverage"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryRunningAverage,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_NoRegister()
{
	return UPCGExFillControlsFactoryRunningAverage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCGExNodeLibraryDoc", "flood-fill/fc-running-average" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryRunningAverage constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsFactoryRunningAverage constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryRunningAverage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics

// ********** Begin Class UPCGExFillControlsFactoryRunningAverage Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsFactoryRunningAverage, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4135642371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsFactoryRunningAverage Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::ClassParams = {
	&UPCGExFillControlsFactoryRunningAverage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryRunningAverage::StaticRegisterNativesUPCGExFillControlsFactoryRunningAverage()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage.OuterSingleton;
}
UPCGExFillControlsFactoryRunningAverage::UPCGExFillControlsFactoryRunningAverage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryRunningAverage);
UPCGExFillControlsFactoryRunningAverage::~UPCGExFillControlsFactoryRunningAverage() {}
// ********** End Class UPCGExFillControlsFactoryRunningAverage ************************************

// ********** Begin Class UPCGExFillControlsRunningAverageProviderSettings *************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings;
UClass* UPCGExFillControlsRunningAverageProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsRunningAverageProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsRunningAverageProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsRunningAverageProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_NoRegister()
{
	return UPCGExFillControlsRunningAverageProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Control Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlRunningAverage.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Control Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsRunningAverageProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsRunningAverageProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsRunningAverageProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics

// ********** Begin Class UPCGExFillControlsRunningAverageProviderSettings Property Definitions ****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsRunningAverageProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4135642371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsRunningAverageProviderSettings Property Definitions ******
UObject* (*const Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsRunningAverageProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsRunningAverageProviderSettings::StaticRegisterNativesUPCGExFillControlsRunningAverageProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings.OuterSingleton;
}
UPCGExFillControlsRunningAverageProviderSettings::UPCGExFillControlsRunningAverageProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsRunningAverageProviderSettings);
UPCGExFillControlsRunningAverageProviderSettings::~UPCGExFillControlsRunningAverageProviderSettings() {}
// ********** End Class UPCGExFillControlsRunningAverageProviderSettings ***************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigRunningAverage::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigRunningAverage_Statics::NewStructOps, TEXT("PCGExFillControlConfigRunningAverage"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigRunningAverage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigRunningAverage), 4135642371U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryRunningAverage, UPCGExFillControlsFactoryRunningAverage::StaticClass, TEXT("UPCGExFillControlsFactoryRunningAverage"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryRunningAverage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryRunningAverage), 3761097606U) },
		{ Z_Construct_UClass_UPCGExFillControlsRunningAverageProviderSettings, UPCGExFillControlsRunningAverageProviderSettings::StaticClass, TEXT("UPCGExFillControlsRunningAverageProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsRunningAverageProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsRunningAverageProviderSettings), 579463652U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_93239419{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlRunningAverage_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
