// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExPackActorData.h"
#include "Components/ActorComponent.h"
#include "PCGPoint.h"
#include "UObject/Class.h"
#include "UObject/Object.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPackActorData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomActorDataPacker();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPackActorDataSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPackActorDataSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCustomActorDataPacker Function AddComponent ************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics
{
	struct PCGExCustomActorDataPacker_eventAddComponent_Parms
	{
		AActor* InActor;
		TSubclassOf<UActorComponent> ComponentClass;
		EAttachmentRule InLocationRule;
		EAttachmentRule InRotationRule;
		EAttachmentRule InScaleRule;
		bool InWeldSimulatedBodies;
		UActorComponent* OutComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Create a component that will be attached to the actor at the end of the execution.\n\x09 * @param InActor Actor to which the component will be attached\n\x09 * @param ComponentClass Component class\n\x09 * @param InLocationRule The rule to apply to location when attaching\n\x09 * @param InRotationRule The rule to apply to rotation when attaching\n\x09 * @param InScaleRule The rule to apply to scale when attaching\n\x09 * @param InWeldSimulatedBodies Whether to weld simulated bodies together when attaching\n\x09 * @param OutComponent Created Component\n\x09 */" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DynamicOutputParam", "OutComponent" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Create a component that will be attached to the actor at the end of the execution.\n@param InActor Actor to which the component will be attached\n@param ComponentClass Component class\n@param InLocationRule The rule to apply to location when attaching\n@param InRotationRule The rule to apply to rotation when attaching\n@param InScaleRule The rule to apply to scale when attaching\n@param InWeldSimulatedBodies Whether to weld simulated bodies together when attaching\n@param OutComponent Created Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddComponent constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InLocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InLocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InScaleRule;
	static void NewProp_InWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InWeldSimulatedBodies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddComponent constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddComponent Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, ComponentClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InLocationRule = { "InLocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, InLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 372168307
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InRotationRule = { "InRotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, InRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 372168307
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InScaleRule = { "InScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, InScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 372168307
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InWeldSimulatedBodies_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventAddComponent_Parms*)Obj)->InWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InWeldSimulatedBodies = { "InWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventAddComponent_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InWeldSimulatedBodies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_OutComponent = { "OutComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventAddComponent_Parms, OutComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutComponent_MetaData), NewProp_OutComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InLocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InLocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_InWeldSimulatedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::NewProp_OutComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PropPointers) < 2048);
// ********** End Function AddComponent Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "AddComponent", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PCGExCustomActorDataPacker_eventAddComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::PCGExCustomActorDataPacker_eventAddComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execAddComponent)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_ENUM(EAttachmentRule,Z_Param_InLocationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_InRotationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_InScaleRule);
	P_GET_UBOOL(Z_Param_InWeldSimulatedBodies);
	P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_OutComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddComponent(Z_Param_InActor,Z_Param_ComponentClass,EAttachmentRule(Z_Param_InLocationRule),EAttachmentRule(Z_Param_InRotationRule),EAttachmentRule(Z_Param_InScaleRule),Z_Param_InWeldSimulatedBodies,P_ARG_GC_BARRIER(Z_Param_Out_OutComponent));
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function AddComponent **************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitBool ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics
{
	struct PCGExCustomActorDataPacker_eventInitBool_Parms
	{
		FName InAttributeName;
		bool InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitBool constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitBool constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitBool Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitBool_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PropPointers) < 2048);
// ********** End Function InitBool Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitBool", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PCGExCustomActorDataPacker_eventInitBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::PCGExCustomActorDataPacker_eventInitBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_UBOOL_REF(Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitBool(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitBool ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitDouble **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics
{
	struct PCGExCustomActorDataPacker_eventInitDouble_Parms
	{
		FName InAttributeName;
		double InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitDouble constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitDouble constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitDouble Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitDouble_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitDouble_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitDouble_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PropPointers) < 2048);
// ********** End Function InitDouble Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitDouble", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PCGExCustomActorDataPacker_eventInitDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::PCGExCustomActorDataPacker_eventInitDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitDouble(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitDouble ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitFloat ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics
{
	struct PCGExCustomActorDataPacker_eventInitFloat_Parms
	{
		FName InAttributeName;
		float InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitFloat constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitFloat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitFloat Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitFloat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitFloat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PropPointers) < 2048);
// ********** End Function InitFloat Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitFloat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PCGExCustomActorDataPacker_eventInitFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::PCGExCustomActorDataPacker_eventInitFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitFloat(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitFloat *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function Initialize **************************
struct PCGExCustomActorDataPacker_eventInitialize_Parms
{
	bool OutSuccess;
};
static FName NAME_UPCGExCustomActorDataPacker_Initialize = FName(TEXT("Initialize"));
void UPCGExCustomActorDataPacker::Initialize(bool& OutSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomActorDataPacker_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomActorDataPacker_eventInitialize_Parms Parms;
		Parms.OutSuccess=OutSuccess ? true : false;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
	}
	else
	{
		Initialize_Implementation(OutSuccess);
	}
}
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Main initialization function. Called once, and is responsible for populating graph builder settings.\n\x09 * At least one setting is expected to be found in the GraphSettings array. This is executed on the main thread.\n\x09 * @param InContext - Context of the initialization\n\x09 * @param OutSuccess\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Main initialization function. Called once, and is responsible for populating graph builder settings.\nAt least one setting is expected to be found in the GraphSettings array. This is executed on the main thread.\n@param InContext - Context of the initialization\n@param OutSuccess" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitialize_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitialize_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "Initialize", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::PropPointers), 
sizeof(PCGExCustomActorDataPacker_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomActorDataPacker_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitialize)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation(Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function Initialize ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitInt32 ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics
{
	struct PCGExCustomActorDataPacker_eventInitInt32_Parms
	{
		FName InAttributeName;
		int32 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09 * Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitInt32 constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitInt32 constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitInt32 Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitInt32_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitInt32_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PropPointers) < 2048);
// ********** End Function InitInt32 Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitInt32", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PCGExCustomActorDataPacker_eventInitInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::PCGExCustomActorDataPacker_eventInitInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitInt32)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitInt32(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitInt32 *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitInt64 ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics
{
	struct PCGExCustomActorDataPacker_eventInitInt64_Parms
	{
		FName InAttributeName;
		int64 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitInt64 constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitInt64 constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitInt64 Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitInt64_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitInt64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitInt64_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PropPointers) < 2048);
// ********** End Function InitInt64 Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitInt64", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PCGExCustomActorDataPacker_eventInitInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::PCGExCustomActorDataPacker_eventInitInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitInt64(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitInt64 *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitName ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics
{
	struct PCGExCustomActorDataPacker_eventInitName_Parms
	{
		FName InAttributeName;
		FName InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitName constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitName constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitName Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitName_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitName_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PropPointers) < 2048);
// ********** End Function InitName Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitName", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PCGExCustomActorDataPacker_eventInitName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::PCGExCustomActorDataPacker_eventInitName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitName(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitName ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitQuat ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics
{
	struct PCGExCustomActorDataPacker_eventInitQuat_Parms
	{
		FName InAttributeName;
		FQuat InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitQuat constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitQuat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitQuat Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitQuat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitQuat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PropPointers) < 2048);
// ********** End Function InitQuat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitQuat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PCGExCustomActorDataPacker_eventInitQuat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::PCGExCustomActorDataPacker_eventInitQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitQuat(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitQuat ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitRotator *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics
{
	struct PCGExCustomActorDataPacker_eventInitRotator_Parms
	{
		FName InAttributeName;
		FRotator InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitRotator constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitRotator constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitRotator Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitRotator_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitRotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitRotator_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PropPointers) < 2048);
// ********** End Function InitRotator Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitRotator", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PCGExCustomActorDataPacker_eventInitRotator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::PCGExCustomActorDataPacker_eventInitRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitRotator(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitRotator ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitSoftClassPath *******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics
{
	struct PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms
	{
		FName InAttributeName;
		FSoftClassPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitSoftClassPath constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitSoftClassPath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitSoftClassPath Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 3467803280
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PropPointers) < 2048);
// ********** End Function InitSoftClassPath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitSoftClassPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::PCGExCustomActorDataPacker_eventInitSoftClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitSoftClassPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitSoftClassPath(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitSoftClassPath *********************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitSoftObjectPath ******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics
{
	struct PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms
	{
		FName InAttributeName;
		FSoftObjectPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Init" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitSoftObjectPath constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitSoftObjectPath constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitSoftObjectPath Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 2425717601
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End Function InitSoftObjectPath Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitSoftObjectPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventInitSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitSoftObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitSoftObjectPath(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitSoftObjectPath ********************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitString **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics
{
	struct PCGExCustomActorDataPacker_eventInitString_Parms
	{
		FName InAttributeName;
		FString InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitString constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitString constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitString Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitString_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitString_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PropPointers) < 2048);
// ********** End Function InitString Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitString", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PCGExCustomActorDataPacker_eventInitString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::PCGExCustomActorDataPacker_eventInitString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitString(Z_Param_Out_InAttributeName,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitString ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitTransform ***********************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics
{
	struct PCGExCustomActorDataPacker_eventInitTransform_Parms
	{
		FName InAttributeName;
		FTransform InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitTransform constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitTransform constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitTransform Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitTransform_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitTransform_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PropPointers) < 2048);
// ********** End Function InitTransform Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitTransform", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PCGExCustomActorDataPacker_eventInitTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::PCGExCustomActorDataPacker_eventInitTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitTransform(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitTransform *************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitVector **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics
{
	struct PCGExCustomActorDataPacker_eventInitVector_Parms
	{
		FName InAttributeName;
		FVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitVector constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitVector constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitVector Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitVector_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PropPointers) < 2048);
// ********** End Function InitVector Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitVector", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PCGExCustomActorDataPacker_eventInitVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::PCGExCustomActorDataPacker_eventInitVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitVector(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitVector ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitVector2 *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics
{
	struct PCGExCustomActorDataPacker_eventInitVector2_Parms
	{
		FName InAttributeName;
		FVector2D InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitVector2 constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitVector2 constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitVector2 Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector2_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitVector2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitVector2_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PropPointers) < 2048);
// ********** End Function InitVector2 Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitVector2", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PCGExCustomActorDataPacker_eventInitVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::PCGExCustomActorDataPacker_eventInitVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitVector2)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitVector2(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitVector2 ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function InitVector4 *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics
{
	struct PCGExCustomActorDataPacker_eventInitVector4_Parms
	{
		FName InAttributeName;
		FVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitVector4 constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitVector4 constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitVector4 Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector4_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventInitVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventInitVector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventInitVector4_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PropPointers) < 2048);
// ********** End Function InitVector4 Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "InitVector4", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PCGExCustomActorDataPacker_eventInitVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::PCGExCustomActorDataPacker_eventInitVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execInitVector4)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitVector4(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function InitVector4 ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function PreloadObjectPaths ******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics
{
	struct PCGExCustomActorDataPacker_eventPreloadObjectPaths_Parms
	{
		FName InAttributeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Initialization" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PreloadObjectPaths constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PreloadObjectPaths constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PreloadObjectPaths Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventPreloadObjectPaths_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::NewProp_InAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PropPointers) < 2048);
// ********** End Function PreloadObjectPaths Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "PreloadObjectPaths", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PCGExCustomActorDataPacker_eventPreloadObjectPaths_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::PCGExCustomActorDataPacker_eventPreloadObjectPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execPreloadObjectPaths)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreloadObjectPaths(Z_Param_Out_InAttributeName);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function PreloadObjectPaths ********************

// ********** Begin Class UPCGExCustomActorDataPacker Function ProcessEntry ************************
struct PCGExCustomActorDataPacker_eventProcessEntry_Parms
{
	AActor* InActor;
	FPCGPoint InPoint;
	int32 InPointIndex;
	FPCGPoint OutPoint;
};
static FName NAME_UPCGExCustomActorDataPacker_ProcessEntry = FName(TEXT("ProcessEntry"));
void UPCGExCustomActorDataPacker::ProcessEntry(AActor* InActor, FPCGPoint const& InPoint, const int32 InPointIndex, FPCGPoint& OutPoint)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomActorDataPacker_ProcessEntry);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomActorDataPacker_eventProcessEntry_Parms Parms;
		Parms.InActor=InActor;
		Parms.InPoint=InPoint;
		Parms.InPointIndex=InPointIndex;
		Parms.OutPoint=OutPoint;
	ProcessEvent(Func,&Parms);
		OutPoint=Parms.OutPoint;
	}
	else
	{
		ProcessEntry_Implementation(InActor, InPoint, InPointIndex, OutPoint);
	}
}
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Process an actor reference. This method is executed in a multi-threaded context\n\x09 * @param InActor The actor to be processed.\n\x09 * @param InPoint PCG point that correspond to the provided actor.\n\x09 * @param InPointIndex The point index\n\x09 * @param OutPoint Muted PCG Point that correspond to the actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Process an actor reference. This method is executed in a multi-threaded context\n@param InActor The actor to be processed.\n@param InPoint PCG point that correspond to the provided actor.\n@param InPointIndex The point index\n@param OutPoint Muted PCG Point that correspond to the actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessEntry constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessEntry constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessEntry Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventProcessEntry_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventProcessEntry_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPoint_MetaData), NewProp_InPoint_MetaData) }; // 3373399168
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventProcessEntry_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventProcessEntry_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 3373399168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::NewProp_OutPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::PropPointers) < 2048);
// ********** End Function ProcessEntry Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ProcessEntry", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::PropPointers), 
sizeof(PCGExCustomActorDataPacker_eventProcessEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomActorDataPacker_eventProcessEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execProcessEntry)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessEntry_Implementation(Z_Param_InActor,Z_Param_Out_InPoint,Z_Param_InPointIndex,Z_Param_Out_OutPoint);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ProcessEntry **************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadBool ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics
{
	struct PCGExCustomActorDataPacker_eventReadBool_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		bool OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadBool constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadBool constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadBool Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadBool_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadBool_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadBool_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PropPointers) < 2048);
