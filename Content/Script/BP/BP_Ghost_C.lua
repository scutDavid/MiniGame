--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"
local BP_Ghost_C = Class()
local ActorType = {}
ActorType.MovableRoad = 1
ActorType.DisposableRoad = 2
--function BP_Ghost_C:Initialize(Initializer)
--end

--function BP_Ghost_C:UserConstructionScript()
--end

-- function BP_Ghost_C:ReceiveBeginPlay()
-- end

-- function BP_Ghost_C:ReceiveEndPlay()
--     print("ghost over")
-- end
local movableRoadClass = UE4.UClass.Load("/Game/2DSideScrollerCPP/Blueprints/MovableRoad.MovableRoad")
local disposableRoadClass = UE4.UClass.Load("/Game/2DSideScrollerCPP/Blueprints/DisposableRoad.DisposableRoad")
local bFirstPrint = true
-- 重写Ghost 回放
function BP_Ghost_C:ReceiveTick(DeltaSeconds)
    if bFirstPrint == true then
        print("self.playerInfoRecordLength = ",self.playerInfoRecordLength)
        for i = 1, self.playerInfoRecordLength do
            local curRecordTime= self.saveTimeArray:Get(i)
            local playerStateInfo = self.playerInfo.PlayerStateInfos:Find(curRecordTime)
            -- if playerStateInfo.isJump == true or i == self.playerInfoRecordLength then
                print("%d ----------   playerStateInfo = ",i,curRecordTime,playerStateInfo.isJump)
            -- end
        end
        bFirstPrint = false
    end
    self.AccumulateTime = self.AccumulateTime + DeltaSeconds
    
    if self.timeNewIndex <= self.playerInfoRecordLength then
        if self.isForward == true then
            self.AccaAccumulateTime = self.AccaAccumulateTime + DeltaSeconds
            local CurrentSpeed = (self.MoveSpeed):GetFloatValue(self.AccaAccumulateTime)
            self.CharacterMovement.MaxWalkSpeed = CurrentSpeed
            self:MoveRight(1.0)
        elseif self.isBack == true then
            self.AccaAccumulateTime = self.AccaAccumulateTime + DeltaSeconds
            local CurrentSpeed = (self.MoveSpeed):GetFloatValue(self.AccaAccumulateTime)
            self.CharacterMovement.MaxWalkSpeed = CurrentSpeed
            self:MoveRight(-1.0)
        else
            self.AccaAccumulateTime = 0.0
        end
        local curRecordTime= self.saveTimeArray:Get(self.timeNewIndex)
        if self.AccumulateTime - 1 >= curRecordTime then
            -- print(DeltaSeconds,self.AccumulateTime,curRecordTime)
            local playerStateInfo = self.playerInfo.PlayerStateInfos:Find(curRecordTime)
            -- if self.CharacterMovement:IsFalling() == false then
                self:K2_SetActorLocation(UE4.FVector(playerStateInfo.PlayerLocation.X, playerStateInfo.PlayerLocation.Y, playerStateInfo.PlayerLocation.Z))
            -- end
            self.isForward = playerStateInfo.isForward
            self.isBack = playerStateInfo.isBack

            if self.isForward == true then
                self.AccaAccumulateTime = self.AccaAccumulateTime + DeltaSeconds
                local CurrentSpeed = (self.MoveSpeed):GetFloatValue(self.AccaAccumulateTime)
                self.CharacterMovement.MaxWalkSpeed = CurrentSpeed
                -- print("Ghost forward-------------------------",DeltaSeconds,self.AccumulateTime,curRecordTime)
                self:MoveRight(1.0)
            elseif self.isBack == true then
                self.AccaAccumulateTime = self.AccaAccumulateTime + DeltaSeconds
                local CurrentSpeed = (self.MoveSpeed):GetFloatValue(self.AccaAccumulateTime)
                self.CharacterMovement.MaxWalkSpeed = CurrentSpeed
                -- print("Ghost back-------------------------",DeltaSeconds,self.AccumulateTime,curRecordTime)
                self:MoveRight(-1.0)
            end
            if playerStateInfo.isSprint == true then -- 冲刺
            
            end
            if playerStateInfo.isJump == true then
                print("Ghost Jump-------------------------",DeltaSeconds,self.AccumulateTime,curRecordTime,self.master.jumpSpeed,self.master.secondJumpSpeed,self.master.jumpInterval)
                self:GhostJump()
            elseif playerStateInfo.isJump == false then
                self:StopJumping()
            end
            self.timeNewIndex = self.timeNewIndex + 1
        end
    end

    -- if self.levelTimeNewIndex <= self.levelActorInfoRecordLength then
    --     local curRecordTime= self.levelSaveTimeArray:Get(self.levelTimeNewIndex)
    --     if self.AccumulateTime - 1 >= curRecordTime then -- 重生
    --         self.levelTimeNewIndex = self.levelTimeNewIndex + 1
    --         local levelActorInfo = self.levelInfo.LevelActorInfos:Find(curRecordTime)
    --         local levelActor = nil
    --         local targetActor = nil
    --         local allActors = UE4.TArray(UE4.AActor)
    --         if levelActorInfo.ActorType == ActorType.MovableRoad then -- respawn 移动板
    --             -- print("respawn 移动板--------------------------------------------",levelActorInfo.ActorName,levelActor.TriggerTime,levelActorInfo.InteractedLocation.X,levelActorInfo.InteractedLocation.Y,levelActorInfo.InteractedLocation.Z)
    --             UE4.UGameplayStatics.GetAllActorsOfClass(self:GetWorld(), movableRoadClass, allActors)
    --             if allActors:Length() > 0 then
    --                 local allMovableList = allActors:ToTable()
    --                 for i = 1,#allMovableList do
    --                     if UE4.UKismetSystemLibrary.GetObjectName(allMovableList[i]) == levelActorInfo.ActorName  then
    --                         targetActor = allMovableList[i]
    --                     end
    --                 end
    --             end
    --             levelActor = UE4.UCopyUObject.CloneActor(targetActor)
    --             levelActor.MovableRoad:SetCollisionProfileName("GhostObject")
    --             levelActor.Trigger:SetCollisionProfileName("OverlapOnlyGhost")
    --             levelActor.TriggerTime = levelActorInfo.InteractedTime
    --             levelActor.bLeftToRight = levelActorInfo.bLeftToRight
    --             levelActor.bIsTriggerred = levelActorInfo.bIsTriggerred
    --             levelActor:SetSpriteColor()
    --             local spritePos = levelActor:GetSpritePos()
    --             -- print("respawn 移动板--------------------------------------------",levelActorInfo.ActorName,levelActorInfo.InteractedTime,spritePos.X,spritePos.Y,spritePos.Z)
    --         elseif levelActorInfo.ActorType == ActorType.DisposableRoad then -- respawn 一次性板
    --             UE4.UGameplayStatics.GetAllActorsOfClass(self:GetWorld(), disposableRoadClass, allActors)
    --             -- print("respawn 一次性板--------------------------------------------",levelActorInfo.ActorName)
    --             if allActors:Length() > 0 then
    --                 local allDisposableList = allActors:ToTable()
    --                 for i = 1,#allDisposableList do
    --                     if UE4.UKismetSystemLibrary.GetObjectName(allDisposableList[i]) == levelActorInfo.ActorName  then
    --                         targetActor = allDisposableList[i]
    --                     end
    --                 end
    --             end
                
    --             levelActor = UE4.UCopyUObject.CloneActor(targetActor)
    --             local ObjectName = UKismetSystemLibrary.GetObjectName(levelActor)
    --             -- print("respawn 一次性板--------------------------------------------",ObjectName)
    --             levelActor.OneRoad:SetCollisionProfileName("GhostObject")
    --             levelActor.Trigger:SetCollisionProfileName("OverlapOnlyGhost")
    --             levelActor:SetSpriteColor()
    --             local spritePos = levelActor:GetSpritePos()
    --         end
    --         if levelActor ~= nil then
    --             levelActor:K2_SetActorLocation(UE4.FVector(levelActorInfo.InteractedLocation.X,levelActorInfo.InteractedLocation.Y,levelActorInfo.InteractedLocation.Z))
    --         end
            
    --     end
    -- end
