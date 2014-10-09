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
//////////////////////////////////////////////////////////////////////////////////
module ExecutionStage#(parameter REGBITS = 5,WIDTH = 32)(
		// I/O of the RegFile
		input clk, reset, 
		input aluSrcb, // determines which data gets passed into the ALU - written in testbench
		input shiftSrc, // determines which data gets passed into the shifter - written in testbench
		input memSrc, // determines which data gets written back to regFile (called memSrc for future use in memory)
		input regWriteEn, RaWriteEn, // written in testbench
		input [REGBITS-1:0] Rs, Rt, Rdest, //values to be written in testbench
		input [WIDTH-1:0] immediate, //already sign extended, value given in testbench
		input [WIDTH-1:0] RaWriteData, // value given in testbench
//		input [WIDTH-1:0] writeData, // give the memory an original value
//		output[WIDTH-1:0] RaData, // not necessary to test because its part of another datapath
		// I/O of the ALU
		input [2:0] aluop, // written in testbench
//		output [WIDTH-1:0] ALUDataOUT,
//		output [4:0] PSRwrite,
		// I/O of the Shifter
		input shifttype // determines the shift type of the shifter (logical or arithmetic) - set in testbench
		
		//OUTPUTS FOR TESTBENCH USE ONLY
//		output [WIDTH-1:0] ALUDataOUT, ShiftDataOUT, Data_2_RegFile, 
		);
		
	wire [4:0] PSRwrite;
	wire [WIDTH-1:0] RsData, RtData, RaData, ALUMuxOUT, ShiftMuxOUT;
	wire [WIDTH-1:0] ShiftDataOUT, ALUDataOUT, Data_2_RegFile;
	
	//Instantiate register file
	RegFile regfile(
		.clk(clk), //input
		.reset(reset), //input
		.regWriteEn(regWriteEn), //input
		.RaWriteEn(RaWriteEn), //input
		.Rs(Rs),	//left argument - input
		.Rt(Rt),	//right argument - input
		.Rdest(Rdest),	//write destination - input
		.RaWriteData(RaWriteData),	//return address register data
		.writeData(Data_2_RegFile), //data to write back to destination register - input
		.RsData(RsData), //output
		.RtData(RtData), //output
		.RaData(RaData)  //output
    );
	
	//Istantiate ALU
	ALU alu(
    .arg1(RsData), //INPUT - output from regFile
    .arg2(ALUMuxOUT), //INPUT - output from regFile
	 .aluop(aluop), //INPUT
    .result(ALUDataOUT), //OUTPUT - input into a mux
    .PSRwrite(PSRwrite) //OUTPUT - not used right now...
    );
	 
	// Instantiate a MUX for data inputed in to ALU
	Mux ALUsrcbMux(
		.d0(immediate), //
		.d1(RtData),
		.select(aluSrcb),
		.out(ALUMuxOUT)
    ); 
	
	// Instantiate the Shifter
	Shifter shifter (
		.arg(RsData), //INPUT - output RsData from regFile
		.shiftamount(ShiftMuxOUT), 
		.shifttype(shifttype), 
		.result(ShiftDataOUT)
	);

	// Instantiate a MUX for data inputed in to shifter
	Mux ShiftMux(
		.d0(immediate), //shift ammount
		.d1(RtData), //
		.select(shiftSrc),
		.out(ShiftMuxOUT)
    );
	 
	// Instantiate a MUX for data inputed back into regFile
	Mux ALU_2_RegFile(
		.d0(ShiftDataOUT), //shift ammount
		.d1(ALUDataOUT), //
		.select(memSrc),
		.out(Data_2_RegFile)
    );

endmodule
