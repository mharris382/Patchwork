// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/GoalPickers/PCGExGoalPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGoalPicker() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPicker();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPicker_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExGoalPicker *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGoalPicker;
UClass* UPCGExGoalPicker::GetPrivateStaticClass()
{
	using TClass = UPCGExGoalPicker;
	if (!Z_Registration_Info_UClass_UPCGExGoalPicker.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGoalPicker"),
			Z_Registration_Info_UClass_UPCGExGoalPicker.InnerSingleton,
			StaticRegisterNativesUPCGExGoalPicker,
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
	return Z_Registration_Info_UClass_UPCGExGoalPicker.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGoalPicker_NoRegister()
{
	return UPCGExGoalPicker::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGoalPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Default" },
		{ "IncludePath", "Graph/Pathfinding/GoalPickers/PCGExGoalPicker.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPicker.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/pathfinding-edges/goal-picker-default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPicker.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGoalPicker constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGoalPicker constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGoalPicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGoalPicker_Statics

// ********** Begin Class UPCGExGoalPicker Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGoalPicker_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGoalPicker_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPicker, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGoalPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPicker_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPicker_Statics::NewProp_IndexSafety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPicker_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGoalPicker Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UPCGExGoalPicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGoalPicker_Statics::ClassParams = {
	&UPCGExGoalPicker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGoalPicker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPicker_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPicker_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGoalPicker_Statics::Class_MetaDataParams)
};
void UPCGExGoalPicker::StaticRegisterNativesUPCGExGoalPicker()
{
}
UClass* Z_Construct_UClass_UPCGExGoalPicker()
{
	if (!Z_Registration_Info_UClass_UPCGExGoalPicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGoalPicker.OuterSingleton, Z_Construct_UClass_UPCGExGoalPicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGoalPicker.OuterSingleton;
}
UPCGExGoalPicker::UPCGExGoalPicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGoalPicker);
UPCGExGoalPicker::~UPCGExGoalPicker() {}
// ********** End Class UPCGExGoalPicker ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPicker_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGoalPicker, UPCGExGoalPicker::StaticClass, TEXT("UPCGExGoalPicker"), &Z_Registration_Info_UClass_UPCGExGoalPicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGoalPicker), 860601089U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPicker_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPicker_h__Script_PCGExtendedToolkit_323588535{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPicker_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPicker_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