end

--function BP_Ghost_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

function BP_Ghost_C:ReceiveActorBeginOverlap(OtherActor)
	if (OtherActor:ActorHasTag("Trigger")) then
		local ObjectName = UKismetSystemLibrary.GetObjectName(OtherActor)
		local NameParseArray = UKismetStringLibrary.ParseIntoArray(ObjectName, "_", true)
		local TriggerIndexInt = UKismetStringLibrary.Conv_StringToInt(NameParseArray:Get(NameParseArray:Length()))
		self.GameMode:UpdateTriggerIndex(false, TriggerIndexInt)
		-- print(SavePointIndexInt)
		print(ObjectName)
		print(NameParseArray:Length())
		print(NameParseArray:Get(1))
		print(NameParseArray:Get(2))
        print(TriggerIndexInt)
		print("Trigger point!")
	end
end

--function BP_Ghost_C:ReceiveActorEndOverlap(OtherActor)
--end

function BP_Ghost_C:MoveRight(fAxisValue)
    if fAxisValue ~= 0.0 then
        self:AddMovementInput(UE4.FVector(2, 0, 0), fAxisValue, false)
        if fAxisValue > 0 then
            self:K2_SetActorRotation(UE4.FVector(0, 0, 0))
        else
            self:K2_SetActorRotation(UE4.FVector(0, 180, 0))
        end
    end
