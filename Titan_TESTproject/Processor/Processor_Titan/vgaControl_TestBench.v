`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:06:00 09/25/2014
// Design Name:   vgaControl
// Module Name:   C:/Users/u0499404/ECE3710/Lab3/Lab03_VGA/vgaControl_TestBench.v
// Project Name:  Lab03_VGA
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

module vgaControl_TestBench;

	// Inputs
	reg clk100M;
	reg reset;

	// Outputs
	wire hSync;
	wire vSync;
	wire bright;

	// Instantiate the Unit Under Test (UUT)
	vgaControl uut (
		.clk100M(clk100M), 
		.reset(reset), 
		.hSync(hSync), 
		.vSync(vSync), 
		.bright(bright) 
		);

	initial begin
		// Initialize Inputs
		clk100M = 1;
		reset = 1;

		// Wait 10 ns for global reset to finish
		#10 reset = 0;
		       
		// Add stimulus here

	end
	
   always #1 clk100M = ~clk100M;
		
endmodule

