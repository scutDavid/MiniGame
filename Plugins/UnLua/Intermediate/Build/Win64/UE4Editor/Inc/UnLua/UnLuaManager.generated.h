// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;
struct FVector;
#ifdef UNLUA_UnLuaManager_generated_h
#error "UnLuaManager.generated.h already included, missing '#pragma once' in UnLuaManager.h"
#endif
#define UNLUA_UnLuaManager_generated_h

#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_SPARSE_DATA
#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLatentActionCompleted); \
	DECLARE_FUNCTION(execOnActorDestroyed);


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLatentActionCompleted); \
	DECLARE_FUNCTION(execOnActorDestroyed);


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_EVENT_PARMS \
	struct UnLuaManager_eventInputAction_Parms \
	{ \
		FKey Key; \
	}; \
	struct UnLuaManager_eventInputAxis_Parms \
	{ \
		float AxisValue; \
	}; \
	struct UnLuaManager_eventInputGesture_Parms \
	{ \
		float Value; \
	}; \
	struct UnLuaManager_eventInputTouch_Parms \
	{ \
		TEnumAsByte<ETouchIndex::Type> FingerIndex; \
		FVector Location; \
	}; \
	struct UnLuaManager_eventInputVectorAxis_Parms \
	{ \
		FVector AxisValue; \
	};


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_CALLBACK_WRAPPERS
#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaManager(); \
	friend struct Z_Construct_UClass_UUnLuaManager_Statics; \
public: \
	DECLARE_CLASS(UUnLuaManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaManager)


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUnLuaManager(); \
	friend struct Z_Construct_UClass_UUnLuaManager_Statics; \
public: \
	DECLARE_CLASS(UUnLuaManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaManager)


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaManager(UUnLuaManager&&); \
	NO_API UUnLuaManager(const UUnLuaManager&); \
public:


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaManager(UUnLuaManager&&); \
	NO_API UUnLuaManager(const UUnLuaManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnLuaManager)


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_PRIVATE_PROPERTY_OFFSET
#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_23_PROLOG \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_EVENT_PARMS


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_PRIVATE_PROPERTY_OFFSET \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_SPARSE_DATA \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_RPC_WRAPPERS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_CALLBACK_WRAPPERS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_INCLASS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_PRIVATE_PROPERTY_OFFSET \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_SPARSE_DATA \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_CALLBACK_WRAPPERS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_INCLASS_NO_PURE_DECLS \
	TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class UUnLuaManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwoDGameDemo_Plugins_UnLua_Source_UnLua_Private_UnLuaManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