// ********** End Function ReadBool Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadBool", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PCGExCustomActorDataPacker_eventReadBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::PCGExCustomActorDataPacker_eventReadBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadBool ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadDouble **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics
{
	struct PCGExCustomActorDataPacker_eventReadDouble_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		double OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadDouble constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadDouble constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadDouble Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadDouble_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadDouble_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadDouble_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadDouble_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadDouble_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PropPointers) < 2048);
// ********** End Function ReadDouble Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadDouble", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PCGExCustomActorDataPacker_eventReadDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::PCGExCustomActorDataPacker_eventReadDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadDouble(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadDouble ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadFloat ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics
{
	struct PCGExCustomActorDataPacker_eventReadFloat_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadFloat constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadFloat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadFloat Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadFloat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadFloat_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadFloat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PropPointers) < 2048);
// ********** End Function ReadFloat Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadFloat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PCGExCustomActorDataPacker_eventReadFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::PCGExCustomActorDataPacker_eventReadFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadFloat *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadInt32 ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics
{
	struct PCGExCustomActorDataPacker_eventReadInt32_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadInt32 constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadInt32 constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadInt32 Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt32_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt32_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt32_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadInt32_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PropPointers) < 2048);
// ********** End Function ReadInt32 Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadInt32", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PCGExCustomActorDataPacker_eventReadInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::PCGExCustomActorDataPacker_eventReadInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadInt32)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadInt32(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadInt32 *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadInt64 ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics
{
	struct PCGExCustomActorDataPacker_eventReadInt64_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		int64 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadInt64 constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadInt64 constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadInt64 Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt64_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt64_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadInt64_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadInt64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadInt64_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PropPointers) < 2048);
