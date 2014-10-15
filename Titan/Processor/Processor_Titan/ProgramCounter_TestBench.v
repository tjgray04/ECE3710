`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:12:13 10/14/2014
// Design Name:   ProgramCounter
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan01/ProgramCounter_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ProgramCounter_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg branch;
	reg jump;
	reg jumpRA;
	reg PSRcond;
	reg [31:0] instruction;
	reg [31:0] immediate;
	reg [31:0] RaData;

	// Outputs
	wire [31:0] PC, returnAdr;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.clk(clk), 
		.reset(reset), 
		.branch(branch), 
		.jump(jump), 
		.jumpRA(jumpRA), 
		.PSRcond(PSRcond), 
		.instruction(instruction), 
		.immediate(immediate), 
		.RaData(RaData),
		.returnAdr(returnAdr),
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		branch = 0;
		jump = 0;
		jumpRA = 0;
		PSRcond = 0;
		instruction = 0;
		immediate = 0;
		RaData = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
      instruction = 32'b0101_00000_00000_000000000000000100;
		// Add stimulus here
		#20;
		// branch
		branch = 1;
		PSRcond = 1;
		immediate = 32'd11; //+4
		#50;
		immediate = 32'hffff_fffc; //-4
		// jump
		#50;
		branch = 0;
		jump = 1;
		#50;
		//
		instruction = 32'b0101_1111111111111111111111111100; // immediate value of -4
		
		// jumpRA

	end
      
	always #1 clk = ~clk;
	
endmodule

