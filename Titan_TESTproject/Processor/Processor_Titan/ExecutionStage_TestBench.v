`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:28:13 10/06/2014
// Design Name:   ExecutionStage
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/ExecutionStage_TestBench.v
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

module ExecutionStage_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg aluSrcb;
	reg shiftSrc;
	reg memSrc;
	reg regWriteEn;
	reg RaWriteEn;
	reg [4:0] Rs;
	reg [4:0] Rt;
	reg [4:0] Rdest;
	reg [31:0] immediate;
	reg [31:0] RaWriteData;
//	reg [31:0] writeData;
	reg [2:0] aluop;
	reg shifttype;

	// Outputs
//	wire [31:0] ALUDataOUT;
//	wire [31:0] ShiftDataOUT;

	// Instantiate the Unit Under Test (UUT)
	ExecutionStage uut (
		.clk(clk), 
		.reset(reset), 
		.aluSrcb(aluSrcb), 
		.shiftSrc(shiftSrc), 
		.memSrc(memSrc), 
		.regWriteEn(regWriteEn), 
		.RaWriteEn(RaWriteEn), 
		.Rs(Rs), 
		.Rt(Rt), 
		.Rdest(Rdest), 
		.immediate(immediate), 
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
		Rs = 0;
		Rt = 0;
		Rdest = 0;
		immediate = 0;
		RaWriteData = 0;
		aluop = 0;
		shifttype = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
      
		#20;
		
		// Add stimulus here
		// Define which registers to use
		regWriteEn = 1; //enable a write		
		Rs = 0; // Source register is the zero register
		immediate = 32'd8; // Immediate is 8
		Rdest = 32'd1; // Destination is register 1
		// Perform an ADDi
		// Write an 8 to register 1
		aluop = 0; // perfoms and ADD
		aluSrcb = 0; // passes in immediate value
		memSrc = 1; // send output of ALU back to Rdest
		#10;
		// Write a 5 to register 2
		immediate = 32'd5; // Immediate is 5
		Rdest = 32'd2; // Destination is register 2
		
		#10;
		// ADD reg1 and reg2 together, store in reg3; result should be 8+5=13
		Rs = 32'd1;
		Rt = 32'd2;
		aluSrcb = 1; // passes in Rt to ALU
		Rdest = 32'd3;
		
		#10;
		// SUB; result should be 8-5=3;
		aluop = 3'b001;
		Rdest = 32'd4;
		
		#10;
		// OR; result should be 8|5=13;
		aluop = 3'b010;
		Rdest = 32'd5;
		
		#10;
		// AND; result should be 8*5=0;
		aluop = 3'b011;
		Rdest = 32'd6;
		
		#10;
		// XOR; result should be 8^5=13;
		aluop = 3'b100;
		Rdest = 32'd7;
		
		#10;
		// NOT; result should be ~32'd8=32'd(-9);
		aluop = 3'b101;
		Rdest = 32'd8;
		
		#10;
		// MULT; result should be 8x5=40;
		aluop = 3'b110;
		Rdest = 32'd9;
		
		#10;
		// CMP; result should be PSR = ?;
		aluop = 3'b111;
		Rdest = 32'd10;
		
		// Perform a shift
		#10;
		// immediate is 5, Rs is register 1, value of 8. Result should be 256
		shiftSrc = 0; // passes immediate value
		memSrc = 0; // passes the shifted value to the writeBack
		Rdest = 32'd11;
		
	end
      
	always #1 clk = ~clk;
	
endmodule