// ********** End Function ReadInt64 Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadInt64", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PCGExCustomActorDataPacker_eventReadInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::PCGExCustomActorDataPacker_eventReadInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadInt64(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadInt64 *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadName ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics
{
	struct PCGExCustomActorDataPacker_eventReadName_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FName OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadName constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadName constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadName Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadName_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadName_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadName_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadName_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PropPointers) < 2048);
// ********** End Function ReadName Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadName", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PCGExCustomActorDataPacker_eventReadName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::PCGExCustomActorDataPacker_eventReadName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadName(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadName ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadQuat ****************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics
{
	struct PCGExCustomActorDataPacker_eventReadQuat_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FQuat OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadQuat constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadQuat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadQuat Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadQuat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadQuat_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadQuat_Parms, OutValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadQuat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PropPointers) < 2048);
// ********** End Function ReadQuat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadQuat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PCGExCustomActorDataPacker_eventReadQuat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::PCGExCustomActorDataPacker_eventReadQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadQuat(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadQuat ******************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadRotator *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics
{
	struct PCGExCustomActorDataPacker_eventReadRotator_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FRotator OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadRotator constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadRotator constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadRotator Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadRotator_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadRotator_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadRotator_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadRotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadRotator_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PropPointers) < 2048);
// ********** End Function ReadRotator Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadRotator", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PCGExCustomActorDataPacker_eventReadRotator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::PCGExCustomActorDataPacker_eventReadRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadRotator(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadRotator ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadSoftClassPath *******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics
{
	struct PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FSoftClassPath OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadSoftClassPath constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadSoftClassPath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadSoftClassPath Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms, OutValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) }; // 3467803280
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PropPointers) < 2048);
// ********** End Function ReadSoftClassPath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadSoftClassPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::PCGExCustomActorDataPacker_eventReadSoftClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadSoftClassPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadSoftClassPath(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadSoftClassPath *********************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadSoftObjectPath ******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics
{
	struct PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FSoftObjectPath OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadSoftObjectPath constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadSoftObjectPath constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadSoftObjectPath Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms, OutValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) }; // 2425717601
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End Function ReadSoftObjectPath Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadSoftObjectPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventReadSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadSoftObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadSoftObjectPath(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadSoftObjectPath ********************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadString **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics
{
	struct PCGExCustomActorDataPacker_eventReadString_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadString constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadString constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadString Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadString_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadString_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadString_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PropPointers) < 2048);
