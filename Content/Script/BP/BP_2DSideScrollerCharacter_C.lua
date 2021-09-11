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
    print("begin play-----------")
end

--function BP_2DSideScrollerCharacter_C:ReceiveEndPlay()
--end

-- function BP_2DSideScrollerCharacter_C:ReceiveTick(DeltaSeconds)
-- end

--function BP_2DSideScrollerCharacter_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

function BP_2DSideScrollerCharacter_C:ReceiveActorBeginOverlap(OtherActor)
	print("begin overlap----------------------")

	if (OtherActor:ActorHasTag("DeadLedge")) then
		print("You are dead!")
	end

	if (OtherActor:ActorHasTag("Destination")) then
		print("Destination!")
	end

	if (OtherActor:ActorHasTag("RecordPoint")) then
		print("RecordPoint!")
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
