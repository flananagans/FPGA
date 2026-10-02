package signal_pkg;
    typedef enum logic [2:0] {
        SAWTOOTH = 3'd0,
        TRIANGLE = 3'd1,
        SQUARE   = 3'd2,
        SINUSOID = 3'd3,
        CONSTANT = 3'd4
    } signal_t;
endpackage