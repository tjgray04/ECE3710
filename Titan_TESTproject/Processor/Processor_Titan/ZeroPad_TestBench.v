`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:54 10/20/2014
// Design Name:   ZeroPad
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/ZeroPad_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ZeroPad
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ZeroPad_TestBench;

	// Inputs
	reg data_in;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	ZeroPad uut (
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// only two possible options for data_in; 1 or 0. Check padding
		data_in = 1;
		#20;
		data_in = 0;
	end
      
endmodule

