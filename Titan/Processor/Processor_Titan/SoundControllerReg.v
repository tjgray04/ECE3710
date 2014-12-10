`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:41 12/02/2014 
// Design Name: 
// Module Name:    SoundControllerReg 
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
module SoundControllerReg(
		input clk, reset, writeEn,
		input [1:0] writeData,
		output [1:0] soundSelect
    );

//Define control register
reg [1:0] soundReg;

//Asynchronous read
assign soundSelect = soundReg;

//Synchronous write
always@(posedge clk)
begin
	if(reset)
	 begin
		soundReg <= 0;
	 end
	else
	 begin
		if(writeEn)
			soundReg <= writeData;
		else
			soundReg <= soundReg;
	 end
end

endmodule
