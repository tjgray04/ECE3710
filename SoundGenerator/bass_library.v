`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:08 11/18/2014 
// Design Name: 
// Module Name:    bass_library 
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
module bass_library#(parameter TICKBITS = 18)(
		input clk,clr,nextNote,
		output reg [2:0]duration,
		output reg [TICKBITS-1:0]ticks
    );

//Parameters
parameter fetch=0;
parameter quarter=1;
parameter eigth=2;
parameter third=3;
parameter sixteenth=4;
parameter sixth = 5;

//Note parameters
parameter 	C = 191110,		//One octave starting at middle C.
				D = 170265,
				E = 151685,
				F = 143172,
				G = 127551,
				A = 113636,
				B = 101239,
				REST = 0;

//Counts through song bank
reg [5:0]count = 1;
parameter totalNoteCount = 43;
always@(posedge clk)
  begin
    if(clr)
	   count<=1;
	 else if(count == totalNoteCount+1)		//Reset the count if the end of the song has been reached.
	   count<=1;
	 else if(nextNote)							//Only fetch the next note if the last one is done playing.
	   count<=count+1;
	 else
	   count<=count;
  end

//Song bank
/* The number of ticks needed to play a given note can be calculated by:
 * 		ticks = (100*10^6)/(2*freq)
 * where freq is the frequency of the desired note to be played. The ticks act as a counter that counts
 * to half of the time given by 1\freq. The output is then oscillated giving a sqare wave tone approximation.
 */
always@(*)
  begin
	 case(count)
	   1: begin duration=quarter; ticks=C; end
		2: begin duration=quarter; ticks=D; end
		3: begin duration=quarter; ticks=E; end
		4: begin duration=quarter; ticks=F; end
		5: begin duration=quarter; ticks=G; end
		6: begin duration=quarter; ticks=A; end
		7: begin duration=quarter; ticks=B; end
		8: begin duration=quarter; ticks=C; end
		9: begin duration=quarter; ticks=C; end
		10: begin duration=quarter; ticks=D; end
		11: begin duration=quarter; ticks=E; end
		12: begin duration=quarter; ticks=F; end
		13: begin duration=quarter; ticks=G; end
		14: begin duration=quarter; ticks=A; end
		15: begin duration=quarter; ticks=B; end
		16: begin duration=quarter; ticks=C; end
		17: begin duration=quarter; ticks=C; end
		18: begin duration=quarter; ticks=D; end
		19: begin duration=quarter; ticks=E; end
		20: begin duration=quarter; ticks=F; end
		21: begin duration=quarter; ticks=G; end
		22: begin duration=quarter; ticks=A; end
		23: begin duration=quarter; ticks=B; end
		24: begin duration=quarter; ticks=C; end
		25: begin duration=quarter; ticks=C; end
		26: begin duration=quarter; ticks=D; end
		27: begin duration=quarter; ticks=E; end
		28: begin duration=quarter; ticks=F; end
		29: begin duration=quarter; ticks=G; end
		30: begin duration=quarter; ticks=A; end
		31: begin duration=quarter; ticks=B; end
		32: begin duration=quarter; ticks=C; end
		33: begin duration=quarter; ticks=C; end
		34: begin duration=quarter; ticks=D; end
		35: begin duration=quarter; ticks=E; end
		36: begin duration=quarter; ticks=F; end
		37: begin duration=quarter; ticks=G; end
		38: begin duration=quarter; ticks=A; end
		39: begin duration=quarter; ticks=B; end
		40: begin duration=quarter; ticks=C; end
		41: begin duration=quarter; ticks=D; end
		42: begin duration=quarter; ticks=E; end
		43: begin duration=quarter; ticks=REST; end
		default begin duration=fetch; ticks=0; end
	 endcase
  end
  
endmodule
