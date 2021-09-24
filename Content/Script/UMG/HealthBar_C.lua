--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--
require "UnLua"

local HealthBar_C = Class()

function HealthBar_C:Initialize(Initializer)
    print("hello unlua----------------------")
end

--function HealthBar_C:PreConstruct(IsDesignTime)
--end

function HealthBar_C:Construct()
    self.Name:SetText("Unlua")
end

function HealthBar_C:Tick(MyGeometry, InDeltaTime)
    --
end

return HealthBar_C