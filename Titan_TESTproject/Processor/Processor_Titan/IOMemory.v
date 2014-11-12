`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:43:07 11/11/2014 
// Design Name: 
// Module Name:    IOMemory 
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
module IOMemory#(parameter WIDTH = 32, RAM_ADDR_BITS = 14)
	(input clk, en, memWrite,
	 input [WIDTH-1:0] input_data,
	 input [WIDTH-1:0] address,
	 output [WIDTH-1:0] IO_Data);

   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
   reg [WIDTH-1:0] IO_RAM [(2**RAM_ADDR_BITS)-1:0];

	// Reads will be done asynchronously
	assign IO_Data = IO_RAM[address];
	
   always @(posedge clk)
      if (en) begin
         if (memWrite) 
            IO_RAM[address] <= input_data;
      end

endmodule
