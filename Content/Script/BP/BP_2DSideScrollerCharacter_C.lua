--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"
local BP_2DSideScrollerCharacter_C = Class()
local List = require "FixedLenQueue"
local XList = List:new(3)
--function BP_2DSideScrollerCharacter_C:Initialize(Initializer)
--end

--function BP_2DSideScrollerCharacter_C:UserConstructionScript()
--end

function BP_2DSideScrollerCharacter_C:ReceiveBeginPlay()
	local OriginGameMode = UGameplayStatics.GetGameMode(self:GetWorld())
	self.GameMode = OriginGameMode:Cast(UE4.ABP_MyTwoDGameDemoGameMode_C)
	-- print(OriginGameMode)
	-- print(self.GameMode)
	self.isJump = false
	self:K2_SetActorLocation(self.GameMode:GetSavePointPosition())
	self.UpdateSaveTaskTimer = UE4.UKismetSystemLibrary.K2_SetTimerDelegate({self,BP_2DSideScrollerCharacter_C.UpdateSaveTask},0.1,true)
end

function BP_2DSideScrollerCharacter_C:ReceiveEndPlay()
	if self.UpdateSaveTaskTimer ~= nil then
		print("cancel timer!!!!!!!!!")
        UE4.UKismetSystemLibrary.K2_ClearAndInvalidateTimerHandle(self,self.UpdateSaveTaskTimer)
    end
	self.GameMode:SaveMINISaveGame()
	print("SaveMINISaveGame Success!!!!!!!!!")
end

function BP_2DSideScrollerCharacter_C:ReceiveTick(DeltaSeconds)
	if self.bMoveRight == true then
		self:MoveRight(1)
	elseif self.bMoveRight == false then
		self:MoveRight(-1)
	end

end

--function BP_2DSideScrollerCharacter_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end
function BP_2DSideScrollerCharacter_C:UpdateSaveTask()
	self:UpdateSaveGame(self.isForward, self.isBack, self.isJump)
end

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

	if (OtherActor:ActorHasTag("Trigger")) then
		local ObjectName = UKismetSystemLibrary.GetObjectName(OtherActor)
		local NameParseArray = UKismetStringLibrary.ParseIntoArray(ObjectName, "_", true)
		local TriggerIndexInt = UKismetStringLibrary.Conv_StringToInt(NameParseArray:Get(NameParseArray:Length()))
		self.GameMode:UpdateTriggerIndex(true, TriggerIndexInt)
		-- print(SavePointIndexInt)
		-- print(ObjectName)
		-- print(NameParseArray:Length())
		-- print(NameParseArray:Get(1))
		-- print(NameParseArray:Get(2))
		print("Trigger point!")
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

	self.isPreForward = self.isForward
	self.isPreBack = self.isBack
	if fAxisValue > 0.0 then
		self.isForward = true
		self.isBack = false
	elseif fAxisValue < 0.0 then
		self.isForward = false
		self.isBack = true
	else
		self.isForward = false
		self.isBack = false
	end

	if (self.isPreForward ~= self.isForward) or (self.isPreBack ~= self.isBack) then
		-- print("----------------------------------------------------move",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self))
		self:UpdateSaveGame(self.isForward, self.isBack, self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:MyJump()
	self.isPreJump = self.isJump
	self.isJump = true
	self:Jump()
	if (self.isPreJump ~= self.isJump) then
		-- print("----------------------------------------------------jump",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self),self.isPreJump,self.isJump)
		self:UpdateSaveGame(self.isForward, self.isBack, self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:MyStopJumping()
	self.isPreJump = self.isJump
	self.isJump = false
	self:StopJumping()
	if (self.isPreJump ~= self.isJump) then
		-- print("-------------------------------------------------stop jump",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self),self.isPreJump,self.isJump)
		self:UpdateSaveGame(self.isForward, self.isBack, self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:TouchStarted(FingerId, Location)
	-- Jump on any touch
	self.LastTouchLocation  = Location
	self.PressTS = UE4.UKismetMathLibrary.Now()
	print("Begin touch FingerId = ",FingerId,Location.X, Location.Y, Location.Z)
	-- self:Jump()
end

function BP_2DSideScrollerCharacter_C:TouchRepeat(FingerId, Location)
	-- if self.PressTS == 0 then
	-- 	return
	-- end
	-- self.CurrentTS = UE4.UKismetMathLibrary.Now()
	-- local delta = UE4.UKismetMathLibrary.Subtract_DateTimeDateTime(self.CurrentTS, self.PressTS)
    -- local deltamillisec = UE4.UKismetMathLibrary.GetTotalMilliseconds(delta)
	-- if deltamillisec > 250 then
		-- print("repeat touch FingerId = ",deltamillisec,FingerId,Location.X, Location.Y, Location.Z)
		-- self.PressTS = 0
	-- end
	XList:push(Location.X)
	if XList.length == 3 then
		print(XList[XList.first],XList[XList.last])
		if XList[XList.last] - XList[XList.first] > 5 then 
			print("move right",Location.X, Location.Y)
			self.bMoveRight = true
		elseif XList[XList.first] - XList[XList.last] > 5 then
			print("move left",Location.X, Location.Y)
			self.bMoveRight = false
		end
	end
	-- print("repeat touch FingerId = ",FingerId,self.LastTouchLocation.X,self.LastTouchLocation.Y,Location.X, Location.Y)
	-- self.LastTouchLocation  = Location
	-- self:Jump()
end

function BP_2DSideScrollerCharacter_C:TouchStopped(FingerId, Location)
	--Cease jumping once touch stopped
	print("Stop touch FingerId = ",FingerId,Location.X, Location.Y, Location.Z)
	self.PressTS = 0
	XList:clear()
	-- self:StopJumping()
end

return BP_2DSideScrollerCharacter_C