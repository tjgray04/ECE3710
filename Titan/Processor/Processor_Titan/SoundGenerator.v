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
// Description: This Module is the top module that implements and connects all the modules needed to make the sound generator
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SoundGenerator#(parameter TICKBITS = 20)( 
		input clk, clr,
		input CPUwriteEn,
		input [1:0] writeDataCPU,
		output soundMelody,
		output soundBass
    );

//Wires
wire [2:0] durationMelody;
wire [TICKBITS-1:0] ticksMelody;
wire [2:0] durationBass;
wire [2:0] durationDeath, durationLaser;
wire [TICKBITS-1:0] ticksBass;
wire [1:0] writeData, soundSelect;
wire [TICKBITS-1:0] bass, laser, death, laserTicks, deathTicks, SFXticks;

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
								.ticks(bass));

//SoundRegControlFSM
SoundRegControlFSM srcRSM(.clk(clk), .reset(clr), .done(done), .CPUwriteEn(CPUwriteEn), .writeDataIN(writeDataCPU),
									.writeEn(writeEn), .writeDataOUT(writeData));

//SoundFX_FSM
SoundFX_FSM sfxFSM(.clk(clk), .clr(clr), .enable(enable), .SFXended(SFXended), .durationLaser(durationLaser),
						.durationDeath(durationDeath), .soundRegBits(soundSelect), .nextNoteLaser(nextNoteLaser),
						.nextNoteDeath(nextNoteDeath), .done(done));
						
//LaserSFXLibrary
LaserSFXLibrary laserLib(.clk(clk),.clr(clr),.nextNote(nextNoteLaser),.duration(durationLaser),
								.ticks(laserTicks),.SFXended(SFXendedLaser));
								
//DeathSFXLibrary
DeathSFXLibrary deathLib(.clk(clk),.clr(clr),.nextNote(nextNoteDeath),.duration(durationDeath),
								.ticks(deathTicks),.SFXended(SFXendedDeath));

assign SFXended = SFXendedLaser || SFXendedDeath;		//Tells when the current sound effect has ended (since two sound effects can't play at once)

//SFXmux
ticksMux tmux(.select(soundSelect[1]),.arg1(laserTicks), .arg2(deathTicks), .result(SFXticks));

//SoundControllerReg
SoundControllerReg scr(.clk(clk), .reset(clr), .writeEn(writeEn), .writeData(writeData),
									.soundSelect(soundSelect));
									
//SoundMux
SoundMux mux(.bass(bass), .sfx(SFXticks), .select(soundSelect[0]),
					.bassSound(ticksBass));

//Instantiate bass sound generator
sound_generator sgBass(.clk(clk), .clr(clr), .ticks(ticksBass), .sound(soundBass));

endmodule
