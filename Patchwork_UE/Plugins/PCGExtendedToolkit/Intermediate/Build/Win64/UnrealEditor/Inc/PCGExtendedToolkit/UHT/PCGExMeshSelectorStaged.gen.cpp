// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetStaging/PCGExMeshSelectorStaged.h"
#include "MeshSelectors/PCGISMDescriptor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMeshSelectorStaged() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGSoftISMComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshSelectorStaged();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshSelectorStaged_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExMeshSelectorStaged *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMeshSelectorStaged;
UClass* UPCGExMeshSelectorStaged::GetPrivateStaticClass()
{
	using TClass = UPCGExMeshSelectorStaged;
	if (!Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMeshSelectorStaged"),
			Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.InnerSingleton,
			StaticRegisterNativesUPCGExMeshSelectorStaged,
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
	return Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMeshSelectorStaged_NoRegister()
{
	return UPCGExMeshSelectorStaged::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "DisplayName", "[PCGEx] Staging Data" },
		{ "IncludePath", "AssetStaging/PCGExMeshSelectorStaged.h" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyMaterialOverrides_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisions_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTemplateDescriptor_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateDescriptor_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "Comment", "/** If enabled, will ignore the collection descriptor details and only push mesh, materials & tags from the collection. */" },
		{ "EditCondition", "bUseTemplateDescriptor" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
		{ "ToolTip", "If enabled, will ignore the collection descriptor details and only push mesh, materials & tags from the collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimeSlicing_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputPoints_MetaData[] = {
		{ "Category", "MeshSelector" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExMeshSelectorStaged.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMeshSelectorStaged constinit property declarations *****************
	static void NewProp_bApplyMaterialOverrides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyMaterialOverrides;
	static void NewProp_bForceDisableCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisions;
	static void NewProp_bUseTemplateDescriptor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemplateDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateDescriptor;
	static void NewProp_bUseTimeSlicing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimeSlicing;
	static void NewProp_bOutputPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMeshSelectorStaged constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMeshSelectorStaged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics

// ********** Begin Class UPCGExMeshSelectorStaged Property Definitions ****************************
void Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bApplyMaterialOverrides_SetBit(void* Obj)
{
	((UPCGExMeshSelectorStaged*)Obj)->bApplyMaterialOverrides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bApplyMaterialOverrides = { "bApplyMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshSelectorStaged), &Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bApplyMaterialOverrides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyMaterialOverrides_MetaData), NewProp_bApplyMaterialOverrides_MetaData) };
void Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bForceDisableCollisions_SetBit(void* Obj)
{
	((UPCGExMeshSelectorStaged*)Obj)->bForceDisableCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bForceDisableCollisions = { "bForceDisableCollisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshSelectorStaged), &Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bForceDisableCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableCollisions_MetaData), NewProp_bForceDisableCollisions_MetaData) };
void Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTemplateDescriptor_SetBit(void* Obj)
{
	((UPCGExMeshSelectorStaged*)Obj)->bUseTemplateDescriptor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTemplateDescriptor = { "bUseTemplateDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshSelectorStaged), &Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTemplateDescriptor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTemplateDescriptor_MetaData), NewProp_bUseTemplateDescriptor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_TemplateDescriptor = { "TemplateDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshSelectorStaged, TemplateDescriptor), Z_Construct_UScriptStruct_FPCGSoftISMComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateDescriptor_MetaData), NewProp_TemplateDescriptor_MetaData) }; // 2926807018
void Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTimeSlicing_SetBit(void* Obj)
{
	((UPCGExMeshSelectorStaged*)Obj)->bUseTimeSlicing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTimeSlicing = { "bUseTimeSlicing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshSelectorStaged), &Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTimeSlicing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimeSlicing_MetaData), NewProp_bUseTimeSlicing_MetaData) };
void Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bOutputPoints_SetBit(void* Obj)
{
	((UPCGExMeshSelectorStaged*)Obj)->bOutputPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bOutputPoints = { "bOutputPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshSelectorStaged), &Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bOutputPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputPoints_MetaData), NewProp_bOutputPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bApplyMaterialOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bForceDisableCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTemplateDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_TemplateDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bUseTimeSlicing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::NewProp_bOutputPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMeshSelectorStaged Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGMeshSelectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::ClassParams = {
	&UPCGExMeshSelectorStaged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::Class_MetaDataParams)
};
void UPCGExMeshSelectorStaged::StaticRegisterNativesUPCGExMeshSelectorStaged()
{
}
UClass* Z_Construct_UClass_UPCGExMeshSelectorStaged()
{
	if (!Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.OuterSingleton, Z_Construct_UClass_UPCGExMeshSelectorStaged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMeshSelectorStaged.OuterSingleton;
}
UPCGExMeshSelectorStaged::UPCGExMeshSelectorStaged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMeshSelectorStaged);
UPCGExMeshSelectorStaged::~UPCGExMeshSelectorStaged() {}
// ********** End Class UPCGExMeshSelectorStaged ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExMeshSelectorStaged_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMeshSelectorStaged, UPCGExMeshSelectorStaged::StaticClass, TEXT("UPCGExMeshSelectorStaged"), &Z_Registration_Info_UClass_UPCGExMeshSelectorStaged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMeshSelectorStaged), 2444006686U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExMeshSelectorStaged_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExMeshSelectorStaged_h__Script_PCGExtendedToolkit_760092423{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExMeshSelectorStaged_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExMeshSelectorStaged_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
