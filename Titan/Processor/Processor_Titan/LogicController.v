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
*	input: opCode
*	input: functCode
*	input: Rs
*	output: aluSrcb
*	output: shiftsrc
*	output: shiftType
*	output: memSrc
*	output: memRead
*	output: memWrite
*	output: wbSrc
*	output: wbPSR
*	output: regWriteEn
*	output: RaWrite
*	output: branch
*	output: jump
*	output: jumpRA
*	output: PSRsel
*/
module LogicController#(parameter ALUOPBITS = 3, OPBITS = 4, FUNCTBITS = 4, REGBITS = 5)
	(input [OPBITS-1:0] opCode,
	 input [FUNCTBITS-1:0] functCode,
	 input [REGBITS-1:0] Rs,
	 output reg aluSrcb, shiftsrc, shiftType, memSrc, memRead, memWrite, enRAM, wbSrc, wbPSR, RtSrcReg, regWriteEn, RaWrite, branch, jump, jumpRA,
	 output reg [ALUOPBITS-1:0] aluop,
	 output reg [REGBITS-1:0] PSRsel);

	always@(*)
	begin
		aluSrcb = 0;
		shiftsrc = 0;
		shiftType = 0;
		memSrc = 0;
		memRead = 0;
		memWrite = 0;
		enRAM = 1;
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
