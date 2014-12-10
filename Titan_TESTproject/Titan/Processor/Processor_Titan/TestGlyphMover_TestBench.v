`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:54:20 12/01/2014
// Design Name:   TestGlyphMover
// Module Name:   C:/Users/u0655172/Desktop/ECE3710/Titan/Processor/Processor_Titan/TestGlyphMover_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TestGlyphMover
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestGlyphMover_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg bR;
	reg bL;
	reg bU;
	reg bD;
	reg [6:0] VGAdataIN;

	// Outputs
	wire VGAwriteEn;
	wire [6:0] writeData;
	wire [13:0] addr;

	// Instantiate the Unit Under Test (UUT)
	TestGlyphMover uut (
		.clk(clk), 
		.reset(reset), 
		.bR(bR), 
		.bL(bL), 
		.bU(bU), 
		.bD(bD), 
		.VGAdataIN(VGAdataIN), 
		.VGAwriteEn(VGAwriteEn), 
		.writeData(writeData), 
		.addr(addr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		bR = 0;
		bL = 0;
		bU = 0;
		bD = 0;
		VGAdataIN = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here
		bR = 1;
		VGAdataIN = 6'd10;
	end
	always #1 clk = ~clk;
endmodule

