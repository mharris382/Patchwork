// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExBuildCustomGraph.h"
#include "Graph/PCGExGraph.h"
#include "PCGPoint.h"
#include "UObject/Class.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildCustomGraph() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildCustomGraphSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildCustomGraphSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphBuilder();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNewGraphSettingsResult();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCustomGraphActorSourceMode ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode;
static UEnum* EPCGExCustomGraphActorSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCustomGraphActorSourceMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCustomGraphActorSourceMode>()
{
	return EPCGExCustomGraphActorSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorReferences.DisplayName", "Actor References" },
		{ "ActorReferences.Name", "EPCGExCustomGraphActorSourceMode::ActorReferences" },
		{ "ActorReferences.ToolTip", "Point data with an actor reference property." },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "Owner.DisplayName", "Owner" },
		{ "Owner.Name", "EPCGExCustomGraphActorSourceMode::Owner" },
		{ "Owner.ToolTip", "PCG Component owner" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCustomGraphActorSourceMode::Owner", (int64)EPCGExCustomGraphActorSourceMode::Owner },
		{ "EPCGExCustomGraphActorSourceMode::ActorReferences", (int64)EPCGExCustomGraphActorSourceMode::ActorReferences },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCustomGraphActorSourceMode",
	"EPCGExCustomGraphActorSourceMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode.InnerSingleton;
}
// ********** End Enum EPCGExCustomGraphActorSourceMode ********************************************

// ********** Begin Class UPCGExCustomGraphSettings Function AddEdge *******************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics
{
	struct PCGExCustomGraphSettings_eventAddEdge_Parms
	{
		int64 InStartIdx;
		int64 InEndIdx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Data" },
		{ "Comment", "/**\n\x09 * Creates an edge between two nodes in an indexed graph.\n\x09 * @param InStartIdx \n\x09 * @param InEndIdx \n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Creates an edge between two nodes in an indexed graph.\n@param InStartIdx\n@param InEndIdx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddEdge constinit property declarations *******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InStartIdx;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InEndIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddEdge constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddEdge Property Definitions ******************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::NewProp_InStartIdx = { "InStartIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventAddEdge_Parms, InStartIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartIdx_MetaData), NewProp_InStartIdx_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::NewProp_InEndIdx = { "InEndIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventAddEdge_Parms, InEndIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndIdx_MetaData), NewProp_InEndIdx_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::NewProp_InStartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::NewProp_InEndIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PropPointers) < 2048);
// ********** End Function AddEdge Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "AddEdge", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PCGExCustomGraphSettings_eventAddEdge_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::PCGExCustomGraphSettings_eventAddEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execAddEdge)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InStartIdx);
	P_GET_PROPERTY(FInt64Property,Z_Param_InEndIdx);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEdge(Z_Param_InStartIdx,Z_Param_InEndIdx);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function AddEdge *********************************

// ********** Begin Class UPCGExCustomGraphSettings Function BuildGraph ****************************
struct PCGExCustomGraphSettings_eventBuildGraph_Parms
{
	bool OutSuccess;
};
static FName NAME_UPCGExCustomGraphSettings_BuildGraph = FName(TEXT("BuildGraph"));
void UPCGExCustomGraphSettings::BuildGraph(bool& OutSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphSettings_BuildGraph);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphSettings_eventBuildGraph_Parms Parms;
		Parms.OutSuccess=OutSuccess ? true : false;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
	}
	else
	{
		BuildGraph_Implementation(OutSuccess);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Main execution function. Called once per requested graphs. This method is executed in a multi-threaded context, Graph Settings are safe but the custom builder wrapper itself isn't.\n\x09 * @param OutSuccess Whether building was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Main execution function. Called once per requested graphs. This method is executed in a multi-threaded context, Graph Settings are safe but the custom builder wrapper itself isn't.\n@param OutSuccess Whether building was successful or not" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildGraph constinit property declarations ****************************
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildGraph constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildGraph Property Definitions ***************************************
void Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventBuildGraph_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventBuildGraph_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::PropPointers) < 2048);
// ********** End Function BuildGraph Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "BuildGraph", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::PropPointers), 
sizeof(PCGExCustomGraphSettings_eventBuildGraph_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphSettings_eventBuildGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execBuildGraph)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildGraph_Implementation(Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function BuildGraph ******************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitializeSettings ********************
struct PCGExCustomGraphSettings_eventInitializeSettings_Parms
{
	bool OutSuccess;
	int32 OutNodeReserve;
	int32 OutEdgeReserve;
};
static FName NAME_UPCGExCustomGraphSettings_InitializeSettings = FName(TEXT("InitializeSettings"));
void UPCGExCustomGraphSettings::InitializeSettings(bool& OutSuccess, int32& OutNodeReserve, int32& OutEdgeReserve)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphSettings_InitializeSettings);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphSettings_eventInitializeSettings_Parms Parms;
		Parms.OutSuccess=OutSuccess ? true : false;
		Parms.OutNodeReserve=OutNodeReserve;
		Parms.OutEdgeReserve=OutEdgeReserve;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
		OutNodeReserve=Parms.OutNodeReserve;
		OutEdgeReserve=Parms.OutEdgeReserve;
	}
	else
	{
		InitializeSettings_Implementation(OutSuccess, OutNodeReserve, OutEdgeReserve);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Initialization method. It is called right before Build Graph -- this is where you must set the max number of nodes.\n\x09 * @param OutSuccess The maximum number of node this graph will be working with.\n\x09 * @param OutNodeReserve Number of nodes to reserve. This is mostly for memory optimization purpose. Try to be as close as possible if you can; slightly more is better than slightly less.\n\x09 * @param OutEdgeReserve Number of edges to reserve. This is mostly for memory optimization purpose. Try to be as close as possible if you can; slightly more is better than slightly less.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialization method. It is called right before Build Graph -- this is where you must set the max number of nodes.\n@param OutSuccess The maximum number of node this graph will be working with.\n@param OutNodeReserve Number of nodes to reserve. This is mostly for memory optimization purpose. Try to be as close as possible if you can; slightly more is better than slightly less.\n@param OutEdgeReserve Number of edges to reserve. This is mostly for memory optimization purpose. Try to be as close as possible if you can; slightly more is better than slightly less." },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeSettings constinit property declarations ********************
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutNodeReserve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutEdgeReserve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeSettings constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeSettings Property Definitions *******************************
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitializeSettings_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitializeSettings_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutNodeReserve = { "OutNodeReserve", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitializeSettings_Parms, OutNodeReserve), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutEdgeReserve = { "OutEdgeReserve", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitializeSettings_Parms, OutEdgeReserve), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutNodeReserve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::NewProp_OutEdgeReserve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::PropPointers) < 2048);
// ********** End Function InitializeSettings Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitializeSettings", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::PropPointers), 
sizeof(PCGExCustomGraphSettings_eventInitializeSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphSettings_eventInitializeSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitializeSettings)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNodeReserve);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutEdgeReserve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSettings_Implementation(Z_Param_Out_OutSuccess,Z_Param_Out_OutNodeReserve,Z_Param_Out_OutEdgeReserve);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitializeSettings **********************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeBool **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeBool_Parms
	{
		FName InAttributeName;
		bool InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeBool constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeBool constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeBool Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeBool_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeBool_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeBool_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PropPointers) < 2048);
