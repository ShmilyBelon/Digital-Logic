`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 08:51:59 AM
// Design Name: 
// Module Name: T2
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

module T2(
input t,
input CP,
output reg Q,
output reg nQ 

    );
    
    
    
    //assign nQ = ~Q;
    
 /*   initial
    begin
      Q <=1'b0;
      nQ <=1'b1;
    end
 */   
    always @(posedge CP)
    begin
      if(t)
      begin
        Q <= ~Q;
        nQ <= ~nQ;
      end
    end   
endmodule
