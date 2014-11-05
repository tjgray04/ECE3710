`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:24 10/30/2014 
// Design Name: 
// Module Name:    CharacterDisplayRAM 
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
module CharacterDisplayRAM#(parameter RAM_WIDTH = 7, RAM_ADDR_BITS = 8)
	(input clk, cpuWriteEn,
	input [RAM_WIDTH-1:0] writeData,
	input [RAM_ADDR_BITS-1:0] hGlyphCPU, hGlyphVGA, // 8-bits of addressing for 80 glyphs
	input [RAM_ADDR_BITS-2:0] vGlyphCPU, vGlyphVGA, // 7-bits of addressing for 60 glyphs
	output [RAM_WIDTH-1:0] outputCPU, outputVGA
    );

//   parameter RAM_WIDTH = <ram_width>;
//   parameter RAM_ADDR_BITS = <ram_addr_bits>;

   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
   reg [RAM_WIDTH-1:0] charDispRAM [(2**RAM_ADDR_BITS)-1:0];
//   reg [RAM_WIDTH-1:0] <output_dataA>, <output_dataB>;

//   <reg_or_wire> [RAM_ADDR_BITS-1:0] <addressA>, <addressB>;
//   <reg_or_wire> [RAM_WIDTH-1:0] <input_dataA>;

   //  The forllowing code is only necessary if you wish to initialize the RAM 
   //  contents via an external file (use $readmemb for binary data)
   initial
      $readmemb("characterDisplayRAM.dat", charDispRAM, 0, ((2**RAM_ADDR_BITS)-1));

   always @(posedge clk)
	begin
		if (cpuWriteEn) //cpuWriteEn = 1 when CPU wants to write to memory
			charDispRAM[{vGlyphCPU,hGlyphCPU}] = writeData;
   end

	//Reads are done asynchronously
	assign outputVGA = charDispRAM[{vGlyphVGA,hGlyphVGA}];
	assign outputCPU = charDispRAM[{vGlyphCPU,hGlyphCPU}];
						

endmodule
