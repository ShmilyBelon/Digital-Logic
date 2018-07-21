`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/07/2018 09:15:32 AM
// Design Name: 
// Module Name: CLK
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


module CLK( 
input clk,
output reg _clk
    );
    
   // initial
    // _clk <= 1'b0;
     
    always @(*)
    begin
      _clk = #5 ( ~ clk);
    end
    
endmodule
