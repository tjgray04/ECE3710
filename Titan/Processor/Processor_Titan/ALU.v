`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:20 10/02/2014 
// Design Name: 
// Module Name:    ALU 
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
module ALU#(parameter WIDTH = 32)(
    input [WIDTH-1:0] arg1,
    input [WIDTH-1:0] arg2,
	 input [2:0] aluop,
    output reg [WIDTH-1:0] result,
    output reg [4:0] PSRwrite
    );

	//Parameters
	parameter ADD = 3'b000,
				 SUB = 3'b001,
				 OR  = 3'b010,
				 AND = 3'b011,
				 XOR = 3'b100,
				 NOT = 3'b101,
				 MULT= 3'b110,
				 CMP = 3'b111;

	//Adder
	wire [WIDTH:0] sum;
	assign sum = arg1 + arg2;
	
	//Addition overflow checker
	wire Fadd;
	assign Fadd = (arg1[WIDTH-1] & arg2[WIDTH-1]) ^ sum[WIDTH-1];
	
	//Subtractor
	wire [WIDTH-1:0] diff;
	assign diff = arg1 - arg2;
	
	//Subtraction overflow checker
	wire Fsub;
	assign Fsub = (arg1[WIDTH-1] & ~arg2[WIDTH-1] & ~sum[WIDTH-1]) + (~arg1[WIDTH-1] & arg2[WIDTH-1] & sum[WIDTH-1]);
	
	//Unsigned Comparator
	assign L = (arg1 < arg2);
	
	//Signed Comparator
	assign N = ($signed(arg1) < $signed(arg2));
	
	//ALU behavior
	always@(*)
	begin
		case(aluop)
					// PSR = {C,L,F,Z,N}
			ADD:  begin
					result = sum[WIDTH-1:0];
					PSRwrite = {sum[WIDTH],1'b0,Fadd,2'b00};
					end
			SUB:  begin
					result = diff;
					PSRwrite = {~arg1[WIDTH-1] & arg2[WIDTH-1],1'b0,Fsub,2'b00};
					end
			OR:  begin
					result = arg1 | arg2;
					PSRwrite = 5'b00000;
					end
			AND:  begin
					result = arg1 & arg2;
					PSRwrite = 5'b00000;
					end
			XOR:  begin
					result = arg1 ^ arg2;
					PSRwrite = 5'b00000;
					end
			NOT:  begin
					result = ~arg1;
					PSRwrite = 5'b00000;
					end
			MULT: begin
					result = arg1 * arg2;
					PSRwrite = 5'b00000;
					end
			CMP:  begin
					result = diff;
					PSRwrite = {1'b0,L,1'b0,diff ? 1'b0 : 1'b1,N};
					end
		default: begin
					result = sum;
					PSRwrite = 5'b00000;
					end
		endcase
	end
				 
	
endmodule