// ********** End Function ReadString Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadString", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PCGExCustomActorDataPacker_eventReadString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::PCGExCustomActorDataPacker_eventReadString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadString(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadString ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadTransform ***********************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics
{
	struct PCGExCustomActorDataPacker_eventReadTransform_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FTransform OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadTransform constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadTransform constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadTransform Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadTransform_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadTransform_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadTransform_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadTransform_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PropPointers) < 2048);
// ********** End Function ReadTransform Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadTransform", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PCGExCustomActorDataPacker_eventReadTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::PCGExCustomActorDataPacker_eventReadTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadTransform(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadTransform *************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadVector **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics
{
	struct PCGExCustomActorDataPacker_eventReadVector_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadVector constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadVector constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadVector Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadVector_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PropPointers) < 2048);
// ********** End Function ReadVector Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadVector", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PCGExCustomActorDataPacker_eventReadVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::PCGExCustomActorDataPacker_eventReadVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadVector(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadVector ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadVector2 *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics
{
	struct PCGExCustomActorDataPacker_eventReadVector2_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector2D OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadVector2 constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadVector2 constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadVector2 Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector2_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector2_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector2_Parms, OutValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadVector2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadVector2_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PropPointers) < 2048);
// ********** End Function ReadVector2 Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadVector2", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PCGExCustomActorDataPacker_eventReadVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::PCGExCustomActorDataPacker_eventReadVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadVector2)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadVector2(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadVector2 ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ReadVector4 *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics
{
	struct PCGExCustomActorDataPacker_eventReadVector4_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector4 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param OutValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param OutValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadVector4 constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadVector4 constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadVector4 Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector4_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector4_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventReadVector4_Parms, OutValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventReadVector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventReadVector4_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PropPointers) < 2048);
// ********** End Function ReadVector4 Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ReadVector4", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PCGExCustomActorDataPacker_eventReadVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::PCGExCustomActorDataPacker_eventReadVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execReadVector4)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ReadVector4 ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function ResolveObjectPath *******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics
{
	struct PCGExCustomActorDataPacker_eventResolveObjectPath_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		TSubclassOf<UObject> ObjectClass;
		UObject* OutObject;
		bool OutIsValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Getter" },
		{ "Comment", "/**\n\x09 * Create a component that will be attached to the actor at the end of the execution.\n\x09 * @param InAttributeName \n\x09 * @param InPointIndex \n\x09 * @param ObjectClass \n\x09 * @param OutObject \n\x09 * @param OutIsValid \n\x09 */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "DynamicOutputParam", "OutObject" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Create a component that will be attached to the actor at the end of the execution.\n@param InAttributeName\n@param InPointIndex\n@param ObjectClass\n@param OutObject\n@param OutIsValid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[] = {
		{ "AllowAbstract", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResolveObjectPath constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObject;
	static void NewProp_OutIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolveObjectPath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolveObjectPath Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventResolveObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventResolveObjectPath_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventResolveObjectPath_Parms, ObjectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectClass_MetaData), NewProp_ObjectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutObject = { "OutObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventResolveObjectPath_Parms, OutObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutIsValid_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventResolveObjectPath_Parms*)Obj)->OutIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutIsValid = { "OutIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventResolveObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_ObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::NewProp_OutIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PropPointers) < 2048);
// ********** End Function ResolveObjectPath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "ResolveObjectPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PCGExCustomActorDataPacker_eventResolveObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::PCGExCustomActorDataPacker_eventResolveObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execResolveObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_OBJECT(UClass,Z_Param_ObjectClass);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutObject);
	P_GET_UBOOL_REF(Z_Param_Out_OutIsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResolveObjectPath(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_ObjectClass,P_ARG_GC_BARRIER(Z_Param_Out_OutObject),Z_Param_Out_OutIsValid);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function ResolveObjectPath *********************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteBool ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteBool_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		bool InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "FALSE" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteBool constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteBool constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteBool Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteBool_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteBool_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteBool_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PropPointers) < 2048);
