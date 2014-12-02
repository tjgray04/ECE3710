`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:02:09 10/21/2014 
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
module LogicController#(parameter OPBITS =4, FUNCTBITS = 4)
		( input clk, reset,
		  input [OPBITS-1:0] opcode,
		  input [FUNCTBITS-1:0] functionCode,
		  output reg branch, jump, jumpRA, CFWrite, LZNWrite, wbPSR, RtSrcReg, wbSrc, memSrc, shiftSrc, aluSrcb ,regWriteEn,
		  output reg raWrite, shiftType, memWrite, pcEn,
		  output reg [2:0] aluop
		);
		
		//Declare State variables.
		parameter	EX  = 1'b0;
		parameter   MEM = 1'b1;
		reg 			PS, NS;
		
		//Declare ALU operations
		parameter	opADD = 3'b000,
						opSUB = 3'b001,
						opOR  = 3'b010,
						opAND = 3'b011,
						opXOR = 3'b100,
						opNOT = 3'b101,
						opMULT= 3'b110,
						opCMP = 3'b111;
		
		//Declare Op Code states for I-Type instructions.
		parameter ADDI  = 4'b0101,
					 SUBI  = 4'b1001,
					 MULTI = 4'b1110,
					 CMPI  = 4'b1011,
					 ANDI  = 4'b0001,
					 ORI   = 4'b0010,
					 XORI  = 4'b0011,
					 BCOND = 4'b1100,
					 LOAD  = 4'b0111,
				    STR   = 4'b1010;
		//Declare Op Code States for J-Type instructions.
		parameter J     = 4'b1101,
					 JAL   = 4'b1111,
					 JRA   = 4'b0110;
					 
		//Declare Op Code states for R-type instructions.
		parameter RTYPE   = 4'b0000,
					 RTYPE2  = 4'b1000;
					 
		//Unique R-type Scond
		parameter SCOND = 4'b0100;
					 
		//Declare Function Code States for RTYPE instructions.
		parameter ADD  = 4'b0101,
					 ADDU = 4'b0110,
					 SUB  = 4'b1001,
					 MULT = 4'b1110,
					 CMP  = 4'b1011,
					 AND  = 4'b0001,
					 OR   = 4'b0010,
					 XOR  = 4'b0011,
					 NOT  = 4'b0100;

		//DeclareFunction Code States for RTYPE2 instructions.
		parameter LSH  = 4'b0100,
					 LSHI = 4'b0000, //000s, s is taken care of in the shifter.
					 ASH  = 4'b0110,
					 ASHI = 4'b0011; //001s, s is taken care of in the shifter.
			
		
		//Present state update
		always@(posedge clk)
		begin
			if(reset)
				PS <= EX;
			else
				PS <= NS;
		end
		
		//Next state logic
		always@(*)
		begin
			case(PS)
				EX:	if((opcode == LOAD) || (opcode == STR))	//Go to MEM state only on load or store instructions
							NS <= MEM;
						else
							NS <= EX;
				MEM:	NS <= EX;
				default:	 NS <= EX;
			endcase
		end
		
		//Output logic
		always@(*)
		begin
			//Initialize outputs for a general R-Type instruction
			branch <= 1'b0;
			jump <= 1'b0; 
			jumpRA <= 1'b0; 
			CFWrite <= 1'b0;
			LZNWrite <= 1'b0;
			wbPSR <= 1'b0;
			RtSrcReg <= 1'b0;
			wbSrc <= 1'b0;
			memSrc <= 1'b0;
			shiftSrc <= 1'b0;
			aluSrcb <= 1'b0;
			regWriteEn <= 1'b0;
			raWrite <= 1'b0;
			shiftType <= 1'b0;
			memWrite <= 1'b0;
			aluop <= opADD;
			//Define outputs not affected by current state
			case(opcode)
				//I-type instructions
				ADDI:
						begin
						CFWrite <= 1'b1;		//update CF flags
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						end
				SUBI:
						begin
						CFWrite <= 1'b1;		//update CF flags
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						aluop <= opSUB;		//subtract
						end
				MULTI:
						begin
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						aluop <= opMULT;		//multiply
						end
				CMPI:
						begin
						LZNWrite <= 1'b1;		//update LZN flags
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						aluop <= opCMP;		//compare
						end
				ANDI:
						begin
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						aluop <= opAND;		//and
						end
				ORI:
						begin
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						aluop <= opOR;			//or
						end
				XORI:
						begin
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						regWriteEn <= 1'b1;	//write back
						aluop <= opXOR;		//xor
						end
				BCOND:
						begin
						branch <= 1'b1;		//branch
						end
				//J-type instructions
				J:
						begin
						jump <= 1'b1;			//jump
						end
				JAL:
						begin
						jump <= 1'b1;			//jump
						raWrite <= 1'b1;		//link
						end
				JRA:
						begin
						jumpRA <= 1'b1;		//jumpRa
						end
				//RTYPE instructions
				RTYPE:
						case(functionCode)
							ADD:
									begin
									CFWrite <= 1'b1;		//update CF flags
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opADD;		//add
									end
							ADDU:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opADD;		//add
									end
							SUB:
									begin
									CFWrite <= 1'b1;		//update CF flags
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opSUB;		//sub
									end
							MULT:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opMULT;		//mult
									end
							CMP:
									begin
									LZNWrite <= 1'b1;		//update LZN flags
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									aluop <= opCMP;		//compare
									end
							AND:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opAND;		//and
									end
							OR:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opOR;			//or
									end
							XOR:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opXOR;		//xor
									end
							NOT:
									begin
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									regWriteEn <= 1'b1;	//write back
									aluop <= opNOT;		//add
									end
							default:
									begin
									CFWrite <= 1'b1;		//update CF flags
									wbSrc <= 1'b1;			//use alu ouput, not mem
									memSrc <= 1'b1;		//use alu output, not shifter
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									aluop <= opADD;		//add
									end
						endcase
			//RTYPE2 instructions
			RTYPE2:
						case(functionCode)
							LSH:
									begin
									wbSrc <= 1'b1;			//use alu output, not mem
									shiftSrc <= 1'b1;		//logical shift
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									end
							LSHI:
									begin
									wbSrc <= 1'b1;			//use alu output, not mem
									regWriteEn <= 1'b1;	//write back
									end
							ASH:
									begin
									wbSrc <= 1'b1;			//use alu output, not mem
									shiftSrc <= 1'b1;		//logical shift
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									shiftType <= 1'b1;	//arithmetic shift
									end
							ASHI:
									begin
									wbSrc <= 1'b1;			//use alu output, not mem
									shiftSrc <= 1'b1;		//logical shift
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									shiftType <= 1'b1;	//arithmetic shift
									end
							default:
									begin
									wbSrc <= 1'b1;			//use alu output, not mem
									shiftSrc <= 1'b1;		//logical shift
									aluSrcb <= 1'b1;		//use register arg
									regWriteEn <= 1'b1;	//write back
									end
						endcase
			//MEMTYPE instructions
			LOAD:
					begin
					memSrc <= 1'b1;		//use alu output, not shifter
					regWriteEn <= 1'b1;	//write back
					end
			STR:
					begin
					memSrc <= 1'b1;		//use alu output, not shifter
					memWrite <= 1'b1;		//write to memory
					RtSrcReg <= 1'b1;		//Use Rdest as Rt
					end
			SCOND:
					begin
					regWriteEn <= 1'b1;	//write back
					wbPSR <= 1'b1;			//write cond to reg
					end
			default:
						begin
						wbSrc <= 1'b1;			//use alu ouput, not mem
						memSrc <= 1'b1;		//use alu output, not shifter
						end
			endcase
		end
		
		//Program counter enable
		always@(*)
		begin
				case(PS)
				EX:	if((opcode == LOAD) || (opcode == STR))
							pcEn <= 1'b0;		//if the instruction is a load or a store, pause the program counter
						else
							pcEn <= 1'b1;		//otherwise increment
				MEM:	pcEn <= 1'b1;			//automatically go back to incrementing
				default:	 pcEn <= 1'b0;
			endcase
		end

endmodule
