`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:58 10/06/2014
// Design Name:   Shifter
// Module Name:   U:/My Documents/Processor_Titan/Shifter_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Shifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Shifter_TestBench;

	// Inputs
	reg [31:0] arg;
	reg [31:0] shiftamount;
	reg shifttype;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Shifter uut (
		.arg(arg), 
		.shiftamount(shiftamount), 
		.shifttype(shifttype), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		arg = 0;
		shiftamount = 0;
		shifttype = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		arg = 32'hf000000f;
		shiftamount = 32'd3;
		#10;
		shiftamount = 32'hfffffff5;
		#10;
		shifttype = 1;
		shiftamount = 32'd16;
		#10;
		shiftamount = 32'hfffffff5;

	end
      
endmodule

