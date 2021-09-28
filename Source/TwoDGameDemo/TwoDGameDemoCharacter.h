// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TwoDGameDemoCharacter.generated.h"

class UTextRenderComponent;

/**
 * This class is the default character for TwoDGameDemo, and it is responsible for all
 * physical interaction between the player and the world.
 *
 * The capsule component (inherited from ACharacter) handles collision with the world
 * The CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule
 * The Sprite component (inherited from APaperCharacter) handles the visuals
 */
UCLASS(config=Game)
class ATwoDGameDemoCharacter : public APaperCharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UTextRenderComponent* TextComponent;
	virtual void Tick(float DeltaSeconds) override;
protected:
	// The animation to play while running around
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animations)
	class UPaperFlipbook* RunningAnimation;

	// The animation to play while idle (standing still)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;

	// The animation to play while jump
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpAnimation;

	// The animation to play while Sprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* SprintAnimation;

	// ÊÇ·ñ´¦ÓÚ³å´Ì×´Ì¬
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	bool isSprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Text)
	FString Name;

	/** Called to choose the correct animation to play based on the character's movement state */
	void UpdateAnimation();

	/** Called for side to side input */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MoveRight(float Value);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MyJump();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MyStopJumping();
	UFUNCTION(BlueprintCallable)
	void UpdateCharacter();

	/** Handle touch inputs. */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TouchRepeat(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	ATwoDGameDemoCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
