`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:22:48 10/20/2014
// Design Name:   LogicController
// Module Name:   C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/LogicController_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LogicController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LogicController_TestBench;

	// Inputs
	reg [3:0] opCode;
	reg [3:0] functCode;
	reg [4:0] Rs;

	// Outputs
	wire aluSrcb;
	wire shiftsrc;
	wire shiftType;
	wire memSrc;
	wire memWrite;
	wire enRAM;
	wire wbSrc;
	wire wbPSR;
	wire RtSrcReg;
	wire regWriteEn;
	wire RaWrite;
	wire branch;
	wire jump;
	wire jumpRA;
	wire [2:0] aluop;
	wire [4:0] PSRsel;

	// Instantiate the Unit Under Test (UUT)
	LogicController uut (
		.opCode(opCode), 
		.functCode(functCode), 
		.Rs(Rs), 
		.aluSrcb(aluSrcb), 
		.shiftsrc(shiftsrc), 
		.shiftType(shiftType), 
		.memSrc(memSrc),  
		.memWrite(memWrite), 
		.enRAM(enRAM), 
		.wbSrc(wbSrc), 
		.wbPSR(wbPSR), 
		.RtSrcReg(RtSrcReg), 
		.regWriteEn(regWriteEn), 
		.RaWrite(RaWrite), 
		.branch(branch), 
		.jump(jump), 
		.jumpRA(jumpRA), 
		.aluop(aluop), 
		.PSRsel(PSRsel)
	);

	initial begin
		// Initialize Inputs
		opCode = 0;
		functCode = 0;
		Rs = 0;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		
		// Check every possible instruction
		
		// {opCode,functCode}
		
		//add
		8'b0000_0101
		//addi
		8'b0101_xxxx
		//addu
		8'b0000_0110
		//sub
		8'b0000_1001
		//subi
		8'b1001_xxxx
		//mult
		8'b0000_1110
		//multi
		8'b1110_xxxx
		//cmp
		8'b0000_1011
		//cmpi
		8'b1011_xxxx
		//and
		8'b0000_0001
		//andi
		8'b0001_xxxx
		//or
		8'b0000_0010
		//ori
		8'b0010_xxxx
		//xor
		8'b0000_0011
		//xori
		8'b0011_xxxx
		//not
		8'b0000_0100
		//lsh
		8'b1000_0100
		//lshi S TAKEN CARE OF IN SHIFTER
		8'b1000_xxxx
		//ash
		8'b1000_0110
		//ashi S TAKEN CARE OF IN SHIFTER
		8'b1000_xxxx
		//ld
		8'b0100_0101 

		//str
		8'b0100_0100

		//scond
		8'b0100_1101
		//bcond
		8'b1100_xxxx

		//j
		8'b0100_xxxx
		//jal 
		8'b1111_xxxx
		//jra
		8'b0111_xxxx

		
		
	end
      
endmodule

