// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Sharing/PCGExBeacon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBeacon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBeacon();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBeacon_NoRegister();
PCGEXTENDEDTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBeaconContentAdded *************************************************
struct Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics
{
	struct _Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms
	{
		uint32 Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExBeacon.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBeaconContentAdded constinit property declarations *****************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnBeaconContentAdded constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnBeaconContentAdded Property Definitions ****************************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnBeaconContentAdded Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit, nullptr, "OnBeaconContentAdded__DelegateSignature", 	Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::_Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::_Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeaconContentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnBeaconContentAdded, uint32 Id)
{
	struct _Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms
	{
		uint32 Id;
	};
	_Script_PCGExtendedToolkit_eventOnBeaconContentAdded_Parms Parms;
	Parms.Id=Id;
	OnBeaconContentAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBeaconContentAdded ***************************************************

// ********** Begin Class UPCGExBeacon *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBeacon;
UClass* UPCGExBeacon::GetPrivateStaticClass()
{
	using TClass = UPCGExBeacon;
	if (!Z_Registration_Info_UClass_UPCGExBeacon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBeacon"),
			Z_Registration_Info_UClass_UPCGExBeacon.InnerSingleton,
			StaticRegisterNativesUPCGExBeacon,
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
	return Z_Registration_Info_UClass_UPCGExBeacon.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBeacon_NoRegister()
{
	return UPCGExBeacon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBeacon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Beacon" },
		{ "IncludePath", "Data/Sharing/PCGExBeacon.h" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExBeacon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeaconContentAdded_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExBeacon.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBeacon constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeaconContentAdded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBeacon constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBeacon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBeacon_Statics

// ********** Begin Class UPCGExBeacon Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPCGExBeacon_Statics::NewProp_OnBeaconContentAdded = { "OnBeaconContentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBeacon, OnBeaconContentAdded), Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeaconContentAdded_MetaData), NewProp_OnBeaconContentAdded_MetaData) }; // 3660169389
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBeacon_Statics::NewProp_OnBeaconContentAdded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBeacon_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBeacon Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UPCGExBeacon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBeacon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBeacon_Statics::ClassParams = {
	&UPCGExBeacon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBeacon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBeacon_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBeacon_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBeacon_Statics::Class_MetaDataParams)
};
void UPCGExBeacon::StaticRegisterNativesUPCGExBeacon()
{
}
UClass* Z_Construct_UClass_UPCGExBeacon()
{
	if (!Z_Registration_Info_UClass_UPCGExBeacon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBeacon.OuterSingleton, Z_Construct_UClass_UPCGExBeacon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBeacon.OuterSingleton;
}
UPCGExBeacon::UPCGExBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBeacon);
UPCGExBeacon::~UPCGExBeacon() {}
// ********** End Class UPCGExBeacon ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBeacon, UPCGExBeacon::StaticClass, TEXT("UPCGExBeacon"), &Z_Registration_Info_UClass_UPCGExBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBeacon), 4220767343U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h__Script_PCGExtendedToolkit_4075558157{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
