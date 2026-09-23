module cocotb_iverilog_dump();
initial begin
    $dumpfile("/Users/smyl362/MEng/Biomechatronics/FPGA/atfm_fpga_solo/sim/sim_build/spi_con.fst");
    $dumpvars(0, spi_con);
end
endmodule
