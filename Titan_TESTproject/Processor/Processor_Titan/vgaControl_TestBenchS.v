`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:07:28 11/10/2014
// Design Name:   vgaControl
// Module Name:   C:/Users/u0499404/Desktop/ECE3710/Titan/Processor/Processor_Titan/vgaControl_TestBenchS.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vgaControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vgaControl_TestBenchS;

	// Inputs
	reg clk100M;
	reg reset;

	// Outputs
	wire hSync;
	wire vSync;
	wire bright;
	wire [9:0] hPixel;
	wire [8:0] vPixel;

	// Instantiate the Unit Under Test (UUT)
	vgaControl uut (
		.clk100M(clk100M), 
		.reset(reset), 
		.hSync(hSync), 
		.vSync(vSync), 
		.bright(bright), 
		.hPixel(hPixel), 
		.vPixel(vPixel)
	);

		initial begin
		// Initialize Inputs
		clk100M = 0;
		reset = 1;

		// Wait 30 ns for global reset to finish
		#30 reset = 0;
        
		// Add stimulus here

	end
	
	always #1 clk100M = ~clk100M;
      
endmodule

