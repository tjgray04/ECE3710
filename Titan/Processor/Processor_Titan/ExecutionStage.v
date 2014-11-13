`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:09 10/06/2014 
// Design Name: 
// Module Name:    ExecutionStage 
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
//				CHANGE DATA_2_REGFILE AS DATA WILL NEED TO GO TO MEMORY BLOCK
//
//////////////////////////////////////////////////////////////////////////////////
/*	EXECUTION STAGE - Contains register file, shifter, ALU
*	input: clk, global clock from top module
*	input: reset, global reset from top module
*	input: aluSrcb, mux control signal determining input to source B of ALU, from Logic Controller
*	input: memSrc, mux control signal determining what gets written to memory, either ALU output of shifter output, from Logic Controller
*	input: regWriteEn, from Logic Controller - enable write back to register
*	input: RaWriteEn, from Logic Controller - mux control signal set to 1 if writing return address value to a register
*	input: opCode, operation code from Instruction Decoder
*	input: functCode, function code from Instruction Decoder
*	input: Rs, source register A from Instruction Decoder
*	input: Rt, source register B from Instruction Decoder
*	input: Rdest, destination register from Instruction Decoder
*	input: immediate, immediate value from Instruction Decoder
*	input: returnAddr, from Program Counter (PC + 1)
*	input: RaWriteData, enables write back to return address in RegFile
*	input: aluop, from Logic Controller, based on instrucion opCode - controls ALU
*	input: shifttype, from Logic Controller, based on instruction - controls shifter (logical or arithmetic)
* 	output: immediateExt, extended immediate value to be used in Program Counter
*	output: PSRwrite, Program Status Register output from ALU
*/
module ExecutionStage#(parameter  OPBITS = 4, FUNCTBITS = 4, REGBITS = 5, IMMBITS = 18, ALUOPBITS = 3, WIDTH = 32)
		(input clk, reset, aluSrcb, shiftSrc, memSrc, regWriteEn, RaWriteEn, shifttype, RtSrcReg, wbPSR,wbSrc,
		input [OPBITS-1:0] opCode, 
		input [FUNCTBITS-1:0] functCode,
		input [REGBITS-1:0] Rs,Rt,Rdest,
		input [IMMBITS-1:0] immediate,
		input [WIDTH-1:0] returnAddr, RaWriteData, PSRcondExt,
		input [ALUOPBITS-1:0] aluop,
		input [WIDTH-1:0] memControllerData,
		output [WIDTH-1:0] immediateExt,
		output [WIDTH-1:0] RaData,
		output [REGBITS-1:0] PSRwrite,
		output [WIDTH-1:0] memAddr, memWriteData
		);
	
	// Declare internal wires/bus
	wire [WIDTH-1:0] RsData, RtData, ALUMuxOUT, ShiftMuxOUT;
	wire [WIDTH-1:0] ShiftDataOUT, ALUDataOUT, Data_2_dataRAM, Data_2_RegFile, data_2_writeData, writeData;
	wire [REGBITS-1:0] RtReg, PSRsel;
	
	/*	Instantiate REGISTER FILE
	*	input: clk, global clock from top module
	*	input: reset, global reset from top module
	*	input: regWriteEn, from Logic Controller - enable write back to register
	*	input: RaWriteEn, from Logic Controller - control signal enabling writing to return address register reg31
	*	input: Rs, source register A from Instruction Decoder
	*	input: RtRegIn, source register B from RtSrcReg MUX to determine input for Rt
	* 	input: Rdest, destination register from Instruction Decoder
	*	input: writeData, from writeDataMux - data to write back to destination register
	*	output: RsData, source register A data output
	*	output: RtData, source register B data output
	*	output: RaData, return address for Program Counter
	*/
	RegFile regfile(.clk(~clk), .reset(reset), .regWriteEn(regWriteEn), .RaWriteEn(RaWriteEn), .Rs(Rs),	.Rt(Rt),
						 .Rdest(Rdest), .writeData(writeData), .RsData(RsData), .RtData(RtData), .RaData(RaData));
	
	assign memWriteData = RtData;
	
	/* Instantiate a MUX for Rt source register; either Rt or Rdest
	*	input: Rt, from Instruction Decoder
	*	input: Rdest, from Instruction Decoder
	*	input: RtSrcReg, from Logic Controller
	*	output: RtReg, register to be used as Rt in RegFile
	*/
	//Mux #(.WIDTH(5)) RtSrcRegMUX(.d0(Rt), .d1(Rdest), .select(RtSrcReg), .out(RtReg));
	
	/* Instantiate a MUX for writeData (from memory, or from return address)
	*	input: Data_2_RegFile, data from ALU operation/memory
	*	input: returnAddr, return address from program counter
	*	input: RaWriteEn, from Control Logic - if (1), pass return address
	*	output: writeData, data to be written back to RegFile
	*/
	Mux RaWriteEnMUX(.d0(data_2_writeData), .d1(returnAddr), .select(RaWriteEn), .out(writeData));
	
	/*	Istantiate ALU
	*	input: RsData, from RegFile
	*	input: ALUMuxOUT, from mux for either Rt from RegFile or 32-bit immediate value
	*	input: aluop, from Logic Controller
	*	output: ALUDataOUT, output from the ALU
	*	output: PSRwrite, program status register - to go to PSR logic
	*/
	ALU alu(.reset(reset), .arg1(RsData), .arg2(ALUMuxOUT), .aluop(aluop), .result(ALUDataOUT), .PSRwrite(PSRwrite));
	 
	/* Instantiate a MUX for data inputed in to ALU
	*	input: immediateExt, immediate value to use for operations
	*	input: RtData, source register B to use for operations
	*	input: aluSrcb, from Logic Controller
	*	output: ALUMuxOUT, data to input into ALU
	*/
	Mux aluSrcbMUX(.d0(immediateExt), .d1(RtData), .select(aluSrcb), .out(ALUMuxOUT)); 
	
	/* Instantiate the Shifter
	*	input: RsData, from RegFile - data to be shifted
	* 	input: shiftammount = ShiftMuxOUT, from ShiftMUX
	*	input: shifttype, from Logic Controller - either logical (shifttype = 0) or arithmetic shift (shifttype = 1)
	*	output: result = ShiftDataOUT, shifted data
	*/
	Shifter shifter (.arg(RsData), .shiftamount(ShiftMuxOUT), .shifttype(shifttype), .result(ShiftDataOUT));

	/* Instantiate a MUX for data inputed in to shifter
	*	input: immediateExt, possible shift ammount, from Sign Extender
	*	input: RtData, possible shift amount, from Register file
	*	input: shiftSrc, mux control signal from Logic Controller
	*	output: ShiftMuxOUT, input shift amount to Shifter
	*/
	Mux shiftSrcMUX(.d0(immediateExt), .d1(RtData), .select(shiftSrc), .out(ShiftMuxOUT));
	 
	/* Instantiate a MUX for data inputed back into dataRAM
	*	input: ShiftDataOUT, output from Shifter
	*	input: ALUDataOUT, output from ALU
	*	input: memSrc, control signal from Logic Controller
	*	output: Data_2_RegFile, output data to 
	*/
	Mux memSrcMUX(.d0(ShiftDataOUT), .d1(ALUDataOUT), .select(memSrc), .out(Data_2_dataRAM));//ALU_2_dataRAM
	
	assign memAddr = Data_2_dataRAM;

	/* Instantiate a SignExtender to extend the immediate value to 32-bits
	*	input: immediate, 18-bit immdiate value from instruction decoder
	*	output: immediateExt, 32-bit sign extended immediate value
	*/
	SignExtender SignExtend1(.data_in(immediate), .data_out(immediateExt));
	
	
	/* Instantiate a MUX for data inputed back into regFile
	*	input: memControllerData, output from Shifter
	*	input: Data_2_dataRAM, output from ALU_2_dataRAM MUX
	*	input: wbSrc, control signal from Logic Controller
	*	output: Data_2_RegFile, output data to RegFile
	*/
	Mux wbSrcMUX(.d0(memControllerData), .d1(Data_2_dataRAM), .select(wbSrc), .out(Data_2_RegFile));
	
	/* Instantiate a MUX for to determine if writing back value from wbSrcMUX, or value from PSRcondExt
	*	input: Data_2_RegFile, data from ALU operation/memory
	*	input: returnAddr, return address from program counter
	*	input: RaWriteEn, from Control Logic - if (1), pass return address
	*	output: writeData, data to be written back to RegFile
	*/
	Mux wbPSRMUX(.d0(Data_2_RegFile), .d1(PSRcondExt), .select(wbPSR), .out(data_2_writeData));
	
endmodule
