// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Data/PCGExClusterData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExClusterData() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterEdgesData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterEdgesData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterNodesData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterNodesData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointData();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoClusterPart *************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoClusterPart); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoClusterPart); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Cluster Part" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoClusterPart constinit property declarations *****
// ********** End ScriptStruct FPCGExDataTypeInfoClusterPart constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoClusterPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoClusterPart>() == std::is_polymorphic<FPCGDataTypeInfoPoint>(), "USTRUCT FPCGExDataTypeInfoClusterPart cannot be polymorphic unless super FPCGDataTypeInfoPoint is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart;
class UScriptStruct* FPCGExDataTypeInfoClusterPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoClusterPart"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint,
	&NewStructOps,
	"PCGExDataTypeInfoClusterPart",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoClusterPart),
	alignof(FPCGExDataTypeInfoClusterPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoClusterPart ***************************************

// ********** Begin Class UPCGExClusterData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterData;
UClass* UPCGExClusterData::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterData;
	if (!Z_Registration_Info_UClass_UPCGExClusterData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterData"),
			Z_Registration_Info_UClass_UPCGExClusterData.InnerSingleton,
			StaticRegisterNativesUPCGExClusterData,
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
	return Z_Registration_Info_UClass_UPCGExClusterData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterData_NoRegister()
{
	return UPCGExClusterData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Data/PCGExClusterData.h" },
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterData constinit property declarations ************************
// ********** End Class UPCGExClusterData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterData_Statics
UObject* (*const Z_Construct_UClass_UPCGExClusterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterData_Statics::ClassParams = {
	&UPCGExClusterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterData_Statics::Class_MetaDataParams)
};
void UPCGExClusterData::StaticRegisterNativesUPCGExClusterData()
{
}
UClass* Z_Construct_UClass_UPCGExClusterData()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterData.OuterSingleton, Z_Construct_UClass_UPCGExClusterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterData.OuterSingleton;
}
UPCGExClusterData::UPCGExClusterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterData);
UPCGExClusterData::~UPCGExClusterData() {}
// ********** End Class UPCGExClusterData **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoVtx *********************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoVtx); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoVtx); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Cluster Vtx" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoVtx constinit property declarations *************
// ********** End ScriptStruct FPCGExDataTypeInfoVtx constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoVtx>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoVtx>() == std::is_polymorphic<FPCGExDataTypeInfoClusterPart>(), "USTRUCT FPCGExDataTypeInfoVtx cannot be polymorphic unless super FPCGExDataTypeInfoClusterPart is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx;
class UScriptStruct* FPCGExDataTypeInfoVtx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoVtx"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart,
	&NewStructOps,
	"PCGExDataTypeInfoVtx",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoVtx),
	alignof(FPCGExDataTypeInfoVtx),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoVtx ***********************************************

// ********** Begin Class UPCGExClusterNodesData ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterNodesData;
UClass* UPCGExClusterNodesData::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterNodesData;
	if (!Z_Registration_Info_UClass_UPCGExClusterNodesData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterNodesData"),
			Z_Registration_Info_UClass_UPCGExClusterNodesData.InnerSingleton,
			StaticRegisterNativesUPCGExClusterNodesData,
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
	return Z_Registration_Info_UClass_UPCGExClusterNodesData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterNodesData_NoRegister()
{
	return UPCGExClusterNodesData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterNodesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Data/PCGExClusterData.h" },
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterNodesData constinit property declarations *******************
// ********** End Class UPCGExClusterNodesData constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterNodesData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterNodesData_Statics
UObject* (*const Z_Construct_UClass_UPCGExClusterNodesData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExClusterData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterNodesData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterNodesData_Statics::ClassParams = {
	&UPCGExClusterNodesData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterNodesData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterNodesData_Statics::Class_MetaDataParams)
};
void UPCGExClusterNodesData::StaticRegisterNativesUPCGExClusterNodesData()
{
}
UClass* Z_Construct_UClass_UPCGExClusterNodesData()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterNodesData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterNodesData.OuterSingleton, Z_Construct_UClass_UPCGExClusterNodesData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterNodesData.OuterSingleton;
}
UPCGExClusterNodesData::UPCGExClusterNodesData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterNodesData);
UPCGExClusterNodesData::~UPCGExClusterNodesData() {}
// ********** End Class UPCGExClusterNodesData *****************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoEdges *******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoEdges); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoEdges); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Cluster Edges" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoEdges constinit property declarations ***********
// ********** End ScriptStruct FPCGExDataTypeInfoEdges constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoEdges>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoEdges>() == std::is_polymorphic<FPCGExDataTypeInfoClusterPart>(), "USTRUCT FPCGExDataTypeInfoEdges cannot be polymorphic unless super FPCGExDataTypeInfoClusterPart is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges;
class UScriptStruct* FPCGExDataTypeInfoEdges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoEdges"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart,
	&NewStructOps,
	"PCGExDataTypeInfoEdges",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoEdges),
	alignof(FPCGExDataTypeInfoEdges),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoEdges *********************************************

