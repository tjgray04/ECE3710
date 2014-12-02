`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Humphries
// 
// Create Date:    15:18:23 04/24/2013 
// Design Name: 
// Module Name:    Keyboard 
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
module Keyboard(ticks_in,toggle_mode,keys,ticks_out
    );

input [17:0]ticks_in;
input [2:0]keys;
input toggle_mode;
output reg [17:0]ticks_out;

//Note parameters
parameter 	C = 191110,		//One octave starting at middle C.
				D = 170265,
				E = 151685,
				F = 143172,
				G = 127551,
				A = 113636,
				B = 101239,
				REST = 0;

always@(*)
  begin
    if(toggle_mode==0)
	   case(keys)
	     3'b000: ticks_out=REST;
	     3'b001: ticks_out=C;
		  3'b010: ticks_out=D;
		  3'b011: ticks_out=E;
		  3'b100: ticks_out=F;
	     3'b101: ticks_out=G;
		  3'b110: ticks_out=A;
		  3'b111: ticks_out=B;
		  default ticks_out=0;
	   endcase
    else 
	   ticks_out = ticks_in;
  end
  
endmodule