// ********** End Function WriteBool Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteBool", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PCGExCustomActorDataPacker_eventWriteBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::PCGExCustomActorDataPacker_eventWriteBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_UBOOL_REF(Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteBool(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteBool *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteDouble *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteDouble_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		double InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteDouble constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteDouble constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteDouble Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteDouble_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteDouble_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteDouble_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteDouble_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PropPointers) < 2048);
// ********** End Function WriteDouble Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteDouble", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PCGExCustomActorDataPacker_eventWriteDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::PCGExCustomActorDataPacker_eventWriteDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteDouble(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteDouble ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteFloat **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteFloat_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		float InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteFloat constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteFloat constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteFloat Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteFloat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteFloat_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteFloat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PropPointers) < 2048);
// ********** End Function WriteFloat Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteFloat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PCGExCustomActorDataPacker_eventWriteFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::PCGExCustomActorDataPacker_eventWriteFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteFloat(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteFloat ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteInt32 **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteInt32_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		int32 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteInt32 constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteInt32 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteInt32 Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt32_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt32_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteInt32_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PropPointers) < 2048);
// ********** End Function WriteInt32 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteInt32", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PCGExCustomActorDataPacker_eventWriteInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::PCGExCustomActorDataPacker_eventWriteInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteInt32)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteInt32(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteInt32 ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteInt64 **************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteInt64_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		int64 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteInt64 constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteInt64 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteInt64 Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt64_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt64_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteInt64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteInt64_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PropPointers) < 2048);
// ********** End Function WriteInt64 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteInt64", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PCGExCustomActorDataPacker_eventWriteInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::PCGExCustomActorDataPacker_eventWriteInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteInt64(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteInt64 ****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteName ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteName_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FName InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteName constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteName constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteName Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteName_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteName_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteName_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PropPointers) < 2048);
// ********** End Function WriteName Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteName", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PCGExCustomActorDataPacker_eventWriteName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::PCGExCustomActorDataPacker_eventWriteName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteName(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteName *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteQuat ***************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteQuat_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FQuat InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteQuat constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteQuat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteQuat Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteQuat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteQuat_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteQuat_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PropPointers) < 2048);
// ********** End Function WriteQuat Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteQuat", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PCGExCustomActorDataPacker_eventWriteQuat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::PCGExCustomActorDataPacker_eventWriteQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteQuat(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteQuat *****************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteRotator ************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteRotator_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FRotator InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteRotator constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteRotator constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteRotator Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteRotator_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteRotator_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteRotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteRotator_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PropPointers) < 2048);
// ********** End Function WriteRotator Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteRotator", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PCGExCustomActorDataPacker_eventWriteRotator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::PCGExCustomActorDataPacker_eventWriteRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteRotator(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteRotator **************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteSoftClassPath ******************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FSoftClassPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteSoftClassPath constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteSoftClassPath constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteSoftClassPath Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 3467803280
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PropPointers) < 2048);
// ********** End Function WriteSoftClassPath Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteSoftClassPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::PCGExCustomActorDataPacker_eventWriteSoftClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteSoftClassPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteSoftClassPath(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteSoftClassPath ********************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteSoftObjectPath *****************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FSoftObjectPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteSoftObjectPath constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteSoftObjectPath constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteSoftObjectPath Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 2425717601
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End Function WriteSoftObjectPath Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteSoftObjectPath", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::PCGExCustomActorDataPacker_eventWriteSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteSoftObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteSoftObjectPath(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteSoftObjectPath *******************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteString *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteString_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FString InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "Value" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteString constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteString constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteString Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteString_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteString_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteString_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PropPointers) < 2048);
// ********** End Function WriteString Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteString", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PCGExCustomActorDataPacker_eventWriteString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::PCGExCustomActorDataPacker_eventWriteString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteString(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteString ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteTransform **********************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteTransform_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FTransform InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteTransform constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteTransform constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteTransform Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteTransform_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteTransform_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteTransform_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PropPointers) < 2048);
// ********** End Function WriteTransform Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteTransform", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PCGExCustomActorDataPacker_eventWriteTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::PCGExCustomActorDataPacker_eventWriteTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteTransform(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteTransform ************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteVector *************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteVector_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteVector constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteVector constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteVector Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteVector_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PropPointers) < 2048);
// ********** End Function WriteVector Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteVector", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PCGExCustomActorDataPacker_eventWriteVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::PCGExCustomActorDataPacker_eventWriteVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteVector(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteVector ***************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteVector2 ************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteVector2_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector2D InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteVector2 constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteVector2 constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteVector2 Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector2_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector2_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteVector2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteVector2_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PropPointers) < 2048);
// ********** End Function WriteVector2 Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteVector2", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PCGExCustomActorDataPacker_eventWriteVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::PCGExCustomActorDataPacker_eventWriteVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteVector2)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteVector2(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteVector2 **************************

