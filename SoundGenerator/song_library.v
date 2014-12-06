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
module melody_library#(parameter TICKBITS = 20)(
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
parameter 	C3  = 382234,
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
parameter totalNoteCount = 282;
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
 * to half of the time given by 1\freq. The output is then oscillated giving a sqare wave tone approximation.
 */
always@(*)
  begin
	 case(count)
		//Melody pattern 1
	   1: begin duration=eigth; ticks=A3; end
		2: begin duration=eigth; ticks=REST; end
		3: begin duration=eigth; ticks=A3; end
		4: begin duration=eigth; ticks=REST; end
		5: begin duration=eigth; ticks=A3; end
		6: begin duration=eigth; ticks=REST; end
		7: begin duration=sixteenth; ticks=A3; end
		8: begin duration=sixteenth; ticks=REST; end
		9: begin duration=eigth; ticks=A3; end
		10: begin duration=sixteenth; ticks=A3; end
		11: begin duration=sixteenth; ticks=REST; end
		12: begin duration=eigth; ticks=A3; end
		13: begin duration=sixteenth; ticks=A3; end
		14: begin duration=sixteenth; ticks=REST; end
		15: begin duration=sixteenth; ticks=A3; end
		16: begin duration=sixteenth; ticks=REST; end
		17: begin duration=eigth; ticks=A3; end
		18: begin duration=eigth; ticks=G3; end
		19: begin duration=eigth; ticks=E3; end
		20: begin duration=eigth; ticks=G3; end
		
		//Repeat pattern 1
		21: begin duration=eigth; ticks=A3; end
		22: begin duration=eigth; ticks=REST; end
		23: begin duration=eigth; ticks=A3; end
		24: begin duration=eigth; ticks=REST; end
		25: begin duration=eigth; ticks=A3; end
		26: begin duration=eigth; ticks=REST; end
		27: begin duration=sixteenth; ticks=A3; end
		28: begin duration=sixteenth; ticks=REST; end
		29: begin duration=eigth; ticks=A3; end
		30: begin duration=sixteenth; ticks=A3; end
		31: begin duration=sixteenth; ticks=REST; end
		32: begin duration=eigth; ticks=A3; end
		33: begin duration=sixteenth; ticks=A3; end
		34: begin duration=sixteenth; ticks=REST; end
		35: begin duration=sixteenth; ticks=A3; end
		36: begin duration=sixteenth; ticks=REST; end
		37: begin duration=eigth; ticks=A3; end
		38: begin duration=eigth; ticks=G3; end
		39: begin duration=eigth; ticks=E3; end
		40: begin duration=eigth; ticks=G3; end
		
		//Melody pattern 3
		41: begin duration=eigth; ticks=A3; end
		42: begin duration=eigth; ticks=REST; end
		43: begin duration=eigth; ticks=A3; end
		44: begin duration=eigth; ticks=REST; end
		45: begin duration=eigth; ticks=A3; end
		46: begin duration=eigth; ticks=REST; end
		47: begin duration=sixteenth; ticks=A3; end
		48: begin duration=sixteenth; ticks=REST; end
		49: begin duration=eigth; ticks=B3; end
		50: begin duration=sixteenth; ticks=B3; end
		51: begin duration=sixteenth; ticks=REST; end
		52: begin duration=eigth; ticks=B3; end
		53: begin duration=sixteenth; ticks=B3; end
		54: begin duration=sixteenth; ticks=REST; end
		55: begin duration=sixteenth; ticks=B3; end
		56: begin duration=sixteenth; ticks=REST; end
		57: begin duration=quarter; ticks=G3; end
		58: begin duration=quarter; ticks=E3; end
		59: begin duration=eigth; ticks=A3; end
		60: begin duration=eigth; ticks=REST; end
		61: begin duration=eigth; ticks=A3; end
		62: begin duration=eigth; ticks=REST; end
		63: begin duration=eigth; ticks=A3; end
		64: begin duration=eigth; ticks=REST; end
		65: begin duration=sixteenth; ticks=A3; end
		66: begin duration=sixteenth; ticks=REST; end
		67: begin duration=eigth; ticks=A3; end
		68: begin duration=sixteenth; ticks=A3; end
		69: begin duration=sixteenth; ticks=REST; end
		70: begin duration=eigth; ticks=A3; end
		71: begin duration=sixteenth; ticks=A3; end
		72: begin duration=sixteenth; ticks=REST; end
		73: begin duration=sixteenth; ticks=A3; end
		74: begin duration=sixteenth; ticks=REST; end
		75: begin duration=eigth; ticks=A3; end
		76: begin duration=eigth; ticks=G3; end
		77: begin duration=eigth; ticks=C4; end
		78: begin duration=eigth; ticks=B3; end
		
		//Melody pattern 2
		79: begin duration=quarter; ticks=A3; end
		80: begin duration=quarter; ticks=A3; end
		81: begin duration=eigth; ticks=A3; end
		82: begin duration=quarter; ticks=C4; end
		83: begin duration=eigth; ticks=C4; end
		84: begin duration=quarter; ticks=B3; end
		85: begin duration=quarter; ticks=B3; end
		86: begin duration=eigth; ticks=B3; end
		87: begin duration=quarter; ticks=G3; end
		88: begin duration=eigth; ticks=G3; end
		89: begin duration=quarter; ticks=E4; end
		90: begin duration=quarter; ticks=E4; end
		91: begin duration=quarter; ticks=E4; end
		92: begin duration=quarter; ticks=E4; end
		93: begin duration=quarter; ticks=C4; end
		94: begin duration=eigth; ticks=C4; end
		95: begin duration=sixteenth; ticks=D4; end
		96: begin duration=sixteenth; ticks=C4; end
		97: begin duration=quarter; ticks=B3; end
		98: begin duration=quarter; ticks=B3; end
		
		//Melody pattern 4
		99: begin duration=quarter; ticks=A3; end
		100: begin duration=quarter; ticks=A3; end
		101: begin duration=eigth; ticks=A3; end
		102: begin duration=quarter; ticks=C4; end
		103: begin duration=eigth; ticks=C4; end
		104: begin duration=quarter; ticks=B3; end
		105: begin duration=quarter; ticks=B3; end
		106: begin duration=eigth; ticks=B3; end
		107: begin duration=quarter; ticks=G3; end
		108: begin duration=eigth; ticks=G3; end
		109: begin duration=quarter; ticks=E3; end
		110: begin duration=quarter; ticks=E3; end
		111: begin duration=quarter; ticks=E3; end
		112: begin duration=quarter; ticks=E3; end
		113: begin duration=quarter; ticks=A3; end
		114: begin duration=quarter; ticks=E3; end
		115: begin duration=quarter; ticks=B3; end
		116: begin duration=quarter; ticks=G3; end
		
		//Repeat pattern 2
		117: begin duration=quarter; ticks=A3; end
		118: begin duration=quarter; ticks=A3; end
		119: begin duration=eigth; ticks=A3; end
		120: begin duration=quarter; ticks=C4; end
		121: begin duration=eigth; ticks=C4; end
		122: begin duration=quarter; ticks=B3; end
		123: begin duration=quarter; ticks=B3; end
		124: begin duration=eigth; ticks=B3; end
		125: begin duration=quarter; ticks=G3; end
		126: begin duration=eigth; ticks=G3; end
		127: begin duration=quarter; ticks=E4; end
		128: begin duration=quarter; ticks=E4; end
		129: begin duration=quarter; ticks=E4; end
		130: begin duration=quarter; ticks=E4; end
		131: begin duration=quarter; ticks=C4; end
		132: begin duration=eigth; ticks=C4; end
		133: begin duration=sixteenth; ticks=D4; end
		134: begin duration=sixteenth; ticks=C4; end
		135: begin duration=quarter; ticks=B3; end
		136: begin duration=quarter; ticks=B3; end
		
		//Melody pattern 5
		137: begin duration=quarter; ticks=A3; end
		138: begin duration=quarter; ticks=A3; end
		139: begin duration=eigth; ticks=A3; end
		140: begin duration=quarter; ticks=C4; end
		141: begin duration=eigth; ticks=C4; end
		142: begin duration=quarter; ticks=B3; end
		143: begin duration=quarter; ticks=B3; end
		144: begin duration=eigth; ticks=B3; end
		145: begin duration=quarter; ticks=G4; end
		146: begin duration=eigth; ticks=G4; end
		147: begin duration=quarter; ticks=E4; end
		148: begin duration=quarter; ticks=E4; end
		149: begin duration=quarter; ticks=E4; end
		150: begin duration=quarter; ticks=E4; end
		151: begin duration=quarter; ticks=C4; end
		152: begin duration=quarter; ticks=D4; end
		153: begin duration=quarter; ticks=B3; end
		154: begin duration=quarter; ticks=B3; end
		
		//Melody pattern 6
		155: begin duration=eigth; ticks=A3; end
		156: begin duration=eigth; ticks=F3; end
		157: begin duration=eigth; ticks=B3; end
		158: begin duration=eigth; ticks=F3; end
		159: begin duration=eigth; ticks=C4; end
		160: begin duration=eigth; ticks=F3; end
		161: begin duration=eigth; ticks=B3; end
		162: begin duration=eigth; ticks=A3; end
		
		163: begin duration=eigth; ticks=B3; end
		164: begin duration=eigth; ticks=G3; end
		165: begin duration=eigth; ticks=C4; end
		166: begin duration=eigth; ticks=G3; end
		167: begin duration=eigth; ticks=D4; end
		168: begin duration=eigth; ticks=G3; end
		169: begin duration=eigth; ticks=C4; end
		170: begin duration=eigth; ticks=B3; end
		
		171: begin duration=eigth; ticks=C4; end
		172: begin duration=eigth; ticks=A3; end
		173: begin duration=eigth; ticks=D4; end
		174: begin duration=eigth; ticks=A3; end
		175: begin duration=eigth; ticks=E4; end
		176: begin duration=eigth; ticks=A3; end
		177: begin duration=eigth; ticks=C4; end
		178: begin duration=eigth; ticks=B3; end
		
		179: begin duration=eigth; ticks=E4; end
		180: begin duration=eigth; ticks=C4; end
		181: begin duration=eigth; ticks=B3; end
		182: begin duration=eigth; ticks=A3; end
		183: begin duration=eigth; ticks=B3; end
		184: begin duration=eigth; ticks=C4; end
		185: begin duration=eigth; ticks=D4; end
		186: begin duration=eigth; ticks=E4; end
		
		//Melody pattern 7
		187: begin duration=eigth; ticks=A3; end
		188: begin duration=eigth; ticks=F3; end
		189: begin duration=eigth; ticks=B3; end
		190: begin duration=eigth; ticks=F3; end
		191: begin duration=eigth; ticks=C4; end
		192: begin duration=eigth; ticks=F3; end
		193: begin duration=eigth; ticks=B3; end
		194: begin duration=eigth; ticks=A3; end
		
		195: begin duration=eigth; ticks=B3; end
		196: begin duration=eigth; ticks=G3; end
		197: begin duration=eigth; ticks=C4; end
		198: begin duration=eigth; ticks=G3; end
		199: begin duration=eigth; ticks=D4; end
		200: begin duration=eigth; ticks=G3; end
		201: begin duration=eigth; ticks=C4; end
		202: begin duration=eigth; ticks=B3; end
		
		203: begin duration=eigth; ticks=G3; end
		204: begin duration=eigth; ticks=E3; end
		205: begin duration=eigth; ticks=A3; end
		206: begin duration=eigth; ticks=E3; end
		207: begin duration=eigth; ticks=B3; end
		208: begin duration=eigth; ticks=E3; end
		209: begin duration=eigth; ticks=A3; end
		210: begin duration=eigth; ticks=G3; end
		
		211: begin duration=eigth; ticks=C4; end
		212: begin duration=eigth; ticks=A3; end
		213: begin duration=eigth; ticks=D4; end
		214: begin duration=eigth; ticks=A3; end
		215: begin duration=eigth; ticks=E4; end
		216: begin duration=eigth; ticks=C4; end
		217: begin duration=eigth; ticks=B3; end
		218: begin duration=eigth; ticks=A3; end
		
		//Repeat pattern 6
		219: begin duration=eigth; ticks=A3; end
		220: begin duration=eigth; ticks=F3; end
		221: begin duration=eigth; ticks=B3; end
		222: begin duration=eigth; ticks=F3; end
		223: begin duration=eigth; ticks=C4; end
		224: begin duration=eigth; ticks=F3; end
		225: begin duration=eigth; ticks=B3; end
		226: begin duration=eigth; ticks=A3; end
		
		227: begin duration=eigth; ticks=B3; end
		228: begin duration=eigth; ticks=G3; end
		229: begin duration=eigth; ticks=C4; end
		230: begin duration=eigth; ticks=G3; end
		231: begin duration=eigth; ticks=D4; end
		232: begin duration=eigth; ticks=G3; end
		233: begin duration=eigth; ticks=C4; end
		234: begin duration=eigth; ticks=B3; end
		
		235: begin duration=eigth; ticks=C4; end
		236: begin duration=eigth; ticks=A3; end
		237: begin duration=eigth; ticks=D4; end
		238: begin duration=eigth; ticks=A3; end
		239: begin duration=eigth; ticks=E4; end
		240: begin duration=eigth; ticks=A3; end
		241: begin duration=eigth; ticks=C4; end
		242: begin duration=eigth; ticks=B3; end
		
		243: begin duration=eigth; ticks=E4; end
		244: begin duration=eigth; ticks=C4; end
		245: begin duration=eigth; ticks=B3; end
		246: begin duration=eigth; ticks=A3; end
		247: begin duration=eigth; ticks=B3; end
		248: begin duration=eigth; ticks=C4; end
		249: begin duration=eigth; ticks=D4; end
		250: begin duration=eigth; ticks=E4; end
		
		//Repeat pattern 7
		251: begin duration=eigth; ticks=A3; end
		252: begin duration=eigth; ticks=F3; end
		253: begin duration=eigth; ticks=B3; end
		254: begin duration=eigth; ticks=F3; end
		255: begin duration=eigth; ticks=C4; end
		256: begin duration=eigth; ticks=F3; end
		257: begin duration=eigth; ticks=B3; end
		258: begin duration=eigth; ticks=A3; end
		
		259: begin duration=eigth; ticks=B3; end
		260: begin duration=eigth; ticks=G3; end
		261: begin duration=eigth; ticks=C4; end
		262: begin duration=eigth; ticks=G3; end
		263: begin duration=eigth; ticks=D4; end
		264: begin duration=eigth; ticks=G3; end
		265: begin duration=eigth; ticks=C4; end
		266: begin duration=eigth; ticks=B3; end
		
		267: begin duration=eigth; ticks=G3; end
		268: begin duration=eigth; ticks=E3; end
		269: begin duration=eigth; ticks=A3; end
		270: begin duration=eigth; ticks=E3; end
		271: begin duration=eigth; ticks=B3; end
		272: begin duration=eigth; ticks=E3; end
		273: begin duration=eigth; ticks=A3; end
		274: begin duration=eigth; ticks=G3; end
		
		275: begin duration=eigth; ticks=C4; end
		276: begin duration=eigth; ticks=A3; end
		277: begin duration=eigth; ticks=D4; end
		278: begin duration=eigth; ticks=A3; end
		279: begin duration=eigth; ticks=E4; end
		280: begin duration=eigth; ticks=C4; end
		281: begin duration=eigth; ticks=B3; end
		282: begin duration=eigth; ticks=A3; end
		default begin duration=fetch; ticks=0; end
	 endcase
  end
  
endmodule
