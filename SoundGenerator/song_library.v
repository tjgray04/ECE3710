`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Humphries
// 
// Create Date:    16:39:08 04/24/2013 
// Design Name: 
// Module Name:    song_library 
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
module melody_library#(parameter TICKBITS = 18)(
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
	   1: begin duration=quarter; ticks=0; end
		2: begin duration=eigth; ticks=85131; end
		3: begin duration=eigth; ticks=90192; end
		4: begin duration=third; ticks=95557; end
		5: begin duration=third; ticks=95557; end
		6: begin duration=third; ticks=95557; end
		7: begin duration=eigth; ticks=101239; end
		8: begin duration=eigth; ticks=107259; end
		9: begin duration=eigth; ticks=113636; end
		10: begin duration=sixteenth; ticks=113636; end
		11: begin duration=sixteenth; ticks=113636; end
		12: begin duration=eigth; ticks=120395; end
		13: begin duration=eigth; ticks=127551; end
		14: begin duration=sixth; ticks=143172; end
		15: begin duration=sixth; ticks=127551; end
		16: begin duration=sixth; ticks=143172; end
		17: begin duration=sixteenth; ticks=151685; end
		18: begin duration=sixteenth; ticks=143172; end
		19: begin duration=eigth; ticks=127551; end
		20: begin duration=eigth; ticks=143172; end
		21: begin duration=eigth; ticks=151685; end
		22: begin duration=eigth; ticks=0; end
		23: begin duration=eigth; ticks=85131; end
		24: begin duration=eigth; ticks=90192; end
		25: begin duration=third; ticks=95557; end
		26: begin duration=third; ticks=95557; end
		27: begin duration=third; ticks=95557; end
		28: begin duration=eigth; ticks=101239; end
		29: begin duration=eigth; ticks=107259; end
		30: begin duration=sixteenth; ticks=113636; end
		31: begin duration=sixteenth; ticks=113636; end
		32: begin duration=sixteenth; ticks=0; end
		33: begin duration=sixteenth; ticks=113636; end
		34: begin duration=eigth; ticks=127551; end
		35: begin duration=eigth; ticks=143172; end
		36: begin duration=sixth; ticks=151685; end
		37: begin duration=sixth; ticks=143172; end
		38: begin duration=sixth; ticks=151685; end
		39: begin duration=sixteenth; ticks=170265; end
		40: begin duration=sixteenth; ticks=151685; end
		41: begin duration=eigth; ticks=143172; end
		42: begin duration=eigth; ticks=151685; end
		43: begin duration=quarter; ticks=170265; end
		default begin duration=fetch; ticks=0; end
	 endcase
  end
  
endmodule
