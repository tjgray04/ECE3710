`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:51:13 10/15/2014
// Design Name:   ProgramStatusRegister
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/ProgramStatusRegister_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramStatusRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ProgramStatusRegister_TestBench;

	// Inputs
	reg [4:0] PSRsel;
	reg [4:0] PSRwrite;

	// Outputs
	wire PSRcond;

	// Instantiate the Unit Under Test (UUT)
	ProgramStatusRegister uut (
		.PSRsel(PSRsel), 
		.PSRwrite(PSRwrite), 
		.PSRcond(PSRcond)
	);

	initial begin
		// Initialize Inputs
		PSRsel = 0;
		PSRwrite = 0;

		// Wait 10 ns for global reset to finish
		#10;
		// Add stimulus here
		
		// set Z = 1, and N = 1
      PSRwrite = 5'b00011;
		// check return value for EQ condition
		PSRsel = 5'b00000; //should return 1 (true), Z=1
		#20;
		// check return value for NE condtion
		PSRsel = 5'b00001; // should return 0 (false), Z!=0
		#20;
		// check return value for LT condtion
		PSRsel = 5'b01100; // should return 0 (false), N!=0 & Z!=0


	end
      
endmodule

