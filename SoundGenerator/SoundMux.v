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
module SoundMux#(parameter TICKBITS = 18)(
		input [TICKBITS-1:0] bass, laser, death,
		input [1:0] select,
		output reg [TICKBITS-1:0] bassSound
    );

//Define parameters
parameter BASS = 2'b00;
parameter LASER = 2'b01;
parameter DEATH = 2'b10;

//Mux behavior
always@(*)
begin
	case(select)
		BASS: bassSound <= bass;
		LASER: bassSound <= laser;
		DEATH: bassSound <= death;
		default: bassSound <= bass;
	endcase
end

endmodule
