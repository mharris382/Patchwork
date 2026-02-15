// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralPipeActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralPipeActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();
PROCEDURALPIPES_API UClass* Z_Construct_UClass_AProceduralPipeActor();
PROCEDURALPIPES_API UClass* Z_Construct_UClass_AProceduralPipeActor_NoRegister();
PROCEDURALPIPES_API UScriptStruct* Z_Construct_UScriptStruct_FPipePartConfig();
UPackage* Z_Construct_UPackage__Script_ProceduralPipes();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPipePartConfig ***************************************************
struct Z_Construct_UScriptStruct_FPipePartConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPipePartConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPipePartConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UENUM(BlueprintType)\n//enum class EPipePart : uint8\n//{\n//\x09PipeStraight = 1 UMETA(DisplayName = \"Straight Pipe\"\x09, Tooltip = \"\"),\n//\x09PipeCorner = 2 UMETA(DisplayName = \"Corner Pipe\"\x09\x09, Tooltip = \"\"),\n//\n//\x09JointMiddle = 4 UMETA(DisplayName = \"Straight Joint\"\x09, Tooltip = \"\"),\n//\x09JointCorner = 5 UMETA(DisplayName = \"Corner Joint\"\x09\x09, Tooltip = \"\")\n//\x09//Unkown = 3 UMETA(DisplayName = \"Custom PCG Graph\", Tooltip = \"Supply a custom PCG Graph to spawn the clutter for each shelf.\")\n//};\n" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EPipePart : uint8\n{\n       PipeStraight = 1 UMETA(DisplayName = \"Straight Pipe\"    , Tooltip = \"\"),\n       PipeCorner = 2 UMETA(DisplayName = \"Corner Pipe\"                , Tooltip = \"\"),\n\n       JointMiddle = 4 UMETA(DisplayName = \"Straight Joint\"    , Tooltip = \"\"),\n       JointCorner = 5 UMETA(DisplayName = \"Corner Joint\"              , Tooltip = \"\")\n       Unkown = 3 UMETA(DisplayName = \"Custom PCG Graph\", Tooltip = \"Supply a custom PCG Graph to spawn the clutter for each shelf.\")\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "PipePart" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "PipePart" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "This will be multiplied by the shared pipe scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePartOverrideMaterial_MetaData[] = {
		{ "Category", "PipePart" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartOverrideMaterial_MetaData[] = {
		{ "Category", "PipePart" },
		{ "EditCondition", "bUsePartOverrideMaterial" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawnOverride_MetaData[] = {
		{ "Category", "PipePart|OverrideGraphs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOverride_MetaData[] = {
		{ "Category", "PipePart|OverrideGraphs" },
		{ "EditCondition", "bEnableSpawnOverride" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPipePartConfig constinit property declarations *******************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
	static void NewProp_bUsePartOverrideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePartOverrideMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PartOverrideMaterial;
	static void NewProp_bEnableSpawnOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawnOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPipePartConfig constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPipePartConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPipePartConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPipePartConfig;
class UScriptStruct* FPipePartConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPipePartConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPipePartConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPipePartConfig, (UObject*)Z_Construct_UPackage__Script_ProceduralPipes(), TEXT("PipePartConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPipePartConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPipePartConfig Property Definitions ******************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPipePartConfig, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPipePartConfig, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeScale_MetaData), NewProp_RelativeScale_MetaData) };
void Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bUsePartOverrideMaterial_SetBit(void* Obj)
{
	((FPipePartConfig*)Obj)->bUsePartOverrideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bUsePartOverrideMaterial = { "bUsePartOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPipePartConfig), &Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bUsePartOverrideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePartOverrideMaterial_MetaData), NewProp_bUsePartOverrideMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_PartOverrideMaterial = { "PartOverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPipePartConfig, PartOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartOverrideMaterial_MetaData), NewProp_PartOverrideMaterial_MetaData) };
void Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bEnableSpawnOverride_SetBit(void* Obj)
{
	((FPipePartConfig*)Obj)->bEnableSpawnOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bEnableSpawnOverride = { "bEnableSpawnOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPipePartConfig), &Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bEnableSpawnOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSpawnOverride_MetaData), NewProp_bEnableSpawnOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_SpawnOverride = { "SpawnOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPipePartConfig, SpawnOverride), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOverride_MetaData), NewProp_SpawnOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPipePartConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_RelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bUsePartOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_PartOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_bEnableSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewProp_SpawnOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPipePartConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPipePartConfig Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPipePartConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralPipes,
	nullptr,
	&NewStructOps,
	"PipePartConfig",
	Z_Construct_UScriptStruct_FPipePartConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPipePartConfig_Statics::PropPointers),
	sizeof(FPipePartConfig),
	alignof(FPipePartConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPipePartConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPipePartConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPipePartConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPipePartConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPipePartConfig.InnerSingleton, Z_Construct_UScriptStruct_FPipePartConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPipePartConfig.InnerSingleton);
}
// ********** End ScriptStruct FPipePartConfig *****************************************************

// ********** Begin Class AProceduralPipeActor Function ComputeBoundingBox *************************
struct ProceduralPipeActor_eventComputeBoundingBox_Parms
{
	FVector BoundsMin;
	FVector BoundsMax;
};
static FName NAME_AProceduralPipeActor_ComputeBoundingBox = FName(TEXT("ComputeBoundingBox"));
void AProceduralPipeActor::ComputeBoundingBox(FVector& BoundsMin, FVector& BoundsMax)
{
	UFunction* Func = FindFunctionChecked(NAME_AProceduralPipeActor_ComputeBoundingBox);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ProceduralPipeActor_eventComputeBoundingBox_Parms Parms;
		Parms.BoundsMin=BoundsMin;
		Parms.BoundsMax=BoundsMax;
	ProcessEvent(Func,&Parms);
		BoundsMin=Parms.BoundsMin;
		BoundsMax=Parms.BoundsMax;
	}
	else
	{
		ComputeBoundingBox_Implementation(BoundsMin, BoundsMax);
	}
}
struct Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeBoundingBox constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeBoundingBox constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeBoundingBox Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralPipeActor_eventComputeBoundingBox_Parms, BoundsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralPipeActor_eventComputeBoundingBox_Parms, BoundsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::NewProp_BoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::NewProp_BoundsMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::PropPointers) < 2048);
// ********** End Function ComputeBoundingBox Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralPipeActor, nullptr, "ComputeBoundingBox", 	Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::PropPointers), 
sizeof(ProceduralPipeActor_eventComputeBoundingBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProceduralPipeActor_eventComputeBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralPipeActor::execComputeBoundingBox)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsMin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeBoundingBox_Implementation(Z_Param_Out_BoundsMin,Z_Param_Out_BoundsMax);
	P_NATIVE_END;
}
// ********** End Class AProceduralPipeActor Function ComputeBoundingBox ***************************

