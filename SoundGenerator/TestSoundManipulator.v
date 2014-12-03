`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:50 12/02/2014 
// Design Name: 
// Module Name:    TestSoundManipulator 
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
module TestSoundManipulator(
		input clk, reset, writeEn,
		output [1:0] writeData
    );

//Define parameters
parameter BASS = 2'b00;
parameter LASER = 2'b01;
parameter DEATH = 2'b10;

assign writeEn = 0;
assign writeData = BASS;

endmodule