// ********** Begin Class UPCGExCustomActorDataPacker Function WriteVector4 ************************
struct Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics
{
	struct PCGExCustomActorDataPacker_eventWriteVector4_Parms
	{
		FName InAttributeName;
		int32 InPointIndex;
		FVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InPointIndex The point index to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "InAttributeName", "None" },
		{ "InValue", "0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InPointIndex The point index to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteVector4 constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteVector4 constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteVector4 Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector4_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector4_Parms, InPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointIndex_MetaData), NewProp_InPointIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomActorDataPacker_eventWriteVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomActorDataPacker_eventWriteVector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomActorDataPacker_eventWriteVector4_Parms), &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PropPointers) < 2048);
// ********** End Function WriteVector4 Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomActorDataPacker, nullptr, "WriteVector4", 	Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PCGExCustomActorDataPacker_eventWriteVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::PCGExCustomActorDataPacker_eventWriteVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomActorDataPacker::execWriteVector4)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WriteVector4(Z_Param_Out_InAttributeName,Z_Param_InPointIndex,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomActorDataPacker Function WriteVector4 **************************

// ********** Begin Class UPCGExCustomActorDataPacker **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCustomActorDataPacker;
UClass* UPCGExCustomActorDataPacker::GetPrivateStaticClass()
{
	using TClass = UPCGExCustomActorDataPacker;
	if (!Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCustomActorDataPacker"),
			Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.InnerSingleton,
			StaticRegisterNativesUPCGExCustomActorDataPacker,
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
	return Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister()
{
	return UPCGExCustomActorDataPacker::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Executed once per point\n */" },
		{ "DisplayName", "[PCGEx] Custom Actor Data Packer" },
		{ "IncludePath", "Sampling/PCGExPackActorData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Executed once per point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActors_MetaData[] = {
		{ "Category", "PCGEx|Inputs" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteOnMainThread_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable this if you're spawning components. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ToolTip", "Enable this if you're spawning components." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCustomActorDataPacker constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActors;
	static void NewProp_bExecuteOnMainThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteOnMainThread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCustomActorDataPacker constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddComponent"), .Pointer = &UPCGExCustomActorDataPacker::execAddComponent },
		{ .NameUTF8 = UTF8TEXT("InitBool"), .Pointer = &UPCGExCustomActorDataPacker::execInitBool },
		{ .NameUTF8 = UTF8TEXT("InitDouble"), .Pointer = &UPCGExCustomActorDataPacker::execInitDouble },
		{ .NameUTF8 = UTF8TEXT("InitFloat"), .Pointer = &UPCGExCustomActorDataPacker::execInitFloat },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &UPCGExCustomActorDataPacker::execInitialize },
		{ .NameUTF8 = UTF8TEXT("InitInt32"), .Pointer = &UPCGExCustomActorDataPacker::execInitInt32 },
		{ .NameUTF8 = UTF8TEXT("InitInt64"), .Pointer = &UPCGExCustomActorDataPacker::execInitInt64 },
		{ .NameUTF8 = UTF8TEXT("InitName"), .Pointer = &UPCGExCustomActorDataPacker::execInitName },
		{ .NameUTF8 = UTF8TEXT("InitQuat"), .Pointer = &UPCGExCustomActorDataPacker::execInitQuat },
		{ .NameUTF8 = UTF8TEXT("InitRotator"), .Pointer = &UPCGExCustomActorDataPacker::execInitRotator },
		{ .NameUTF8 = UTF8TEXT("InitSoftClassPath"), .Pointer = &UPCGExCustomActorDataPacker::execInitSoftClassPath },
		{ .NameUTF8 = UTF8TEXT("InitSoftObjectPath"), .Pointer = &UPCGExCustomActorDataPacker::execInitSoftObjectPath },
		{ .NameUTF8 = UTF8TEXT("InitString"), .Pointer = &UPCGExCustomActorDataPacker::execInitString },
		{ .NameUTF8 = UTF8TEXT("InitTransform"), .Pointer = &UPCGExCustomActorDataPacker::execInitTransform },
		{ .NameUTF8 = UTF8TEXT("InitVector"), .Pointer = &UPCGExCustomActorDataPacker::execInitVector },
		{ .NameUTF8 = UTF8TEXT("InitVector2"), .Pointer = &UPCGExCustomActorDataPacker::execInitVector2 },
		{ .NameUTF8 = UTF8TEXT("InitVector4"), .Pointer = &UPCGExCustomActorDataPacker::execInitVector4 },
		{ .NameUTF8 = UTF8TEXT("PreloadObjectPaths"), .Pointer = &UPCGExCustomActorDataPacker::execPreloadObjectPaths },
		{ .NameUTF8 = UTF8TEXT("ProcessEntry"), .Pointer = &UPCGExCustomActorDataPacker::execProcessEntry },
		{ .NameUTF8 = UTF8TEXT("ReadBool"), .Pointer = &UPCGExCustomActorDataPacker::execReadBool },
		{ .NameUTF8 = UTF8TEXT("ReadDouble"), .Pointer = &UPCGExCustomActorDataPacker::execReadDouble },
		{ .NameUTF8 = UTF8TEXT("ReadFloat"), .Pointer = &UPCGExCustomActorDataPacker::execReadFloat },
		{ .NameUTF8 = UTF8TEXT("ReadInt32"), .Pointer = &UPCGExCustomActorDataPacker::execReadInt32 },
		{ .NameUTF8 = UTF8TEXT("ReadInt64"), .Pointer = &UPCGExCustomActorDataPacker::execReadInt64 },
		{ .NameUTF8 = UTF8TEXT("ReadName"), .Pointer = &UPCGExCustomActorDataPacker::execReadName },
		{ .NameUTF8 = UTF8TEXT("ReadQuat"), .Pointer = &UPCGExCustomActorDataPacker::execReadQuat },
		{ .NameUTF8 = UTF8TEXT("ReadRotator"), .Pointer = &UPCGExCustomActorDataPacker::execReadRotator },
		{ .NameUTF8 = UTF8TEXT("ReadSoftClassPath"), .Pointer = &UPCGExCustomActorDataPacker::execReadSoftClassPath },
		{ .NameUTF8 = UTF8TEXT("ReadSoftObjectPath"), .Pointer = &UPCGExCustomActorDataPacker::execReadSoftObjectPath },
		{ .NameUTF8 = UTF8TEXT("ReadString"), .Pointer = &UPCGExCustomActorDataPacker::execReadString },
		{ .NameUTF8 = UTF8TEXT("ReadTransform"), .Pointer = &UPCGExCustomActorDataPacker::execReadTransform },
		{ .NameUTF8 = UTF8TEXT("ReadVector"), .Pointer = &UPCGExCustomActorDataPacker::execReadVector },
		{ .NameUTF8 = UTF8TEXT("ReadVector2"), .Pointer = &UPCGExCustomActorDataPacker::execReadVector2 },
		{ .NameUTF8 = UTF8TEXT("ReadVector4"), .Pointer = &UPCGExCustomActorDataPacker::execReadVector4 },
		{ .NameUTF8 = UTF8TEXT("ResolveObjectPath"), .Pointer = &UPCGExCustomActorDataPacker::execResolveObjectPath },
		{ .NameUTF8 = UTF8TEXT("WriteBool"), .Pointer = &UPCGExCustomActorDataPacker::execWriteBool },
		{ .NameUTF8 = UTF8TEXT("WriteDouble"), .Pointer = &UPCGExCustomActorDataPacker::execWriteDouble },
		{ .NameUTF8 = UTF8TEXT("WriteFloat"), .Pointer = &UPCGExCustomActorDataPacker::execWriteFloat },
		{ .NameUTF8 = UTF8TEXT("WriteInt32"), .Pointer = &UPCGExCustomActorDataPacker::execWriteInt32 },
		{ .NameUTF8 = UTF8TEXT("WriteInt64"), .Pointer = &UPCGExCustomActorDataPacker::execWriteInt64 },
		{ .NameUTF8 = UTF8TEXT("WriteName"), .Pointer = &UPCGExCustomActorDataPacker::execWriteName },
		{ .NameUTF8 = UTF8TEXT("WriteQuat"), .Pointer = &UPCGExCustomActorDataPacker::execWriteQuat },
		{ .NameUTF8 = UTF8TEXT("WriteRotator"), .Pointer = &UPCGExCustomActorDataPacker::execWriteRotator },
		{ .NameUTF8 = UTF8TEXT("WriteSoftClassPath"), .Pointer = &UPCGExCustomActorDataPacker::execWriteSoftClassPath },
		{ .NameUTF8 = UTF8TEXT("WriteSoftObjectPath"), .Pointer = &UPCGExCustomActorDataPacker::execWriteSoftObjectPath },
		{ .NameUTF8 = UTF8TEXT("WriteString"), .Pointer = &UPCGExCustomActorDataPacker::execWriteString },
		{ .NameUTF8 = UTF8TEXT("WriteTransform"), .Pointer = &UPCGExCustomActorDataPacker::execWriteTransform },
		{ .NameUTF8 = UTF8TEXT("WriteVector"), .Pointer = &UPCGExCustomActorDataPacker::execWriteVector },
		{ .NameUTF8 = UTF8TEXT("WriteVector2"), .Pointer = &UPCGExCustomActorDataPacker::execWriteVector2 },
		{ .NameUTF8 = UTF8TEXT("WriteVector4"), .Pointer = &UPCGExCustomActorDataPacker::execWriteVector4 },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_AddComponent, "AddComponent" }, // 558636830
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitBool, "InitBool" }, // 4216757390
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitDouble, "InitDouble" }, // 4024689253
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitFloat, "InitFloat" }, // 2609791537
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_Initialize, "Initialize" }, // 986886677
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt32, "InitInt32" }, // 2260029442
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitInt64, "InitInt64" }, // 4176318950
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitName, "InitName" }, // 3968368809
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitQuat, "InitQuat" }, // 2192700143
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitRotator, "InitRotator" }, // 966772739
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftClassPath, "InitSoftClassPath" }, // 4081012181
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitSoftObjectPath, "InitSoftObjectPath" }, // 1567453403
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitString, "InitString" }, // 3743008274
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitTransform, "InitTransform" }, // 582238902
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector, "InitVector" }, // 1397509270
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector2, "InitVector2" }, // 2076893286
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_InitVector4, "InitVector4" }, // 2160102325
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_PreloadObjectPaths, "PreloadObjectPaths" }, // 1071946614
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ProcessEntry, "ProcessEntry" }, // 1909287563
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadBool, "ReadBool" }, // 3754841084
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadDouble, "ReadDouble" }, // 685396942
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadFloat, "ReadFloat" }, // 2814448390
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt32, "ReadInt32" }, // 2174381542
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadInt64, "ReadInt64" }, // 969793227
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadName, "ReadName" }, // 1526827917
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadQuat, "ReadQuat" }, // 3797558357
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadRotator, "ReadRotator" }, // 4076384342
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftClassPath, "ReadSoftClassPath" }, // 3117831572
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadSoftObjectPath, "ReadSoftObjectPath" }, // 3023292112
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadString, "ReadString" }, // 4261972674
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadTransform, "ReadTransform" }, // 4209097343
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector, "ReadVector" }, // 3474209553
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector2, "ReadVector2" }, // 683748424
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ReadVector4, "ReadVector4" }, // 3117177520
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_ResolveObjectPath, "ResolveObjectPath" }, // 3700061191
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteBool, "WriteBool" }, // 2378158594
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteDouble, "WriteDouble" }, // 4249040853
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteFloat, "WriteFloat" }, // 3684724348
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt32, "WriteInt32" }, // 352339589
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteInt64, "WriteInt64" }, // 3355418662
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteName, "WriteName" }, // 890622286
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteQuat, "WriteQuat" }, // 3553434743
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteRotator, "WriteRotator" }, // 68264071
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftClassPath, "WriteSoftClassPath" }, // 1361485809
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteSoftObjectPath, "WriteSoftObjectPath" }, // 2273546238
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteString, "WriteString" }, // 111218242
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteTransform, "WriteTransform" }, // 1738596141
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector, "WriteVector" }, // 1527257935
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector2, "WriteVector2" }, // 173783275
		{ &Z_Construct_UFunction_UPCGExCustomActorDataPacker_WriteVector4, "WriteVector4" }, // 1295026606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCustomActorDataPacker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics

