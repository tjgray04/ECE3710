`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Humphries
// 
// Create Date:    15:14:05 04/24/2013 
// Design Name: 
// Module Name:    Pulse_generator 
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
module pulse_generator(
		input clk,clr,
		output reg enable
    );

//Parameters
/* A quarter note was chosen to have a duration of 100 enable pulses in order to make the mathematical
 * definition of other notes easy to define. The time that it takes to play a quarter note is a good
 * indicator of the speed of the music/generated tones (in 4/4 time this is the beat).
 * The maximum count value can be determined by the following equation:
 *			maxCount = Q*10^6
 *	where Q is the duration of a quarter note in seconds.
 */

parameter maxCount = 187500;	//This is for a tempo of 160 beats/min		//Was 375000 for 100 MHz

//Define a reg to hold the count
reg [26:0]count;

always@(posedge clk)
  begin
    if(clr)
      begin
        count<=0;
        enable<=0;
	   end
    else if(count == maxCount)
      begin
	     count<=0;
	     enable<=1;
	   end
    else
      begin
        count<=count+1'b1;
	     enable<=0;
	   end
  end
  
endmodule
