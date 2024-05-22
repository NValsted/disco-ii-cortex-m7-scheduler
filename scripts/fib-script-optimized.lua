-- Initialization
local n, err = fetch_operand_param_pair("n", 1)
if n == nil then
    return err
end

local rx0 = 0
local rx1 = 1

-- Calculation
while n > 0 do
    local rx2 = rx0 + rx1
    rx0 = rx1
    rx1 = rx2
    n = n - 1
end

local result = set_param("rx0", rx0, 1)

return result
