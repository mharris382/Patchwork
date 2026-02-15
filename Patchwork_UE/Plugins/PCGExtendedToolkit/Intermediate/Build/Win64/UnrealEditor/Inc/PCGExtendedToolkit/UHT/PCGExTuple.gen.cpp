// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constants/PCGExTuple.h"
#include "Elements/ControlFlow/PCGControlFlow.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTuple() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTupleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTupleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleBody();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueHeader();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrap();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapName();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapString();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrap **********************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrap); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrap constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeaderId;
	static void NewProp_bIsModel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrap constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap;
class UScriptStruct* FPCGExTupleValueWrap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrap, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrap"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrap Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_HeaderId = { "HeaderId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrap, HeaderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderId_MetaData), NewProp_HeaderId_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_bIsModel_SetBit(void* Obj)
{
	((FPCGExTupleValueWrap*)Obj)->bIsModel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_bIsModel = { "bIsModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTupleValueWrap), &Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_bIsModel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsModel_MetaData), NewProp_bIsModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_HeaderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewProp_bIsModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrap Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTupleValueWrap",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrap),
	alignof(FPCGExTupleValueWrap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrap()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrap ************************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapBoolean ***************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapBoolean); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapBoolean); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Boolean" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapBoolean constinit property declarations *******
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapBoolean constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapBoolean>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapBoolean>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapBoolean cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean;
class UScriptStruct* FPCGExTupleValueWrapBoolean::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapBoolean"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapBoolean Property Definitions ******************
void Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FPCGExTupleValueWrapBoolean*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTupleValueWrapBoolean), &Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapBoolean Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapBoolean",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapBoolean),
	alignof(FPCGExTupleValueWrapBoolean),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapBoolean *****************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapFloat *****************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapFloat); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapFloat); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Float" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapFloat constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapFloat constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapFloat>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapFloat cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat;
class UScriptStruct* FPCGExTupleValueWrapFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapFloat"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapFloat Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapFloat Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapFloat",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapFloat),
	alignof(FPCGExTupleValueWrapFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapFloat *******************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapDouble ****************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapDouble); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapDouble); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Double" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapDouble constinit property declarations ********
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapDouble constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapDouble>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapDouble>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapDouble cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble;
class UScriptStruct* FPCGExTupleValueWrapDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapDouble"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapDouble Property Definitions *******************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapDouble, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapDouble Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapDouble",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapDouble),
	alignof(FPCGExTupleValueWrapDouble),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapDouble ******************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapInteger32 *************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapInteger32); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapInteger32); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Integer 32" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapInteger32 constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapInteger32 constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapInteger32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapInteger32>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapInteger32 cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32;
class UScriptStruct* FPCGExTupleValueWrapInteger32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapInteger32"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapInteger32 Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapInteger32, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapInteger32 Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapInteger32",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapInteger32),
	alignof(FPCGExTupleValueWrapInteger32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapInteger32 ***************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector2 ***************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapVector2); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapVector2); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vector2" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector2 constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapVector2 constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapVector2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapVector2>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapVector2 cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2;
class UScriptStruct* FPCGExTupleValueWrapVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapVector2"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector2 Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapVector2, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapVector2 Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapVector2",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapVector2),
	alignof(FPCGExTupleValueWrapVector2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapVector2 *****************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector ****************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapVector); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapVector); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vector" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapVector constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapVector>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapVector cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector;
class UScriptStruct* FPCGExTupleValueWrapVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapVector"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapVector Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapVector",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapVector),
	alignof(FPCGExTupleValueWrapVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapVector ******************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector4 ***************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapVector4); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapVector4); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vector4" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector4 constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapVector4 constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapVector4>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapVector4>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapVector4 cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4;
class UScriptStruct* FPCGExTupleValueWrapVector4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapVector4"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapVector4 Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapVector4, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapVector4 Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapVector4",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapVector4),
	alignof(FPCGExTupleValueWrapVector4),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapVector4 *****************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapColor *****************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapColor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapColor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapColor constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapColor constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapColor>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapColor cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor;
