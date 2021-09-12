--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"

local BP_2DSideScrollerCharacter_C = Class()

--function BP_2DSideScrollerCharacter_C:Initialize(Initializer)
--end

--function BP_2DSideScrollerCharacter_C:UserConstructionScript()
--end

function BP_2DSideScrollerCharacter_C:ReceiveBeginPlay()
	local OriginGameMode = UGameplayStatics.GetGameMode(self:GetWorld())
	self.GameMode = OriginGameMode:Cast(UE4.ABP_MyTwoDGameDemoGameMode_C)
	-- print(OriginGameMode)
	-- print(self.GameMode)
	self:K2_SetActorLocation(self.GameMode:GetSavePointPosition())
end

--function BP_2DSideScrollerCharacter_C:ReceiveEndPlay()
--end

-- function BP_2DSideScrollerCharacter_C:ReceiveTick(DeltaSeconds)
-- end

--function BP_2DSideScrollerCharacter_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

function BP_2DSideScrollerCharacter_C:ReceiveActorBeginOverlap(OtherActor)
	if (OtherActor:ActorHasTag("DeadLedge")) then
		print("You are dead!")
		self:K2_DestroyActor()
	end

	if (OtherActor:ActorHasTag("Destination")) then
		self.GameMode:EnterNextLevel()
		self:K2_SetActorLocation(self.GameMode:GetSavePointPosition())
		print("Reach destination!")
	end

	if (OtherActor:ActorHasTag("SavePoint")) then
		local ObjectName = UKismetSystemLibrary.GetObjectName(OtherActor)
		local NameParseArray = UKismetStringLibrary.ParseIntoArray(ObjectName, "_", true)
		local SavePointIndexInt = UKismetStringLibrary.Conv_StringToInt(NameParseArray:Get(NameParseArray:Length()))
		self.GameMode:UpdateSavePoint(SavePointIndexInt)
		-- print(SavePointIndexInt)
		-- print(ObjectName)
		-- print(NameParseArray:Length())
		-- print(NameParseArray:Get(1))
		-- print(NameParseArray:Get(2))
		print("Save point!")
	end
end

--function BP_2DSideScrollerCharacter_C:ReceiveActorEndOverlap(OtherActor)
--end

function BP_2DSideScrollerCharacter_C:MoveRight(fAxisValue)
	-- Apply the input to the character motion
	-- AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
    if (0.0 ~= fAxisValue) then
		self:AddMovementInput(UE4.FVector(2, 0, 0), fAxisValue, false)
	end
end

function BP_2DSideScrollerCharacter_C:TouchStarted()
	-- Jump on any touch
	self:Jump()
end

function BP_2DSideScrollerCharacter_C:TouchStopped()
	--Cease jumping once touch stopped
	self:StopJumping()
end

return BP_2DSideScrollerCharacter_C
