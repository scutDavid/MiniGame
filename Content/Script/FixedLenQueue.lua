local List = {}
List.__index = List

function List:new(max_length)
    assert(max_length)
    local self = {first = 0, last = -1, length = 0, max_length = max_length}
    return setmetatable(self, List)
end

function List:push(value)
    local last = self.last + 1
    self.length = self.length + 1
    self.last = last
    self[last] = value

    if self.length > self.max_length then
        self:poll()
    end

end

function List:poll()
    local first = self.first
    if first > self.last then error("list is empty") end
    local value = self[first]
    self[first] = nil        -- to allow garbage collection
    if first == self.last then
        self.first = 0
        self.last = -1
    else
        self.first = first + 1
    end
    self.length = self.length - 1
    return value
end

-- should not change the self in func
-- func return break or not
function List:foreach(func, right_first)
    if right_first then
        for i = self.last, self.first, -1 do
            if func(self[i]) then break end
        end
    else
        for i = self.first, self.last do
            if func(self[i]) then break end
        end
    end
end

function List:empty()
    return self.first > self.last
end

function List:clear()
    if not self:empty() then
        for i = self.first, self.last do
            self[i] = nil
        end
    end
    self.length = 0
    self.first = 0
    self.last = -1
end

function List:to_table()
    local res = {}
    for i = self.first, self.last do
        table.insert(res, self[i])
    end
    return res
end

function List:get_last_n_rcd(n)
    local res = {}
    for i = 0, n - 1 do
        if self.first > self.last - i then return res end
        table.insert(res, self[self.last - i])
    end
    return res
end

return List
