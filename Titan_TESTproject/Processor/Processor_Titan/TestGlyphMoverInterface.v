`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:17 12/01/2014 
// Design Name: 
// Module Name:    TestGlyphMoverInterface 
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
module TestGlyphMoverInterface(
		input clk, reset,
		input bR, bL, bU, bD,
		output hSync, vSync,
		output [7:0] rgb
    );
	 
//Wires
wire [6:0] VGAdataIN;
wire [6:0] writeData;
wire [13:0] addr;

//Instantiate glyph mover
TestGlyphMover tg(.clk(clk), .reset(reset), .bR(bR), .bL(bL), .bU(bU), .bD(bD), .VGAdataIN(VGAdataIN),
						.VGAwriteEn(VGAwriteEn), .writeData(writeData), .addr(addr));
						
//Instantiate VGA
DisplayVGA dispVGA(.clk(clk), .reset(reset), .cpuWriteEn(VGAwriteEn), .writeData(writeData),
						.addrCPU(addr), .hSync(hSync), .vSync(vSync), .outputCPU(VGAdataIN),
						.rgb(rgb));
endmodule
