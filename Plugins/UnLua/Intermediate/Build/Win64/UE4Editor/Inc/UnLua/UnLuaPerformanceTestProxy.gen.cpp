// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Private/Tests/UnLuaPerformanceTestProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaPerformanceTestProxy() {}
// Cross Module References
	UNLUA_API UClass* Z_Construct_UClass_AUnLuaPerformanceTestProxy_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_AUnLuaPerformanceTestProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnLua();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetMeshInfo)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMeshID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMeshName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCOM);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPredictedPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMeshInfo(Z_Param_Out_OutMeshID,Z_Param_Out_OutMeshName,Z_Param_Out_OutCOM,Z_Param_Out_OutIndices,Z_Param_Out_OutPositions,Z_Param_Out_OutPredictedPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetPredictedPositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPredictedPositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execUpdatePositions)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NewPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePositions(Z_Param_Out_NewPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetPositions)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPositions(Z_Param_Out_OutPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execUpdateIndices)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NewIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIndices(Z_Param_Out_NewIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetIndices)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIndices(Z_Param_Out_OutIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execRaycast)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execUpdateMeshName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->UpdateMeshName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execUpdateMeshID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateMeshID(Z_Param_NewID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetCOM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCOM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetMeshName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execGetMeshID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMeshID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execSimulate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Simulate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnLuaPerformanceTestProxy::execNOP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NOP();
		P_NATIVE_END;
	}
	void AUnLuaPerformanceTestProxy::StaticRegisterNativesAUnLuaPerformanceTestProxy()
	{
		UClass* Class = AUnLuaPerformanceTestProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCOM", &AUnLuaPerformanceTestProxy::execGetCOM },
			{ "GetIndices", &AUnLuaPerformanceTestProxy::execGetIndices },
			{ "GetMeshID", &AUnLuaPerformanceTestProxy::execGetMeshID },
			{ "GetMeshInfo", &AUnLuaPerformanceTestProxy::execGetMeshInfo },
			{ "GetMeshName", &AUnLuaPerformanceTestProxy::execGetMeshName },
			{ "GetPositions", &AUnLuaPerformanceTestProxy::execGetPositions },
			{ "GetPredictedPositions", &AUnLuaPerformanceTestProxy::execGetPredictedPositions },
			{ "NOP", &AUnLuaPerformanceTestProxy::execNOP },
			{ "Raycast", &AUnLuaPerformanceTestProxy::execRaycast },
			{ "Simulate", &AUnLuaPerformanceTestProxy::execSimulate },
			{ "UpdateIndices", &AUnLuaPerformanceTestProxy::execUpdateIndices },
			{ "UpdateMeshID", &AUnLuaPerformanceTestProxy::execUpdateMeshID },
			{ "UpdateMeshName", &AUnLuaPerformanceTestProxy::execUpdateMeshName },
			{ "UpdatePositions", &AUnLuaPerformanceTestProxy::execUpdatePositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetCOM_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetCOM_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetCOM", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetCOM_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetIndices_Parms
		{
			TArray<int32> OutIndices;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetIndices_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::NewProp_OutIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::NewProp_OutIndices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetIndices", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetIndices_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetMeshID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetMeshID", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetMeshID_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms
		{
			int32 OutMeshID;
			FString OutMeshName;
			FVector OutCOM;
			TArray<int32> OutIndices;
			TArray<FVector> OutPositions;
			TArray<FVector> OutPredictedPositions;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutMeshID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutMeshName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCOM;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPredictedPositions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPredictedPositions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutMeshID = { "OutMeshID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutMeshID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutMeshName = { "OutMeshName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutMeshName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutCOM = { "OutCOM", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutCOM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions = { "OutPredictedPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms, OutPredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms), &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutMeshID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutMeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutCOM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_OutPredictedPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetMeshInfo", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetMeshInfo_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetMeshName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetMeshName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetMeshName", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetMeshName_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetPositions_Parms
		{
			TArray<FVector> OutPositions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPositions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPositions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::NewProp_OutPositions_Inner = { "OutPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::NewProp_OutPositions = { "OutPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetPositions_Parms, OutPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::NewProp_OutPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::NewProp_OutPositions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetPositions", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetPositions_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics
	{
		struct UnLuaPerformanceTestProxy_eventGetPredictedPositions_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventGetPredictedPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "GetPredictedPositions", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventGetPredictedPositions_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "NOP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics
	{
		struct UnLuaPerformanceTestProxy_eventRaycast_Parms
		{
			FVector Origin;
			FVector Direction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Direction_MetaData)) };
	void Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnLuaPerformanceTestProxy_eventRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnLuaPerformanceTestProxy_eventRaycast_Parms), &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "Raycast", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventRaycast_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics
	{
		struct UnLuaPerformanceTestProxy_eventSimulate_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventSimulate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "Simulate", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventSimulate_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics
	{
		struct UnLuaPerformanceTestProxy_eventUpdateIndices_Parms
		{
			TArray<int32> NewIndices;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner = { "NewIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices = { "NewIndices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdateIndices_Parms, NewIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::NewProp_NewIndices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "UpdateIndices", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventUpdateIndices_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics
	{
		struct UnLuaPerformanceTestProxy_eventUpdateMeshID_Parms
		{
			int32 NewID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::NewProp_NewID = { "NewID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdateMeshID_Parms, NewID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdateMeshID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::NewProp_NewID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "UpdateMeshID", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventUpdateMeshID_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics
	{
		struct UnLuaPerformanceTestProxy_eventUpdateMeshName_Parms
		{
			FString NewName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdateMeshName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdateMeshName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "UpdateMeshName", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventUpdateMeshName_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics
	{
		struct UnLuaPerformanceTestProxy_eventUpdatePositions_Parms
		{
			TArray<FVector> NewPositions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPositions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner = { "NewPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions = { "NewPositions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaPerformanceTestProxy_eventUpdatePositions_Parms, NewPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::NewProp_NewPositions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnLuaPerformanceTestProxy, nullptr, "UpdatePositions", nullptr, nullptr, sizeof(UnLuaPerformanceTestProxy_eventUpdatePositions_Parms), Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnLuaPerformanceTestProxy_NoRegister()
	{
		return AUnLuaPerformanceTestProxy::StaticClass();
	}
	struct Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COM_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COM;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredictedPositions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetCOM, "GetCOM" }, // 1818321834
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetIndices, "GetIndices" }, // 2867265353
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshID, "GetMeshID" }, // 3857784222
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshInfo, "GetMeshInfo" }, // 3564252933
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetMeshName, "GetMeshName" }, // 2166182385
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPositions, "GetPositions" }, // 2001005662
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_GetPredictedPositions, "GetPredictedPositions" }, // 4134728543
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_NOP, "NOP" }, // 3323676260
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Raycast, "Raycast" }, // 2028193619
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_Simulate, "Simulate" }, // 36473346
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateIndices, "UpdateIndices" }, // 3224504366
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshID, "UpdateMeshID" }, // 1750002046
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdateMeshName, "UpdateMeshName" }, // 2088205227
		{ &Z_Construct_UFunction_AUnLuaPerformanceTestProxy_UpdatePositions, "UpdatePositions" }, // 3724511129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/UnLuaPerformanceTestProxy.h" },
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshID = { "MeshID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshID), METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshName), METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_COM_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_COM = { "COM", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, COM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_COM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_COM_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions_Inner = { "PredictedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/UnLuaPerformanceTestProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions = { "PredictedPositions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnLuaPerformanceTestProxy, PredictedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_MeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_COM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::NewProp_PredictedPositions,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(AUnLuaPerformanceTestProxy, IUnLuaInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnLuaPerformanceTestProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::ClassParams = {
		&AUnLuaPerformanceTestProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnLuaPerformanceTestProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnLuaPerformanceTestProxy, 4224396586);
	template<> UNLUA_API UClass* StaticClass<AUnLuaPerformanceTestProxy>()
	{
		return AUnLuaPerformanceTestProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnLuaPerformanceTestProxy(Z_Construct_UClass_AUnLuaPerformanceTestProxy, &AUnLuaPerformanceTestProxy::StaticClass, TEXT("/Script/UnLua"), TEXT("AUnLuaPerformanceTestProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnLuaPerformanceTestProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
