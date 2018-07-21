`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 08:29:52 AM
// Design Name: 
// Module Name: T
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


module T1(
input t,
input CP,
output reg Q,
output  nQ 

    );
    
    assign nQ = ~Q;
    
    initial
    begin
      Q <=1'b0;  
    end
 
    
    always @(posedge CP)
    begin
      if(t)
        Q <= ~Q;  
    end   
    
    
    
endmodule
