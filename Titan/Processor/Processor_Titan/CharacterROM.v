`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:31 11/04/2014 
// Design Name: 
// Module Name:    CharacterROM 
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
module CharacterROM#(parameter ROM_WIDTH = 8, ROM_ADDR_BITS = 12, PIXEL_BITS = 3, CHAR_AMNT = 7)
	(input [PIXEL_BITS-1:0] hPixel,
	 input [PIXEL_BITS-1:0] vPixel,
	 input [CHAR_AMNT-1:0] glyphAddr,
	 output [ROM_WIDTH-1:0] color
    );

//   (* ROM_STYLE="{AUTO | DISTRIBUTED | BLOCK}" *)
   reg [ROM_WIDTH-1:0] charROM [(2**ROM_ADDR_BITS)-1:0];
//   reg [ROM_WIDTH-1:0] <output_data>;

//   <reg_or_wire> [ROM_ADDR_BITS-1:0] <address>;
   
   initial
      $readmemh("TestROM.dat", charROM, 0, ((2**ROM_ADDR_BITS)-1));
	
	/* The ROM performs a continuous read, infered by the assign statement.
	*	The address for the read is a concantionation of the current pixel and the current 
	*	glyph to draw. The input glyphAddr comes from the CharacterDisplayRAM and tells the ROM
	*	which glyph to currently display. vPixel and hPixel relate to the actual pixel in the glyph 
	* 	to be read out. Each glyph contains 64 addresses, and each group of 8 addresses represents a 
	*	different horizontal line of the glyph. hPixel will advance through all 8 horizontal pixels, before
	*	vPixel advances to the next line in the glyph. 
	*/
	assign color = charROM[{glyphAddr, vPixel, hPixel}];

endmodule
