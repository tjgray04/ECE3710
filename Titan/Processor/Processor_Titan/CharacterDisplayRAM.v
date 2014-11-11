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
//
//		THIS MEMORY MODULE 
//
//
//////////////////////////////////////////////////////////////////////////////////
module CharacterDisplayRAM#(parameter RAM_WIDTH = 7, RAM_ADDR_BITS = 7)
	(input clk, 
	//cpuWriteEn,
	//input [RAM_WIDTH-1:0] writeData,
	input [RAM_ADDR_BITS-1:0] /*hGlyphCPU,*/ hGlyphVGA, // 7-bits of addressing for 80 glyphs
	input [RAM_ADDR_BITS-2:0] /*vGlyphCPU,*/ vGlyphVGA, // 6-bits of addressing for 60 glyphs
	output [RAM_WIDTH-1:0] /*outputCPU,*/ outputVGA
    );

   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
   reg [RAM_WIDTH-1:0] charDispRAM [4800-1:0];

   //  The forllowing code is only necessary if you wish to initialize the RAM 
   //  contents via an external file (use $readmemb for binary data)
   initial
      $readmemb("mTestRAM.dat", charDispRAM, 0, (4800-1));

//   always @(posedge clk)
//	begin
//		if (cpuWriteEn) //cpuWriteEn = 1 when CPU wants to write to memory
//			charDispRAM[{vGlyphCPU,hGlyphCPU}] = writeData;
//   end

	//setup address to read from
	wire [12:0] vgaAddress;
	assign vgaAddress = hGlyphVGA + (80*vGlyphVGA);
	//Reads are done asynchronously
	assign outputVGA = charDispRAM[vgaAddress];
//	assign outputVGA = charDispRAM[{vGlyphVGA,hGlyphVGA}];
//	assign outputCPU = charDispRAM[{vGlyphCPU,hGlyphCPU}];
						

endmodule
