-- Called for every incoming character or packet
function rx(data, num_bytes, prefix)
    -- Assuming single byte/char signed integers
    local val = 0
    for i = 1, num_bytes do
	val = val + string.byte(data, i) * 2^(i - 1)
    end
    
    -- Two's complement conversion if highest bit (0x80) is set
    if val >= 2^(num_bytes * 8 - 1) then
        val = val - 2^num_bytes
    end
    
    print(prefix .. val/(2^(num_bytes * 8 - 1)) .. "\r")
end

tio.alwaysecho = false
local last_4_bytes = {}
while true do
	while (#last_4_bytes > 3) do
		table.remove(last_4_bytes, 1)
	end
	table.insert(last_4_bytes, string.byte(tio.read(1, 0)))
	if last_4_bytes[1] == 0xDE and last_4_bytes[2] == 0xAD and last_4_bytes[3] == 0xBE and last_4_bytes[4] == 0xEF then
		rx(tio.read(2, 0), 2, "cos: ")
		rx(tio.read(2, 0), 2, "sin: ")
	end 
end
