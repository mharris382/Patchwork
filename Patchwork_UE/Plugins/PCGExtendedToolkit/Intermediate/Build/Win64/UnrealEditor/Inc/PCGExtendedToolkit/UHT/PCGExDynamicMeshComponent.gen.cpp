// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExDynamicMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDynamicMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent();
PCG_API UClass* Z_Construct_UClass_UPCGManagedComponent_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDynamicMeshComponent();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDynamicMeshComponent_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExDynamicMeshComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDynamicMeshComponent;
UClass* UPCGExDynamicMeshComponent::GetPrivateStaticClass()
{
	using TClass = UPCGExDynamicMeshComponent;
	if (!Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDynamicMeshComponent"),
			Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.InnerSingleton,
			StaticRegisterNativesUPCGExDynamicMeshComponent,
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
	return Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDynamicMeshComponent_NoRegister()
{
	return UPCGExDynamicMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "LOD LOD Mobility Trigger" },
		{ "IncludePath", "Topology/PCGExDynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Topology/PCGExDynamicMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Topology/PCGExDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDynamicMeshComponent constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDynamicMeshComponent constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDynamicMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics

// ********** Begin Class UPCGExDynamicMeshComponent Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::NewProp_ManagedComponent = { "ManagedComponent", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDynamicMeshComponent, ManagedComponent), Z_Construct_UClass_UPCGManagedComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedComponent_MetaData), NewProp_ManagedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::NewProp_ManagedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDynamicMeshComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister, (int32)VTABLE_OFFSET(UPCGExDynamicMeshComponent, IPCGExManagedComponentInterface), false },  // 4192363565
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::ClassParams = {
	&UPCGExDynamicMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x01B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::Class_MetaDataParams)
};
void UPCGExDynamicMeshComponent::StaticRegisterNativesUPCGExDynamicMeshComponent()
{
}
UClass* Z_Construct_UClass_UPCGExDynamicMeshComponent()
{
	if (!Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UPCGExDynamicMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDynamicMeshComponent.OuterSingleton;
}
UPCGExDynamicMeshComponent::UPCGExDynamicMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDynamicMeshComponent);
UPCGExDynamicMeshComponent::~UPCGExDynamicMeshComponent() {}
// ********** End Class UPCGExDynamicMeshComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExDynamicMeshComponent_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDynamicMeshComponent, UPCGExDynamicMeshComponent::StaticClass, TEXT("UPCGExDynamicMeshComponent"), &Z_Registration_Info_UClass_UPCGExDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDynamicMeshComponent), 158292872U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExDynamicMeshComponent_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExDynamicMeshComponent_h__Script_PCGExtendedToolkit_2978074665{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExDynamicMeshComponent_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExDynamicMeshComponent_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
