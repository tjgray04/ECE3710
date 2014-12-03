`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:42 10/15/2014 
// Design Name: 
// Module Name:    ProgramStatusRegister 
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
/* PROGRAM STATUS REGISTER
*	input: PSRsel comes from instruction[22:18]
*	input: PSRwrite is the PSR register outputted from the ALU
*	output: PSRcond is the 1-bit output based on PSRsel controlling the multiplexor
*/
module ProgramStatusRegister#(parameter REGBITS = 5, WIDTH = 32)
							(input clk, reset, CFwrite, LZNwrite,
							input [REGBITS-1:0] PSRsel, PSRwrite,
							output reg PSRcond,
							output [WIDTH-1:0] PSRcondExt);
	
	reg [REGBITS-1:0] PSR;

	// PSRwrite[4:0] = {C,L,F,Z,N}
	// Retain the value of the PSRwrite, to use the signals in the combinational logic
	always@(posedge clk)
	begin
		if(reset)
			PSR <= 5'b0;
		else
		begin
			if(CFwrite)
			begin
				PSR[4] <= PSRwrite[4];
				PSR[2] <= PSRwrite[2];
				// Latch the L,Z,N values
				PSR[3] <= PSR[3];
				PSR[1:0] <= PSR[1:0];
			end
			else if(LZNwrite)
			begin
				PSR[3] <= PSRwrite[3];
				PSR[1:0] <= PSRwrite[1:0];
				// Latch the C,F files
				PSR[4] <= PSR[4];
				PSR[2] <= PSR[2];
			end
			else
				PSR <= PSR;
		end
	end
		
   always @(*)
	begin
      case (PSRsel)
			// PSRwrite[4:0] = {C,L,F,Z,N}
         5'b0_0000: PSRcond = PSR[1]; 	//EQ, equal, Z=1
         5'b0_0001: PSRcond = ~PSR[1]; 	// NE, not equal, Z=0
         5'b0_1101: PSRcond = PSR[0] | PSR[1]; // GE, greater than or equal, N=1 or Z=1
         5'b0_0010: PSRcond = PSR[4]; 	// CS, carry set, C=1
         5'b0_0011: PSRcond = ~PSR[4]; 	// CC, carry clear, C=0
         5'b0_0100: PSRcond = PSR[3]; 	// HI, higher than, L=1
         5'b0_0101: PSRcond = ~PSR[3]; 	// LS, lower than or same as, L=0
         5'b0_1010: PSRcond = (~PSR[3]) & (~PSR[1]); // LO, lower than, L=0 and Z=0
			5'b0_1011: PSRcond = PSR[3] | PSR[1]; // HS, higher than or Same as, L=1 or Z=1
         5'b0_0110: PSRcond = PSR[0]; 	// GT, greater than, N=1
         5'b0_0111: PSRcond = ~PSR[0]; 	// LE, less than or equal, N=0
         5'b0_1000: PSRcond = PSR[2]; 	// FS, flag set, F=1
         5'b0_1001: PSRcond = ~PSR[2]; 	// FC, flag clear, F=0
         5'b0_1100: PSRcond = (~PSR[0]) & (~PSR[1]); // LT, less than, N=0 and Z=0
         5'b0_1110: PSRcond = 0; // UC, unconditional, N/A
         5'b0_1111: PSRcond = 0; // Never jump, N/A
			default:	  PSRcond = 0; // default case?
      endcase
	end
	
	/* Instantiate Zero Padder for output of PSR module
	*	input: PSRcond, one-bit output from PSR module
	*	output: PSRcondExt, zero padded 32-bit output to use for possible writeData in RegFile
	*/
	ZeroPad zPadder(.data_in(PSRcond), .data_out(PSRcondExt));
	
endmodule
