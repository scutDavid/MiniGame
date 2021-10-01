// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MINISaveGame.generated.h"


// 记录点处玩家状态
USTRUCT(BlueprintType)
struct FPlayerStateInfo
{
	GENERATED_USTRUCT_BODY()

	// 使用 UPROPERTY 修饰符可以更方便的在蓝图中设置
	// 速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector PlayerVelocity;
	// 位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector PlayerLocation;
	// 当前玩家状态
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool isForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool isBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool isJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool isSprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int CurrentSavePointIdx;
};


// 玩家跑完一轮关卡需要记录的状态集合
USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_USTRUCT_BODY()

	// 玩家状态：<时间，玩家状态>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	TMap<float, FPlayerStateInfo> PlayerStateInfos;
};

// 记录点处玩家状态
USTRUCT(BlueprintType)
struct FLevelActorInfo
{
	GENERATED_USTRUCT_BODY()
	// 使用 UPROPERTY 修饰符可以更方便的在蓝图中设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int ActorType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector InteractedLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	float InteractedTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool bLeftToRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	bool bIsTriggerred;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FString ActorName;
};

// 玩家跑完一轮关卡需要记录的关卡摆放物信息集合
USTRUCT(BlueprintType)
struct FLevelInfo
{
	GENERATED_USTRUCT_BODY()

	// 玩家状态：<时间，关卡摆放物信息>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	TMap<float, FLevelActorInfo> LevelActorInfos;
};

/**
 * UMINISaveGame 类：用于将玩家状态序列化写入磁盘
 */
UCLASS()
class TWODGAMEDEMO_API UMINISaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UMINISaveGame()
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int32 LevelIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int32 SavePointIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int32 UserIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FString SlotName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	int32 LevelId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FPlayerInfo PlayerInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FLevelInfo LevelInfo;
	/** 可以对 SaveGame 对象进行维护 */
	virtual void Serialize(FArchive& Ar) override;
};

