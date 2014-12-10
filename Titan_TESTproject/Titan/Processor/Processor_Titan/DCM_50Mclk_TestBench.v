`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:52:38 12/02/2014
// Design Name:   DCM_50Mclk
// Module Name:   C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/DCM_50Mclk_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DCM_50Mclk
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DCM_50Mclk_TestBench;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire clk_25M;
	wire clk_50M;
	wire locked;

	// Instantiate the Unit Under Test (UUT)
	DCM_50Mclk uut (
		.clk(clk), 
		.reset(reset),
		.clk_25M(clk_25M),
		.clk_50M(clk_50M), 
		.locked(locked)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		reset = 0;
	end
      
		always #1 clk = ~clk;
endmodule

