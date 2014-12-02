`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:16 10/23/2014
// Design Name:   Titan
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/Titan_TestBench03.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Titan
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Titan_TestBench03;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	Titan uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 10 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here

	end
	
	always #1 clk = ~clk;
      
endmodule

