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
local XLeftList = List:new(3)
local XRightList = List:new(3)
local ghostClassPath = "/Game/2DSideScrollerCPP/Blueprints/BP_Ghost.BP_Ghost"
local ghostClass = UE4.UClass.Load(ghostClassPath)
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
	self.isSprint = false
	self.bIsControlByMouse = false
	self.AccaAccumulateTime = 0
	self.curerentWriteByKeyBoard = false
	self.GhostBeginTs = 0
	self:K2_SetActorLocation(self.GameMode:GetSavePointPosition())
	self.UpdateSaveTaskTimer = UE4.UKismetSystemLibrary.K2_SetTimerDelegate({self,BP_2DSideScrollerCharacter_C.GetScreenSize},0.5,false)
	self.UpdateSaveTaskTimer = UE4.UKismetSystemLibrary.K2_SetTimerDelegate({self,BP_2DSideScrollerCharacter_C.UpdateSaveTask},0.1,true)
end

function BP_2DSideScrollerCharacter_C:GetScreenSize()
	self.PC = UE4.UGameplayStatics.GetPlayerController(self, 0)
	self.ScreenX,self.ScreenY = self.PC:GetViewportSize()
	print("screen size = ",self.ScreenX,self.ScreenY)
end

function BP_2DSideScrollerCharacter_C:ReceiveEndPlay()
	if self.UpdateSaveTaskTimer ~= nil then
		print("cancel timer!!!!!!!!!")
        UE4.UKismetSystemLibrary.K2_ClearAndInvalidateTimerHandle(self,self.UpdateSaveTaskTimer)
    end
	self.GameMode:SaveMINISaveGame(self.GameMode:GetLevelIndex())
	print("SaveMINISaveGame Success!!!!!!!!!-------------------",self.playerInfoRecordLen,self.levelActorInfoRecordLen)
end

function BP_2DSideScrollerCharacter_C:ReceiveTick(DeltaSeconds)
	if (self.isForward or self.isBack) and self.bSprintRight == nil and (not self.isDownHill) then
		local CurrentSpeed = (self.MoveSpeed):GetFloatValue(self.AccaAccumulateTime)
		self.CharacterMovement.MaxWalkSpeed = CurrentSpeed
	end
	self:UpdateCameraLocation()
end

function BP_2DSideScrollerCharacter_C:ReceiveHit(HitComponent, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit)
	if HitNormal.Z ~= 0.0 then
		if Other.bHasBeenHit == false then
			local movableRoadClass = UE4.UClass.Load("/Game/2DSideScrollerCPP/Blueprints/MovableRoad.MovableRoad")
			local disposableRoadClass = UE4.UClass.Load("/Game/2DSideScrollerCPP/Blueprints/DisposableRoad.DisposableRoad")
			local actorPos = Other:K2_GetActorLocation()
			local ObjectName = UE4.UKismetSystemLibrary.GetObjectName(Other)
			if Other:IsA(movableRoadClass) == true then
				Other.bHasBeenHit = true
				self:UpdateSaveLevelActorInfo(1,actorPos,Other.TriggerTime,ObjectName,Other.bLeftToRight,Other.bIsTriggerred)
				local spritePos = Other:GetSpritePos()
				print(" movableRoadClass Hit-------------",HitNormal.Z,ObjectName,Other.TriggerTime,spritePos.X,spritePos.Y,spritePos.Z)
			elseif Other:IsA(disposableRoadClass) == true then
				Other.bHasBeenHit = true
				self:UpdateSaveLevelActorInfo(2,actorPos,0.0,ObjectName)
				print(" disposableRoadClass Hit-------------",HitNormal.Z)
			end
		end
		return
	end
end

