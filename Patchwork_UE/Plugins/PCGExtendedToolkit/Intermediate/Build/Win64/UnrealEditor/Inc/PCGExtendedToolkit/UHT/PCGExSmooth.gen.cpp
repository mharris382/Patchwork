// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExSmooth.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSmooth() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSmoothSettings *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSmoothSettings;
UClass* UPCGExSmoothSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSmoothSettings;
	if (!Z_Registration_Info_UClass_UPCGExSmoothSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSmoothSettings"),
			Z_Registration_Info_UClass_UPCGExSmoothSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSmoothSettings,
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
	return Z_Registration_Info_UClass_UPCGExSmoothSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSmoothSettings_NoRegister()
{
	return UPCGExSmoothSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSmoothSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExSmooth.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCGExNodeLibraryDoc", "paths/smooth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveEnd_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the influence from a local attribute.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the influence from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the influence from a local attribute.*/" },
		{ "DisplayName", "Influence (Attr)" },
		{ "EditCondition", "InfluenceInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the influence from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** The amount of smoothing applied. */" },
		{ "DisplayName", "Influence" },
		{ "EditCondition", "InfluenceInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The amount of smoothing applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAmountType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the smoothing from a local attribute.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the smoothing from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAmountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the smoothing amount from a local attribute.*/" },
		{ "DisplayName", "Smoothing (Attr)" },
		{ "EditCondition", "SmoothingAmountType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the smoothing amount from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAmountConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The amount of smoothing applied.  Range of this value is highly dependant on the chosen smoothing method. */" },
		{ "DisplayName", "Smoothing" },
		{ "EditCondition", "SmoothingAmountType == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The amount of smoothing applied.  Range of this value is highly dependant on the chosen smoothing method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSmoothingAmountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Static multiplier for the local smoothing amount. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Static multiplier for the local smoothing amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingInterface_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** How to blend data from sampled points */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to blend data from sampled points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending settings used to smooth attributes.*/" },
		{ "EditCondition", "BlendingInterface == EPCGExBlendingInterface::Monolithic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSmooth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Blending settings used to smooth attributes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSmoothSettings constinit property declarations *********************
	static void NewProp_bPreserveStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveStart;
	static void NewProp_bPreserveEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmoothingMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfluenceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfluenceInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfluenceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InfluenceConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingAmountType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingAmountType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothingAmountAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothingAmountConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScaleSmoothingAmountAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingInterface_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSmoothSettings constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSmoothSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSmoothSettings_Statics

// ********** Begin Class UPCGExSmoothSettings Property Definitions ********************************
void Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveStart_SetBit(void* Obj)
{
	((UPCGExSmoothSettings*)Obj)->bPreserveStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveStart = { "bPreserveStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSmoothSettings), &Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveStart_MetaData), NewProp_bPreserveStart_MetaData) };
void Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveEnd_SetBit(void* Obj)
{
	((UPCGExSmoothSettings*)Obj)->bPreserveEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveEnd = { "bPreserveEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSmoothSettings), &Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveEnd_MetaData), NewProp_bPreserveEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingMethod = { "SmoothingMethod", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, SmoothingMethod), Z_Construct_UClass_UPCGExSmoothingInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingMethod_MetaData), NewProp_SmoothingMethod_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceInput = { "InfluenceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, InfluenceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceInput_MetaData), NewProp_InfluenceInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceAttribute = { "InfluenceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, InfluenceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceAttribute_MetaData), NewProp_InfluenceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceConstant = { "InfluenceConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, InfluenceConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceConstant_MetaData), NewProp_InfluenceConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountType = { "SmoothingAmountType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, SmoothingAmountType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingAmountType_MetaData), NewProp_SmoothingAmountType_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountAttribute = { "SmoothingAmountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, SmoothingAmountAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingAmountAttribute_MetaData), NewProp_SmoothingAmountAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountConstant = { "SmoothingAmountConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, SmoothingAmountConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingAmountConstant_MetaData), NewProp_SmoothingAmountConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_ScaleSmoothingAmountAttribute = { "ScaleSmoothingAmountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, ScaleSmoothingAmountAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSmoothingAmountAttribute_MetaData), NewProp_ScaleSmoothingAmountAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingInterface_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingInterface = { "BlendingInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, BlendingInterface), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendingInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingInterface_MetaData), NewProp_BlendingInterface_MetaData) }; // 1762397716
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingSettings = { "BlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSmoothSettings, BlendingSettings), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingSettings_MetaData), NewProp_BlendingSettings_MetaData) }; // 1694264898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSmoothSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_bPreserveEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_InfluenceConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_SmoothingAmountConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_ScaleSmoothingAmountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingInterface_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSmoothSettings_Statics::NewProp_BlendingSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSmoothSettings Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPCGExSmoothSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSmoothSettings_Statics::ClassParams = {
	&UPCGExSmoothSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSmoothSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSmoothSettings_Statics::Class_MetaDataParams)
};
void UPCGExSmoothSettings::StaticRegisterNativesUPCGExSmoothSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSmoothSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSmoothSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSmoothSettings.OuterSingleton, Z_Construct_UClass_UPCGExSmoothSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSmoothSettings.OuterSingleton;
}
UPCGExSmoothSettings::UPCGExSmoothSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSmoothSettings);
UPCGExSmoothSettings::~UPCGExSmoothSettings() {}
// ********** End Class UPCGExSmoothSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSmooth_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSmoothSettings, UPCGExSmoothSettings::StaticClass, TEXT("UPCGExSmoothSettings"), &Z_Registration_Info_UClass_UPCGExSmoothSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSmoothSettings), 1524985206U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSmooth_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSmooth_h__Script_PCGExtendedToolkit_570365995{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSmooth_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSmooth_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
