`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:26 11/13/2014
// Design Name:   System
// Module Name:   C:/Users/u0791587/Documents/GitHub/ECE3710/Titan/Processor/Processor_Titan/System_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: System
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module System_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg NESinputData;

	// Outputs
	wire hSync;
	wire vSync;
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	System uut (
		.clk(clk), 
		.reset(reset),
		.NESinputData(NESinputData),		
		.hSync(hSync), 
		.vSync(vSync), 
		.rgb(rgb)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		NESinputData = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
		reset = 0;
        
		// Add stimulus here

	end
	
	always #1 clk = ~clk;
      
endmodule

