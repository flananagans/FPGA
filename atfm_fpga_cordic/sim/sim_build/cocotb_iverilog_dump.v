module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/biomech/atfm_fpga_copy/atfm_fpga_cordic/sim/sim_build/cordic_cossin.fst");
    $dumpvars(0, cordic_cossin);
end
endmodule
