--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"
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


local BP_Ghost_C = Class()

--function BP_Ghost_C:Initialize(Initializer)
--end

--function BP_Ghost_C:UserConstructionScript()
--end

-- function BP_Ghost_C:ReceiveBeginPlay()
-- end

-- function BP_Ghost_C:ReceiveEndPlay()
--     print("ghost over")
-- end

-- function BP_Ghost_C:ReceiveTick(DeltaSeconds)
-- end

--function BP_Ghost_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

--function BP_Ghost_C:ReceiveActorBeginOverlap(OtherActor)
--end

--function BP_Ghost_C:ReceiveActorEndOverlap(OtherActor)
--end

function BP_Ghost_C:MoveAfter5Meter()
    print("begin to move behind 1 meter")
    self.Player = UE4.UGameplayStatics.GetPlayerCharacter(self:GetWorld(), 0)
    playerPos = self.Player:K2_GetActorLocation()
    selfPos = self:K2_GetActorLocation()
    local distance = UE4.UKismetMathLibrary.Vector_Distance(playerPos, selfPos)
    print("distance = ---------------------",distance,TableToString(playerPos))
end

return BP_Ghost_C