--function BP_2DSideScrollerCharacter_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end
function BP_2DSideScrollerCharacter_C:UpdateSaveTask()
	if self.curerentWriteByKeyBoard == false and self.CharacterMovement:IsFalling() == false then
		-- print("-------------------------------------------------UpdateSaveTask",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self),self.isPreJump,self.isJump)
		self:UpdateSaveGame(self.isForward, self.isBack, self.isSprint,self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:ReceiveActorBeginOverlap(OtherActor)
	if (OtherActor:ActorHasTag("DeadLedge")) then
		print("You are dead!")
		self.GameMode.bFirstBorn = true
		self.GameMode:ResetLevelActors()
		self:K2_DestroyActor()
	end

	if (OtherActor:ActorHasTag("Destination")) then
		self.GameMode:EnterNextLevel()
		if (self.GameMode:GetLevelIndex() > 2) then
			print("End of the Game!")
		else
			self:K2_SetActorLocation(self.GameMode:GetSavePointPosition())
			self.GameMode:SaveMINISaveGame(self.GameMode:GetLevelIndex() - 1)
			print("level --------- SaveMINISaveGame Success!!!!!!!!!-------------------",self.playerInfoRecordLen,self.levelActorInfoRecordLen)
			-- 摧毁之前鬼影
			self:DestroyGhost()
			-- 重生鬼影
			self.GameMode:InitMiniSaveGame()
			self.playerInfoRecordLen = 0
			self.levelActorInfoRecordLen = 0
			local ghost = self:GetWorld():SpawnActor(ghostClass, UE4.FTransform(), UE4.ESpawnActorCollisionHandlingMethod.AlwaysSpawn)
			ghost.AccumulateTime = self.GhostBeginTs
			self.GhostBeginTs = UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self) 
			print("Reach destination!")
		end
	end

	if (OtherActor:ActorHasTag("SavePoint")) then
		local ObjectName = UKismetSystemLibrary.GetObjectName(OtherActor)
		local NameParseArray = UKismetStringLibrary.ParseIntoArray(ObjectName, "_", true)
		local SavePointIndexInt = UKismetStringLibrary.Conv_StringToInt(NameParseArray:Get(NameParseArray:Length()))
		-- print(SavePointIndexInt)
		-- print(ObjectName)
		-- print(NameParseArray:Length())
		-- print(NameParseArray:Get(1))
		-- print(NameParseArray:Get(2))
		-- print("Save point!")
		self.GameMode:UpdateSavePoint(SavePointIndexInt)
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

function BP_2DSideScrollerCharacter_C:ResetMoveNormal(character,value)
	character.isSprint = false
	character.bSprintRight = nil
	character.bMoveRight = nil
	character.CharacterMovement.MaxWalkSpeed = 600
    character:LaunchCharacter(UE4.FVector(value*600,0,0),true,true)
	character.CharacterMovement.GravityScale = 2
end

function BP_2DSideScrollerCharacter_C:ResetCanSprint()
	self.canSprint = true
end

function BP_2DSideScrollerCharacter_C:MoveRight(fAxisValue)
	if self.isSprint == false and self.bIsControlByMouse == false then
		if fAxisValue == 0.0 then
			self.bMoveRight = nil
		else
			if fAxisValue > 0.0 then
				self.bMoveRight = true
			else
				self.bMoveRight = false
			end
		end
	end
	if (self.bMoveRight and self.bSprintRight) or (self.bMoveRight == false and self.bSprintRight == false) then 
		if self.canSprint == true and self.isFirstJump == true and self.GameMode:GetLevelIndex() > 1 then--冲刺
			self.CharacterMovement.MaxWalkSpeed = self.sprintSpeed
			self:LaunchCharacter(UE4.FVector(fAxisValue*self.sprintSpeed,0,0),true,true)
			self.CharacterMovement.GravityScale = 0
			self.UpdateSaveTaskTimer = UE4.UKismetSystemLibrary.K2_SetTimerDelegate({self,function() BP_2DSideScrollerCharacter_C:ResetMoveNormal(self,fAxisValue) end},self.sprintTime,false)
			self:resetCanSprintFunc(self.sprintInterval)
			self.AccaAccumulateTime = 0
			self.isSprint = true
			self.curerentWriteByKeyBoard = true
			self:UpdateSaveGame(self.isForward, self.isBack,self.isSprint, self.isJump)
			self.bMoveRight = nil
			self.canSprint = false 
		end
	end

	local inputValue = fAxisValue
	if self.bMoveRight == true then
		inputValue = 1.0
	elseif self.bMoveRight == false then
		inputValue = -1.0
	end

    if (0.0 ~= inputValue) then
		self:AddMovementInput(UE4.FVector(2, 0, 0), inputValue, false)
		-- print("self.AccaAccumulateTime = ",self.AccaAccumulateTime)
	end

	self.isPreForward = self.isForward
	self.isPreBack = self.isBack
	if inputValue == 0.0 then 
		self.isForward = false
		self.isBack = false
		self.AccaAccumulateTime = 0
	else
		self.CurrentUpdateTime = UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self)
		if self.LastUpdateTime  then 
			self.AccaAccumulateTime = self.AccaAccumulateTime + self.CurrentUpdateTime - self.LastUpdateTime 
		end
		self.LastUpdateTime = self.CurrentUpdateTime
		if inputValue > 0.0 then
			self.isForward = true
			self.isBack = false
		else
			self.isForward = false
			self.isBack = true
		end
	end
	if (self.isPreForward ~= self.isForward) or (self.isPreBack ~= self.isBack) then
		-- print("----------------------------------------------------move",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self))
		self.AccaAccumulateTime = 0
		self.curerentWriteByKeyBoard = true
		self:UpdateSaveGame(self.isForward, self.isBack, self.isSprint,self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:MyJump()
	self.isPreJump = self.isJump
	self.isJump = true

	if (self.isPreJump ~= self.isJump) then
		self.curerentWriteByKeyBoard = true
		self:UpdateSaveGame(self.isForward, self.isBack, self.isSprint, self.isJump)
		print("----------------------------------------------------jump",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self),self.isPreJump,self.isJump)
	end
	self.isJump = false
	if self.isSprint == false then
		if self.isFirstJump == true then
			if self.isSecondJump == false and self.canSecondJump == true  then --and self.GameMode:GetLevelIndex() > 0
				self:LaunchCharacter(UE4.FVector(0,0,self.secondJumpSpeed),false,true)
				self.isSecondJump = true
				self.canSecondJump = false
			end
		else	
			self:LaunchCharacter(UE4.FVector(0,0,self.jumpSpeed),false,true)
			self.isFirstJump = true
			self:DelayFunc(self.jumpInterval)
		end
	end
	

