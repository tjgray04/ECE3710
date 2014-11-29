`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:09 09/09/2014 
// Design Name: 
// Module Name:    counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 	This module generates a pulse after a defined value.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module counter (
    input clk, reset,
    output reg enable
    );

	reg [26:0] counter; // counter reaches one second when the posedge of the clk happens 100000000 times
	reg status; //when status is 1, then count, when status is 0, then hold the value
	
	always @(posedge clk)
	begin
		if(reset) // set status to 0 if reset has been asserted so that no counting occurs
			status <= 1'b0;
		else // else, if no reset, set status to 1 so counting can occur
			status <= 1'b1;
	end

	always @(posedge clk) //clk connects to pin V10
	begin	
		if (reset) // reset is of the highest priority
			begin
			counter <= 27'd0; //reset the counter to begin at 0
			enable <= 1'b0; //make enable 0 to restart with the counter
			end
		else if (counter == 27'd50000000) // always check if the counter has reached defined time (50_000_000 = .5 sec)
			begin
			counter <= 27'd0; // if the counter is at defined time, set it back to zero
			if (status) // if status is true at this point, generate pulse
				enable <= 1'b1; //send out an enable signal pulse for one clock cycle
			end
		else 
			begin
			counter <= counter + 27'd1; //always add one to the counter.
			enable <= 1'b0; // enable is 0 while counting
			end
	end // end of always block
	
endmodule
