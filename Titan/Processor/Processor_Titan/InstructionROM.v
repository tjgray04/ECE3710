`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:48 10/15/2014 
// Design Name: 
// Module Name:    InstructionROM 
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
module InstructionROM#(parameter WIDTH = 32, ROM_ADDR_BITS = 17)// assures 2^17 address space for ~160kbit application size
						(input clk, enable,
						input [WIDTH-1:0] PCadr, // PC is 32 bits, not 17
						output reg [WIDTH-1:0] instruction);

//   parameter ROM_WIDTH = <rom_width>; // this is WIDTH = 32
//   parameter ROM_ADDR_BITS = <rom_addr_bits>; // this is ROM_ADDR_BITS = 32

   (* ROM_STYLE="{AUTO | DISTRIBUTED | BLOCK}" *)
   reg [WIDTH-1:0] inst_ROM [(2**ROM_ADDR_BITS)-1:0]; //[<memory_width> = 32:0] <reg_name> [<memory_depth> = 15:0] - gives a depth of about 32k
//   reg [ROM_WIDTH-1:0] <output_data>; // this is instruction
//   <reg_or_wire> [ROM_ADDR_BITS-1:0] <address>; //this is PCadr
   
   initial
      $readmemb("test.dat", inst_ROM, 0, ((2**ROM_ADDR_BITS)-1)); //, <begin_address>, <end_address>);

   always @(posedge clk)
      if (enable)
         instruction <= inst_ROM[PCadr];
				
endmodule