// ********** End Function InitNodeBool Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeBool", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PCGExCustomGraphSettings_eventInitNodeBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::PCGExCustomGraphSettings_eventInitNodeBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_UBOOL_REF(Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeBool(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeBool ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeDouble ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeDouble_Parms
	{
		FName InAttributeName;
		double InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeDouble constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeDouble constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeDouble Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeDouble_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeDouble_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeDouble_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PropPointers) < 2048);
// ********** End Function InitNodeDouble Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeDouble", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PCGExCustomGraphSettings_eventInitNodeDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::PCGExCustomGraphSettings_eventInitNodeDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeDouble(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeDouble **************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeFloat *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeFloat_Parms
	{
		FName InAttributeName;
		float InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeFloat constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeFloat constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeFloat Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeFloat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeFloat_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PropPointers) < 2048);
// ********** End Function InitNodeFloat Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeFloat", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PCGExCustomGraphSettings_eventInitNodeFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::PCGExCustomGraphSettings_eventInitNodeFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeFloat(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeFloat ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeInt32 *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeInt32_Parms
	{
		FName InAttributeName;
		int32 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeInt32 constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeInt32 constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeInt32 Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeInt32_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeInt32_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PropPointers) < 2048);
// ********** End Function InitNodeInt32 Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeInt32", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PCGExCustomGraphSettings_eventInitNodeInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::PCGExCustomGraphSettings_eventInitNodeInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeInt32)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeInt32(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeInt32 ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeInt64 *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeInt64_Parms
	{
		FName InAttributeName;
		int64 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeInt64 constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeInt64 constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeInt64 Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeInt64_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeInt64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeInt64_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PropPointers) < 2048);
// ********** End Function InitNodeInt64 Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeInt64", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PCGExCustomGraphSettings_eventInitNodeInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::PCGExCustomGraphSettings_eventInitNodeInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeInt64(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeInt64 ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeName **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeName_Parms
	{
		FName InAttributeName;
		FName InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeName constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeName Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeName_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeName_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PropPointers) < 2048);
// ********** End Function InitNodeName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeName", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PCGExCustomGraphSettings_eventInitNodeName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::PCGExCustomGraphSettings_eventInitNodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeName(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeName ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeQuat **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeQuat_Parms
	{
		FName InAttributeName;
		FQuat InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeQuat constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeQuat constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeQuat Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeQuat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeQuat_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PropPointers) < 2048);
// ********** End Function InitNodeQuat Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeQuat", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PCGExCustomGraphSettings_eventInitNodeQuat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::PCGExCustomGraphSettings_eventInitNodeQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeQuat(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeQuat ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeRotator ***********************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeRotator_Parms
	{
		FName InAttributeName;
		FRotator InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeRotator constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeRotator constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeRotator Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeRotator_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeRotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeRotator_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PropPointers) < 2048);
// ********** End Function InitNodeRotator Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeRotator", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PCGExCustomGraphSettings_eventInitNodeRotator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::PCGExCustomGraphSettings_eventInitNodeRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeRotator(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeRotator *************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeSoftClassPath *****************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms
	{
		FName InAttributeName;
		FSoftClassPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeSoftClassPath constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeSoftClassPath constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeSoftClassPath Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 3467803280
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PropPointers) < 2048);
// ********** End Function InitNodeSoftClassPath Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeSoftClassPath", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::PCGExCustomGraphSettings_eventInitNodeSoftClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeSoftClassPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeSoftClassPath(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeSoftClassPath *******************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeSoftObjectPath ****************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms
	{
		FName InAttributeName;
		FSoftObjectPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeSoftObjectPath constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeSoftObjectPath constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeSoftObjectPath Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 2425717601
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End Function InitNodeSoftObjectPath Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeSoftObjectPath", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::PCGExCustomGraphSettings_eventInitNodeSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeSoftObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeSoftObjectPath(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeSoftObjectPath ******************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeString ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeString_Parms
	{
		FName InAttributeName;
		FString InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeString constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeString constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeString Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeString_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeString_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PropPointers) < 2048);
// ********** End Function InitNodeString Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeString", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PCGExCustomGraphSettings_eventInitNodeString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::PCGExCustomGraphSettings_eventInitNodeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeString(Z_Param_Out_InAttributeName,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeString **************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeTransform *********************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeTransform_Parms
	{
		FName InAttributeName;
		FTransform InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeTransform constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeTransform constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeTransform Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeTransform_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeTransform_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PropPointers) < 2048);
// ********** End Function InitNodeTransform Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeTransform", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PCGExCustomGraphSettings_eventInitNodeTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::PCGExCustomGraphSettings_eventInitNodeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeTransform(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeTransform ***********************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeVector ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeVector_Parms
	{
		FName InAttributeName;
		FVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeVector constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeVector constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeVector Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeVector_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PropPointers) < 2048);