class UScriptStruct* FPCGExTupleValueWrapColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapColor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapColor Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapColor, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapColor Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapColor",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapColor),
	alignof(FPCGExTupleValueWrapColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapColor *******************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapTransform *************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapTransform); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapTransform); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapTransform constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapTransform constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapTransform>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapTransform cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform;
class UScriptStruct* FPCGExTupleValueWrapTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapTransform"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapTransform Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapTransform Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapTransform",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapTransform),
	alignof(FPCGExTupleValueWrapTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapTransform ***************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapRotator ***************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapRotator); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapRotator); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Rotator" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapRotator constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapRotator constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapRotator>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapRotator cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator;
class UScriptStruct* FPCGExTupleValueWrapRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapRotator"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapRotator Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapRotator, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapRotator Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapRotator",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapRotator),
	alignof(FPCGExTupleValueWrapRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapRotator *****************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapString ****************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapString); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapString); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "String" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapString constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapString constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapString>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapString cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString;
class UScriptStruct* FPCGExTupleValueWrapString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapString, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapString"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapString Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapString, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapString Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapString",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapString),
	alignof(FPCGExTupleValueWrapString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapString()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapString ******************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapName ******************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapName); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapName); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapName constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapName constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapName>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapName cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName;
class UScriptStruct* FPCGExTupleValueWrapName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapName, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapName"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapName Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapName, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapName Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapName",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapName),
	alignof(FPCGExTupleValueWrapName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapName()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapName ********************************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftObjectPath ********************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapSoftObjectPath); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapSoftObjectPath); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Soft Object Path" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftObjectPath constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapSoftObjectPath constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapSoftObjectPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapSoftObjectPath>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapSoftObjectPath cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath;
class UScriptStruct* FPCGExTupleValueWrapSoftObjectPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapSoftObjectPath"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftObjectPath Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapSoftObjectPath, Value), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2425717601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapSoftObjectPath Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapSoftObjectPath",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapSoftObjectPath),
	alignof(FPCGExTupleValueWrapSoftObjectPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapSoftObjectPath **********************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftClassPath *********************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapSoftClassPath); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapSoftClassPath); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Soft Class Path" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftClassPath constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapSoftClassPath constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapSoftClassPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapSoftClassPath>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapSoftClassPath cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath;
