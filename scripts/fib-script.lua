-- Initialization
set_param("_zero", 0, 1)
set_param("rx0", 0, 1)
set_param("rx1", 1, 1)

local _zero = fetch_operand_param_pair("_zero", 1)
local n = fetch_operand_param_pair("n", 1)

-- Calculation
while n > _zero do
    local rx0 = fetch_operand_param_pair("rx0", 1)
    local rx1 = fetch_operand_param_pair("rx1", 1)
    local rx2 = rx0 + rx1
    set_param("rx2", rx2, 1)

    rx1 = fetch_operand_param_pair("rx1", 1)
    set_param("rx0", rx1, 1)

    rx2 = fetch_operand_param_pair("rx2", 1)
    set_param("rx1", rx2, 1)

    n = fetch_operand_param_pair("n", 1)
    n = n - 1
    set_param("n", n, 1)

    n = fetch_operand_param_pair("n", 1)
    _zero = fetch_operand_param_pair("_zero", 1)
end

return 0