end

function BP_2DSideScrollerCharacter_C:resetCanSprintFunc(Induration)
	coroutine.resume(coroutine.create(
	function(WorldContectObject,duration)
	UE4.UKismetSystemLibrary.Delay(WorldContectObject,duration)
	self.canSprint = true
	end
	),
	self,Induration)
end

function BP_2DSideScrollerCharacter_C:DelayFunc(Induration)
	coroutine.resume(coroutine.create(
	function(WorldContectObject,duration)
	UE4.UKismetSystemLibrary.Delay(WorldContectObject,duration)
	self.canSecondJump = true
	end
	),
	self,Induration)
end

function BP_2DSideScrollerCharacter_C:MyStopJumping()
	self.isPreJump = self.isJump
	self.isJump = false
	self:StopJumping()
	if (self.isPreJump ~= self.isJump) then
		print("-------------------------------------------------stop jump",UE4.UKismetSystemLibrary.GetGameTimeInSeconds(self),self.isPreJump,self.isJump)
		self.curerentWriteByKeyBoard = true
		self:UpdateSaveGame(self.isForward, self.isBack, self.isSprint,self.isJump)
	end
end

function BP_2DSideScrollerCharacter_C:TouchStarted(FingerId, Location)
	-- Jump on any touch
	if Location.X > self.ScreenX/2 + 10 and Location.Y > self.ScreenY /2 + 10 then
		self:MyJump()
	end
	if Location.X < self.ScreenX/2 - 10 then
		self.bIsControlByMouse = true
	end
	self.PressTS = UE4.UKismetMathLibrary.Now()
	print("Begin touch FingerId = ",FingerId,Location.X, Location.Y, Location.Z,self.ScreenX,self.ScreenY)
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
	if self.isSprint == false then
		if Location.X < self.ScreenX/2 - 10 then -- 减10是为了空出之间区域
			XLeftList:push(Location.X)
			if XLeftList.length == 3 then
				if XLeftList[XLeftList.last] - XLeftList[XLeftList.first] > 5 then 
					print("move right",Location.X, Location.Y)
						self.bMoveRight = true
				elseif XLeftList[XLeftList.first] - XLeftList[XLeftList.last] > 5 then
					print("move left",Location.X, Location.Y)
						self.bMoveRight = false
				end
			end
		elseif Location.X > self.ScreenX/2 + 10 and Location.Y < self.ScreenY /2 - 10 then -- 加10是为了空出之间区域
			XRightList:push(Location.X)
			print("bMoveRight = ",self.bMoveRight)
			if XRightList.length == 3 and self.bMoveRight ~= nil then
				if XRightList[XRightList.last] - XRightList[XRightList.first] > 5 then 
					print("sprint right",Location.X, Location.Y)
					self.bSprintRight = true
				elseif XRightList[XRightList.first] - XRightList[XRightList.last] > 5 then
					print("sprint left",Location.X, Location.Y)
					self.bSprintRight = false
				end
			end
		end
	end
	-- print("repeat touch FingerId = ",FingerId,self.LastTouchLocation.X,self.LastTouchLocation.Y,Location.X, Location.Y)
	-- self.LastTouchLocation  = Location
	-- self:Jump()
end

function BP_2DSideScrollerCharacter_C:TouchStopped(FingerId, Location)
	if Location.X > self.ScreenX/2 then
		self:MyStopJumping()
	end
	if Location.X < self.ScreenX/2 - 10 then
		self.bIsControlByMouse = false
	end
	print("Stop touch FingerId = ",FingerId,Location.X, Location.Y, Location.Z)
	self.PressTS = 0
	XLeftList:clear()
	XRightList:clear()
	if self.isSprint == false then
		self.bMoveRight = nil
		self.bSprintRight = nil
	end
end

return BP_2DSideScrollerCharacter_C