// ********** End Function InitNodeVector Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeVector", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PCGExCustomGraphSettings_eventInitNodeVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::PCGExCustomGraphSettings_eventInitNodeVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeVector(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeVector **************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeVector2 ***********************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeVector2_Parms
	{
		FName InAttributeName;
		FVector2D InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeVector2 constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeVector2 constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeVector2 Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector2_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeVector2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeVector2_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PropPointers) < 2048);
// ********** End Function InitNodeVector2 Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeVector2", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PCGExCustomGraphSettings_eventInitNodeVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::PCGExCustomGraphSettings_eventInitNodeVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeVector2)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeVector2(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeVector2 *************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitNodeVector4 ***********************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics
{
	struct PCGExCustomGraphSettings_eventInitNodeVector4_Parms
	{
		FName InAttributeName;
		FVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09* Initialize a point' attribute default value.\n\x09 * Must be called during initialization.\n\x09 * @param InAttributeName\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Initialize a point' attribute default value.\nMust be called during initialization.\n@param InAttributeName\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitNodeVector4 constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitNodeVector4 constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitNodeVector4 Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector4_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventInitNodeVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitNodeVector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitNodeVector4_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PropPointers) < 2048);
// ********** End Function InitNodeVector4 Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitNodeVector4", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PCGExCustomGraphSettings_eventInitNodeVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::PCGExCustomGraphSettings_eventInitNodeVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitNodeVector4)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitNodeVector4(Z_Param_Out_InAttributeName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitNodeVector4 *************************

// ********** Begin Class UPCGExCustomGraphSettings Function InitPointAttributes *******************
struct PCGExCustomGraphSettings_eventInitPointAttributes_Parms
{
	bool OutSuccess;
};
static FName NAME_UPCGExCustomGraphSettings_InitPointAttributes = FName(TEXT("InitPointAttributes"));
void UPCGExCustomGraphSettings::InitPointAttributes(bool& OutSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphSettings_InitPointAttributes);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphSettings_eventInitPointAttributes_Parms Parms;
		Parms.OutSuccess=OutSuccess ? true : false;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
	}
	else
	{
		InitPointAttributes_Implementation(OutSuccess);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * This function is called after BuildGraph, when the point metadata has been initialized, so you can initialized default attribute values here.\n\x09 * Non-initialized attribute will still work, but the default value under the hood will be the first one set, which is not deterministic due to the multhreaded nature of the processing.\n\x09 * @param OutSuccess Whether initialization was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "This function is called after BuildGraph, when the point metadata has been initialized, so you can initialized default attribute values here.\nNon-initialized attribute will still work, but the default value under the hood will be the first one set, which is not deterministic due to the multhreaded nature of the processing.\n@param OutSuccess Whether initialization was successful or not" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitPointAttributes constinit property declarations *******************
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitPointAttributes constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitPointAttributes Property Definitions ******************************
void Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventInitPointAttributes_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventInitPointAttributes_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::PropPointers) < 2048);
// ********** End Function InitPointAttributes Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "InitPointAttributes", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::PropPointers), 
sizeof(PCGExCustomGraphSettings_eventInitPointAttributes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphSettings_eventInitPointAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execInitPointAttributes)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitPointAttributes_Implementation(Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function InitPointAttributes *********************

// ********** Begin Class UPCGExCustomGraphSettings Function RemoveEdge ****************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics
{
	struct PCGExCustomGraphSettings_eventRemoveEdge_Parms
	{
		int64 InStartIdx;
		int64 InEndIdx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Data" },
		{ "Comment", "/**\n\x09 * Removes an edge between two nodes in an indexed graph.\n\x09 * @param InStartIdx \n\x09 * @param InEndIdx \n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Removes an edge between two nodes in an indexed graph.\n@param InStartIdx\n@param InEndIdx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveEdge constinit property declarations ****************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InStartIdx;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InEndIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveEdge constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveEdge Property Definitions ***************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::NewProp_InStartIdx = { "InStartIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventRemoveEdge_Parms, InStartIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartIdx_MetaData), NewProp_InStartIdx_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::NewProp_InEndIdx = { "InEndIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventRemoveEdge_Parms, InEndIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndIdx_MetaData), NewProp_InEndIdx_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::NewProp_InStartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::NewProp_InEndIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PropPointers) < 2048);
// ********** End Function RemoveEdge Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "RemoveEdge", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PCGExCustomGraphSettings_eventRemoveEdge_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::PCGExCustomGraphSettings_eventRemoveEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execRemoveEdge)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InStartIdx);
	P_GET_PROPERTY(FInt64Property,Z_Param_InEndIdx);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEdge(Z_Param_InStartIdx,Z_Param_InEndIdx);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function RemoveEdge ******************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeBool ***************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeBool_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		bool InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeBool constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeBool constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeBool Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeBool_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeBool_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeBool_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeBool_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PropPointers) < 2048);
// ********** End Function SetNodeBool Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeBool", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PCGExCustomGraphSettings_eventSetNodeBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::PCGExCustomGraphSettings_eventSetNodeBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_UBOOL_REF(Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeBool(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeBool *****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeDouble *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeDouble_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		double InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeDouble constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeDouble constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeDouble Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeDouble_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeDouble_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeDouble_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeDouble_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeDouble_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PropPointers) < 2048);
// ********** End Function SetNodeDouble Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeDouble", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PCGExCustomGraphSettings_eventSetNodeDouble_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::PCGExCustomGraphSettings_eventSetNodeDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeDouble)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeDouble(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeDouble ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeFloat **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeFloat_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		float InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeFloat constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeFloat constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeFloat Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeFloat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeFloat_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeFloat_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PropPointers) < 2048);
// ********** End Function SetNodeFloat Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeFloat", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PCGExCustomGraphSettings_eventSetNodeFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::PCGExCustomGraphSettings_eventSetNodeFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeFloat(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeFloat ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeInt32 **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeInt32_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		int32 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeInt32 constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeInt32 constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeInt32 Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt32_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt32_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt32_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeInt32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeInt32_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PropPointers) < 2048);
// ********** End Function SetNodeInt32 Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeInt32", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PCGExCustomGraphSettings_eventSetNodeInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::PCGExCustomGraphSettings_eventSetNodeInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeInt32)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeInt32(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeInt32 ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeInt64 **************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeInt64_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		int64 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeInt64 constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeInt64 constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeInt64 Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt64_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt64_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeInt64_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeInt64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeInt64_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PropPointers) < 2048);
// ********** End Function SetNodeInt64 Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeInt64", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PCGExCustomGraphSettings_eventSetNodeInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::PCGExCustomGraphSettings_eventSetNodeInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeInt64)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeInt64(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeInt64 ****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeName ***************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeName_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FName InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeName constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeName Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeName_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeName_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeName_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeName_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PropPointers) < 2048);
// ********** End Function SetNodeName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeName", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PCGExCustomGraphSettings_eventSetNodeName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::PCGExCustomGraphSettings_eventSetNodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeName(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeName *****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeQuat ***************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeQuat_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FQuat InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeQuat constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeQuat constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeQuat Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeQuat_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeQuat_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeQuat_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PropPointers) < 2048);
// ********** End Function SetNodeQuat Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeQuat", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PCGExCustomGraphSettings_eventSetNodeQuat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::PCGExCustomGraphSettings_eventSetNodeQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeQuat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeQuat(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeQuat *****************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeRotator ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeRotator_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FRotator InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeRotator constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeRotator constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeRotator Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeRotator_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeRotator_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeRotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeRotator_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PropPointers) < 2048);
// ********** End Function SetNodeRotator Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeRotator", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PCGExCustomGraphSettings_eventSetNodeRotator_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::PCGExCustomGraphSettings_eventSetNodeRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeRotator(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeRotator **************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeSoftClassPath ******************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FSoftClassPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeSoftClassPath constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeSoftClassPath constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeSoftClassPath Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 3467803280
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PropPointers) < 2048);
// ********** End Function SetNodeSoftClassPath Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeSoftClassPath", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::PCGExCustomGraphSettings_eventSetNodeSoftClassPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeSoftClassPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FSoftClassPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeSoftClassPath(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeSoftClassPath ********************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeSoftObjectPath *****************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FSoftObjectPath InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeSoftObjectPath constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeSoftObjectPath constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeSoftObjectPath Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms, InValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 2425717601
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End Function SetNodeSoftObjectPath Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeSoftObjectPath", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::PCGExCustomGraphSettings_eventSetNodeSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeSoftObjectPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeSoftObjectPath(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeSoftObjectPath *******************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeString *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeString_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FString InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeString constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeString constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeString Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeString_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeString_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeString_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PropPointers) < 2048);
// ********** End Function SetNodeString Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeString", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PCGExCustomGraphSettings_eventSetNodeString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::PCGExCustomGraphSettings_eventSetNodeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeString(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeString ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeTransform **********************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeTransform_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FTransform InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeTransform constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeTransform constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeTransform Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeTransform_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeTransform_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeTransform_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PropPointers) < 2048);
// ********** End Function SetNodeTransform Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeTransform", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PCGExCustomGraphSettings_eventSetNodeTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::PCGExCustomGraphSettings_eventSetNodeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeTransform)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeTransform(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeTransform ************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeVector *************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeVector_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeVector constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeVector constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeVector Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeVector_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PropPointers) < 2048);
// ********** End Function SetNodeVector Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeVector", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PCGExCustomGraphSettings_eventSetNodeVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::PCGExCustomGraphSettings_eventSetNodeVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeVector(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeVector ***************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeVector2 ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeVector2_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FVector2D InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeVector2 constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeVector2 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeVector2 Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector2_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector2_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeVector2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeVector2_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PropPointers) < 2048);
// ********** End Function SetNodeVector2 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeVector2", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PCGExCustomGraphSettings_eventSetNodeVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::PCGExCustomGraphSettings_eventSetNodeVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeVector2)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeVector2(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeVector2 **************************

