`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 01:28:45 PM
// Design Name: 
// Module Name: JK
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module JK( clk,j,k,q,qb );

input wire  clk,j,k;

output wire qb;

output reg  q=0;

assign qb = ~q;
initial
  q <= 1'b0;

always@(negedge clk)begin

    case({j,k})

    2'b00:

    q <= q;

    2'b01:

    q <= 0;

    2'b10:

    q <= 1;

    2'b11:

    q <= ~q;

    endcase

end

endmodule
