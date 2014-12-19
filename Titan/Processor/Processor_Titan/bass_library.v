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
// Description: This module holds the tone sound library for the bass line of the Glych music
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module bass_library#(parameter TICKBITS = 20)(
		input clk,clr,nextNote,
		output reg [2:0]duration,
		output reg [TICKBITS-1:0]ticks
    );

//Define state parameters
parameter fetch=0;		//The fetch state is the default state in which the next note will be fetched
parameter quarter=1;	//State corresponding to the duration of a quarter note
parameter eigth=2;
parameter third=3;
parameter sixteenth=4;
parameter sixth = 5;

//Note parameters
parameter 	C2 = 764409,		//These parameter define the number of counts needed at 100 MHz to play the corresponding note
			Cshp2 = 721501,
			D2 = 681013,
			Dshp2 = 642839,
			E2 = 606722,
			F2 = 572672,
			Fshp2 = 540541,
			G2 = 510204,
			Gshp2 = 481556,
			A2 = 454545,
			Ashp2 = 429037,
			B2 = 404957,
			C3  = 382234,
			Cshp3 = 360776,
			D3  = 340530,
			Dshp3 = 321419,
			E3  = 303380,
			F3  = 286352,
			Fshp3  = 270270,
			G3  = 255102,
			Gshp3  = 240790,
			A3  = 227273,
			Ashp3  = 214519,
			B3  = 202478,
			C4  = 191110,		//One octave starting at middle C.
			D4  = 170265,
			E4  = 151685,
			F4  = 143172,
			G4  = 127551,
			A4  = 113636,
			B4  = 101239,
			REST = 0;

//Counts through song bank
reg [8:0]count = 1;
parameter totalNoteCount = 256;		//The total number of notes in the song
always@(posedge clk)
  begin
    if(clr)
	   count<=1;
	 else if(count == totalNoteCount+1)		//Reset the count if the end of the song has been reached.
	   count<=1;
	 else if(nextNote)							//Only fetch the next note if the last one is done playing.
	   count<=count+1'b1;
	 else
	   count<=count;
  end

//Song bank
/* The number of ticks needed to play a given note can be calculated by:
 * 		ticks = (100*10^6)/(2*freq)
 * where freq is the frequency of the desired note to be played. The ticks act as a counter that counts
 * to half of the time given by 1\freq. The output is then oscillated giving a square wave tone approximation.
 */
