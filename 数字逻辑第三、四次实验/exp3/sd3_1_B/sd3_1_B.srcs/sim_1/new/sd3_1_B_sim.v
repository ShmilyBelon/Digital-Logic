`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 09:08:05 AM
// Design Name: 
// Module Name: sd3_1_B_sim
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


module sd3_1_B_sim(
    );
    reg _clk;
    wire  Y;
    reg X=0;
    //assign X=1;
    sd3_1_B tb(.X(X) , .clk(_clk) , .Y(Y));

   // CLK shizhong(1,_clk);

     
    initial
     _clk <=1;
    always #20
     begin
     //x <= ~x;
     X <= ~X;
    end
    
    always #5
    begin
     _clk <=  ~_clk; 
    end
    
    
    
    
endmodule
