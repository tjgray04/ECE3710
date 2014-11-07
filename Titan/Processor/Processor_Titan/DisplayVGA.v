`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:16 11/04/2014 
// Design Name: 
// Module Name:    DisplayVGA 
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
module DisplayVGA(input clk, reset,
						//cpuWriteEn,
						//input [6:0] writeData,
						//input [7:0] hGlyphCPU,
						//input [6:0] vGlyphCPU,
						output hSync, vSync,
						//output [6:0] outputCPU,
						output [7:0] rgb
						);

	wire [10:0] hPixel;
	wire [9:0]  vPixel;
	wire [6:0]  outputVGA;
	wire [7:0]  color;
	wire [7:0] 	hGlyphVGA;
	wire [6:0]  vGlyphVGA;
	
	assign hGlyphVGA = hPixel[10:3];
	assign vGlyphVGA = vPixel[9:3];
	
	vgaControl	vgaCtrl (.clk100M(clk), .reset(reset), .hSync(hSync), .vSync(vSync), .bright(bright), 		
						   .hPixel(hPixel), .vPixel(vPixel));

	CharacterDisplayRAM charDispRAM(.clk(clk), 
											//.cpuWriteEn(cpuWriteEn), 
											//.writeData(writeData),
											//.hGlyphCPU(hGlyphCPU),
											.hGlyphVGA(hGlyphVGA),
											//.vGlyphCPU(vGlyphCPU), 
											.vGlyphVGA(vGlyphVGA),
											//.outputCPU(outputCPU), 
											.outputVGA(outputVGA));

	CharacterROM charROM(.hPixel(hPixel[2:0]), .vPixel(vPixel[2:0]), .glyphAddr(outputVGA), .color(color));

	assign rgb = bright ? color : 8'b0;

endmodule
