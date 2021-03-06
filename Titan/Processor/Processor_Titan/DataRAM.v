`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:25 10/18/2014 
// Design Name: 
// Module Name:    DataRAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*	DATA RANDOM ACCESS MEMORY
*	input: clk, global clock from top module
*	input: enRAM, 
*	input:
*	input:
*	input:
*	input:
*	output: memData
*	output:
*	output:
*/
module DataRAM #(parameter WIDTH = 32, RAM_ADDR_BITS = 10) //11
	(input clk, enRAM, memWrite,
	 input [WIDTH-1:0] input_data,
	 input [14-1:0] address,
	 output [WIDTH-1:0] memData);

//   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
   reg [WIDTH-1:0] dataRAM [(2**RAM_ADDR_BITS)-1:0];
	
	integer i;
	initial
		begin
			for (i = (2**RAM_ADDR_BITS)-1; i >= 0; i=i-1)
				dataRAM[i] = 32'd0;
		end

	assign memData = dataRAM[address[RAM_ADDR_BITS-1:0]];
	
   always @(posedge clk)
      if (enRAM) begin
         if (memWrite) 
//			begin
            dataRAM[address[RAM_ADDR_BITS-1:0]] <= input_data; //input_data is RtData
//            memData <= input_data;
//         end
//         else
//            memData <= dataRAM[address];
      end
		
endmodule
