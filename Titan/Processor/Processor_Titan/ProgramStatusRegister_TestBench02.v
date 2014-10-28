`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:01:21 10/28/2014
// Design Name:   ProgramStatusRegister
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/ProgramStatusRegister_TestBench02.v
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

module ProgramStatusRegister_TestBench02;

	// Inputs
	reg clk;
	reg reset;
	reg CFwrite;
	reg LZNwrite;
	reg [4:0] PSRsel;
	reg [4:0] PSRwrite;

	// Outputs
	wire PSRcond;
	wire [31:0] PSRcondExt;

	// Instantiate the Unit Under Test (UUT)
	ProgramStatusRegister uut (
		.clk(clk), 
		.reset(reset), 
		.CFwrite(CFwrite), 
		.LZNwrite(LZNwrite), 
		.PSRsel(PSRsel), 
		.PSRwrite(PSRwrite), 
		.PSRcond(PSRcond), 
		.PSRcondExt(PSRcondExt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		CFwrite = 0;
		LZNwrite = 0;
		PSRsel = 0;
		PSRwrite = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here
		PSRwrite = 5'b10101;
		CFwrite = 1'b1;
		#20;
		CFwrite = 0;
		PSRwrite = 5'b00111;
		LZNwrite = 1'b1;

	end
      
	always #1 clk = ~clk;	
		
endmodule

