`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 01:26:01 PM
// Design Name: 
// Module Name: sd3_2
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


module sd3_2(
input X,
output Q1,
output Q2,
output Q3,
output Q4,
output Z
    );
    
    wire high5;
    wire Q1,Q2,Q3,Q4,nQ4;
    wire j4;
    assign high5=1'b1;
    
    JK JK1(.clk(X) ,  .j(high5) , .k(high5) , .q(Q1));
    JK JK2(.clk(Q1) ,  .j(nQ4) , .k(high5) , .q(Q2));
    JK JK3(.clk(Q2) ,  .j(high5) , .k(high5) , .q(Q3));
    
    assign j4 = Q3 & Q2;
    JK JK4(.clk(Q1) ,  .j(j4) , .k(high5) , .q(Q4) , .qb(nQ4));
    
    and outZ(Z,Q4,Q1,X);
    
    
    
endmodule
