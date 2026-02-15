// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExPointsProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPointsProcessor() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPointsProcessorSettings Function EDITOR_OpenNodeDocumentation ******
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tools" },
		{ "Comment", "/** Open a browser and navigate to that node' documentation page. */" },
		{ "DisplayName", "Node Documentation" },
		{ "DisplayOrder", "-1" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "ShortToolTip", "Open a browser and navigate to that node' documentation page" },
		{ "ToolTip", "Open a browser and navigate to that node' documentation page." },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_OpenNodeDocumentation constinit property declarations **********
// ********** End Function EDITOR_OpenNodeDocumentation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExPointsProcessorSettings, nullptr, "EDITOR_OpenNodeDocumentation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExPointsProcessorSettings::execEDITOR_OpenNodeDocumentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_OpenNodeDocumentation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExPointsProcessorSettings Function EDITOR_OpenNodeDocumentation ********

// ********** Begin Class UPCGExPointsProcessorSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPointsProcessorSettings;
UClass* UPCGExPointsProcessorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPointsProcessorSettings;
	if (!Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPointsProcessorSettings"),
			Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPointsProcessorSettings,
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
	return Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings_NoRegister()
{
	return UPCGExPointsProcessorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGExPointsProcessor.h" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulkInitData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If enabled, will pre-allocate all data on a single thread to avoid contention. Not all nodes support this. */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will pre-allocate all data on a single thread to avoid contention. Not all nodes support this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkPriority_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Async work priority for this node.*/" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Async work priority for this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Cache the results of this node. */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Cache the results of this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedAttributeGet_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Whether scoped attribute read is enabled or not. Disabling this on small dataset may greatly improve performance. It's enabled by default for legacy reasons. */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether scoped attribute read is enabled or not. Disabling this on small dataset may greatly improve performance. It's enabled by default for legacy reasons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenOutput_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Flatten the output of this node.*/" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Flatten the output of this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanupConsumableAttributes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** If the node registers consumable attributes, these will be deleted from the output data. */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If the node registers consumable attributes, these will be deleted from the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedProtectedAttributesName_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** If the node registers consumable attributes, this a list of comma separated names that won't be deleted if they were registered. */" },
		{ "DisplayName", "Protected Attributes" },
		{ "EditCondition", "bCleanupConsumableAttributes" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the node registers consumable attributes, this a list of comma separated names that won't be deleted if they were registered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtectedAttributes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Hardcoded set for ease of use. Not mutually exclusive with the overridable string, just easier to edit. */" },
		{ "DisplayName", "Protected Attributes" },
		{ "EditCondition", "bCleanupConsumableAttributes" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Hardcoded set for ease of use. Not mutually exclusive with the overridable string, just easier to edit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateAbortedExecution_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** Whether the execution of the graph should be cancelled if this node execution is cancelled internally */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether the execution of the graph should be cancelled if this node execution is cancelled internally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietInvalidInputWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingAttributeError_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingInputError_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietCancellationError_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGExDataVersion_MetaData[] = {
		{ "Comment", "/** Store version of the node, used for deprecation purposes */" },
		{ "ModuleRelativePath", "Public/PCGExPointsProcessor.h" },
		{ "ToolTip", "Store version of the node, used for deprecation purposes" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPointsProcessorSettings constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulkInitData_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulkInitData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorkPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorkPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheData_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScopedAttributeGet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScopedAttributeGet;
	static void NewProp_bFlattenOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenOutput;
	static void NewProp_bCleanupConsumableAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanupConsumableAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedProtectedAttributesName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProtectedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtectedAttributes;
	static void NewProp_bPropagateAbortedExecution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateAbortedExecution;
	static void NewProp_bQuietInvalidInputWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietInvalidInputWarning;
	static void NewProp_bQuietMissingAttributeError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingAttributeError;
	static void NewProp_bQuietMissingInputError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingInputError;
	static void NewProp_bQuietCancellationError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietCancellationError;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PCGExDataVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPointsProcessorSettings constinit property declarations **************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EDITOR_OpenNodeDocumentation"), .Pointer = &UPCGExPointsProcessorSettings::execEDITOR_OpenNodeDocumentation },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExPointsProcessorSettings_EDITOR_OpenNodeDocumentation, "EDITOR_OpenNodeDocumentation" }, // 3207440826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPointsProcessorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics

// ********** Begin Class UPCGExPointsProcessorSettings Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_BulkInitData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_BulkInitData = { "BulkInitData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, BulkInitData), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulkInitData_MetaData), NewProp_BulkInitData_MetaData) }; // 2151781571
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_WorkPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_WorkPriority = { "WorkPriority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, WorkPriority), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkPriority_MetaData), NewProp_WorkPriority_MetaData) }; // 2365709606
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CacheData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CacheData = { "CacheData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, CacheData), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheData_MetaData), NewProp_CacheData_MetaData) }; // 2151781571
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ScopedAttributeGet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ScopedAttributeGet = { "ScopedAttributeGet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, ScopedAttributeGet), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedAttributeGet_MetaData), NewProp_ScopedAttributeGet_MetaData) }; // 2151781571
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bFlattenOutput_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bFlattenOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bFlattenOutput = { "bFlattenOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bFlattenOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlattenOutput_MetaData), NewProp_bFlattenOutput_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bCleanupConsumableAttributes_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bCleanupConsumableAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bCleanupConsumableAttributes = { "bCleanupConsumableAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bCleanupConsumableAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanupConsumableAttributes_MetaData), NewProp_bCleanupConsumableAttributes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CommaSeparatedProtectedAttributesName = { "CommaSeparatedProtectedAttributesName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, CommaSeparatedProtectedAttributesName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedProtectedAttributesName_MetaData), NewProp_CommaSeparatedProtectedAttributesName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ProtectedAttributes_Inner = { "ProtectedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ProtectedAttributes = { "ProtectedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, ProtectedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtectedAttributes_MetaData), NewProp_ProtectedAttributes_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bPropagateAbortedExecution_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bPropagateAbortedExecution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bPropagateAbortedExecution = { "bPropagateAbortedExecution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bPropagateAbortedExecution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateAbortedExecution_MetaData), NewProp_bPropagateAbortedExecution_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietInvalidInputWarning_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bQuietInvalidInputWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietInvalidInputWarning = { "bQuietInvalidInputWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietInvalidInputWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietInvalidInputWarning_MetaData), NewProp_bQuietInvalidInputWarning_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingAttributeError_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bQuietMissingAttributeError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingAttributeError = { "bQuietMissingAttributeError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingAttributeError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingAttributeError_MetaData), NewProp_bQuietMissingAttributeError_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingInputError_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bQuietMissingInputError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingInputError = { "bQuietMissingInputError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingInputError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingInputError_MetaData), NewProp_bQuietMissingInputError_MetaData) };
void Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietCancellationError_SetBit(void* Obj)
{
	((UPCGExPointsProcessorSettings*)Obj)->bQuietCancellationError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietCancellationError = { "bQuietCancellationError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPointsProcessorSettings), &Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietCancellationError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietCancellationError_MetaData), NewProp_bQuietCancellationError_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_PCGExDataVersion = { "PCGExDataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPointsProcessorSettings, PCGExDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGExDataVersion_MetaData), NewProp_PCGExDataVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_BulkInitData_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_BulkInitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_WorkPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_WorkPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CacheData_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CacheData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ScopedAttributeGet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ScopedAttributeGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bFlattenOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bCleanupConsumableAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_CommaSeparatedProtectedAttributesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ProtectedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_ProtectedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bPropagateAbortedExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietInvalidInputWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingAttributeError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietMissingInputError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_bQuietCancellationError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::NewProp_PCGExDataVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPointsProcessorSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::ClassParams = {
	&UPCGExPointsProcessorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::Class_MetaDataParams)
};
void UPCGExPointsProcessorSettings::StaticRegisterNativesUPCGExPointsProcessorSettings()
{
	UClass* Class = UPCGExPointsProcessorSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.OuterSingleton, Z_Construct_UClass_UPCGExPointsProcessorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPointsProcessorSettings.OuterSingleton;
}
UPCGExPointsProcessorSettings::UPCGExPointsProcessorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPointsProcessorSettings);
UPCGExPointsProcessorSettings::~UPCGExPointsProcessorSettings() {}
// ********** End Class UPCGExPointsProcessorSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExPointsProcessor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPointsProcessorSettings, UPCGExPointsProcessorSettings::StaticClass, TEXT("UPCGExPointsProcessorSettings"), &Z_Registration_Info_UClass_UPCGExPointsProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPointsProcessorSettings), 2124002075U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExPointsProcessor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExPointsProcessor_h__Script_PCGExtendedToolkit_3998111715{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExPointsProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExPointsProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
