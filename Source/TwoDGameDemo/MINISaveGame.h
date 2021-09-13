// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MINISaveGame.generated.h"

// 当前玩家操作
UENUM(BlueprintType)
enum class MINIGameState : uint8
{
	// 游戏状态 FORWARD:前进 ,BACK: 后退 ,WAIT: 停止 ,JUMP: 跳跃,RUN: 冲刺
	FORWARD  UMETA(DisplayName = "FORWARD"),
	BACK UMETA(DisplayName = "BACK"),
	WAIT UMETA(DisplayName = "WAIT"),
	JUMP UMETA(DisplayName = "JUMP"),
	RUN UMETA(DisplayName = "RUN"),
};

// 记录点处玩家状态
USTRUCT(BlueprintType)
struct FPlayerStateInfo
{
	GENERATED_USTRUCT_BODY()

	// 使用 UPROPERTY 修饰符可以更方便的在蓝图中设置
	// 速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	float PlayerVelocity;
	// 位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector PlayerLocation;
	// 当前玩家状态
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	MINIGameState PlayerState;
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

	/** 可以对 SaveGame 对象进行维护 */
	virtual void Serialize(FArchive& Ar) override;
};