// ********** Begin Class UPCGExCustomGraphSettings Function SetNodeVector4 ************************
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics
{
	struct PCGExCustomGraphSettings_eventSetNodeVector4_Parms
	{
		FName InAttributeName;
		int64 InNodeIdx;
		FVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Setter" },
		{ "Comment", "/**\n\x09 * Set a point' attribute value at a given index.\n\x09 * @param InAttributeName\n\x09 * @param InNodeIdx The node ID to set the value to.\n\x09 * @param InValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Set a point' attribute value at a given index.\n@param InAttributeName\n@param InNodeIdx The node ID to set the value to.\n@param InValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNodeVector4 constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNodeVector4 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNodeVector4 Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector4_Parms, InAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttributeName_MetaData), NewProp_InAttributeName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector4_Parms, InNodeIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeIdx_MetaData), NewProp_InNodeIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventSetNodeVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExCustomGraphSettings_eventSetNodeVector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphSettings_eventSetNodeVector4_Parms), &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PropPointers) < 2048);
// ********** End Function SetNodeVector4 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "SetNodeVector4", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PCGExCustomGraphSettings_eventSetNodeVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::PCGExCustomGraphSettings_eventSetNodeVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execSetNodeVector4)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttributeName);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeVector4(Z_Param_Out_InAttributeName,Z_Param_InNodeIdx,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function SetNodeVector4 **************************

// ********** Begin Class UPCGExCustomGraphSettings Function UpdateNodePoint ***********************
struct PCGExCustomGraphSettings_eventUpdateNodePoint_Parms
{
	FPCGPoint InPoint;
	int64 InNodeIdx;
	int32 InPointIndex;
	FPCGPoint OutPoint;
};
static FName NAME_UPCGExCustomGraphSettings_UpdateNodePoint = FName(TEXT("UpdateNodePoint"));
void UPCGExCustomGraphSettings::UpdateNodePoint(FPCGPoint const& InPoint, int64 InNodeIdx, int32 InPointIndex, FPCGPoint& OutPoint)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphSettings_UpdateNodePoint);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphSettings_eventUpdateNodePoint_Parms Parms;
		Parms.InPoint=InPoint;
		Parms.InNodeIdx=InNodeIdx;
		Parms.InPointIndex=InPointIndex;
		Parms.OutPoint=OutPoint;
	ProcessEvent(Func,&Parms);
		OutPoint=Parms.OutPoint;
	}
	else
	{
		UpdateNodePoint_Implementation(InPoint, InNodeIdx, InPointIndex, OutPoint);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Update Node Point is called on each node point after BuildGraph has been, and edges added. This method is executed in a multi-threaded context.\n\x09 * This is where point transform & properties should be set.\n\x09 * @param InPoint PCG Point that represents the node\n\x09 * @param InNodeIdx Index of the node the given point matches with\n\x09 * @param InPointIndex Index of the node' PCG Point (before pruning)\n\x09 * @param OutPoint Muted PCG Point that represents the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Update Node Point is called on each node point after BuildGraph has been, and edges added. This method is executed in a multi-threaded context.\nThis is where point transform & properties should be set.\n@param InPoint PCG Point that represents the node\n@param InNodeIdx Index of the node the given point matches with\n@param InPointIndex Index of the node' PCG Point (before pruning)\n@param OutPoint Muted PCG Point that represents the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateNodePoint constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateNodePoint constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateNodePoint Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPoint_MetaData), NewProp_InPoint_MetaData) }; // 3373399168
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InNodeIdx = { "InNodeIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms, InNodeIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms, InPointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 3373399168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InNodeIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_InPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::NewProp_OutPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::PropPointers) < 2048);
// ********** End Function UpdateNodePoint Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphSettings, nullptr, "UpdateNodePoint", 	Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::PropPointers), 
sizeof(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphSettings_eventUpdateNodePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphSettings::execUpdateNodePoint)
{
	P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeIdx);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
	P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNodePoint_Implementation(Z_Param_Out_InPoint,Z_Param_InNodeIdx,Z_Param_InPointIndex,Z_Param_Out_OutPoint);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphSettings Function UpdateNodePoint *************************

// ********** Begin Class UPCGExCustomGraphSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCustomGraphSettings;
UClass* UPCGExCustomGraphSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCustomGraphSettings;
	if (!Z_Registration_Info_UClass_UPCGExCustomGraphSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCustomGraphSettings"),
			Z_Registration_Info_UClass_UPCGExCustomGraphSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCustomGraphSettings,
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
	return Z_Registration_Info_UClass_UPCGExCustomGraphSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister()
{
	return UPCGExCustomGraphSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCustomGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "[PCGEx] Custom Graph Settings" },
		{ "IncludePath", "Graph/PCGExBuildCustomGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "PCGExNodeLibraryDoc", "clusters/build-custom-graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsIndex_MetaData[] = {
		{ "Category", "PCGEx|Data" },
		{ "Comment", "/** Internal index of these settings. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Internal index of these settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCustomGraphSettings constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SettingsIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCustomGraphSettings constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddEdge"), .Pointer = &UPCGExCustomGraphSettings::execAddEdge },
		{ .NameUTF8 = UTF8TEXT("BuildGraph"), .Pointer = &UPCGExCustomGraphSettings::execBuildGraph },
		{ .NameUTF8 = UTF8TEXT("InitializeSettings"), .Pointer = &UPCGExCustomGraphSettings::execInitializeSettings },
		{ .NameUTF8 = UTF8TEXT("InitNodeBool"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeBool },
		{ .NameUTF8 = UTF8TEXT("InitNodeDouble"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeDouble },
		{ .NameUTF8 = UTF8TEXT("InitNodeFloat"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeFloat },
		{ .NameUTF8 = UTF8TEXT("InitNodeInt32"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeInt32 },
		{ .NameUTF8 = UTF8TEXT("InitNodeInt64"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeInt64 },
		{ .NameUTF8 = UTF8TEXT("InitNodeName"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeName },
		{ .NameUTF8 = UTF8TEXT("InitNodeQuat"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeQuat },
		{ .NameUTF8 = UTF8TEXT("InitNodeRotator"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeRotator },
		{ .NameUTF8 = UTF8TEXT("InitNodeSoftClassPath"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeSoftClassPath },
		{ .NameUTF8 = UTF8TEXT("InitNodeSoftObjectPath"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeSoftObjectPath },
		{ .NameUTF8 = UTF8TEXT("InitNodeString"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeString },
		{ .NameUTF8 = UTF8TEXT("InitNodeTransform"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeTransform },
		{ .NameUTF8 = UTF8TEXT("InitNodeVector"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeVector },
		{ .NameUTF8 = UTF8TEXT("InitNodeVector2"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeVector2 },
		{ .NameUTF8 = UTF8TEXT("InitNodeVector4"), .Pointer = &UPCGExCustomGraphSettings::execInitNodeVector4 },
		{ .NameUTF8 = UTF8TEXT("InitPointAttributes"), .Pointer = &UPCGExCustomGraphSettings::execInitPointAttributes },
		{ .NameUTF8 = UTF8TEXT("RemoveEdge"), .Pointer = &UPCGExCustomGraphSettings::execRemoveEdge },
		{ .NameUTF8 = UTF8TEXT("SetNodeBool"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeBool },
		{ .NameUTF8 = UTF8TEXT("SetNodeDouble"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeDouble },
		{ .NameUTF8 = UTF8TEXT("SetNodeFloat"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeFloat },
		{ .NameUTF8 = UTF8TEXT("SetNodeInt32"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeInt32 },
		{ .NameUTF8 = UTF8TEXT("SetNodeInt64"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeInt64 },
		{ .NameUTF8 = UTF8TEXT("SetNodeName"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeName },
		{ .NameUTF8 = UTF8TEXT("SetNodeQuat"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeQuat },
		{ .NameUTF8 = UTF8TEXT("SetNodeRotator"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeRotator },
		{ .NameUTF8 = UTF8TEXT("SetNodeSoftClassPath"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeSoftClassPath },
		{ .NameUTF8 = UTF8TEXT("SetNodeSoftObjectPath"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeSoftObjectPath },
		{ .NameUTF8 = UTF8TEXT("SetNodeString"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeString },
		{ .NameUTF8 = UTF8TEXT("SetNodeTransform"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeTransform },
		{ .NameUTF8 = UTF8TEXT("SetNodeVector"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeVector },
		{ .NameUTF8 = UTF8TEXT("SetNodeVector2"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeVector2 },
		{ .NameUTF8 = UTF8TEXT("SetNodeVector4"), .Pointer = &UPCGExCustomGraphSettings::execSetNodeVector4 },
		{ .NameUTF8 = UTF8TEXT("UpdateNodePoint"), .Pointer = &UPCGExCustomGraphSettings::execUpdateNodePoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_AddEdge, "AddEdge" }, // 3698822644
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_BuildGraph, "BuildGraph" }, // 2132396199
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitializeSettings, "InitializeSettings" }, // 3026350743
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeBool, "InitNodeBool" }, // 3843856498
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeDouble, "InitNodeDouble" }, // 1035019063
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeFloat, "InitNodeFloat" }, // 2152714394
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt32, "InitNodeInt32" }, // 3949354258
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeInt64, "InitNodeInt64" }, // 3728179783
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeName, "InitNodeName" }, // 3280937238
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeQuat, "InitNodeQuat" }, // 3286109258
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeRotator, "InitNodeRotator" }, // 830541614
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftClassPath, "InitNodeSoftClassPath" }, // 3677833864
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeSoftObjectPath, "InitNodeSoftObjectPath" }, // 1962821518
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeString, "InitNodeString" }, // 2540062534
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeTransform, "InitNodeTransform" }, // 489015645
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector, "InitNodeVector" }, // 676690522
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector2, "InitNodeVector2" }, // 77764173
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitNodeVector4, "InitNodeVector4" }, // 2938642412
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_InitPointAttributes, "InitPointAttributes" }, // 405616727
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_RemoveEdge, "RemoveEdge" }, // 1441821509
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeBool, "SetNodeBool" }, // 1189934251
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeDouble, "SetNodeDouble" }, // 967244082
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeFloat, "SetNodeFloat" }, // 3387153113
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt32, "SetNodeInt32" }, // 3743405967
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeInt64, "SetNodeInt64" }, // 4184929181
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeName, "SetNodeName" }, // 1432714011
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeQuat, "SetNodeQuat" }, // 986795203
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeRotator, "SetNodeRotator" }, // 4004514602
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftClassPath, "SetNodeSoftClassPath" }, // 2204729829
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeSoftObjectPath, "SetNodeSoftObjectPath" }, // 2152944546
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeString, "SetNodeString" }, // 2467619239
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeTransform, "SetNodeTransform" }, // 235066770
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector, "SetNodeVector" }, // 1512518039
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector2, "SetNodeVector2" }, // 2747958241
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_SetNodeVector4, "SetNodeVector4" }, // 1157114805
		{ &Z_Construct_UFunction_UPCGExCustomGraphSettings_UpdateNodePoint, "UpdateNodePoint" }, // 2263435996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCustomGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCustomGraphSettings_Statics

