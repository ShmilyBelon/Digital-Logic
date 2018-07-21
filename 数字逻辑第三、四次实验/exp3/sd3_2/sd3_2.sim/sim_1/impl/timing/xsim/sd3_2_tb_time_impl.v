// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.4 (lin64) Build 2086221 Fri Dec 15 20:54:30 MST 2017
// Date        : Thu Jun  7 21:15:14 2018
// Host        : shmily-deepin running 64-bit Deepin 15.5
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               /home/shmilybelon/Desktop/digital_logic/exp3_4/sd3_2/sd3_2.sim/sim_1/impl/timing/xsim/sd3_2_tb_time_impl.v
// Design      : sd3_2
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

module JK
   (Q1_OBUF,
    Z_OBUF,
    X_IBUF_BUFG,
    X_IBUF,
    Q4_OBUF);
  output Q1_OBUF;
  output Z_OBUF;
  input X_IBUF_BUFG;
  input X_IBUF;
  input Q4_OBUF;

  wire Q1_OBUF;
  wire Q4_OBUF;
  wire X_IBUF;
  wire X_IBUF_BUFG;
  wire Z_OBUF;
  wire q_i_1_n_0;

  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h80)) 
    Z_OBUF_inst_i_1
       (.I0(X_IBUF),
        .I1(Q1_OBUF),
        .I2(Q4_OBUF),
        .O(Z_OBUF));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT1 #(
    .INIT(2'h1)) 
    q_i_1
       (.I0(Q1_OBUF),
        .O(q_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    q_reg
       (.C(X_IBUF_BUFG),
        .CE(1'b1),
        .D(q_i_1_n_0),
        .Q(Q1_OBUF),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "JK" *) 
module JK_0
   (Q2_OBUF,
    q_reg_0,
    Q1_OBUF);
  output Q2_OBUF;
  input q_reg_0;
  input Q1_OBUF;

  wire Q1_OBUF;
  wire Q2_OBUF;
  wire q_reg_0;

  FDRE #(
    .INIT(1'b0)) 
    q_reg
       (.C(Q1_OBUF),
        .CE(1'b1),
        .D(q_reg_0),
        .Q(Q2_OBUF),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "JK" *) 
module JK_1
   (Q3_OBUF,
    q_reg_0,
    Q2_OBUF,
    Q4_OBUF);
  output Q3_OBUF;
  output q_reg_0;
  input Q2_OBUF;
  input Q4_OBUF;

  wire Q2_OBUF;
  wire Q3_OBUF;
  wire Q4_OBUF;
  wire q_i_1__0_n_0;
  wire q_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT1 #(
    .INIT(2'h1)) 
    q_i_1__0
       (.I0(Q3_OBUF),
        .O(q_i_1__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h08)) 
    q_i_1__1
       (.I0(Q3_OBUF),
        .I1(Q2_OBUF),
        .I2(Q4_OBUF),
        .O(q_reg_0));
  FDRE #(
    .INIT(1'b0)) 
    q_reg
       (.C(Q2_OBUF),
        .CE(1'b1),
        .D(q_i_1__0_n_0),
        .Q(Q3_OBUF),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "JK" *) 
module JK_2
   (Q4_OBUF,
    q_reg_0,
    q_reg_1,
    Q1_OBUF,
    Q2_OBUF);
  output Q4_OBUF;
  output q_reg_0;
  input q_reg_1;
  input Q1_OBUF;
  input Q2_OBUF;

  wire Q1_OBUF;
  wire Q2_OBUF;
  wire Q4_OBUF;
  wire q_reg_0;
  wire q_reg_1;

  LUT2 #(
    .INIT(4'h1)) 
    q_i_1__2
       (.I0(Q4_OBUF),
        .I1(Q2_OBUF),
        .O(q_reg_0));
  FDRE #(
    .INIT(1'b0)) 
    q_reg
       (.C(Q1_OBUF),
        .CE(1'b1),
        .D(q_reg_1),
        .Q(Q4_OBUF),
        .R(1'b0));
endmodule

(* ECO_CHECKSUM = "569595c2" *) 
(* NotValidForBitStream *)
module sd3_2
   (X,
    Q1,
    Q2,
    Q3,
    Q4,
    Z);
  input X;
  output Q1;
  output Q2;
  output Q3;
  output Q4;
  output Z;

  wire JK3_n_1;
  wire JK4_n_1;
  wire Q1;
  wire Q1_OBUF;
  wire Q2;
  wire Q2_OBUF;
  wire Q3;
  wire Q3_OBUF;
  wire Q4;
  wire Q4_OBUF;
  wire X;
  wire X_IBUF;
  wire X_IBUF_BUFG;
  wire Z;
  wire Z_OBUF;

initial begin
 $sdf_annotate("sd3_2_tb_time_impl.sdf",,,,"tool_control");
end
  JK JK1
       (.Q1_OBUF(Q1_OBUF),
        .Q4_OBUF(Q4_OBUF),
        .X_IBUF(X_IBUF),
        .X_IBUF_BUFG(X_IBUF_BUFG),
        .Z_OBUF(Z_OBUF));
  JK_0 JK2
       (.Q1_OBUF(Q1_OBUF),
        .Q2_OBUF(Q2_OBUF),
        .q_reg_0(JK4_n_1));
  JK_1 JK3
       (.Q2_OBUF(Q2_OBUF),
        .Q3_OBUF(Q3_OBUF),
        .Q4_OBUF(Q4_OBUF),
        .q_reg_0(JK3_n_1));
  JK_2 JK4
       (.Q1_OBUF(Q1_OBUF),
        .Q2_OBUF(Q2_OBUF),
        .Q4_OBUF(Q4_OBUF),
        .q_reg_0(JK4_n_1),
        .q_reg_1(JK3_n_1));
  OBUF Q1_OBUF_inst
       (.I(Q1_OBUF),
        .O(Q1));
  OBUF Q2_OBUF_inst
       (.I(Q2_OBUF),
        .O(Q2));
  OBUF Q3_OBUF_inst
       (.I(Q3_OBUF),
        .O(Q3));
  OBUF Q4_OBUF_inst
       (.I(Q4_OBUF),
        .O(Q4));
  BUFG X_IBUF_BUFG_inst
       (.I(X_IBUF),
        .O(X_IBUF_BUFG));
  IBUF X_IBUF_inst
       (.I(X),
        .O(X_IBUF));
  OBUF Z_OBUF_inst
       (.I(Z_OBUF),
        .O(Z));
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
