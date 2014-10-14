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
module ExecutionStage#(parameter  OPBITS = 4, FUNCTBITS = 4, REGBITS = 5, IMMBITS = 18, WIDTH = 32)(
		// I/O of the RegFile
		input clk, reset, 
		input aluSrcb, // determines which data gets passed into the ALU - written in testbench
		input shiftSrc, // determines which data gets passed into the shifter - written in testbench
		input memSrc, // determines which data gets written back to regFile (called memSrc for future use in memory)
		input regWriteEn, RaWriteEn, // written in testbench
//		input [REGBITS-1:0] Rs, Rt, Rdest, //values to be written in testbench
		input [WIDTH-1:0] instruction, // instruction value to be written in testbench
		input [WIDTH-1:0] returnAddr, // return address to be stored in RA register (RAM[?])
//		input [WIDTH-1:0] immediate, //already sign extended, value given in testbench
		input [WIDTH-1:0] RaWriteData, // value given in testbench
		// I/O of the ALU
		input [2:0] aluop, // written in testbench
		// I/O of the Shifter
		input shifttype // determines the shift type of the shifter (logical or arithmetic) - set in testbench
		);
		
	wire [4:0] PSRwrite;
	wire [WIDTH-1:0] RsData, RtData, RaData, ALUMuxOUT, ShiftMuxOUT;
	wire [WIDTH-1:0] ShiftDataOUT, ALUDataOUT, Data_2_RegFile;
	wire [OPBITS-1:0] opCode;
	wire [FUNCTBITS-1:0] functCode;
	wire [IMMBITS-1:0] immediate;
	wire [WIDTH-1:0] immediateExt;
	wire [REGBITS-1:0] Rs,Rt,Rdest;
		
	// Instantiate an Instruction Decoder
	InstructionDecoder InstDec(.instruction(instruction),
								  .opCode(opCode),
								  .functCode(functCode), 
								  .Rs(Rs), .Rt(Rt), .Rdest(Rdest),
								  .immediate(immediate));
	
	//Instantiate register file
	RegFile regfile(.clk(clk), //input
		.reset(reset), //input
		.regWriteEn(regWriteEn), //input
		.RaWriteEn(RaWriteEn), //input
		.Rs(Rs),	//left argument - input
		.Rt(Rt),	//right argument - input
		.Rdest(Rdest),	//write destination - input
//		.RaWriteData(RaWriteData),	//return address register data
		.writeData(writeData), //data to write back to destination register - input, comes from writeDataMUX
		.RsData(RsData), //output
		.RtData(RtData), //output
		.RaData(RaData)  //output
    );
	
	// Instantiate a MUX for writeData (from memory, or from return address)
	Mux writeDataMUX(.d0(Data_2_RegFile), .d1(returnAddr), .select(RaWriteEn), .out(writeData));
	
	//Istantiate ALU
	ALU alu(.arg1(RsData), //INPUT - output from regFile
    .arg2(ALUMuxOUT), //INPUT - output from regFile
	 .aluop(aluop), //INPUT
    .result(ALUDataOUT), //OUTPUT - input into a mux
    .PSRwrite(PSRwrite) //OUTPUT - not used right now...
    );
	 
	// Instantiate a MUX for data inputed in to ALU
	Mux ALUsrcbMux(.d0(immediateExt), //extended immediate
		.d1(RtData),
		.select(aluSrcb),
		.out(ALUMuxOUT)
    ); 
	
	// Instantiate the Shifter
	Shifter shifter (.arg(RsData), //INPUT - output RsData from regFile
		.shiftamount(ShiftMuxOUT), 
		.shifttype(shifttype), 
		.result(ShiftDataOUT)
	);

	// Instantiate a MUX for data inputed in to shifter
	Mux ShiftMux(.d0(immediateExt), //shift ammount, denoted by extended immediate
		.d1(RtData), //
		.select(shiftSrc),
		.out(ShiftMuxOUT)
    );
	 
	// Instantiate a MUX for data inputed back into regFile
	Mux ALU_2_RegFile(.d0(ShiftDataOUT), //shift ammount
		.d1(ALUDataOUT), //
		.select(memSrc),
		.out(Data_2_RegFile)
    );

	// Instantiate a SignExtender to extend the immediate value to 32-bits
	SignExtender SignExtend1(.data_in(immediate), // immediate value from instruction decoder 
									.data_out(immediateExt) // extended immediate
									);
	
	
	
	
endmodule
