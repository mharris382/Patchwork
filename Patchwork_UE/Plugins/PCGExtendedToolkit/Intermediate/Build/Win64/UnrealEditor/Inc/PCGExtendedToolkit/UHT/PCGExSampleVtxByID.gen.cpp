// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleVtxByID.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleVtxByID() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleVtxByIDSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleVtxByIDSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleVtxByIDSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings;
UClass* UPCGExSampleVtxByIDSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleVtxByIDSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleVtxByIDSettings"),
			Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleVtxByIDSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleVtxByIDSettings_NoRegister()
{
	return UPCGExSampleVtxByIDSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleVtxByID.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/vtx-by-id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxIdSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute that stores the vtx id (first 32 bits of the PCGEx/VData) */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Name of the attribute that stores the vtx id (first 32 bits of the PCGEx/VData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySampling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether and how to apply sampled result directly (not mutually exclusive with blending)*/" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether and how to apply sampled result directly (not mutually exclusive with blending)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxisAlign_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The axis to align transform the look at vector to.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Align" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The axis to align transform the look at vector to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpInput_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Use Up from..." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpSource_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "LookAtUpInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtUpConstant_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "LookAtUpInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if at least a single point has been sampled. */" },
		{ "EditCondition", "bTagIfHasSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if at least a single point has been sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoSuccesses_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoSuccessesTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** If enabled, add the specified tag to the output data if no points were sampled. */" },
		{ "EditCondition", "bTagIfHasNoSuccesses" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "ToolTip", "If enabled, add the specified tag to the output data if no points were sampled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessFilteredOutAsFails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, mark filtered out points as \"failed\". Otherwise, just skip the processing altogether. Only uncheck this if you want to ensure existing attribute values are preserved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneFailedSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, points that failed to sample anything will be pruned. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleVtxByID.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, points that failed to sample anything will be pruned." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleVtxByIDSettings constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxIdSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplySampling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtAxisAlign_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtAxisAlign;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtUpInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtUpInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtUpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtUpConstant;
	static void NewProp_bTagIfHasSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasSuccessesTag;
	static void NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoSuccesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoSuccessesTag;
	static void NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessFilteredOutAsFails;
	static void NewProp_bPruneFailedSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneFailedSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleVtxByIDSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleVtxByIDSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics

// ********** Begin Class UPCGExSampleVtxByIDSettings Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_VtxIdSource = { "VtxIdSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, VtxIdSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxIdSource_MetaData), NewProp_VtxIdSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_ApplySampling = { "ApplySampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, ApplySampling), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySampling_MetaData), NewProp_ApplySampling_MetaData) }; // 4279728225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtAxisAlign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtAxisAlign = { "LookAtAxisAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, LookAtAxisAlign), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAxisAlign_MetaData), NewProp_LookAtAxisAlign_MetaData) }; // 3442821815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpInput = { "LookAtUpInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, LookAtUpInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpInput_MetaData), NewProp_LookAtUpInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpSource = { "LookAtUpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, LookAtUpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpSource_MetaData), NewProp_LookAtUpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpConstant = { "LookAtUpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, LookAtUpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtUpConstant_MetaData), NewProp_LookAtUpConstant_MetaData) };
void Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleVtxByIDSettings*)Obj)->bTagIfHasSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasSuccesses = { "bTagIfHasSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleVtxByIDSettings), &Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasSuccesses_MetaData), NewProp_bTagIfHasSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_HasSuccessesTag = { "HasSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, HasSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSuccessesTag_MetaData), NewProp_HasSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit(void* Obj)
{
	((UPCGExSampleVtxByIDSettings*)Obj)->bTagIfHasNoSuccesses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasNoSuccesses = { "bTagIfHasNoSuccesses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleVtxByIDSettings), &Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasNoSuccesses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoSuccesses_MetaData), NewProp_bTagIfHasNoSuccesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_HasNoSuccessesTag = { "HasNoSuccessesTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleVtxByIDSettings, HasNoSuccessesTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoSuccessesTag_MetaData), NewProp_HasNoSuccessesTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit(void* Obj)
{
	((UPCGExSampleVtxByIDSettings*)Obj)->bProcessFilteredOutAsFails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bProcessFilteredOutAsFails = { "bProcessFilteredOutAsFails", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleVtxByIDSettings), &Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bProcessFilteredOutAsFails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessFilteredOutAsFails_MetaData), NewProp_bProcessFilteredOutAsFails_MetaData) };
void Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bPruneFailedSamples_SetBit(void* Obj)
{
	((UPCGExSampleVtxByIDSettings*)Obj)->bPruneFailedSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bPruneFailedSamples = { "bPruneFailedSamples", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleVtxByIDSettings), &Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bPruneFailedSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneFailedSamples_MetaData), NewProp_bPruneFailedSamples_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_VtxIdSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_ApplySampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtAxisAlign_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtAxisAlign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_LookAtUpConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_HasSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bTagIfHasNoSuccesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_HasNoSuccessesTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bProcessFilteredOutAsFails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::NewProp_bPruneFailedSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleVtxByIDSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::ClassParams = {
	&UPCGExSampleVtxByIDSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleVtxByIDSettings::StaticRegisterNativesUPCGExSampleVtxByIDSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleVtxByIDSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleVtxByIDSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleVtxByIDSettings);
UPCGExSampleVtxByIDSettings::~UPCGExSampleVtxByIDSettings() {}
// ********** End Class UPCGExSampleVtxByIDSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleVtxByID_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleVtxByIDSettings, UPCGExSampleVtxByIDSettings::StaticClass, TEXT("UPCGExSampleVtxByIDSettings"), &Z_Registration_Info_UClass_UPCGExSampleVtxByIDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleVtxByIDSettings), 556007026U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleVtxByID_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleVtxByID_h__Script_PCGExtendedToolkit_4064085865{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleVtxByID_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleVtxByID_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