// ********** Begin Class UPCGExClusterEdgesData ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterEdgesData;
UClass* UPCGExClusterEdgesData::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterEdgesData;
	if (!Z_Registration_Info_UClass_UPCGExClusterEdgesData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterEdgesData"),
			Z_Registration_Info_UClass_UPCGExClusterEdgesData.InnerSingleton,
			StaticRegisterNativesUPCGExClusterEdgesData,
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
	return Z_Registration_Info_UClass_UPCGExClusterEdgesData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterEdgesData_NoRegister()
{
	return UPCGExClusterEdgesData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterEdgesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Data/PCGExClusterData.h" },
		{ "ModuleRelativePath", "Public/Graph/Data/PCGExClusterData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterEdgesData constinit property declarations *******************
// ********** End Class UPCGExClusterEdgesData constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterEdgesData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterEdgesData_Statics
UObject* (*const Z_Construct_UClass_UPCGExClusterEdgesData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExClusterData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterEdgesData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterEdgesData_Statics::ClassParams = {
	&UPCGExClusterEdgesData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterEdgesData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterEdgesData_Statics::Class_MetaDataParams)
};
void UPCGExClusterEdgesData::StaticRegisterNativesUPCGExClusterEdgesData()
{
}
UClass* Z_Construct_UClass_UPCGExClusterEdgesData()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterEdgesData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterEdgesData.OuterSingleton, Z_Construct_UClass_UPCGExClusterEdgesData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterEdgesData.OuterSingleton;
}
UPCGExClusterEdgesData::UPCGExClusterEdgesData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterEdgesData);
UPCGExClusterEdgesData::~UPCGExClusterEdgesData() {}
// ********** End Class UPCGExClusterEdgesData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoClusterPart::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoClusterPart_Statics::NewStructOps, TEXT("PCGExDataTypeInfoClusterPart"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoClusterPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoClusterPart), 2536409412U) },
		{ FPCGExDataTypeInfoVtx::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtx_Statics::NewStructOps, TEXT("PCGExDataTypeInfoVtx"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoVtx), 3059657739U) },
		{ FPCGExDataTypeInfoEdges::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoEdges_Statics::NewStructOps, TEXT("PCGExDataTypeInfoEdges"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoEdges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoEdges), 3488818001U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExClusterData, UPCGExClusterData::StaticClass, TEXT("UPCGExClusterData"), &Z_Registration_Info_UClass_UPCGExClusterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterData), 172630388U) },
		{ Z_Construct_UClass_UPCGExClusterNodesData, UPCGExClusterNodesData::StaticClass, TEXT("UPCGExClusterNodesData"), &Z_Registration_Info_UClass_UPCGExClusterNodesData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterNodesData), 1023434539U) },
		{ Z_Construct_UClass_UPCGExClusterEdgesData, UPCGExClusterEdgesData::StaticClass, TEXT("UPCGExClusterEdgesData"), &Z_Registration_Info_UClass_UPCGExClusterEdgesData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterEdgesData), 348117297U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_2437093855{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Data_PCGExClusterData_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
