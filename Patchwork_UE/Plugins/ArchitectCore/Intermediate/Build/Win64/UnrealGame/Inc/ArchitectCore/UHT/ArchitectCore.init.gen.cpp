// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchitectCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ArchitectCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ArchitectCore()
	{
		if (!Z_Registration_Info_UPackage__Script_ArchitectCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ArchitectCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF63B17A5,
				0xD585F2F3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ArchitectCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ArchitectCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ArchitectCore(Z_Construct_UPackage__Script_ArchitectCore, TEXT("/Script/ArchitectCore"), Z_Registration_Info_UPackage__Script_ArchitectCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF63B17A5, 0xD585F2F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
