`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 01:48:22 PM
// Design Name: 
// Module Name: sd3_2_tb
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


module sd3_2_tb(

    );
    
 reg X=0;
 wire Z;
 wire q1,q2,q3,q4;
 sd3_2 tb(.X(X) , .Q1(q1) , .Q2(q2) , .Q3(q3) , .Q4(q4) , .Z(Z));
 always #5
 begin
 
 
 X = ~X;
 
 
 end   
 
    
    
    
    
endmodule
