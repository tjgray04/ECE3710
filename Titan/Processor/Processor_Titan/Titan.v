`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:45 10/14/2014 
// Design Name: 
// Module Name:    Titan 
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
/* TOP MODULE FOR THE TITAN PROCESSOR
*	input: clk from Nexys3 - global clock
*	input: reset from Nexys3 - global reset
*	input:
*/
module Titan#(parameter WIDTH = 32)(input clk, reset, enROM//from Logic Controller
						
    );

	wire [WIDTH-1:0] instruction, immediate, RaData, PC, returnAddr, RaWriteData;
	wire [2:0] aluop;

	/* INSTANTIATE the Program Counter
	*	input: clk, from global clk
	*	input: reset, from global reset
	*  input: branch, from Logic Controller
	*	input: jump, from Logic Controller
	*	input: jumpRA, from Logic Controller
	*	input: PSRcond, from ProgramStatusRegister logic
	*	input: instruction, from instructionROM
	*	input: immediateExt, from sign extender in Execution Stage
	*  input: RaData, from regfile in Execution Stage
	* 	output: returnAdr, return address - send to Execution Stage to RegFile
	*	output: PC, Program Counter address
	*/
	ProgramCounter PC(.clk(clk), .reset(reset), .branch(branch), .jump(jump), .jumpRA(jumpRA), 
							.PSRcond(PSRcond), .instruction(instruction), .immediate(immediateExt), .RaData(RaData),
							.returnAdr(returnAdr), .PC(PC));
	
	/* Instantiate Memory Blocks - InstructionROM
	*  input: enable from Logic Controller
	*  input: PCadr from Program Counter
	*  output: instruction from memory
	*/
	InstructionROM instROM(.clk(clk), .enable(enROM), .PCadr(PC), .instruction(instruction));
	
	/* Instantiate an Instruction Decoder
	*	input: instruction, instructionROM
	*	output: opCode, operation code from instruction - to Logic Controller
	*	output: functCode, function code from instruction - to Logic Controller
	*	output: Rs, source register A from instruction
	*	output: Rt, source register B from instruction
	*	output: Rdest, destination register from instrucction
	*	output: immediate, immediate value from instruction
	*/
	InstructionDecoder InstDec(.RtSrcReg(RtSrcReg),.instruction(instruction), .opCode(opCode), .functCode(functCode), 
										.Rs(Rs), .Rt(Rt), .Rdest(Rdest), .immediate(immediate));
										
	/* Instantiate the Execution Stage
	*	input: clk from global clk
	*	input: reset from global reset
	*	input: aluSrcb from Logic Controller
	*	input: memSrc from Logic Controller
	*	input: regWriteEn from Logic Controller
	*	input: RaWriteEn from Logic Controller
	*	input: instruction from InstructionROM
	*	input: returnAddr is the return address from the Program Counter
	*	input: RaWriteData from Logic Controllers
	*	input: aluop is the ALU operation determined by the Logic Controller
	*	input: shifttype from Logic Controller
	*	output: immediateExt, extended immediate value to be used in Program Counter
	*/
	ExecutionStage ExStage(.clk(clk), .reset(reset), .enRAM(enRAM), .aluSrcb(aluSrcb), .memSrc(memSrc), .memWrite(memWrite),
		.regWriteEn(regWriteEn), .RaWriteEn(RaWriteEn), .opCode(opCode), .functCode(functCode), 
		.Rs(Rs), .Rt(Rt), .Rdest(Rdest), .immediate(immediate), .returnAddr(returnAddr), .RaWriteData(RaWriteData), 
		.aluop(aluop), .shifttype(shifttype), .immediateExt(immediateExt));
	
	/* Instantiate Logic Controller	
	*	input: opCode, from Instruction Decoder
	*	input: functCode, from Instruction Decoder
	*	input: Rs, from Instruction Decoder
	*	output: aluSrcb, constrol signal to input mux for Source B of ALU - Execution Stage
	*	output: shiftsrc, control signal to input mux for shifter - Execution Stage
	*	output: shiftType, control signal to shifter to determine shift type - logical or arithmetic
	*	output: memSrc, control signal to mux after ALU
	*	output: memRead, control signal to memory to read back
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
	LogicController LogicCtrl(.opCode(opCode), .functCode(functCode), .Rs(Rs), .aluSrcb(aluSrc), 
					.shiftsrc(shiftsrc), .shiftType(shiftType), .memSrc(memSrc), .memWrite(memWrite), 
					.enRAM(enRAM), .wbSrc(wbSrc), .wbPSR(wbPSR), .regWriteEn(regWriteEn), .RaWrite(RaWrite), .branch(branch), 
					.jump(jump), .jumpRA(jumpRA), .aluop(aluop), .PSRsel(PSRsel));
	
	/* Instantiate PSR Controller
	*	input: PSRsel from instruction[22:18] coming from instructionROM
	*	input: PSRwrite from ALU in the Execution Stage
	*	output: PSRcond, 1-bit, returns 1 (true) if condition (i.e. EQ, NE, GE, etc.) was true based on PSRwrite
	*/
	ProgramStatusRegister PSR(.PSRsel(instruction[22:18]), .PSRwrite(PSRwrite), .PSRcond(PSRcond));
	

	endmodule
