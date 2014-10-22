`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:06 10/16/2014 
// Design Name: 
// Module Name:    LogicController 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*	LOGIC CONTROLLER
*	input: opCode, from Instruction Decoder
*	input: functCode, from Instruction Decoder
*	input: Rs, from Instruction Decoder
*	output: aluSrcb, constrol signal to input mux for Source B of ALU - Execution Stage
*	output: shiftsrc, control signal to input mux for shifter - Execution Stage
*	output: shiftType, control signal to shifter to determine shift type - logical or arithmetic
*	output: memSrc, control signal to mux after ALU
*	output: memWrite, control signal to memory to write
*	output: wbSrc, control signal to MUX after dataRAM to decide which data to write back to RegFile
*	output: wbPSR, MUX in path to writeData for RegFile to determine if writing back PSR or not
*	output: regWriteEn, write back signal to RegFile to enable writing to a register
*	output: RaWrite, control siganl to MUX to determine writing back return address RA 
*	output: branch, control signal to branch AND gate signifying a branch will take place
*	output: jump, control signal to jump MUX signifying a jump will take place
*	output: jumpRA, control signal to jumpRA MUX signifying a jumpRA will take place
*	output: PSRsel, control signal to PSR MUX to determine output bit based on desired condition
*/
module LogicController#(parameter ALUOPBITS = 3, OPBITS = 4, FUNCTBITS = 4, REGBITS = 5)
	(input [OPBITS-1:0] opCode,
	 input [FUNCTBITS-1:0] functCode,
	 input [REGBITS-1:0] Rs,
	 output reg aluSrcb, shiftsrc, shiftType, memSrc, memWrite, enRAM, enROM, wbSrc, wbPSR, RtSrcReg, regWriteEn, RaWrite, branch, jump, jumpRA,
	 output reg [ALUOPBITS-1:0] aluop,
	 output reg [REGBITS-1:0] PSRsel);

	always@(*)
	begin
		aluSrcb = 0;
		shiftsrc = 0;
		shiftType = 0;
		memSrc = 0;
		//memRead = 0;
		memWrite = 0;
		enRAM = 1;
		enROM = 1;
		wbSrc = 0;
		wbPSR = 0;
		RtSrcReg = 0;
		regWriteEn = 0;
		RaWrite = 0;
		branch = 0;
		jump = 0;
		jumpRA = 0;
		aluop = 0;
		PSRsel = Rs;
		casex({opCode,functCode})
			8'b0000_0101: begin //add
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
							  end 
			8'b0101_xxxx: begin //addi
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
							  end
			8'b0000_0110: begin //addu
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
							  end
			8'b0000_1001: begin //sub
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									aluop = 3'b001;
							  end
			8'b1001_xxxx: begin //subi
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b001;
							  end
			8'b0000_1110: begin //mult
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									aluop = 3'b110;
							  end
			8'b1110_xxxx: begin //multi
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b110;
							  end
			8'b0000_1011: begin //cmp
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									aluop = 3'b111;
							  end
			8'b1011_xxxx: begin //cmpi
									wbSrc = 1;
									memSrc = 1;
									aluop = 3'b111;
							  end
			8'b0000_0001: begin //and
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									aluop = 3'b011;
							  end
			8'b0001_xxxx: begin //andi
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b011;
							  end
			8'b0000_0010: begin //or
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									aluop = 3'b010;
							  end
			8'b0010_xxxx: begin //ori
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b010;
							  end
			8'b0000_0011: begin //xor
									wbSrc = 1;
									memSrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									aluop = 3'b100;
							  end
			8'b0011_xxxx: begin //xori
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b100;
							  end
			8'b0000_0100: begin //not
									wbSrc = 1;
									memSrc = 1;
									regWriteEn = 1;
									aluop = 3'b101;
							  end
			8'b1000_0100: begin //lsh
									wbSrc = 1;
									shiftsrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
							  end
			8'b1000_xxxx: begin //lshi S TAKEN CARE OF IN SHIFTER
									wbSrc = 1;
									regWriteEn = 1;
							  end
			8'b1000_0110: begin //ash
									wbSrc = 1;
									shiftsrc = 1;
									aluSrcb = 1;
									regWriteEn = 1;
									shiftType = 1;
							  end
 			8'b1000_xxxx: begin //ashi S TAKEN CARE OF IN SHIFTER
									wbSrc = 1;
									regWriteEn = 1;
									shiftType = 1;
							  end
			8'b0100_0101: begin //ld
									memSrc = 1;
									regWriteEn = 1;
							  end
			8'b0100_0100: begin //str
									memSrc = 1;
									memWrite = 1;
									RtSrcReg = 1;
							  end
			8'b0100_1101: begin //scond
									wbPSR = 1;
									regWriteEn = 1;
							  end
			8'b1100_xxxx: begin //bcond
									branch = 1;
							  end
			8'b0100_xxxx: begin //j
									jump = 1;
							  end
			8'b1111_xxxx: begin //jal
									jump = 1;
									RaWrite = 1;
							  end
			8'b0111_xxxx: begin //jra
									jumpRA = 1;
							  end
//			default: 
		endcase
	end

endmodule