// ********** Begin Class UPCGExCustomGraphSettings Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::NewProp_SettingsIndex = { "SettingsIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCustomGraphSettings, SettingsIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsIndex_MetaData), NewProp_SettingsIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::NewProp_SettingsIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCustomGraphSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::ClassParams = {
	&UPCGExCustomGraphSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::Class_MetaDataParams)
};
void UPCGExCustomGraphSettings::StaticRegisterNativesUPCGExCustomGraphSettings()
{
	UClass* Class = UPCGExCustomGraphSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExCustomGraphSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCustomGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCustomGraphSettings.OuterSingleton, Z_Construct_UClass_UPCGExCustomGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCustomGraphSettings.OuterSingleton;
}
UPCGExCustomGraphSettings::UPCGExCustomGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCustomGraphSettings);
UPCGExCustomGraphSettings::~UPCGExCustomGraphSettings() {}
// ********** End Class UPCGExCustomGraphSettings **************************************************

// ********** Begin ScriptStruct FNewGraphSettingsResult *******************************************
struct Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FNewGraphSettingsResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FNewGraphSettingsResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FNewGraphSettingsResult constinit property declarations ***********
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FNewGraphSettingsResult constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewGraphSettingsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult;
class UScriptStruct* FNewGraphSettingsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewGraphSettingsResult, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("NewGraphSettingsResult"));
	}
	return Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FNewGraphSettingsResult Property Definitions **********************
void Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FNewGraphSettingsResult*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewGraphSettingsResult), &Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewGraphSettingsResult, Settings), Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FNewGraphSettingsResult Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"NewGraphSettingsResult",
	Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::PropPointers),
	sizeof(FNewGraphSettingsResult),
	alignof(FNewGraphSettingsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewGraphSettingsResult()
{
	if (!Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.InnerSingleton, Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult.InnerSingleton);
}
// ********** End ScriptStruct FNewGraphSettingsResult *********************************************

// ********** Begin Class UPCGExCustomGraphBuilder Function BuildGraph *****************************
struct PCGExCustomGraphBuilder_eventBuildGraph_Parms
{
	UPCGExCustomGraphSettings* InCustomGraphSettings;
	bool OutSuccess;
};
static FName NAME_UPCGExCustomGraphBuilder_BuildGraph = FName(TEXT("BuildGraph"));
void UPCGExCustomGraphBuilder::BuildGraph(UPCGExCustomGraphSettings* InCustomGraphSettings, bool& OutSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphBuilder_BuildGraph);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphBuilder_eventBuildGraph_Parms Parms;
		Parms.InCustomGraphSettings=InCustomGraphSettings;
		Parms.OutSuccess=OutSuccess ? true : false;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
	}
	else
	{
		BuildGraph_Implementation(InCustomGraphSettings, OutSuccess);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Main execution function. Called once per requested graphs. This method is executed in a multi-threaded context, Graph Settings are safe but the custom builder wrapper itself isn't.\n\x09 * @param InCustomGraphSettings\n\x09 * @param OutSuccess\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Main execution function. Called once per requested graphs. This method is executed in a multi-threaded context, Graph Settings are safe but the custom builder wrapper itself isn't.\n@param InCustomGraphSettings\n@param OutSuccess" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildGraph constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCustomGraphSettings;
	static void NewProp_OutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildGraph constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildGraph Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_InCustomGraphSettings = { "InCustomGraphSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphBuilder_eventBuildGraph_Parms, InCustomGraphSettings), Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomGraphBuilder_eventBuildGraph_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphBuilder_eventBuildGraph_Parms), &Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_InCustomGraphSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::PropPointers) < 2048);
// ********** End Function BuildGraph Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphBuilder, nullptr, "BuildGraph", 	Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::PropPointers), 
sizeof(PCGExCustomGraphBuilder_eventBuildGraph_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphBuilder_eventBuildGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphBuilder::execBuildGraph)
{
	P_GET_OBJECT(UPCGExCustomGraphSettings,Z_Param_InCustomGraphSettings);
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildGraph_Implementation(Z_Param_InCustomGraphSettings,Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphBuilder Function BuildGraph *******************************

// ********** Begin Class UPCGExCustomGraphBuilder Function CreateGraphSettings ********************
struct Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics
{
	struct PCGExCustomGraphBuilder_eventCreateGraphSettings_Parms
	{
		TSubclassOf<UPCGExCustomGraphSettings> SettingsClass;
		UPCGExCustomGraphSettings* OutSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Create a Graph Setting object that will be processed individually and generate its own cluster(s)\n\x09 * @param SettingsClass\n\x09 * @param OutSettings\n\x09 */" },
		{ "DeterminesOutputType", "SettingsClass" },
		{ "DynamicOutputParam", "OutSettings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Create a Graph Setting object that will be processed individually and generate its own cluster(s)\n@param SettingsClass\n@param OutSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateGraphSettings constinit property declarations *******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateGraphSettings constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateGraphSettings Property Definitions ******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphBuilder_eventCreateGraphSettings_Parms, SettingsClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsClass_MetaData), NewProp_SettingsClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExCustomGraphBuilder_eventCreateGraphSettings_Parms, OutSettings), Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::NewProp_SettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::NewProp_OutSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PropPointers) < 2048);
// ********** End Function CreateGraphSettings Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphBuilder, nullptr, "CreateGraphSettings", 	Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PCGExCustomGraphBuilder_eventCreateGraphSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::PCGExCustomGraphBuilder_eventCreateGraphSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphBuilder::execCreateGraphSettings)
{
	P_GET_OBJECT(UClass,Z_Param_SettingsClass);
	P_GET_OBJECT_REF(UPCGExCustomGraphSettings,Z_Param_Out_OutSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGraphSettings(Z_Param_SettingsClass,P_ARG_GC_BARRIER(Z_Param_Out_OutSettings));
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphBuilder Function CreateGraphSettings **********************

// ********** Begin Class UPCGExCustomGraphBuilder Function Initialize *****************************
struct PCGExCustomGraphBuilder_eventInitialize_Parms
{
	bool OutSuccess;
};
static FName NAME_UPCGExCustomGraphBuilder_Initialize = FName(TEXT("Initialize"));
void UPCGExCustomGraphBuilder::Initialize(bool& OutSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UPCGExCustomGraphBuilder_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PCGExCustomGraphBuilder_eventInitialize_Parms Parms;
		Parms.OutSuccess=OutSuccess ? true : false;
	ProcessEvent(Func,&Parms);
		OutSuccess=Parms.OutSuccess;
	}
	else
	{
		Initialize_Implementation(OutSuccess);
	}
}
struct Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCGEx|Execution" },
		{ "Comment", "/**\n\x09 * Main initialization function. Called once, and is responsible for populating graph builder settings.\n\x09 * At least one setting is expected to be found in the GraphSettings array. This is executed on the main thread.\n\x09 * @param OutSuccess\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "ToolTip", "Main initialization function. Called once, and is responsible for populating graph builder settings.\nAt least one setting is expected to be found in the GraphSettings array. This is executed on the main thread.\n@param OutSuccess" },
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
void Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::NewProp_OutSuccess_SetBit(void* Obj)
{
	((PCGExCustomGraphBuilder_eventInitialize_Parms*)Obj)->OutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExCustomGraphBuilder_eventInitialize_Parms), &Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::NewProp_OutSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExCustomGraphBuilder, nullptr, "Initialize", 	Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::PropPointers), 
sizeof(PCGExCustomGraphBuilder_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PCGExCustomGraphBuilder_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExCustomGraphBuilder::execInitialize)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation(Z_Param_Out_OutSuccess);
	P_NATIVE_END;
}
// ********** End Class UPCGExCustomGraphBuilder Function Initialize *******************************

// ********** Begin Class UPCGExCustomGraphBuilder *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCustomGraphBuilder;
UClass* UPCGExCustomGraphBuilder::GetPrivateStaticClass()
{
	using TClass = UPCGExCustomGraphBuilder;
	if (!Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCustomGraphBuilder"),
			Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.InnerSingleton,
			StaticRegisterNativesUPCGExCustomGraphBuilder,
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
	return Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister()
{
	return UPCGExCustomGraphBuilder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "[PCGEx] Custom Graph Builder" },
		{ "IncludePath", "Graph/PCGExBuildCustomGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActors_MetaData[] = {
		{ "Category", "PCGEx|Inputs" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphSettings_MetaData[] = {
		{ "Category", "PCGEx|Outputs" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoEdgeAttributeStep_MetaData[] = {
		{ "Category", "PCGEx|Inputs" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCustomGraphBuilder constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphSettings;
	static void NewProp_DoEdgeAttributeStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoEdgeAttributeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCustomGraphBuilder constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BuildGraph"), .Pointer = &UPCGExCustomGraphBuilder::execBuildGraph },
		{ .NameUTF8 = UTF8TEXT("CreateGraphSettings"), .Pointer = &UPCGExCustomGraphBuilder::execCreateGraphSettings },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &UPCGExCustomGraphBuilder::execInitialize },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExCustomGraphBuilder_BuildGraph, "BuildGraph" }, // 861990261
		{ &Z_Construct_UFunction_UPCGExCustomGraphBuilder_CreateGraphSettings, "CreateGraphSettings" }, // 2607676852
		{ &Z_Construct_UFunction_UPCGExCustomGraphBuilder_Initialize, "Initialize" }, // 2846802713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCustomGraphBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics

// ********** Begin Class UPCGExCustomGraphBuilder Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_InputActors_Inner = { "InputActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_InputActors = { "InputActors", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCustomGraphBuilder, InputActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActors_MetaData), NewProp_InputActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_GraphSettings_Inner = { "GraphSettings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExCustomGraphSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_GraphSettings = { "GraphSettings", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCustomGraphBuilder, GraphSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphSettings_MetaData), NewProp_GraphSettings_MetaData) };
void Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_DoEdgeAttributeStep_SetBit(void* Obj)
{
	((UPCGExCustomGraphBuilder*)Obj)->DoEdgeAttributeStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_DoEdgeAttributeStep = { "DoEdgeAttributeStep", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCustomGraphBuilder), &Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_DoEdgeAttributeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoEdgeAttributeStep_MetaData), NewProp_DoEdgeAttributeStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_InputActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_InputActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_GraphSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_GraphSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::NewProp_DoEdgeAttributeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCustomGraphBuilder Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::ClassParams = {
	&UPCGExCustomGraphBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::Class_MetaDataParams)
};
void UPCGExCustomGraphBuilder::StaticRegisterNativesUPCGExCustomGraphBuilder()
{
	UClass* Class = UPCGExCustomGraphBuilder::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExCustomGraphBuilder()
{
	if (!Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.OuterSingleton, Z_Construct_UClass_UPCGExCustomGraphBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCustomGraphBuilder.OuterSingleton;
}
UPCGExCustomGraphBuilder::UPCGExCustomGraphBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCustomGraphBuilder);
UPCGExCustomGraphBuilder::~UPCGExCustomGraphBuilder() {}
// ********** End Class UPCGExCustomGraphBuilder ***************************************************

// ********** Begin Class UPCGExBuildCustomGraphSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings;
UClass* UPCGExBuildCustomGraphSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildCustomGraphSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildCustomGraphSettings"),
			Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildCustomGraphSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildCustomGraphSettings_NoRegister()
{
	return UPCGExBuildCustomGraphSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/PCGExBuildCustomGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor fetching mode. These actors will be forwarded to the builder so it can fetch components and data from there during its initialization. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor fetching mode. These actors will be forwarded to the builder so it can fetch components and data from there during its initialization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor reference */" },
		{ "EditCondition", "Mode == EPCGExCustomGraphActorSourceMode::ActorReferences" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Builder instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Builder instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietUnprocessedSettingsWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietFailedBuildGraphWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBuildCustomGraph.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildCustomGraphSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static void NewProp_bQuietUnprocessedSettingsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietUnprocessedSettingsWarning;
	static void NewProp_bQuietFailedBuildGraphWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietFailedBuildGraphWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildCustomGraphSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildCustomGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics

// ********** Begin Class UPCGExBuildCustomGraphSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildCustomGraphSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCustomGraphActorSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3176331970
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_ActorReferenceAttribute = { "ActorReferenceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildCustomGraphSettings, ActorReferenceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttribute_MetaData), NewProp_ActorReferenceAttribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildCustomGraphSettings, Builder), Z_Construct_UClass_UPCGExCustomGraphBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Builder_MetaData), NewProp_Builder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildCustomGraphSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
void Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietUnprocessedSettingsWarning_SetBit(void* Obj)
{
	((UPCGExBuildCustomGraphSettings*)Obj)->bQuietUnprocessedSettingsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietUnprocessedSettingsWarning = { "bQuietUnprocessedSettingsWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildCustomGraphSettings), &Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietUnprocessedSettingsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietUnprocessedSettingsWarning_MetaData), NewProp_bQuietUnprocessedSettingsWarning_MetaData) };
void Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietFailedBuildGraphWarning_SetBit(void* Obj)
{
	((UPCGExBuildCustomGraphSettings*)Obj)->bQuietFailedBuildGraphWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietFailedBuildGraphWarning = { "bQuietFailedBuildGraphWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildCustomGraphSettings), &Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietFailedBuildGraphWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietFailedBuildGraphWarning_MetaData), NewProp_bQuietFailedBuildGraphWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_ActorReferenceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_GraphBuilderDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietUnprocessedSettingsWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::NewProp_bQuietFailedBuildGraphWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildCustomGraphSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::ClassParams = {
	&UPCGExBuildCustomGraphSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildCustomGraphSettings::StaticRegisterNativesUPCGExBuildCustomGraphSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildCustomGraphSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildCustomGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings.OuterSingleton;
}
UPCGExBuildCustomGraphSettings::UPCGExBuildCustomGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildCustomGraphSettings);
UPCGExBuildCustomGraphSettings::~UPCGExBuildCustomGraphSettings() {}
// ********** End Class UPCGExBuildCustomGraphSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCustomGraphActorSourceMode_StaticEnum, TEXT("EPCGExCustomGraphActorSourceMode"), &Z_Registration_Info_UEnum_EPCGExCustomGraphActorSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3176331970U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNewGraphSettingsResult::StaticStruct, Z_Construct_UScriptStruct_FNewGraphSettingsResult_Statics::NewStructOps, TEXT("NewGraphSettingsResult"),&Z_Registration_Info_UScriptStruct_FNewGraphSettingsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewGraphSettingsResult), 2507191767U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCustomGraphSettings, UPCGExCustomGraphSettings::StaticClass, TEXT("UPCGExCustomGraphSettings"), &Z_Registration_Info_UClass_UPCGExCustomGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCustomGraphSettings), 1122859130U) },
		{ Z_Construct_UClass_UPCGExCustomGraphBuilder, UPCGExCustomGraphBuilder::StaticClass, TEXT("UPCGExCustomGraphBuilder"), &Z_Registration_Info_UClass_UPCGExCustomGraphBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCustomGraphBuilder), 1680135415U) },
		{ Z_Construct_UClass_UPCGExBuildCustomGraphSettings, UPCGExBuildCustomGraphSettings::StaticClass, TEXT("UPCGExBuildCustomGraphSettings"), &Z_Registration_Info_UClass_UPCGExBuildCustomGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildCustomGraphSettings), 659317029U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_454875673{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBuildCustomGraph_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
