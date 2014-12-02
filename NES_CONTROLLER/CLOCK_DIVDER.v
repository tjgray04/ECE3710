`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:14:20 10/28/2014 
// Design Name: 
// Module Name:    CLOCK_DIVDER 
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
module CLOCK_DIVDER(
    input clk, reset,
	 input en,
    output reg clk_divided
    );
	 
	 parameter MAX_COUNT = 100,
				  MAXBITS = 10;
	 reg [MAXBITS-1:0] count ;

	 
	 always@(posedge clk)
	 begin
	 if(reset)
	 begin
		count <= 0;
	 end
	 if(en)
	 begin
		 if(count == MAX_COUNT)
		 begin
			count <= 0;
			clk_divided <= ~clk_divided;
		 end
		 else
			count <= count+1;
	 end
	 
	 
	 end
	 
	 


endmodule
