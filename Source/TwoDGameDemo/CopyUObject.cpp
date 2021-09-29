// Fill out your copyright notice in the Description page of Project Settings.


#include "CopyUObject.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "UObject/UObjectGlobals.h"


AActor* UCopyUObject::CloneActor(AActor* InputActor) // Note: put a U before the name of your library
{
	if (InputActor)
	{
		UWorld * World = InputActor->GetWorld();
		UE_LOG(LogTemp, Log, TEXT("Actor Duplication"));
		FActorSpawnParameters params;
		params.Template = InputActor;

		UClass *ItemClass = InputActor->GetClass();
		AActor* const SpawnedActor = World->SpawnActor<AActor>(ItemClass, params);
		//AActor* SpawnedActor = DuplicateObject(InputActor, NULL);
		return SpawnedActor;
	}
	return NULL;
}

