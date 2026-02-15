// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExTensorsTransform.h"
#include "Transform/Tensors/PCGExTensorHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorsTransform() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorsTransformSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorsTransformSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTensorTransformMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTensorTransformMode;
static UEnum* EPCGExTensorTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTensorTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTensorTransformMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExTensorTransformMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorTransformMode>()
{
	return EPCGExTensorTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "EPCGExTensorTransformMode::Absolute" },
		{ "Absolute.ToolTip", "Absolute, ignores source transform." },
		{ "Align.DisplayName", "Align" },
		{ "Align.Name", "EPCGExTensorTransformMode::Align" },
		{ "Align.ToolTip", "Align rotation with movement direction." },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "Relative.DisplayName", "Relative" },
		{ "Relative.Name", "EPCGExTensorTransformMode::Relative" },
		{ "Relative.ToolTip", "Relative to source transform." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTensorTransformMode::Absolute", (int64)EPCGExTensorTransformMode::Absolute },
		{ "EPCGExTensorTransformMode::Relative", (int64)EPCGExTensorTransformMode::Relative },
		{ "EPCGExTensorTransformMode::Align", (int64)EPCGExTensorTransformMode::Align },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTensorTransformMode",
	"EPCGExTensorTransformMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExTensorTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTensorTransformMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTensorTransformMode.InnerSingleton;
}
// ********** End Enum EPCGExTensorTransformMode ***************************************************

