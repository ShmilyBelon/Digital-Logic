`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/06/2018 09:44:37 PM
// Design Name: 
// Module Name: sd3_1_B
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


module sd3_1_B(

input  X,
input  clk ,
output   Y   
    );
    
    wire Q0 ,Q1,nQ0,nQ1,t1,t;
  
    //assign Y = ~(X & nQ1);
    assign t1=1;
    nand(Y,X,nQ1);
    xor(t2,X,Q0);  
        
    T1 T_trigger1(.t(t1) , .CP(clk) , .Q(Q0) , .nQ(nQ0));
    T1 T_trigger2(.t(t2) , .CP(clk) , .Q(Q1) , .nQ(nQ1));
    
        

endmodule
