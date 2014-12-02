`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:30:34 10/20/2014
// Design Name:   Titan
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/Titan_TestBench02.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Titan
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Titan_TestBench02;

	// Inputs
	reg clk;
	reg reset;
	reg aluSrcb;
	reg RtSrcReg;
	reg RaWriteEn;
	reg shiftsrc;
	reg shiftType;
	reg memSrc;
	reg memWrite;
	reg enROM;
	reg enRAM;
	reg wbSrc;
	reg wbPSR;
	reg regWriteEn;
	reg RaWrite;
	reg branch;
	reg jump;
	reg jumpRA;
	reg PCEn;
	reg CFwrite;
	reg LZNwrite;
	reg [2:0] aluop;
	reg [4:0] PSRsel;

	// Instantiate the Unit Under Test (UUT)
	Titan uut (
		.clk(clk), 
		.reset(reset),
		.aluSrcb(aluSrcb), 
		.RtSrcReg(RtSrcReg), 
		.shiftsrc(shiftsrc), 
		.shiftType(shiftType), 
		.memSrc(memSrc), 
		.RaWriteEn(RaWriteEn),
		.memWrite(memWrite), 
		.enROM(enROM), 
		.enRAM(enRAM), 
		.wbSrc(wbSrc), 
		.wbPSR(wbPSR), 
		.regWriteEn(regWriteEn), 
		.RaWrite(RaWrite), 
		.branch(branch), 
		.jump(jump), 
		.jumpRA(jumpRA),
		.PCEn(PCEn),
		.CFwrite(CFwrite),
		.LZNwrite(LZNwrite),
		.aluop(aluop), 
		.PSRsel(PSRsel)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		aluSrcb = 0;
		RtSrcReg = 0;
		RaWriteEn = 0;
		shiftsrc = 0;
		shiftType = 0;
		memSrc = 0;
		memWrite = 0;
		enROM = 0;
		enRAM = 0;
		wbSrc = 0;
		wbPSR = 0;
		regWriteEn = 0;
		RaWrite = 0;
		branch = 0;
		jump = 0;
		jumpRA = 0;
		PCEn = 0;
		CFwrite = 0;
		LZNwrite = 0;
		RtSrcReg = 0;
		aluop = 0;
		PSRsel = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
		enROM = 1;
		enRAM = 1;
    
		// Add stimulus here
		PCEn = 1;
		regWriteEn = 1;
		memSrc = 1;
		wbSrc = 1;
		CFwrite = 1; //turn on this enable signal for add instructions
		#3; // wait for addi to complete
//		PCEn = 0;
//		#2;
//		PCEn = 1;
//		#2; // wait for addi to complete
//		PCEn = 0;
//		#2;
//		PCEn = 1;
//		#2; // wait for addi to complete
//		PCEn = 0;
//		#2;
////		#3; // wait for addi to complete
//		
//		// change control logic for cmp
//		PCEn = 1;
//		CFwrite = 0; //trun off this enable signal 
//		regWriteEn = 0;
//		aluSrcb = 1;
//		aluop = 3'b111; //cmp
//		LZNwrite = 1; // turn on this siganl for cmp
//		#2; //wait
//		PCEn = 0;
//		#2;
//		
//		// change control logic for beq
//		PCEn = 1;
//		LZNwrite = 0;
//		aluop = 3'b000; //doesn't matter - just set back to zero
//		PSRsel = 5'b0_0000;//PSR will set PSRcond for EQ condition
//		branch = 1; // set banch high
//		// regWriteEn = 0; - keep write low
//		#2; // wait
//		PCEn = 0;
//		#2;
//		PCEn = 1;
//		branch = 0; // set branch low
//		// change control logic for add
//		CFwrite = 1;
//		aluSrcb = 1; //pull from RtData, not the immediate
//		regWriteEn = 1;
//		#2; //wait
//		PCEn = 0;
//		#2;
//		// change control logic for sub
//		PCEn = 1;
//		aluop = 3'b010;
//		#3; //wait
//		
////		// change control logic for store


		
		// Stop the program counter
		PCEn = 0;
		regWriteEn = 0;
		regWriteEn = 0;
	end
      
		always #1 clk = ~clk;
endmodule

