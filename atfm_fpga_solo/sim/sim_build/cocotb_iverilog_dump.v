module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/biomech/atfm_fpga_copy/atfm_fpga_solo/sim/sim_build/parallel_harmonic_generator.fst");
    $dumpvars(0, parallel_harmonic_generator);
end
endmodule