// ********** Begin Class AProceduralPipeActor Function UpdateBounds *******************************
struct Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateBounds constinit property declarations **************************
// ********** End Function UpdateBounds constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralPipeActor, nullptr, "UpdateBounds", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralPipeActor::execUpdateBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBounds();
	P_NATIVE_END;
}
// ********** End Class AProceduralPipeActor Function UpdateBounds *********************************

// ********** Begin Class AProceduralPipeActor *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProceduralPipeActor;
UClass* AProceduralPipeActor::GetPrivateStaticClass()
{
	using TClass = AProceduralPipeActor;
	if (!Z_Registration_Info_UClass_AProceduralPipeActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProceduralPipeActor"),
			Z_Registration_Info_UClass_AProceduralPipeActor.InnerSingleton,
			StaticRegisterNativesAProceduralPipeActor,
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
	return Z_Registration_Info_UClass_AProceduralPipeActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AProceduralPipeActor_NoRegister()
{
	return AProceduralPipeActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProceduralPipeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct PROCEDURAL_PIPES_API FPipePartGrammarModule\n//{\n//\x09GENERATED_BODY();\n//\n//\x09""FPipePartGrammarModule() = default;\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PipePart\", meta = (Tooltip = \"Non used by default, useful for implementing pcg grammar overrides.  See PreSpawn override example\"))\n//\x09""FString PartSymbol;\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PipePart\")\n//\x09""bool Scalable = true;\n//\n//\n//};\n" },
		{ "IncludePath", "ProceduralPipeActor.h" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct PROCEDURAL_PIPES_API FPipePartGrammarModule\n{\n       GENERATED_BODY();\n\n       FPipePartGrammarModule() = default;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PipePart\", meta = (Tooltip = \"Non used by default, useful for implementing pcg grammar overrides.  See PreSpawn override example\"))\n       FString PartSymbol;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PipePart\")\n       bool Scalable = true;\n\n\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipeScale_MetaData[] = {
		{ "Category", "Pipes" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Uniform scale applied to all spawned pipe parts. Affects mesh size, joint spacing, and corner dimensions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOverrideMaterial_MetaData[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Material override applied to all pipe parts that do not explicitly assign their own override material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StraightPipe_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Pipe-Straight" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Default straight pipe mesh. Mesh should face the +X axis. Mesh length and RelativeScale.X determine how many middle joints are spawned (if enabled). Can be overridden in the Pre-Spawn Override Graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerPipe_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Pipe-Corner-90" },
		{ "FormerlySerializedAs", "CornerStraightPipe" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "90-degree corner pipe mesh. Used for sharp bends when 45-degree corner pipes are disabled or when the bend angle exceeds the 45-degree cutoff." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawn45DegreeCornerPipes_MetaData[] = {
		{ "Category", "Pipes" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerPipe45Degree_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Pipe-Corner-45" },
		{ "EditCondition", "Spawn45DegreeCornerPipes" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Optional 45-degree corner pipe mesh. Angles closer to 45\xef\xbf\xbd will use this mesh; sharper bends will fall back to the 90-degree corner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCornerJoints_MetaData[] = {
		{ "Category", "Pipes" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipeJointCorner_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Joint-Corner" },
		{ "EditCondition", "SpawnCornerJoints" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Joint mesh spawned at corner attachment points. Attachment points must be defined as sockets on the corner pipe mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMiddleJoints_MetaData[] = {
		{ "Category", "Pipes" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipeJointMiddle_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Joint-Middle" },
		{ "EditCondition", "SpawnMiddleJoints" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Joint mesh spawned between straight pipe segments. Spacing is determined by the straight pipe mesh length and x scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEndJoints_MetaData[] = {
		{ "Category", "Pipes" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipeJointEnd_MetaData[] = {
		{ "Category", "Pipes" },
		{ "DisplayName", "Joint-End" },
		{ "EditCondition", "SpawnEndJoints" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Joint mesh spawned at the start and end of the spline. Only used for open splines; ignored for closed loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableArrayMode_MetaData[] = {
		{ "Category", "Pipes|ArrayMode" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Pipes|Joints\", AdvancedDisplay, meta = (EditCondition = \"SpawnJoints\"))\n//TSoftObjectPtr<UMaterialInterface> JointOverrideMaterial;\n" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Pipes|Joints\", AdvancedDisplay, meta = (EditCondition = \"SpawnJoints\"))\nTSoftObjectPtr<UMaterialInterface> JointOverrideMaterial;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pipes|ArrayMode" },
		{ "EditCondition", "EnableArrayMode" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "Category", "Pipes|ArrayMode" },
		{ "EditCondition", "EnableArrayMode" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDirection_MetaData[] = {
		{ "Category", "Pipes|ArrayMode" },
		{ "EditCondition", "EnableArrayMode" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableAllOverrideGraphs_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Use this to disable all override graphs for this asset.  Useful for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "!DisableAllOverrideGraphs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "bEnableSpawnOverride" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Final stage of processing which spawns Static Meshes. Override this to customize mesh spawning. This may be overriden if individual parts provide their own OverrideSpawnGraph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePreSpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "!DisableAllOverrideGraphs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Enables a Pre-Spawn Override Graph that processes ALL points before any meshes are spawned. This graph has global authority and can filter, merge, or modify points prior to the normal spawn behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreSpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "bEnablePreSpawnOverride" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Graph executed before spawning begins. Receives the complete point set and must output the final points used for spawning. Use this to globally filter, merge, or preprocess points before any Spawn Override Graphs are evaluated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePostSpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "!DisableAllOverrideGraphs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Enables a Post-Spawn Override Graph that runs after all meshes have been spawned. This graph is read-only and cannot modify spawn data, but can add secondary details or perform analysis based on the spawned results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostSpawnOverride_MetaData[] = {
		{ "Category", "Pipes|OverrideGraphs" },
		{ "EditCondition", "bEnablePostSpawnOverride" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Graph executed after all spawning is complete. Receives spawned meshes as input and may spawn additional effects, decorations, or data. This graph cannot alter the original spawn results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBatched_MetaData[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "If enabled, pipe spline will not spawn it's own points.   Instead the points will be output with the assumption that another pcg world actor will spawn them instead using SpawnPipes.  NOTE: if no actor exists, the pipe won't be spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StraightSegmentGrammar_MetaData[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Grammar used to subdivide straight segments.  Default StraightPipe has the symbol \"P\".  Additional pipe meshes can be added below and use symbol by index \"P0\",\"P1\",...\"Pn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalStraightPipes_MetaData[] = {
		{ "Category", "Pipes" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Can be referenced in the grammar string using symbols based on index (i.e. \"P0\",\"P1\",...\"Pn\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Core" },
		{ "EditCondition", "!DisableAllOverrideGraphs" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Shared Actor Seed for convienence to be used in PCG Graphs with randomness.  This is only applicable with override graphs, the default behavior is not random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsPadding_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
		{ "Tooltip", "Padding to be added to the computed bounding box of the pipe actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralPipeActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProceduralPipeActor constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PipeScale;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultOverrideMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StraightPipe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerPipe;
	static void NewProp_Spawn45DegreeCornerPipes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Spawn45DegreeCornerPipes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerPipe45Degree;
	static void NewProp_SpawnCornerJoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnCornerJoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PipeJointCorner;
	static void NewProp_SpawnMiddleJoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnMiddleJoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PipeJointMiddle;
	static void NewProp_SpawnEndJoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnEndJoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PipeJointEnd;
	static void NewProp_EnableArrayMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableArrayMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetDirection;
	static void NewProp_DisableAllOverrideGraphs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAllOverrideGraphs;
	static void NewProp_bEnableSpawnOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpawnOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnOverride;
	static void NewProp_bEnablePreSpawnOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreSpawnOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreSpawnOverride;
	static void NewProp_bEnablePostSpawnOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePostSpawnOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostSpawnOverride;
	static void NewProp_IsBatched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBatched;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StraightSegmentGrammar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalStraightPipes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalStraightPipes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsPadding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProceduralPipeActor constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ComputeBoundingBox"), .Pointer = &AProceduralPipeActor::execComputeBoundingBox },
		{ .NameUTF8 = UTF8TEXT("UpdateBounds"), .Pointer = &AProceduralPipeActor::execUpdateBounds },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralPipeActor_ComputeBoundingBox, "ComputeBoundingBox" }, // 755243770
		{ &Z_Construct_UFunction_AProceduralPipeActor_UpdateBounds, "UpdateBounds" }, // 1222333751
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralPipeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProceduralPipeActor_Statics

// ********** Begin Class AProceduralPipeActor Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeScale = { "PipeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PipeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipeScale_MetaData), NewProp_PipeScale_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DefaultOverrideMaterial = { "DefaultOverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, DefaultOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOverrideMaterial_MetaData), NewProp_DefaultOverrideMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_StraightPipe = { "StraightPipe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, StraightPipe), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StraightPipe_MetaData), NewProp_StraightPipe_MetaData) }; // 1667726452
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_CornerPipe = { "CornerPipe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, CornerPipe), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerPipe_MetaData), NewProp_CornerPipe_MetaData) }; // 1667726452
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spawn45DegreeCornerPipes_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->Spawn45DegreeCornerPipes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spawn45DegreeCornerPipes = { "Spawn45DegreeCornerPipes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spawn45DegreeCornerPipes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawn45DegreeCornerPipes_MetaData), NewProp_Spawn45DegreeCornerPipes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_CornerPipe45Degree = { "CornerPipe45Degree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, CornerPipe45Degree), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerPipe45Degree_MetaData), NewProp_CornerPipe45Degree_MetaData) }; // 1667726452
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnCornerJoints_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->SpawnCornerJoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnCornerJoints = { "SpawnCornerJoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnCornerJoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCornerJoints_MetaData), NewProp_SpawnCornerJoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointCorner = { "PipeJointCorner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PipeJointCorner), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipeJointCorner_MetaData), NewProp_PipeJointCorner_MetaData) }; // 1667726452
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnMiddleJoints_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->SpawnMiddleJoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnMiddleJoints = { "SpawnMiddleJoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnMiddleJoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMiddleJoints_MetaData), NewProp_SpawnMiddleJoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointMiddle = { "PipeJointMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PipeJointMiddle), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipeJointMiddle_MetaData), NewProp_PipeJointMiddle_MetaData) }; // 1667726452
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnEndJoints_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->SpawnEndJoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnEndJoints = { "SpawnEndJoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnEndJoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEndJoints_MetaData), NewProp_SpawnEndJoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointEnd = { "PipeJointEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PipeJointEnd), Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipeJointEnd_MetaData), NewProp_PipeJointEnd_MetaData) }; // 1667726452
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_EnableArrayMode_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->EnableArrayMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_EnableArrayMode = { "EnableArrayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_EnableArrayMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableArrayMode_MetaData), NewProp_EnableArrayMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, Spacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_OffsetDirection = { "OffsetDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, OffsetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetDirection_MetaData), NewProp_OffsetDirection_MetaData) };
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DisableAllOverrideGraphs_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->DisableAllOverrideGraphs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DisableAllOverrideGraphs = { "DisableAllOverrideGraphs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DisableAllOverrideGraphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableAllOverrideGraphs_MetaData), NewProp_DisableAllOverrideGraphs_MetaData) };
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnableSpawnOverride_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->bEnableSpawnOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnableSpawnOverride = { "bEnableSpawnOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnableSpawnOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSpawnOverride_MetaData), NewProp_bEnableSpawnOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnOverride = { "SpawnOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, SpawnOverride), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOverride_MetaData), NewProp_SpawnOverride_MetaData) };
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePreSpawnOverride_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->bEnablePreSpawnOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePreSpawnOverride = { "bEnablePreSpawnOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePreSpawnOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePreSpawnOverride_MetaData), NewProp_bEnablePreSpawnOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PreSpawnOverride = { "PreSpawnOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PreSpawnOverride), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreSpawnOverride_MetaData), NewProp_PreSpawnOverride_MetaData) };
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePostSpawnOverride_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->bEnablePostSpawnOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePostSpawnOverride = { "bEnablePostSpawnOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePostSpawnOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePostSpawnOverride_MetaData), NewProp_bEnablePostSpawnOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PostSpawnOverride = { "PostSpawnOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, PostSpawnOverride), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostSpawnOverride_MetaData), NewProp_PostSpawnOverride_MetaData) };
void Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_IsBatched_SetBit(void* Obj)
{
	((AProceduralPipeActor*)Obj)->IsBatched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_IsBatched = { "IsBatched", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProceduralPipeActor), &Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_IsBatched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBatched_MetaData), NewProp_IsBatched_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_StraightSegmentGrammar = { "StraightSegmentGrammar", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, StraightSegmentGrammar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StraightSegmentGrammar_MetaData), NewProp_StraightSegmentGrammar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_AdditionalStraightPipes_Inner = { "AdditionalStraightPipes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPipePartConfig, METADATA_PARAMS(0, nullptr) }; // 1667726452
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_AdditionalStraightPipes = { "AdditionalStraightPipes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, AdditionalStraightPipes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalStraightPipes_MetaData), NewProp_AdditionalStraightPipes_MetaData) }; // 1667726452
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_BoundsPadding = { "BoundsPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, BoundsPadding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsPadding_MetaData), NewProp_BoundsPadding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPipeActor, BoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralPipeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DefaultOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_StraightPipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_CornerPipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spawn45DegreeCornerPipes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_CornerPipe45Degree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnCornerJoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnMiddleJoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointMiddle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnEndJoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PipeJointEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_EnableArrayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Spacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_OffsetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_DisableAllOverrideGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnableSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_SpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePreSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PreSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_bEnablePostSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_PostSpawnOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_IsBatched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_StraightSegmentGrammar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_AdditionalStraightPipes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_AdditionalStraightPipes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_BoundsPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPipeActor_Statics::NewProp_BoundingBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPipeActor_Statics::PropPointers) < 2048);
// ********** End Class AProceduralPipeActor Property Definitions **********************************
UObject* (*const Z_Construct_UClass_AProceduralPipeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralPipes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPipeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralPipeActor_Statics::ClassParams = {
	&AProceduralPipeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProceduralPipeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPipeActor_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPipeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralPipeActor_Statics::Class_MetaDataParams)
};
void AProceduralPipeActor::StaticRegisterNativesAProceduralPipeActor()
{
	UClass* Class = AProceduralPipeActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProceduralPipeActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProceduralPipeActor()
{
	if (!Z_Registration_Info_UClass_AProceduralPipeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralPipeActor.OuterSingleton, Z_Construct_UClass_AProceduralPipeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralPipeActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProceduralPipeActor);
AProceduralPipeActor::~AProceduralPipeActor() {}
// ********** End Class AProceduralPipeActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPipePartConfig::StaticStruct, Z_Construct_UScriptStruct_FPipePartConfig_Statics::NewStructOps, TEXT("PipePartConfig"),&Z_Registration_Info_UScriptStruct_FPipePartConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPipePartConfig), 1667726452U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralPipeActor, AProceduralPipeActor::StaticClass, TEXT("AProceduralPipeActor"), &Z_Registration_Info_UClass_AProceduralPipeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralPipeActor), 1410069830U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_2397693666{
	TEXT("/Script/ProceduralPipes"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h__Script_ProceduralPipes_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
