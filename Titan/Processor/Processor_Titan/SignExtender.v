`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:18 10/14/2014 
// Design Name: 
// Module Name:    SignExtender 
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
/* SIGN EXTENDER - extend the immediate value to 32-bits
*	input: data_in, 18-bit immdiate value from Instruction Decoder
*	output: data_out, 32-bit sign extended immediate value
*/
module SignExtender#(parameter IMMBITS = 18,WIDTH = 32)(input [IMMBITS-1:0] data_in,
						  output reg [WIDTH-1:0] data_out);

	always@(data_in)
	begin
		if(data_in[IMMBITS-1] == 1)
			data_out = {14'h3fff, data_in};
		else
			data_out = {14'h0, data_in};
	end

endmodule