// ********** Begin Class UPCGExTensorsTransformSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorsTransformSettings;
UClass* UPCGExTensorsTransformSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorsTransformSettings;
	if (!Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorsTransformSettings"),
			Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTensorsTransformSettings,
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
	return Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorsTransformSettings_NoRegister()
{
	return UPCGExTensorsTransformSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExTensorsTransform.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCGExNodeLibraryDoc", "tensors/tensors-transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bTransformRotation" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bTransformRotation && Rotation == EPCGExTensorTransformMode::Align" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopConditionHandling_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** How to deal with points that are stopped */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with points that are stopped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEffectorsPings_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorsPingsAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the total number of effectors that affected the transform, all iterations combined. This is hardly a measure of anything, but it's an interesting value nonetheless */" },
		{ "DisplayName", "Effectors Pings" },
		{ "EditCondition", "bWriteEffectorsPings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the total number of effectors that affected the transform, all iterations combined. This is hardly a measure of anything, but it's an interesting value nonetheless" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteUpdateCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write the number of iterations that affected the point before it stopped. */" },
		{ "DisplayName", "Update Count" },
		{ "EditCondition", "bWriteUpdateCount" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the number of iterations that affected the point before it stopped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTraveledDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraveledDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write the approximative distance travelled by this point. */" },
		{ "DisplayName", "Traveled Distance" },
		{ "EditCondition", "bWriteTraveledDistance" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write the approximative distance travelled by this point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteGracefullyStopped_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GracefullyStoppedAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to tag the point with if transform stopped before the maximum number of iterations. */" },
		{ "DisplayName", "Gracefully Stopped" },
		{ "EditCondition", "bWriteGracefullyStopped" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to tag the point with if transform stopped before the maximum number of iterations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteMaxIterationsReached_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterationsReachedAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to tag the point with if it has reached the max number of iterations set. Faster alternative to comparing multiple attributes. */" },
		{ "DisplayName", "Max Iterations Reached" },
		{ "EditCondition", "bWriteMaxIterationsReached" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to tag the point with if it has reached the max number of iterations set. Faster alternative to comparing multiple attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorHandlerDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */" },
		{ "DisplayName", "Tensor Sampling Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExTensorsTransform.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorsTransformSettings constinit property declarations ***********
	static void NewProp_bTransformPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformPosition;
	static void NewProp_bTransformRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlignAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopConditionHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopConditionHandling;
	static void NewProp_bWriteEffectorsPings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEffectorsPings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorsPingsAttributeName;
	static void NewProp_bWriteUpdateCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUpdateCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpdateCountAttributeName;
	static void NewProp_bWriteTraveledDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTraveledDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraveledDistanceAttributeName;
	static void NewProp_bWriteGracefullyStopped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteGracefullyStopped;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GracefullyStoppedAttributeName;
	static void NewProp_bWriteMaxIterationsReached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteMaxIterationsReached;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxIterationsReachedAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TensorHandlerDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorsTransformSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorsTransformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics

// ********** Begin Class UPCGExTensorsTransformSettings Property Definitions **********************
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformPosition_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bTransformPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformPosition = { "bTransformPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformPosition_MetaData), NewProp_bTransformPosition_MetaData) };
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformRotation_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bTransformRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformRotation = { "bTransformRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformRotation_MetaData), NewProp_bTransformRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, Rotation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 261558032
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_AlignAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_AlignAxis = { "AlignAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, AlignAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignAxis_MetaData), NewProp_AlignAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_StopConditionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_StopConditionHandling = { "StopConditionHandling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, StopConditionHandling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTensorStopConditionHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopConditionHandling_MetaData), NewProp_StopConditionHandling_MetaData) }; // 3054165883
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteEffectorsPings_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bWriteEffectorsPings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteEffectorsPings = { "bWriteEffectorsPings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteEffectorsPings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEffectorsPings_MetaData), NewProp_bWriteEffectorsPings_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_EffectorsPingsAttributeName = { "EffectorsPingsAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, EffectorsPingsAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorsPingsAttributeName_MetaData), NewProp_EffectorsPingsAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteUpdateCount_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bWriteUpdateCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteUpdateCount = { "bWriteUpdateCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteUpdateCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteUpdateCount_MetaData), NewProp_bWriteUpdateCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_UpdateCountAttributeName = { "UpdateCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, UpdateCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCountAttributeName_MetaData), NewProp_UpdateCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteTraveledDistance_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bWriteTraveledDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteTraveledDistance = { "bWriteTraveledDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteTraveledDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTraveledDistance_MetaData), NewProp_bWriteTraveledDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_TraveledDistanceAttributeName = { "TraveledDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, TraveledDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraveledDistanceAttributeName_MetaData), NewProp_TraveledDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteGracefullyStopped_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bWriteGracefullyStopped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteGracefullyStopped = { "bWriteGracefullyStopped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteGracefullyStopped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteGracefullyStopped_MetaData), NewProp_bWriteGracefullyStopped_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_GracefullyStoppedAttributeName = { "GracefullyStoppedAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, GracefullyStoppedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GracefullyStoppedAttributeName_MetaData), NewProp_GracefullyStoppedAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteMaxIterationsReached_SetBit(void* Obj)
{
	((UPCGExTensorsTransformSettings*)Obj)->bWriteMaxIterationsReached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteMaxIterationsReached = { "bWriteMaxIterationsReached", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTensorsTransformSettings), &Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteMaxIterationsReached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteMaxIterationsReached_MetaData), NewProp_bWriteMaxIterationsReached_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_MaxIterationsReachedAttributeName = { "MaxIterationsReachedAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, MaxIterationsReachedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterationsReachedAttributeName_MetaData), NewProp_MaxIterationsReachedAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_TensorHandlerDetails = { "TensorHandlerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorsTransformSettings, TensorHandlerDetails), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorHandlerDetails_MetaData), NewProp_TensorHandlerDetails_MetaData) }; // 2686898823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bTransformRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_AlignAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_AlignAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_StopConditionHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_StopConditionHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteEffectorsPings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_EffectorsPingsAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteUpdateCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_UpdateCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteTraveledDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_TraveledDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteGracefullyStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_GracefullyStoppedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_bWriteMaxIterationsReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_MaxIterationsReachedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::NewProp_TensorHandlerDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorsTransformSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::ClassParams = {
	&UPCGExTensorsTransformSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::Class_MetaDataParams)
};
void UPCGExTensorsTransformSettings::StaticRegisterNativesUPCGExTensorsTransformSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTensorsTransformSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.OuterSingleton, Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorsTransformSettings.OuterSingleton;
}
UPCGExTensorsTransformSettings::UPCGExTensorsTransformSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorsTransformSettings);
UPCGExTensorsTransformSettings::~UPCGExTensorsTransformSettings() {}
// ********** End Class UPCGExTensorsTransformSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTensorTransformMode_StaticEnum, TEXT("EPCGExTensorTransformMode"), &Z_Registration_Info_UEnum_EPCGExTensorTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 261558032U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorsTransformSettings, UPCGExTensorsTransformSettings::StaticClass, TEXT("UPCGExTensorsTransformSettings"), &Z_Registration_Info_UClass_UPCGExTensorsTransformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorsTransformSettings), 2401155431U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_1943705763{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
