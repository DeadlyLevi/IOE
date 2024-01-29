// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOE_GameTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IOE_IOE_GameTypes_generated_h
#error "IOE_GameTypes.generated.h already included, missing '#pragma once' in IOE_GameTypes.h"
#endif
#define IOE_IOE_GameTypes_generated_h

#define FID_IOE_Source_IOE_IOE_GameTypes_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterData_Statics; \
	IOE_API static class UScriptStruct* StaticStruct();


template<> IOE_API UScriptStruct* StaticStruct<struct FCharacterData>();

#define FID_IOE_Source_IOE_IOE_GameTypes_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterAnimationData_Statics; \
	IOE_API static class UScriptStruct* StaticStruct();


template<> IOE_API UScriptStruct* StaticStruct<struct FCharacterAnimationData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_IOE_GameTypes_h


#define FOREACH_ENUM_EFOOT(op) \
	op(EFoot::Left) \
	op(EFoot::Right) 

enum class EFoot : uint8;
template<> struct TIsUEnumClass<EFoot> { enum { Value = true }; };
template<> IOE_API UEnum* StaticEnum<EFoot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
