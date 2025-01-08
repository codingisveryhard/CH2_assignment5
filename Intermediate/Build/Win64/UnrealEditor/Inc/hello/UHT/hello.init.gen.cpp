// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehello_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_hello;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_hello()
	{
		if (!Z_Registration_Info_UPackage__Script_hello.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/hello",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD47B02E3,
				0x6F7BBF6A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_hello.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_hello.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_hello(Z_Construct_UPackage__Script_hello, TEXT("/Script/hello"), Z_Registration_Info_UPackage__Script_hello, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD47B02E3, 0x6F7BBF6A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