always@(*)
  begin
	 case(count)
		//Bass pattern 1
	   1: begin duration=eigth; ticks=A2; end		//At each count a duration and note count are output
		2: begin duration=eigth; ticks=E3; end
		3: begin duration=eigth; ticks=A2; end
		4: begin duration=eigth; ticks=E3; end
		5: begin duration=eigth; ticks=A2; end
		6: begin duration=eigth; ticks=E3; end
		7: begin duration=eigth; ticks=A2; end
		8: begin duration=eigth; ticks=E3; end
		9: begin duration=eigth; ticks=A2; end
		10: begin duration=eigth; ticks=E3; end
		11: begin duration=eigth; ticks=A2; end
		12: begin duration=eigth; ticks=E3; end
		13: begin duration=eigth; ticks=A2; end
		14: begin duration=eigth; ticks=E3; end
		15: begin duration=eigth; ticks=A2; end
		16: begin duration=eigth; ticks=E3; end
		
		//repeat pattern 1
	   17: begin duration=eigth; ticks=A2; end
		18: begin duration=eigth; ticks=E3; end
		19: begin duration=eigth; ticks=A2; end
		20: begin duration=eigth; ticks=E3; end
		21: begin duration=eigth; ticks=A2; end
		22: begin duration=eigth; ticks=E3; end
		23: begin duration=eigth; ticks=A2; end
		24: begin duration=eigth; ticks=E3; end
		25: begin duration=eigth; ticks=A2; end
		26: begin duration=eigth; ticks=E3; end
		27: begin duration=eigth; ticks=A2; end
		28: begin duration=eigth; ticks=E3; end
		29: begin duration=eigth; ticks=A2; end
		30: begin duration=eigth; ticks=E3; end
		31: begin duration=eigth; ticks=A2; end
		32: begin duration=eigth; ticks=E3; end
		
		//Bass pattern 3
		33: begin duration=eigth; ticks=F2; end
		34: begin duration=eigth; ticks=C3; end
		35: begin duration=eigth; ticks=F2; end
		36: begin duration=eigth; ticks=C3; end
		37: begin duration=eigth; ticks=F2; end
		38: begin duration=eigth; ticks=C3; end
		39: begin duration=eigth; ticks=F2; end
		40: begin duration=eigth; ticks=C3; end
		
		41: begin duration=eigth; ticks=G2; end
		42: begin duration=eigth; ticks=D3; end
		43: begin duration=eigth; ticks=G2; end
		44: begin duration=eigth; ticks=D3; end
		45: begin duration=eigth; ticks=G2; end
		46: begin duration=eigth; ticks=D3; end
		47: begin duration=eigth; ticks=G2; end
		48: begin duration=eigth; ticks=D3; end
		
		49: begin duration=eigth; ticks=A2; end
		50: begin duration=eigth; ticks=E3; end
		51: begin duration=eigth; ticks=A2; end
		52: begin duration=eigth; ticks=E3; end
		53: begin duration=eigth; ticks=A2; end
		54: begin duration=eigth; ticks=E3; end
		55: begin duration=eigth; ticks=A2; end
		56: begin duration=eigth; ticks=E3; end
		57: begin duration=eigth; ticks=A2; end
		58: begin duration=eigth; ticks=E3; end
		59: begin duration=eigth; ticks=A2; end
		60: begin duration=eigth; ticks=E3; end
		61: begin duration=eigth; ticks=A2; end
		62: begin duration=eigth; ticks=E3; end
		63: begin duration=eigth; ticks=A2; end
		64: begin duration=eigth; ticks=E3; end
		
		//Bass pattern 2
		65: begin duration=eigth; ticks=F2; end
		66: begin duration=eigth; ticks=C3; end
		67: begin duration=eigth; ticks=F2; end
		68: begin duration=eigth; ticks=C3; end
		69: begin duration=eigth; ticks=F2; end
		70: begin duration=eigth; ticks=C3; end
		71: begin duration=eigth; ticks=F2; end
		72: begin duration=eigth; ticks=C3; end
		
		73: begin duration=eigth; ticks=G2; end
		74: begin duration=eigth; ticks=D3; end
		75: begin duration=eigth; ticks=G2; end
		76: begin duration=eigth; ticks=D3; end
		77: begin duration=eigth; ticks=G2; end
		78: begin duration=eigth; ticks=D3; end
		79: begin duration=eigth; ticks=G2; end
		80: begin duration=eigth; ticks=D3; end
		
		81: begin duration=eigth; ticks=A2; end
		82: begin duration=eigth; ticks=E3; end
		83: begin duration=eigth; ticks=A2; end
		84: begin duration=eigth; ticks=E3; end
		85: begin duration=eigth; ticks=A2; end
		86: begin duration=eigth; ticks=E3; end
		87: begin duration=eigth; ticks=A2; end
		88: begin duration=eigth; ticks=E3; end
		89: begin duration=eigth; ticks=A2; end
		90: begin duration=eigth; ticks=E3; end
		91: begin duration=eigth; ticks=A2; end
		92: begin duration=eigth; ticks=E3; end
		93: begin duration=eigth; ticks=G2; end
		94: begin duration=eigth; ticks=D3; end
		95: begin duration=eigth; ticks=G2; end
		96: begin duration=eigth; ticks=D3; end
		
		//Bass pattern 4 (same as bass pattern 2)
		97: begin duration=eigth; ticks=F2; end
		98: begin duration=eigth; ticks=C3; end
		99: begin duration=eigth; ticks=F2; end
		100: begin duration=eigth; ticks=C3; end
		101: begin duration=eigth; ticks=F2; end
		102: begin duration=eigth; ticks=C3; end
		103: begin duration=eigth; ticks=F2; end
		104: begin duration=eigth; ticks=C3; end
		
		105: begin duration=eigth; ticks=G2; end
		106: begin duration=eigth; ticks=D3; end
		107: begin duration=eigth; ticks=G2; end
		108: begin duration=eigth; ticks=D3; end
		109: begin duration=eigth; ticks=G2; end
		110: begin duration=eigth; ticks=D3; end
		111: begin duration=eigth; ticks=G2; end
		112: begin duration=eigth; ticks=D3; end
		
		113: begin duration=eigth; ticks=A2; end
		114: begin duration=eigth; ticks=E3; end
		115: begin duration=eigth; ticks=A2; end
		116: begin duration=eigth; ticks=E3; end
		117: begin duration=eigth; ticks=A2; end
		118: begin duration=eigth; ticks=E3; end
		119: begin duration=eigth; ticks=A2; end
		120: begin duration=eigth; ticks=E3; end
		121: begin duration=eigth; ticks=A2; end
		122: begin duration=eigth; ticks=E3; end
		123: begin duration=eigth; ticks=A2; end
		124: begin duration=eigth; ticks=E3; end
		125: begin duration=eigth; ticks=G2; end
		126: begin duration=eigth; ticks=D3; end
		127: begin duration=eigth; ticks=G2; end
		128: begin duration=eigth; ticks=D3; end
		
		//Repear pattern 2
		129: begin duration=eigth; ticks=F2; end
		130: begin duration=eigth; ticks=C3; end
		131: begin duration=eigth; ticks=F2; end
		132: begin duration=eigth; ticks=C3; end
		133: begin duration=eigth; ticks=F2; end
		134: begin duration=eigth; ticks=C3; end
		135: begin duration=eigth; ticks=F2; end
		136: begin duration=eigth; ticks=C3; end
		
		137: begin duration=eigth; ticks=G2; end
		138: begin duration=eigth; ticks=D3; end
		139: begin duration=eigth; ticks=G2; end
		140: begin duration=eigth; ticks=D3; end
		141: begin duration=eigth; ticks=G2; end
		142: begin duration=eigth; ticks=D3; end
		143: begin duration=eigth; ticks=G2; end
		144: begin duration=eigth; ticks=D3; end
		
		145: begin duration=eigth; ticks=A2; end
		146: begin duration=eigth; ticks=E3; end
		147: begin duration=eigth; ticks=A2; end
		148: begin duration=eigth; ticks=E3; end
		149: begin duration=eigth; ticks=A2; end
		150: begin duration=eigth; ticks=E3; end
		151: begin duration=eigth; ticks=A2; end
		152: begin duration=eigth; ticks=E3; end
		153: begin duration=eigth; ticks=A2; end
		154: begin duration=eigth; ticks=E3; end
		155: begin duration=eigth; ticks=A2; end
		156: begin duration=eigth; ticks=E3; end
		157: begin duration=eigth; ticks=G2; end
		158: begin duration=eigth; ticks=D3; end
		159: begin duration=eigth; ticks=G2; end
		160: begin duration=eigth; ticks=D3; end
		
		//Bass pattern 5 (same as bass pattern 2
		161: begin duration=eigth; ticks=F2; end
		162: begin duration=eigth; ticks=C3; end
		163: begin duration=eigth; ticks=F2; end
		164: begin duration=eigth; ticks=C3; end
		165: begin duration=eigth; ticks=F2; end
		166: begin duration=eigth; ticks=C3; end
		167: begin duration=eigth; ticks=F2; end
		168: begin duration=eigth; ticks=C3; end
		
		169: begin duration=eigth; ticks=G2; end
		170: begin duration=eigth; ticks=D3; end
		171: begin duration=eigth; ticks=G2; end
		172: begin duration=eigth; ticks=D3; end
		173: begin duration=eigth; ticks=G2; end
		174: begin duration=eigth; ticks=D3; end
		175: begin duration=eigth; ticks=G2; end
		176: begin duration=eigth; ticks=D3; end
		
		177: begin duration=eigth; ticks=A2; end
		178: begin duration=eigth; ticks=E3; end
		179: begin duration=eigth; ticks=A2; end
		180: begin duration=eigth; ticks=E3; end
		181: begin duration=eigth; ticks=A2; end
		182: begin duration=eigth; ticks=E3; end
		183: begin duration=eigth; ticks=A2; end
		184: begin duration=eigth; ticks=E3; end
		185: begin duration=eigth; ticks=A2; end
		186: begin duration=eigth; ticks=E3; end
		187: begin duration=eigth; ticks=A2; end
		188: begin duration=eigth; ticks=E3; end
		189: begin duration=eigth; ticks=G2; end
		190: begin duration=eigth; ticks=D3; end
		191: begin duration=eigth; ticks=G2; end
		192: begin duration=eigth; ticks=D3; end
		
		//Bass pattern 6
		193: begin duration=quarter; ticks=F2; end
		194: begin duration=quarter; ticks=F2; end
		195: begin duration=quarter; ticks=F2; end
		196: begin duration=quarter; ticks=F2; end
		197: begin duration=quarter; ticks=G2; end
		198: begin duration=quarter; ticks=G2; end
		199: begin duration=quarter; ticks=G2; end
		200: begin duration=quarter; ticks=G2; end
		201: begin duration=quarter; ticks=A2; end
		202: begin duration=quarter; ticks=A2; end
		203: begin duration=quarter; ticks=A2; end
		204: begin duration=quarter; ticks=A2; end
		205: begin duration=quarter; ticks=A2; end
		206: begin duration=quarter; ticks=A2; end
		207: begin duration=quarter; ticks=C3; end
		208: begin duration=quarter; ticks=C3; end
		
		//Bass pattern 7
		209: begin duration=quarter; ticks=F2; end
		210: begin duration=quarter; ticks=F2; end
		211: begin duration=quarter; ticks=F2; end
		212: begin duration=quarter; ticks=F2; end
		213: begin duration=quarter; ticks=G2; end
		214: begin duration=quarter; ticks=G2; end
		215: begin duration=quarter; ticks=G2; end
		216: begin duration=quarter; ticks=G2; end
		217: begin duration=quarter; ticks=E2; end
		218: begin duration=quarter; ticks=E2; end
		219: begin duration=quarter; ticks=E2; end
		220: begin duration=quarter; ticks=E2; end
		221: begin duration=quarter; ticks=A2; end
		222: begin duration=quarter; ticks=A2; end
		223: begin duration=quarter; ticks=C3; end
		224: begin duration=quarter; ticks=C3; end
		
		//Repeat pattern 6
		225: begin duration=quarter; ticks=F2; end
		226: begin duration=quarter; ticks=F2; end
		227: begin duration=quarter; ticks=F2; end
		228: begin duration=quarter; ticks=F2; end
		229: begin duration=quarter; ticks=G2; end
		230: begin duration=quarter; ticks=G2; end
		231: begin duration=quarter; ticks=G2; end
		232: begin duration=quarter; ticks=G2; end
		233: begin duration=quarter; ticks=A2; end
		234: begin duration=quarter; ticks=A2; end
		235: begin duration=quarter; ticks=A2; end
		236: begin duration=quarter; ticks=A2; end
		237: begin duration=quarter; ticks=A2; end
		238: begin duration=quarter; ticks=A2; end
		239: begin duration=quarter; ticks=C3; end
		240: begin duration=quarter; ticks=C3; end
		
		//Repeat pattern 7
		241: begin duration=quarter; ticks=F2; end
		242: begin duration=quarter; ticks=F2; end
		243: begin duration=quarter; ticks=F2; end
		244: begin duration=quarter; ticks=F2; end
		245: begin duration=quarter; ticks=G2; end
		246: begin duration=quarter; ticks=G2; end
		247: begin duration=quarter; ticks=G2; end
		248: begin duration=quarter; ticks=G2; end
		249: begin duration=quarter; ticks=E2; end
		250: begin duration=quarter; ticks=E2; end
		251: begin duration=quarter; ticks=E2; end
		252: begin duration=quarter; ticks=E2; end
		253: begin duration=quarter; ticks=A2; end
		254: begin duration=quarter; ticks=A2; end
		255: begin duration=quarter; ticks=C3; end
		256: begin duration=quarter; ticks=C3; end
		default begin duration=fetch; ticks=0; end
	 endcase
  end
  
endmodule