class UScriptStruct* FPCGExTupleValueWrapSoftClassPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapSoftClassPath"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapSoftClassPath Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapSoftClassPath, Value), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3467803280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapSoftClassPath Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapSoftClassPath",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapSoftClassPath),
	alignof(FPCGExTupleValueWrapSoftClassPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapSoftClassPath ***********************************

// ********** Begin ScriptStruct FPCGExTupleValueWrapEnumSelector **********************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueWrapEnumSelector); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueWrapEnumSelector); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Enum Selector" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueWrapEnumSelector constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueWrapEnumSelector constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueWrapEnumSelector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics
static_assert(std::is_polymorphic<FPCGExTupleValueWrapEnumSelector>() == std::is_polymorphic<FPCGExTupleValueWrap>(), "USTRUCT FPCGExTupleValueWrapEnumSelector cannot be polymorphic unless super FPCGExTupleValueWrap is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector;
class UScriptStruct* FPCGExTupleValueWrapEnumSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueWrapEnumSelector"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueWrapEnumSelector Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueWrapEnumSelector, Enum), Z_Construct_UScriptStruct_FEnumSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) }; // 2678093522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::NewProp_Enum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueWrapEnumSelector Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTupleValueWrap,
	&NewStructOps,
	"PCGExTupleValueWrapEnumSelector",
	Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::PropPointers),
	sizeof(FPCGExTupleValueWrapEnumSelector),
	alignof(FPCGExTupleValueWrapEnumSelector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueWrapEnumSelector ************************************

// ********** Begin ScriptStruct FPCGExTupleValueHeader ********************************************
struct Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleValueHeader); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleValueHeader); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultData_MetaData[] = {
		{ "BaseStruct", "/Script/PCGExtendedToolkit.PCGExTupleValueWrap" },
		{ "Category", "Settings" },
		{ "ExcludeBaseStruct", "" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleValueHeader constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeaderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleValueHeader constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleValueHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader;
class UScriptStruct* FPCGExTupleValueHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleValueHeader, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleValueHeader"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleValueHeader Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_HeaderId = { "HeaderId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueHeader, HeaderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderId_MetaData), NewProp_HeaderId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueHeader, Order), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueHeader, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_DefaultData = { "DefaultData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleValueHeader, DefaultData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultData_MetaData), NewProp_DefaultData_MetaData) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_HeaderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewProp_DefaultData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleValueHeader Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTupleValueHeader",
	Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::PropPointers),
	sizeof(FPCGExTupleValueHeader),
	alignof(FPCGExTupleValueHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleValueHeader()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleValueHeader **********************************************

// ********** Begin ScriptStruct FPCGExTupleBody ***************************************************
struct Z_Construct_UScriptStruct_FPCGExTupleBody_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTupleBody); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTupleBody); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "BaseStruct", "/Script/PCGExtendedToolkit.PCGExTupleValueWrap" },
		{ "Category", "Settings" },
		{ "ExcludeBaseStruct", "" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "{Name}" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTupleBody constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Row;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTupleBody constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTupleBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTupleBody_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTupleBody;
class UScriptStruct* FPCGExTupleBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTupleBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTupleBody, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTupleBody"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTupleBody.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTupleBody Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::NewProp_Row_Inner = { "Row", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTupleBody, Row), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::NewProp_Row_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::NewProp_Row,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTupleBody Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTupleBody",
	Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::PropPointers),
	sizeof(FPCGExTupleBody),
	alignof(FPCGExTupleBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTupleBody()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTupleBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTupleBody.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTupleBody.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTupleBody *****************************************************

// ********** Begin Class UPCGExTupleSettings ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTupleSettings;
UClass* UPCGExTupleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTupleSettings;
	if (!Z_Registration_Info_UClass_UPCGExTupleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTupleSettings"),
			Z_Registration_Info_UClass_UPCGExTupleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTupleSettings,
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
	return Z_Registration_Info_UClass_UPCGExTupleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTupleSettings_NoRegister()
{
	return UPCGExTupleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTupleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Constants/PCGExTuple.h" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/tuple" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Composition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
		{ "TitleProperty", "{Name}" },
		{ "ToolTip", "Tuple composition, per-row values are set in the values array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Settings" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Constants/PCGExTuple.h" },
		{ "ToolTip", "Per-row values. Do no change the type here, it will be reset internally; instead, change it in the composition." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTupleSettings constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Composition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Composition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTupleSettings constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTupleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTupleSettings_Statics

// ********** Begin Class UPCGExTupleSettings Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Composition_Inner = { "Composition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExTupleValueHeader, METADATA_PARAMS(0, nullptr) }; // 173760208
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Composition = { "Composition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTupleSettings, Composition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Composition_MetaData), NewProp_Composition_MetaData) }; // 173760208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExTupleBody, METADATA_PARAMS(0, nullptr) }; // 4184683933
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTupleSettings, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 4184683933
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTupleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Composition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Composition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTupleSettings_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTupleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTupleSettings Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPCGExTupleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTupleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTupleSettings_Statics::ClassParams = {
	&UPCGExTupleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTupleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTupleSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTupleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTupleSettings_Statics::Class_MetaDataParams)
};
void UPCGExTupleSettings::StaticRegisterNativesUPCGExTupleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTupleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTupleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTupleSettings.OuterSingleton, Z_Construct_UClass_UPCGExTupleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTupleSettings.OuterSingleton;
}
UPCGExTupleSettings::UPCGExTupleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTupleSettings);
UPCGExTupleSettings::~UPCGExTupleSettings() {}
// ********** End Class UPCGExTupleSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTupleValueWrap::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrap_Statics::NewStructOps, TEXT("PCGExTupleValueWrap"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrap), 2970864724U) },
		{ FPCGExTupleValueWrapBoolean::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapBoolean_Statics::NewStructOps, TEXT("PCGExTupleValueWrapBoolean"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapBoolean, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapBoolean), 1296045403U) },
		{ FPCGExTupleValueWrapFloat::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapFloat_Statics::NewStructOps, TEXT("PCGExTupleValueWrapFloat"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapFloat), 3629275287U) },
		{ FPCGExTupleValueWrapDouble::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapDouble_Statics::NewStructOps, TEXT("PCGExTupleValueWrapDouble"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapDouble), 180128293U) },
		{ FPCGExTupleValueWrapInteger32::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapInteger32_Statics::NewStructOps, TEXT("PCGExTupleValueWrapInteger32"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapInteger32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapInteger32), 689699247U) },
		{ FPCGExTupleValueWrapVector2::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector2_Statics::NewStructOps, TEXT("PCGExTupleValueWrapVector2"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapVector2), 912447120U) },
		{ FPCGExTupleValueWrapVector::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector_Statics::NewStructOps, TEXT("PCGExTupleValueWrapVector"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapVector), 3918647362U) },
		{ FPCGExTupleValueWrapVector4::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapVector4_Statics::NewStructOps, TEXT("PCGExTupleValueWrapVector4"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapVector4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapVector4), 3529246147U) },
		{ FPCGExTupleValueWrapColor::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapColor_Statics::NewStructOps, TEXT("PCGExTupleValueWrapColor"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapColor), 4107596288U) },
		{ FPCGExTupleValueWrapTransform::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapTransform_Statics::NewStructOps, TEXT("PCGExTupleValueWrapTransform"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapTransform), 1345239883U) },
		{ FPCGExTupleValueWrapRotator::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapRotator_Statics::NewStructOps, TEXT("PCGExTupleValueWrapRotator"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapRotator), 1662112059U) },
		{ FPCGExTupleValueWrapString::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapString_Statics::NewStructOps, TEXT("PCGExTupleValueWrapString"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapString), 514815195U) },
		{ FPCGExTupleValueWrapName::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapName_Statics::NewStructOps, TEXT("PCGExTupleValueWrapName"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapName), 2892888659U) },
		{ FPCGExTupleValueWrapSoftObjectPath::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath_Statics::NewStructOps, TEXT("PCGExTupleValueWrapSoftObjectPath"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftObjectPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapSoftObjectPath), 2372838016U) },
		{ FPCGExTupleValueWrapSoftClassPath::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapSoftClassPath_Statics::NewStructOps, TEXT("PCGExTupleValueWrapSoftClassPath"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapSoftClassPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapSoftClassPath), 1910885577U) },
		{ FPCGExTupleValueWrapEnumSelector::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueWrapEnumSelector_Statics::NewStructOps, TEXT("PCGExTupleValueWrapEnumSelector"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueWrapEnumSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueWrapEnumSelector), 996090936U) },
		{ FPCGExTupleValueHeader::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleValueHeader_Statics::NewStructOps, TEXT("PCGExTupleValueHeader"),&Z_Registration_Info_UScriptStruct_FPCGExTupleValueHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleValueHeader), 173760208U) },
		{ FPCGExTupleBody::StaticStruct, Z_Construct_UScriptStruct_FPCGExTupleBody_Statics::NewStructOps, TEXT("PCGExTupleBody"),&Z_Registration_Info_UScriptStruct_FPCGExTupleBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTupleBody), 4184683933U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTupleSettings, UPCGExTupleSettings::StaticClass, TEXT("UPCGExTupleSettings"), &Z_Registration_Info_UClass_UPCGExTupleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTupleSettings), 399667814U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_542107795{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExTuple_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
