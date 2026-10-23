`default_nettype none
module duty_commander #(
    DATA_WIDTH = 16
) (
    input wire          clk,
    input wire          rst,
    input wire          data_valid_in,
    input wire [DATA_WIDTH-1:0] motor_angle, //theta_m, [0:359]
    input wire [DATA_WIDTH-1:0] v_bus, //bus voltage, [0:36]
    input wire [DATA_WIDTH-1:0] r_coil, //coil resistance, 
    input wire [DATA_WIDTH-1:0] l_coil, //coil inductance, 

    // Desired trajectory values
    input wire [DATA_WIDTH-1:0] des_pos_angle, //theta_m_des 
    input wire signed [DATA_WIDTH-1:0] des_veloc, //theta_dot_m_des, should be sinusoidal
    input wire signed [DATA_WIDTH-1:0] des_accel, //theta_dot_dot_m_des, should be sinusoidal
    
    // Motor characteristics
    input wire signed [DATA_WIDTH-1:0] mom_of_inertia,  //J
    input wire signed [DATA_WIDTH-1:0] damping_beta, //dampling coeff

    output logic signed [DATA_WIDTH-1:0] duty_cycle,
    output logic data_valid_out,
    output logic busy
);


endmodule
`default_nettype wire
