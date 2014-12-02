`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:29:30 11/18/2014 
// Design Name: 
// Module Name:    SoundGenerator 
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
module SoundGenerator( 
		input clk, clr,
		output soundMelody,
		output soundBass
    );

//Wires
wire [2:0] durationMelody;
wire [17:0] ticksMelody;
wire [2:0] durationBass;
wire [17:0] ticksBass;

//Instantiate pulse generator
pulse_generator pulseGen(.clk(clk), .clr(clr), .enable(enable));

//Instantiate duration FSM for melody
Duration_FSM melodyDurationFSM(.clk(clk), .clr(clr), .enable(enable), .duration(durationMelody),
										.nextNote(nextNoteMelody));
										
//Instantiate melody song library
melody_library mlibrary(.clk(clk), .clr(clr), .nextNote(nextNoteMelody), .duration(durationMelody),
								.ticks(ticksMelody));

//Instantiate melody sound generator
sound_generator sgMelody(.clk(clk), .clr(clr), .ticks(ticksMelody), .sound(soundMelody));


//Instantiate duration FSM for bass
Duration_FSM bassDurationFSM(.clk(clk), .clr(clr), .enable(enable), .duration(durationBass),
										.nextNote(nextNoteBass));
										
//Instantiate bass song library
bass_library blibrary(.clk(clk), .clr(clr), .nextNote(nextNoteBass), .duration(durationBass),
								.ticks(ticksBass));

//Instantiate bass sound generator
sound_generator sgBass(.clk(clk), .clr(clr), .ticks(ticksBass), .sound(soundBass));

endmodule
