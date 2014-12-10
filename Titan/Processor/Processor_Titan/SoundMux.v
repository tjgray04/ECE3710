`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:06 12/02/2014 
// Design Name: 
// Module Name:    SoundMux 
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
module SoundMux#(parameter TICKBITS = 20)(
		input [TICKBITS-1:0] bass, sfx,
		input select,
		output reg [TICKBITS-1:0] bassSound
    );

//Define parameters
parameter BASS = 1'b0;
parameter SFX = 1'b1;

//Mux behavior
always@(*)
begin
	case(select)
		BASS: bassSound <= bass;
		SFX: bassSound <= sfx;
	endcase
end

endmodule
