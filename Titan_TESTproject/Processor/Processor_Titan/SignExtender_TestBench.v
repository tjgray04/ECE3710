`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:23:57 10/14/2014
// Design Name:   SignExtender
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan01/SignExtender_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SignExtender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SignExtender_TestBench;

	// Inputs
	reg [17:0] data_in;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	SignExtender uut (
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		data_in = 18'd56;
		#10;
		data_in = 18'hfffff;
		#10;
		data_in = 18'hff000;

	end
      
endmodule

