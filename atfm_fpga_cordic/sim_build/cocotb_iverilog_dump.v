module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/fpga/worker_place/temp/temp/23d255186b0d48d39b2d54e4c38f0ede/sim_build/uart_transmit.fst");
    $dumpvars(0, uart_transmit);
end
endmodule
