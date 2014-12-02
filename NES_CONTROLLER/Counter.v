`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:13 10/28/2014 
// Design Name: 
// Module Name:    Counter 
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
module  Counter #(parameter MAXBITS = 14, PULSE_COUNT = 12000)
	(input clk,
    input reset,
    input en,
	 output reg pulse //this pulse will be used to tell the Latch signal when to go high
    );

	//create a register to hold the count
	reg [MAXBITS-1:0] count;
			  
	always@(posedge clk)
	begin
		if(reset)
		begin
			count <= 0; //set count to zero on a reset
			pulse <= 0; //set pulse to zero on reset
		end
		else if(en)
		begin
			// If the desired count has been reached, send out a pulse
			// On a 100MHz clock, there are 10 clock periods of 12us a piece.
			// 120us/10ns = 12k counts
			if(count == PULSE_COUNT)
			begin
				count <= 0; // set the counter low again
				pulse <= 1; // send out the pusle signal for one clock cycle
			end			
			else
			begin
				// If the desired count has not been reached, increment the count
				count <= count + 1;
				pulse <= 0; //keep the pulse low
			end
		end
	end
	
	 


endmodule
