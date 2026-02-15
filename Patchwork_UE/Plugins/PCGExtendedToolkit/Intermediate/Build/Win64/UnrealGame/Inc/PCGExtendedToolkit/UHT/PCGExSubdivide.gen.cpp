// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExSubdivide.h"
#include "Details/PCGExDetailsSubdivision.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubdivide() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubdivideSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubdivideSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExManhattanDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubdivideSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubdivideSettings;
UClass* UPCGExSubdivideSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSubdivideSettings;
	if (!Z_Registration_Info_UClass_UPCGExSubdivideSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubdivideSettings"),
			Z_Registration_Info_UClass_UPCGExSubdivideSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSubdivideSettings,
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
	return Z_Registration_Info_UClass_UPCGExSubdivideSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubdivideSettings_NoRegister()
{
	return UPCGExSubdivideSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubdivideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExSubdivide.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCGExNodeLibraryDoc", "paths/subdivide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivideMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reference for computing the blending interpolation point point */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reference for computing the blending interpolation point point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SubdivideMethod != EPCGExSubdivideMode::Manhattan" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.100000" },
		{ "DisplayName", "Amount (Distance)" },
		{ "EditCondition", "SubdivideMethod == EPCGExSubdivideMode::Distance && AmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Amount (Count)" },
		{ "EditCondition", "SubdivideMethod == EPCGExSubdivideMode::Count && AmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Amount (Attr)" },
		{ "EditCondition", "SubdivideMethod != EPCGExSubdivideMode::Manhattan && AmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRedistributeEvenly_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SubdivideMethod != EPCGExSubdivideMode::Manhattan && SubdivideMethod == EPCGExSubdivideMode::Distance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManhattanDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Manhattan" },
		{ "EditCondition", "SubdivideMethod == EPCGExSubdivideMode::Manhattan" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagSubPoints_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubPointFlagName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bFlagSubPoints" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bWriteAlpha" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAlpha_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bWriteAlpha" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSubdivide.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubdivideSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivideMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivideMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountInput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubdivisionAmount;
	static void NewProp_bRedistributeEvenly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRedistributeEvenly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManhattanDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static void NewProp_bFlagSubPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagSubPoints;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubPointFlagName;
	static void NewProp_bWriteAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSubdivideSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubdivideSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubdivideSettings_Statics

// ********** Begin Class UPCGExSubdivideSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivideMethod = { "SubdivideMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, SubdivideMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivideMethod_MetaData), NewProp_SubdivideMethod_MetaData) }; // 56681284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AmountInput = { "AmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, AmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountInput_MetaData), NewProp_AmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivisionAmount = { "SubdivisionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, SubdivisionAmount), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionAmount_MetaData), NewProp_SubdivisionAmount_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bRedistributeEvenly_SetBit(void* Obj)
{
	((UPCGExSubdivideSettings*)Obj)->bRedistributeEvenly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bRedistributeEvenly = { "bRedistributeEvenly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideSettings), &Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bRedistributeEvenly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRedistributeEvenly_MetaData), NewProp_bRedistributeEvenly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_ManhattanDetails = { "ManhattanDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, ManhattanDetails), Z_Construct_UScriptStruct_FPCGExManhattanDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManhattanDetails_MetaData), NewProp_ManhattanDetails_MetaData) }; // 3119287054
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
void Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bFlagSubPoints_SetBit(void* Obj)
{
	((UPCGExSubdivideSettings*)Obj)->bFlagSubPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bFlagSubPoints = { "bFlagSubPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideSettings), &Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bFlagSubPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagSubPoints_MetaData), NewProp_bFlagSubPoints_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubPointFlagName = { "SubPointFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, SubPointFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubPointFlagName_MetaData), NewProp_SubPointFlagName_MetaData) };
void Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
{
	((UPCGExSubdivideSettings*)Obj)->bWriteAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideSettings), &Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAlpha_MetaData), NewProp_bWriteAlpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AlphaAttributeName = { "AlphaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, AlphaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaAttributeName_MetaData), NewProp_AlphaAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_DefaultAlpha = { "DefaultAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideSettings, DefaultAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAlpha_MetaData), NewProp_DefaultAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSubdivideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivideMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivideMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubdivisionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bRedistributeEvenly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_ManhattanDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bFlagSubPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_SubPointFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_bWriteAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_AlphaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideSettings_Statics::NewProp_DefaultAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSubdivideSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExSubdivideSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubdivideSettings_Statics::ClassParams = {
	&UPCGExSubdivideSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSubdivideSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubdivideSettings_Statics::Class_MetaDataParams)
};
void UPCGExSubdivideSettings::StaticRegisterNativesUPCGExSubdivideSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSubdivideSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSubdivideSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubdivideSettings.OuterSingleton, Z_Construct_UClass_UPCGExSubdivideSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubdivideSettings.OuterSingleton;
}
UPCGExSubdivideSettings::UPCGExSubdivideSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubdivideSettings);
UPCGExSubdivideSettings::~UPCGExSubdivideSettings() {}
// ********** End Class UPCGExSubdivideSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSubdivide_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubdivideSettings, UPCGExSubdivideSettings::StaticClass, TEXT("UPCGExSubdivideSettings"), &Z_Registration_Info_UClass_UPCGExSubdivideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubdivideSettings), 1259924898U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSubdivide_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSubdivide_h__Script_PCGExtendedToolkit_1430815767{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSubdivide_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSubdivide_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
