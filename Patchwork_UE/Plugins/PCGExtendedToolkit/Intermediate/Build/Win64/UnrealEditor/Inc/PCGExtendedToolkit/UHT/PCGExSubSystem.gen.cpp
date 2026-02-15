// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExSubSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubSystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBeacon_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubSystem();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubSystem_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType();
PCGEXTENDEDTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSubsystemEventType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSubsystemEventType;
static UEnum* EPCGExSubsystemEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubsystemEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSubsystemEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSubsystemEventType"));
	}
	return Z_Registration_Info_UEnum_EPCGExSubsystemEventType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubsystemEventType>()
{
	return EPCGExSubsystemEventType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DataUpdate.DisplayName", "Data Update" },
		{ "DataUpdate.Name", "EPCGExSubsystemEventType::DataUpdate" },
		{ "DataUpdate.Tooltip", "Triggers a data update event." },
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExSubsystemEventType::None" },
		{ "Regenerate.DisplayName", "Regenerate" },
		{ "Regenerate.Name", "EPCGExSubsystemEventType::Regenerate" },
		{ "Regenerate.Tooltip", "Triggers regeneration on subcribers." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSubsystemEventType::None", (int64)EPCGExSubsystemEventType::None },
		{ "EPCGExSubsystemEventType::Regenerate", (int64)EPCGExSubsystemEventType::Regenerate },
		{ "EPCGExSubsystemEventType::DataUpdate", (int64)EPCGExSubsystemEventType::DataUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSubsystemEventType",
	"EPCGExSubsystemEventType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType()
{
	if (!Z_Registration_Info_UEnum_EPCGExSubsystemEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSubsystemEventType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSubsystemEventType.InnerSingleton;
}
// ********** End Enum EPCGExSubsystemEventType ****************************************************

// ********** Begin Delegate FOnGlobalEvent ********************************************************
struct Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics
{
	struct _Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms
	{
		UPCGComponent* Source;
		EPCGExSubsystemEventType EventType;
		uint32 EventId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGlobalEvent constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_EventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGlobalEvent constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGlobalEvent Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms, Source), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms, EventType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubsystemEventType, METADATA_PARAMS(0, nullptr) }; // 2357481342
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms, EventId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::NewProp_EventId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGlobalEvent Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit, nullptr, "OnGlobalEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGlobalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalEvent, UPCGComponent* Source, EPCGExSubsystemEventType EventType, uint32 EventId)
{
	struct _Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms
	{
		UPCGComponent* Source;
		EPCGExSubsystemEventType EventType;
		uint32 EventId;
	};
	_Script_PCGExtendedToolkit_eventOnGlobalEvent_Parms Parms;
	Parms.Source=Source;
	Parms.EventType=EventType;
	Parms.EventId=EventId;
	OnGlobalEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGlobalEvent **********************************************************

// ********** Begin Class UPCGExSubSystem Function FlushBeacons ************************************
struct Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Beacon Management" },
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FlushBeacons constinit property declarations **************************
// ********** End Function FlushBeacons constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExSubSystem, nullptr, "FlushBeacons", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExSubSystem::execFlushBeacons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushBeacons();
	P_NATIVE_END;
}
// ********** End Class UPCGExSubSystem Function FlushBeacons **************************************

// ********** Begin Class UPCGExSubSystem **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubSystem;
UClass* UPCGExSubSystem::GetPrivateStaticClass()
{
	using TClass = UPCGExSubSystem;
	if (!Z_Registration_Info_UClass_UPCGExSubSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubSystem"),
			Z_Registration_Info_UClass_UPCGExSubSystem.InnerSingleton,
			StaticRegisterNativesUPCGExSubSystem,
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
	return Z_Registration_Info_UClass_UPCGExSubSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubSystem_NoRegister()
{
	return UPCGExSubSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGExSubSystem.h" },
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalEvent_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Beacons_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantFilterFactory_TRUE_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantFilterFactory_FALSE_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGExSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubSystem constinit property declarations **************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Beacons_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Beacons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstantFilterFactory_TRUE;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstantFilterFactory_FALSE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSubSystem constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlushBeacons"), .Pointer = &UPCGExSubSystem::execFlushBeacons },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExSubSystem_FlushBeacons, "FlushBeacons" }, // 587486429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubSystem_Statics

// ********** Begin Class UPCGExSubSystem Property Definitions *************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_OnGlobalEvent = { "OnGlobalEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubSystem, OnGlobalEvent), Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalEvent_MetaData), NewProp_OnGlobalEvent_MetaData) }; // 2790125540
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_Beacons_ElementProp = { "Beacons", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExBeacon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_Beacons = { "Beacons", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubSystem, Beacons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Beacons_MetaData), NewProp_Beacons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_ConstantFilterFactory_TRUE = { "ConstantFilterFactory_TRUE", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubSystem, ConstantFilterFactory_TRUE), Z_Construct_UClass_UPCGExConstantFilterFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantFilterFactory_TRUE_MetaData), NewProp_ConstantFilterFactory_TRUE_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_ConstantFilterFactory_FALSE = { "ConstantFilterFactory_FALSE", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubSystem, ConstantFilterFactory_FALSE), Z_Construct_UClass_UPCGExConstantFilterFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantFilterFactory_FALSE_MetaData), NewProp_ConstantFilterFactory_FALSE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSubSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_OnGlobalEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_Beacons_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_Beacons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_ConstantFilterFactory_TRUE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubSystem_Statics::NewProp_ConstantFilterFactory_FALSE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubSystem_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSubSystem Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UPCGExSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubSystem_Statics::ClassParams = {
	&UPCGExSubSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExSubSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubSystem_Statics::Class_MetaDataParams)
};
void UPCGExSubSystem::StaticRegisterNativesUPCGExSubSystem()
{
	UClass* Class = UPCGExSubSystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExSubSystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExSubSystem()
{
	if (!Z_Registration_Info_UClass_UPCGExSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubSystem.OuterSingleton, Z_Construct_UClass_UPCGExSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubSystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubSystem);
UPCGExSubSystem::~UPCGExSubSystem() {}
// ********** End Class UPCGExSubSystem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSubsystemEventType_StaticEnum, TEXT("EPCGExSubsystemEventType"), &Z_Registration_Info_UEnum_EPCGExSubsystemEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2357481342U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubSystem, UPCGExSubSystem::StaticClass, TEXT("UPCGExSubSystem"), &Z_Registration_Info_UClass_UPCGExSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubSystem), 2152651968U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_1170865701{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSubSystem_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
