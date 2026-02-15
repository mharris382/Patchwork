// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveOverlap() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveOverlap();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveOverlap_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExEdgeOverlapPick *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick;
static UEnum* EPCGExEdgeOverlapPick_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEdgeOverlapPick"));
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeOverlapPick>()
{
	return EPCGExEdgeOverlapPick_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Longest.DisplayName", "Longest" },
		{ "Longest.Name", "EPCGExEdgeOverlapPick::Longest" },
		{ "Longest.ToolTip", "Keep the longest edge" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "Shortest.DisplayName", "Shortest" },
		{ "Shortest.Name", "EPCGExEdgeOverlapPick::Shortest" },
		{ "Shortest.ToolTip", "Keep the shortest edge" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEdgeOverlapPick::Shortest", (int64)EPCGExEdgeOverlapPick::Shortest },
		{ "EPCGExEdgeOverlapPick::Longest", (int64)EPCGExEdgeOverlapPick::Longest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEdgeOverlapPick",
	"EPCGExEdgeOverlapPick",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick()
{
	if (!Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick.InnerSingleton;
}
// ********** End Enum EPCGExEdgeOverlapPick *******************************************************

// ********** Begin Class UPCGExEdgeRemoveOverlap **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap;
UClass* UPCGExEdgeRemoveOverlap::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveOverlap;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveOverlap"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveOverlap,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveOverlap_NoRegister()
{
	return UPCGExEdgeRemoveOverlap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Refine : Overlap" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/overlap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keep_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which edge to keep when doing comparison. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which edge to keep when doing comparison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance at which two edges are considered intersecting. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance at which two edges are considered intersecting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Min angle. */" },
		{ "EditCondition", "bUseMinAngle" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Min angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle. */" },
		{ "EditCondition", "bUseMaxAngle" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveOverlap.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum angle." },
		{ "Units", "Degrees" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveOverlap constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Keep_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Keep;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bUseMinAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinAngle;
	static void NewProp_bUseMaxAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeRemoveOverlap constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveOverlap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics

// ********** Begin Class UPCGExEdgeRemoveOverlap Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Keep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Keep = { "Keep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRemoveOverlap, Keep), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeOverlapPick, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keep_MetaData), NewProp_Keep_MetaData) }; // 961253873
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRemoveOverlap, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMinAngle_SetBit(void* Obj)
{
	((UPCGExEdgeRemoveOverlap*)Obj)->bUseMinAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMinAngle = { "bUseMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRemoveOverlap), &Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMinAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinAngle_MetaData), NewProp_bUseMinAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRemoveOverlap, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngle_MetaData), NewProp_MinAngle_MetaData) };
void Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMaxAngle_SetBit(void* Obj)
{
	((UPCGExEdgeRemoveOverlap*)Obj)->bUseMaxAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMaxAngle = { "bUseMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRemoveOverlap), &Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMaxAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxAngle_MetaData), NewProp_bUseMaxAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRemoveOverlap, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Keep_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Keep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_bUseMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::NewProp_MaxAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeRemoveOverlap Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::ClassParams = {
	&UPCGExEdgeRemoveOverlap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveOverlap::StaticRegisterNativesUPCGExEdgeRemoveOverlap()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveOverlap()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveOverlap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap.OuterSingleton;
}
UPCGExEdgeRemoveOverlap::UPCGExEdgeRemoveOverlap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveOverlap);
UPCGExEdgeRemoveOverlap::~UPCGExEdgeRemoveOverlap() {}
// ********** End Class UPCGExEdgeRemoveOverlap ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExEdgeOverlapPick_StaticEnum, TEXT("EPCGExEdgeOverlapPick"), &Z_Registration_Info_UEnum_EPCGExEdgeOverlapPick, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 961253873U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveOverlap, UPCGExEdgeRemoveOverlap::StaticClass, TEXT("UPCGExEdgeRemoveOverlap"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveOverlap), 4005399140U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_2069722293{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveOverlap_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
