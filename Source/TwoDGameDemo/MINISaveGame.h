// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MINISaveGame.generated.h"


// ��¼�㴦���״̬
USTRUCT(BlueprintType)
struct FPlayerStateInfo
{
	GENERATED_USTRUCT_BODY()

	// ʹ�� UPROPERTY ���η����Ը����������ͼ������
	// �ٶ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector PlayerVelocity;
	// λ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	FVector PlayerLocation;
	// ��ǰ���״̬
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


// �������һ�ֹؿ���Ҫ��¼��״̬����
USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_USTRUCT_BODY()

	// ���״̬��<ʱ�䣬���״̬>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	TMap<float, FPlayerStateInfo> PlayerStateInfos;
};

// ��¼�㴦���״̬
USTRUCT(BlueprintType)
struct FLevelActorInfo
{
	GENERATED_USTRUCT_BODY()
	// ʹ�� UPROPERTY ���η����Ը����������ͼ������
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

// �������һ�ֹؿ���Ҫ��¼�Ĺؿ��ڷ�����Ϣ����
USTRUCT(BlueprintType)
struct FLevelInfo
{
	GENERATED_USTRUCT_BODY()

	// ���״̬��<ʱ�䣬�ؿ��ڷ�����Ϣ>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MINIGame")
	TMap<float, FLevelActorInfo> LevelActorInfos;
};

/**
 * UMINISaveGame �ࣺ���ڽ����״̬���л�д�����
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
	/** ���Զ� SaveGame �������ά�� */
	virtual void Serialize(FArchive& Ar) override;
};