end

function BP_Ghost_C:MoveAfter5Meter()
    print("begin to move behind 1 meter")
    self.Player = UE4.UGameplayStatics.GetPlayerCharacter(self:GetWorld(), 0)
    playerPos = self.Player:K2_GetActorLocation()
    selfPos = self:K2_GetActorLocation()
    local distance = UE4.UKismetMathLibrary.Vector_Distance(playerPos, selfPos)
    print("distance = ---------------------",distance,TableToString(playerPos))
end

function BP_Ghost_C:GhostJump()
	if self.isFirstJump == true then
		if self.isSecondJump == false and self.canSecondJump == true then
			self:LaunchCharacter(UE4.FVector(0,0,self.master.secondJumpSpeed),false,true)
			self.isSecondJump = true
			self.canSecondJump = false
		end
	else
		self:LaunchCharacter(UE4.FVector(0,0,self.master.jumpSpeed),false,true)
		self.isFirstJump = true
		self:DelayFunc(self.master.jumpInterval)
	end
end

function BP_Ghost_C:DelayFunc(Induration)
	coroutine.resume(coroutine.create(
	function(WorldContectObject,duration)
	UE4.UKismetSystemLibrary.Delay(WorldContectObject,duration)
	self.canSecondJump = true
	end
	),
	self,Induration)
end

function TableToString (TableToPrint, MaxIntent)
    local HandlerdTable = {}
    local function ItretePrintTable(TP, Indent)
        if not Indent then Indent = 0 end
        if type(TP) ~= "table" then return tostring(TP) end

        if(Indent > MaxIntent) then return tostring(TP) end

        if HandlerdTable[TP] then
            return "";
        end
        HandlerdTable[TP] = true
        local StrToPrint = string.rep(" ", Indent) .. "{\r\n"
        Indent = Indent + 2 
        for k, v in pairs(TP) do
            StrToPrint = StrToPrint .. string.rep(" ", Indent)
            if (type(k) == "number") then
                StrToPrint = StrToPrint .. "[" .. k .. "] = "
            elseif (type(k) == "string") then
                StrToPrint = StrToPrint  .. k ..  "= "   
            else
                StrToPrint = StrToPrint  .. tostring(k) ..  " = "   
            end
            if (type(v) == "number") then
                StrToPrint = StrToPrint .. v .. ",\r\n"
            elseif (type(v) == "string") then
                StrToPrint = StrToPrint .. "\"" .. v .. "\",\r\n"
            elseif (type(v) == "table") then
                StrToPrint = StrToPrint .. tostring(v) .. ItretePrintTable(v, Indent + 2) .. ",\r\n"
            else
                StrToPrint = StrToPrint .. "\"" .. tostring(v) .. "\",\r\n"
            end
        end
        StrToPrint = StrToPrint .. string.rep(" ", Indent-2) .. "}"
        return StrToPrint
    end

    if MaxIntent == nil then
        MaxIntent = 64
    end
    return ItretePrintTable(TableToPrint)
end



return BP_Ghost_C
