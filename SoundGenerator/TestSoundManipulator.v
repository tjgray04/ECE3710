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
		input clk, reset, btnL, btnR,
		output reg writeEn,
		output reg [1:0] writeData
    );

//Define state parameters
parameter NOTPRESSED = 3'b000;
parameter LTRANS = 3'b001;
parameter LPRESSED = 3'b010;
parameter RTRANS = 3'b011;
parameter RPRESSED = 3'b100;

//Define parameters
parameter BASS = 2'b00;
parameter LASER = 2'b01;
parameter DEATH = 2'b11;

//Define state registers
reg [2:0] PS,NS;

//Present State
always@(posedge clk)
begin
	if(reset)
		PS <= NOTPRESSED;
	else
		PS <= NS;
end

//Next State
always@(*)
begin
	case(PS)
		NOTPRESSED:
						begin
						if((btnL == 0) && (btnR == 1'b1))
							NS = RTRANS;
						else if((btnL == 1'b1) && (btnR == 0))
							NS = LTRANS;
						else
							NS = NOTPRESSED;
						end
		LTRANS: NS = LPRESSED;
		LPRESSED:
						begin
						if(btnR == 1'b1)
							NS = RTRANS;
						else if((btnL == 0) && (btnR == 0))
							NS = NOTPRESSED;
						else
							NS = LPRESSED;
						end
		RTRANS: NS = RPRESSED;
		RPRESSED:
						begin
						if((btnL == 0) && (btnR == 0))
							NS = NOTPRESSED;
						else
							NS = RPRESSED;
						end
		default: NS = NOTPRESSED;
	endcase
end

//Outputs
always@(*)
begin
	writeEn = 0;
	writeData = 0;
	case(PS)
		NOTPRESSED: ;
		LTRANS:
						begin
						writeEn = 1'b1;
						writeData = LASER;
						end
		LPRESSED: ;
		RTRANS:
						begin
						writeEn = 1'b1;
						writeData = DEATH;
						end
		RPRESSED: ;
		default: ;
	endcase
end


endmodule
