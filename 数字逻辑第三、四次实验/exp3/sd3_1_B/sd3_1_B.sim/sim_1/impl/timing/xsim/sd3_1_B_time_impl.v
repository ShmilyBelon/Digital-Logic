// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.4 (lin64) Build 2086221 Fri Dec 15 20:54:30 MST 2017
// Date        : Wed Jun  6 22:16:09 2018
// Host        : shmily-deepin running 64-bit Deepin 15.5
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               /home/shmilybelon/Desktop/digital_logic/exp3_4/sd3_1_B/sd3_1_B.sim/sim_1/impl/timing/xsim/sd3_1_B_time_impl.v
// Design      : sd3_1_B
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* ECO_CHECKSUM = "e7d5ca2f" *) 
(* NotValidForBitStream *)
module sd3_1_B
   (X,
    clk,
    Y);
  input X;
  input clk;
  output Y;

  wire Q0;
  wire Q1;
  wire Q1_reg_i_2_n_0;
  wire X;
  wire X_IBUF;
  wire Y;
  wire Y_OBUF;
  wire notQ1;

initial begin
 $sdf_annotate("sd3_1_B_time_impl.sdf",,,,"tool_control");
end
  (* XILINX_LEGACY_PRIM = "LD" *) 
  LDCE #(
    .INIT(1'b0)) 
    Q1_reg
       (.CLR(1'b0),
        .D(notQ1),
        .G(Q1_reg_i_2_n_0),
        .GE(1'b1),
        .Q(Q1));
  LUT1 #(
    .INIT(2'h1)) 
    Q1_reg_i_1
       (.I0(Q1),
        .O(notQ1));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h9)) 
    Q1_reg_i_2
       (.I0(Q0),
        .I1(X_IBUF),
        .O(Q1_reg_i_2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    Q1_reg_i_3
       (.I0(Q0),
        .O(Q0));
  IBUF X_IBUF_inst
       (.I(X),
        .O(X_IBUF));
  OBUF Y_OBUF_inst
       (.I(Y_OBUF),
        .O(Y));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'hB)) 
    Y_OBUF_inst_i_1
       (.I0(Q1),
        .I1(X_IBUF),
        .O(Y_OBUF));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
