`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:43:04 10/14/2014
// Design Name:   InstructionDecoder
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan01/InstructionDecoder_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionDecoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionDecoder_TestBench;

	// Inputs
	reg [31:0] instruction;

	// Outputs
	wire [3:0] opCode;
	wire [3:0] functCode;
	wire [4:0] Rs;
	wire [4:0] Rt;
	wire [4:0] Rdest;
	wire [17:0] immediate;

	// Instantiate the Unit Under Test (UUT)
	InstructionDecoder uut (
		.instruction(instruction), 
		.opCode(opCode), 
		.functCode(functCode), 
		.Rs(Rs), 
		.Rt(Rt), 
		.Rdest(Rdest), 
		.immediate(immediate)
	);

	initial begin
		// Initialize Inputs
		instruction = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		instruction = 32'b0000_00011_00001_00010_000000000_0101; // add R3, R1, R2
		#10 instruction = 32'b0101_00100_00011_000000000000000100; // addi R4, R3, 4

	end
      
endmodule

