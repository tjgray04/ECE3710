`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:19:17 12/01/2014
// Design Name:   TestGlyphMoverInterface
// Module Name:   C:/Users/u0655172/Desktop/ECE3710/Titan/Processor/Processor_Titan/TestGlyphMoverInterface_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TestGlyphMoverInterface
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestGlyphMoverInterface_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg bR;
	reg bL;
	reg bU;
	reg bD;

	// Outputs
	wire hSync;
	wire vSync;
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	TestGlyphMoverInterface uut (
		.clk(clk), 
		.reset(reset), 
		.bR(bR), 
		.bL(bL), 
		.bU(bU), 
		.bD(bD), 
		.hSync(hSync), 
		.vSync(vSync), 
		.rgb(rgb)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		bR = 0;
		bL = 0;
		bU = 0;
		bD = 0;

		// Wait 10 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here
		bR = 1;
	end
	always #1 clk = ~clk;
      
endmodule

