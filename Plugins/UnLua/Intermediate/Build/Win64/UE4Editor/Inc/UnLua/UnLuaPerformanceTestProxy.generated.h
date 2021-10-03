// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef UNLUA_UnLuaPerformanceTestProxy_generated_h
#error "UnLuaPerformanceTestProxy.generated.h already included, missing '#pragma once' in UnLuaPerformanceTestProxy.h"
#endif
#define UNLUA_UnLuaPerformanceTestProxy_generated_h

#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA
#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshInfo); \
	DECLARE_FUNCTION(execGetPredictedPositions); \
	DECLARE_FUNCTION(execUpdatePositions); \
	DECLARE_FUNCTION(execGetPositions); \
	DECLARE_FUNCTION(execUpdateIndices); \
	DECLARE_FUNCTION(execGetIndices); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execUpdateMeshName); \
	DECLARE_FUNCTION(execUpdateMeshID); \
	DECLARE_FUNCTION(execGetCOM); \
	DECLARE_FUNCTION(execGetMeshName); \
	DECLARE_FUNCTION(execGetMeshID); \
	DECLARE_FUNCTION(execSimulate); \
	DECLARE_FUNCTION(execNOP);


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshInfo); \
	DECLARE_FUNCTION(execGetPredictedPositions); \
	DECLARE_FUNCTION(execUpdatePositions); \
	DECLARE_FUNCTION(execGetPositions); \
	DECLARE_FUNCTION(execUpdateIndices); \
	DECLARE_FUNCTION(execGetIndices); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execUpdateMeshName); \
	DECLARE_FUNCTION(execUpdateMeshID); \
	DECLARE_FUNCTION(execGetCOM); \
	DECLARE_FUNCTION(execGetMeshName); \
	DECLARE_FUNCTION(execGetMeshID); \
	DECLARE_FUNCTION(execSimulate); \
	DECLARE_FUNCTION(execNOP);


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnLuaPerformanceTestProxy(); \
	friend struct Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics; \
public: \
	DECLARE_CLASS(AUnLuaPerformanceTestProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaPerformanceTestProxy) \
	virtual UObject* _getUObject() const override { return const_cast<AUnLuaPerformanceTestProxy*>(this); }


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAUnLuaPerformanceTestProxy(); \
	friend struct Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics; \
public: \
	DECLARE_CLASS(AUnLuaPerformanceTestProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaPerformanceTestProxy) \
	virtual UObject* _getUObject() const override { return const_cast<AUnLuaPerformanceTestProxy*>(this); }


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaPerformanceTestProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaPerformanceTestProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaPerformanceTestProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaPerformanceTestProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaPerformanceTestProxy(AUnLuaPerformanceTestProxy&&); \
	NO_API AUnLuaPerformanceTestProxy(const AUnLuaPerformanceTestProxy&); \
public:


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaPerformanceTestProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaPerformanceTestProxy(AUnLuaPerformanceTestProxy&&); \
	NO_API AUnLuaPerformanceTestProxy(const AUnLuaPerformanceTestProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaPerformanceTestProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaPerformanceTestProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaPerformanceTestProxy)


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshID() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshID); } \
	FORCEINLINE static uint32 __PPO__MeshName() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshName); } \
	FORCEINLINE static uint32 __PPO__COM() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, COM); } \
	FORCEINLINE static uint32 __PPO__Indices() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Indices); } \
	FORCEINLINE static uint32 __PPO__Positions() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Positions); } \
	FORCEINLINE static uint32 __PPO__PredictedPositions() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, PredictedPositions); }


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_21_PROLOG
#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS_NO_PURE_DECLS \
	MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class AUnLuaPerformanceTestProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MiniGame_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
