module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/ssaenz/lab03/sim/sim_build/uart_receive.fst");
    $dumpvars(0, uart_receive);
end
endmodule
