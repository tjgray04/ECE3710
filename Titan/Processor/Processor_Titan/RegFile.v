`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:28:59 10/01/2014 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile#(parameter REGBITS = 5,WIDTH = 32)(
		input clk,
		input reset,
		input regWriteEn,
		input RaWriteEn,
		input[REGBITS-1:0] Rs,			//left argument
		input[REGBITS-1:0] Rt,			//right argument
		input[REGBITS-1:0] Rdest,		//write destination
		input[WIDTH-1:0] RaWriteData,	//return address register data
		input[WIDTH-1:0] writeData,   //data to be written back to a register
		output reg[WIDTH-1:0] RsData,
		output reg[WIDTH-1:0] RtData,
		output reg[WIDTH-1:0] RaData
    );
				
	//Registers
	reg[WIDTH-1:0] RAM [(1<<REGBITS)-1:0];		//normally 32 32-bit registers
	reg[WIDTH-1:0] RaReg;		//Return address register

	//Register behavior
	always@(posedge clk)
	begin
	RAM[0] <= 0;
	RsData = RAM[Rs]; // The data is equal to the data at the destination of the source reg Rs
	RtData = RAM[Rt]; // The data is equal to the data at the destination of the source reg Rt
	RaData = RaReg;	 // The data is equal to the data at the destination of the return address reg R
		if(reset)
		 begin
			RsData <= 0;
			RtData <= 0;
			RaData <= 0;
			RaReg  <= 0;
		 end
		else
		 begin
			// if we are writing back to the register file and the destination register is not the zero register
			if(regWriteEn && Rdest != 0)
				RAM[Rdest] <= writeData;
			// if we are writing back to the return address register
			if(RaWriteEn)
				RaReg <= RaWriteData;
		 end
	end

endmodule
