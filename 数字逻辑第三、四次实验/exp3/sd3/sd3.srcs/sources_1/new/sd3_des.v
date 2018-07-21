`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/06/2018 08:00:12 PM
// Design Name: 
// Module Name: sd3_des
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

/*
module mux_latch(
    input   [3:0] data,
    input   [1:0] valid,
    input   flag,
    output reg valid_data);
initial begin
    valid_data=1'b0;
    end
always @ (*)
begin
  if(flag)
    begin
      case(valid)
          
           2'b00 : 
                    valid_data = data[0];
                      
                 
           2'b01 :  
                    valid_data = data[1];
                   
                
           2'b10 :  
                    valid_data = data[2];
                       
                
           2'b11 :  
                    valid_data = data[3];
      endcase  
         
 
    end
   else
     valid_data=1'b0;
    
end     
endmodule
*/
module mux_latch(
    input   [3:0] data,
    input   [1:0] valid,
    input   flag,
    output reg valid_data);

parameter init = 1'b0;

initial 
  begin
    valid_data=init;
  end
    /*添加的代码：将初状态为flag_off*/
    
    
always @ (*)
begin
    /*将if(flag)放在了case快的外边，不改变逻辑*/
    if(flag) 
       begin
         case(valid)
            2'b00 : begin  valid_data = data[0];end
            2'b01 : begin  valid_data = data[1];end
            2'b10 :begin   valid_data = data[2];end
            2'b11 : begin  valid_data = data[3];end
        endcase
       end   
    else  valid_data = init;/*flag为0时，输出结果为init*/
end
endmodule