// ********** Begin Class UPCGExCustomActorDataPacker Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_InputActors_Inner = { "InputActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_InputActors = { "InputActors", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCustomActorDataPacker, InputActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActors_MetaData), NewProp_InputActors_MetaData) };
void Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_bExecuteOnMainThread_SetBit(void* Obj)
{
	((UPCGExCustomActorDataPacker*)Obj)->bExecuteOnMainThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_bExecuteOnMainThread = { "bExecuteOnMainThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCustomActorDataPacker), &Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_bExecuteOnMainThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuteOnMainThread_MetaData), NewProp_bExecuteOnMainThread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_InputActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_InputActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::NewProp_bExecuteOnMainThread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCustomActorDataPacker Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::ClassParams = {
	&UPCGExCustomActorDataPacker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::PropPointers),
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::Class_MetaDataParams)
};
void UPCGExCustomActorDataPacker::StaticRegisterNativesUPCGExCustomActorDataPacker()
{
	UClass* Class = UPCGExCustomActorDataPacker::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExCustomActorDataPacker()
{
	if (!Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.OuterSingleton, Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCustomActorDataPacker.OuterSingleton;
}
UPCGExCustomActorDataPacker::UPCGExCustomActorDataPacker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCustomActorDataPacker);
UPCGExCustomActorDataPacker::~UPCGExCustomActorDataPacker() {}
// ********** End Class UPCGExCustomActorDataPacker ************************************************

// ********** Begin Class UPCGExPackActorDataSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPackActorDataSettings;
UClass* UPCGExPackActorDataSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPackActorDataSettings;
	if (!Z_Registration_Info_UClass_UPCGExPackActorDataSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPackActorDataSettings"),
			Z_Registration_Info_UClass_UPCGExPackActorDataSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPackActorDataSettings,
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
	return Z_Registration_Info_UClass_UPCGExPackActorDataSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPackActorDataSettings_NoRegister()
{
	return UPCGExPackActorDataSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPackActorDataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExPackActorData.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/pack-actor-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor reference */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Packer_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Builder instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Builder instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitUnresolvedEntries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitEmptyOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietUninitializedPackerWarning_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** If enabled, will turn off uninitialized packer warning. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExPackActorData.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will turn off uninitialized packer warning." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPackActorDataSettings constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Packer;
	static void NewProp_bOmitUnresolvedEntries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitUnresolvedEntries;
	static void NewProp_bOmitEmptyOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitEmptyOutputs;
	static void NewProp_bQuietUninitializedPackerWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietUninitializedPackerWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPackActorDataSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPackActorDataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPackActorDataSettings_Statics

// ********** Begin Class UPCGExPackActorDataSettings Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_ActorReferenceAttribute = { "ActorReferenceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPackActorDataSettings, ActorReferenceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttribute_MetaData), NewProp_ActorReferenceAttribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_Packer = { "Packer", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPackActorDataSettings, Packer), Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Packer_MetaData), NewProp_Packer_MetaData) };
void Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitUnresolvedEntries_SetBit(void* Obj)
{
	((UPCGExPackActorDataSettings*)Obj)->bOmitUnresolvedEntries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitUnresolvedEntries = { "bOmitUnresolvedEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPackActorDataSettings), &Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitUnresolvedEntries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitUnresolvedEntries_MetaData), NewProp_bOmitUnresolvedEntries_MetaData) };
void Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitEmptyOutputs_SetBit(void* Obj)
{
	((UPCGExPackActorDataSettings*)Obj)->bOmitEmptyOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitEmptyOutputs = { "bOmitEmptyOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPackActorDataSettings), &Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitEmptyOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitEmptyOutputs_MetaData), NewProp_bOmitEmptyOutputs_MetaData) };
void Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bQuietUninitializedPackerWarning_SetBit(void* Obj)
{
	((UPCGExPackActorDataSettings*)Obj)->bQuietUninitializedPackerWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bQuietUninitializedPackerWarning = { "bQuietUninitializedPackerWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPackActorDataSettings), &Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bQuietUninitializedPackerWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietUninitializedPackerWarning_MetaData), NewProp_bQuietUninitializedPackerWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_ActorReferenceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_Packer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitUnresolvedEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bOmitEmptyOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::NewProp_bQuietUninitializedPackerWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPackActorDataSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::ClassParams = {
	&UPCGExPackActorDataSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::Class_MetaDataParams)
};
void UPCGExPackActorDataSettings::StaticRegisterNativesUPCGExPackActorDataSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPackActorDataSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPackActorDataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPackActorDataSettings.OuterSingleton, Z_Construct_UClass_UPCGExPackActorDataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPackActorDataSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPackActorDataSettings);
UPCGExPackActorDataSettings::~UPCGExPackActorDataSettings() {}
// ********** End Class UPCGExPackActorDataSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCustomActorDataPacker, UPCGExCustomActorDataPacker::StaticClass, TEXT("UPCGExCustomActorDataPacker"), &Z_Registration_Info_UClass_UPCGExCustomActorDataPacker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCustomActorDataPacker), 2648942108U) },
		{ Z_Construct_UClass_UPCGExPackActorDataSettings, UPCGExPackActorDataSettings::StaticClass, TEXT("UPCGExPackActorDataSettings"), &Z_Registration_Info_UClass_UPCGExPackActorDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPackActorDataSettings), 1812923121U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h__Script_PCGExtendedToolkit_3730487114{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
