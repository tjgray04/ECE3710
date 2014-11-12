`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:59 11/11/2014 
// Design Name: 
// Module Name:    StackMemory 
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
module StackMemory #(parameter WIDTH = 32, RAM_ADDR_BITS = 14)
	(input clk, en, memWrite,
	 input [WIDTH-1:0] input_data,
	 input [WIDTH-1:0] address,
	 output [WIDTH-1:0] stackData);

   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
   reg [WIDTH-1:0] stackRAM [(2**RAM_ADDR_BITS)-1:0];

	// Reads will be done asynchronously
	assign stackData = stackRAM[address];
	
   always @(posedge clk)
      if (en) begin
         if (memWrite) 
            stackRAM[address] <= input_data;
      end
		
endmodule
