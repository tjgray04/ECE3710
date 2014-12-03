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
//					HOW DO WE PERFORM A READ????
//
//////////////////////////////////////////////////////////////////////////////////
/*	REGISTER FILE
*	input: clk, global clock from top module
*	input: reset, global reset from top module
*	input: regWriteEn, from Logic Controller - enable write back to register
*	input: RaWriteEn, from Logic Controller - control signal enabling writing to return address register reg31
*	input: Rs, source register A from Instruction Decoder
*	input: Rt, source register B from Instruction Decoder
* 	input: Rdest, destination register from Instruction Decoder
*	input: writeData, from writeDataMux - data to write back to destination register
*	output: RsData, source register A data output
*	output: RtData, source register B data output
*	output: RaData, return address for Program Counter
*/
module RegFile#(parameter REGBITS = 5, WIDTH = 32)(
		input clk, regWriteEn, RaWriteEn, //jumpRA,
		input[REGBITS-1:0] Rs,			//left argument
		input[REGBITS-1:0] Rt,			//right argument
		input[REGBITS-1:0] Rdest,		//write destination
		input[WIDTH-1:0] writeData,   //data to be written back to a register
		output [WIDTH-1:0] RsData,
		output [WIDTH-1:0] RtData
    );
	
//	parameter [REGBITS-1:0] RA = 5'd31; //Return address register is RAM[31]
	
	//Registers
	reg[WIDTH-1:0] RAM [(1<<REGBITS)-1:0];	//normally 32 32-bit registers, RAM in this case referes to our 32 available registers
	
	integer i;
	initial
		begin
			for (i = 31; i >= 0; i=i-1)
				RAM[i] = 32'd0;
		end
	
	//Register behavior
	// Write back on the negative edge of the clock to ensure data propagation through execution stage
	always@(negedge clk)
	begin
		// if we are writing back to the register file and the destination register is not the zero register
		if(regWriteEn)
			RAM[Rdest] <= writeData;
		// if we are writing back to the return address register
		else if(RaWriteEn)
			RAM[Rs] <= writeData;
	end
	
	// Just read out the data
	assign RsData = Rs ? RAM[Rs] : 0;
	assign RtData = Rt ? RAM[Rt] : 0;

endmodule
