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

	/** ���Զ� SaveGame �������ά�� */
	virtual void Serialize(FArchive& Ar) override;
};
