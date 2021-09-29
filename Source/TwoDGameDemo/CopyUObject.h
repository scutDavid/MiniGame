// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CopyUObject.generated.h"

/**
 * 
 */
UCLASS()
class TWODGAMEDEMO_API UCopyUObject : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "ActorFuncions", meta = (DeterminesOutputType = "InputActor"))
	static AActor* CloneActor(AActor* InputActor);
};
