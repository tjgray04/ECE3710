`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:02:31 10/14/2014
// Design Name:   ExecutionStage
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan01/ExecutionStage_TestBench02.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ExecutionStage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ExecutionStage_TestBench02;

	// Inputs
	reg clk;
	reg reset;
	reg aluSrcb;
	reg shiftSrc;
	reg memSrc;
	reg regWriteEn;
	reg RaWriteEn;
	reg [31:0] instruction;
	reg [31:0] RaWriteData;
	reg [2:0] aluop;
	reg shifttype;

	// Instantiate the Unit Under Test (UUT)
	ExecutionStage uut (
		.clk(clk), 
		.reset(reset), 
		.aluSrcb(aluSrcb), 
		.shiftSrc(shiftSrc), 
		.memSrc(memSrc), 
		.regWriteEn(regWriteEn), 
		.RaWriteEn(RaWriteEn), 
		.instruction(instruction), 
		.RaWriteData(RaWriteData), 
		.aluop(aluop), 
		.shifttype(shifttype)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		aluSrcb = 0;
		shiftSrc = 0;
		memSrc = 0;
		regWriteEn = 0;
		RaWriteEn = 0;
		instruction = 0;
		RaWriteData = 0;
		aluop = 0;
		shifttype = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here
		
		// first put data into two registers to perform functions with, using addi instruction
		regWriteEn = 1; // enable write back to registers
		aluop = 0; // ALU will perform an add
		aluSrcb = 0; // passes in immediate value
		memSrc = 1; // send output of ALU back to Rdest
		
		// addi R1, R0, 4
		#10 instruction = 32'b0101_00001_00000_000000000000000100; 
		// addi R2, R0, -4
		#20 instruction = 32'b0101_00101_00000_000000000000000101; //111111111111111100
		// add R3, R1, R2
		#20;
	   instruction = 32'b0000_00011_00001_00101_000000000_0101;
		aluSrcb = 1; // passes Rt value into ALU
		
	end
	
	always #1 clk=~clk;
      
endmodule

