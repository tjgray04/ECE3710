//`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////////
//// Company: 
//// Engineer: 
//// 
//// Create Date:    14:36:43 10/28/2014 
//// Design Name: 
//// Module Name:    NES_CONTROLLER 
//// Project Name: 
//// Target Devices: 
//// Tool versions: 
//// Description: 
////
//// Dependencies: 
////
//// Revision: 
//// Revision 0.01 - File Created
//// Additional Comments: 
////
////////////////////////////////////////////////////////////////////////////////////
//module NES_CONTROLLER(
//		input clock, reset, data, //Input a clock , reset and data. The data line will be the output line containing the data from the controller.
//		output reg latch, pulse, 
//		output reg [7:0] controller_data
//    );
//
//	//Initialize the controller data
//	initial
//	begin
//		controller_data = 8'b00000000;
//	end
//	
//	//Instantiate a register to conatin the count that will be send out all the control signals.
////	reg [21:0] count; //was 31
//	reg [20:0] count; //was 21
//	
//	/*This always block will take care the the synchronous portion of NES controller,
//	 *every 1/60 seconds a latch pulse will be sent, 18us later the pulse signal will 
//	 *toggle with every 6us. the negative edge of the pulse will be used to latch the data.
//	 *
//	 */
//	always@(count)
//	begin
//			if (count < 1200)
////			if (count < 600)
//			begin
//				latch <= 1'b1;
//				pulse <= 1'b1;
//			end
//			
//			else if ((count >= 1200) && (count < 1800))
////			else if ((count >= 600) && (count < 900))
//			begin
//			latch <= 1'b0;	
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 1800) && (count < 2400))
////			else if ((count >= 900) && (count < 1200))
//			begin
//			latch <= 1'b0;
//         pulse <= 1'b1;
//			end
//			
//			else if ((count >= 2400) && (count < 3000))
////			else if ((count >= 1200) && (count < 1500))
//			begin	
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 3000) && (count < 3600))
////			else if ((count >= 1500) && (count < 1800))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b1;
//			end
//			
//			else if ((count >= 3600) && (count < 4200))
////			else if ((count >= 1800) && (count < 2100))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 4200) && (count < 4800))
////			else if ((count >= 2100) && (count < 2400))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b1;
//			end
//			
//			else if ((count >= 4800) && (count < 5400))
////			else if ((count >= 2400) && (count < 2700))
//			begin
//
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 5400) && (count < 6000))
////			else if ((count >= 2700) && (count < 3000))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b1;
//			end
//			
//			else if ((count >= 6000) && (count < 6600))
////			else if ((count >= 3000) && (count < 3300))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b0;	
//			end
//			
//			else if ((count >= 6600) && (count < 7200))
////			else if ((count >= 3300) && (count < 3600))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b1;			
//			end
//			
//			else if ((count >= 7200) && (count < 7800))
////			else if ((count >= 3600) && (count < 3900))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 7800) && (count < 8400))
////			else if ((count >= 3900) && (count < 4200))
//			begin
//			latch <= 1'b0;		
//			pulse <= 1'b1;	
//			end
//			
//			else if ((count >= 8400) && (count < 9000))
////			else if ((count >= 4200) && (count < 4500))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else if ((count >= 9000) && (count < 9600))
////			else if ((count >= 4500) && (count < 4800))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b1;
//			end
//			
//			else if ((count >= 9600) && (count < 10200))
////			else if ((count >= 4800) && (count < 5100))
//			begin
//			latch <= 1'b0;
//			pulse <= 1'b0;
//			end
//			
//			else
//			begin
//				latch <= 1'b0;
//				pulse <= 1'b1;
//			end
//	end // end of always block
//
//
///*This always block will capture the data sent from the controller on the negative edge of the pulse, the controller by nature
// *is active low so the data will be inverted and stored into an output register
// *
// */
//always@(negedge pulse)
//begin
//		//Capture A
//   if ((count >= 1200) && (count < 1800))
////	if ((count >= 600) && (count < 900))
//		controller_data[7] = ~data;
//		//Capture B
//	else if((count >= 2400) && (count < 3000))
////	else if((count >= 1200) && (count < 1500))
//		controller_data[6] = ~data;
//		//Caputre Select
//	else if((count >= 3600) && (count < 4200))
////	else if((count >= 1800) && (count < 2100))
//		controller_data[5] = ~data;	
//	//Caputre Start
//	else if((count >= 4800) && (count <5400))
////	else if((count >= 2400) && (count <2700))
//		controller_data[4] = ~data;
//	//Caputre Up			
//	else if((count >= 6000) && (count < 6600))
////	else if((count >= 3000) && (count < 3300))
//		controller_data[3] = ~data;
//	//Caputre Down
//	else if((count >= 7200) && (count < 7800))
////	else if((count >= 3600) && (count < 3900))
//		controller_data[2] = ~data;	
//	//Caputre Left
//	else if((count >= 8400) && (count < 9000))
////	else if((count >= 4200) && (count < 4500))
//		controller_data[1] = ~data;	
//	//Caputre Right
//	else if((count >= 9600) &&(count < 10200))
////	else if((count >= 4800) &&(count < 5100))
//		controller_data[0] = ~data;
//end
//
//
//
///*This always block will take care of the counter that will be used to control.
// *
// */
//always@(posedge clock)
//begin
//	//If a reset occurs reset the counter.
//	if(reset)
//		count <= 32'd1200;
////		count <= 32'd600;
//	//Else if the counter has reached the maximum value, reset the counter
//	else if(count == 32'd1666667)
////	else if(count == 32'd833333)
//		count<= 32'b0;
//	//Else increase the counter.
//	else
//		count <= count + 1;
//end
//
//endmodule


`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:43 10/28/2014 
// Design Name: 
// Module Name:    NES_CONTROLLER 
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
module NES_CONTROLLER(
		input clock, reset, data, //Input a clock , reset and data. The data line will be the output line containing the data from the controller.
		output reg latch, pulse, 
		output reg [7:0] controller_data
    );

	//Initialize the controller data
	initial
	begin
		controller_data = 8'b00000000;
		latch = 1'b1;
		pulse = 1'b1;
	end
	
	//Instantiate a register to conatin the count that will be send out all the control signals.
//	reg [21:0] count; //was 31
	reg [20:0] count; //was 21
	
	/*This always block will take care the the synchronous portion of NES controller,
	 *every 1/60 seconds a latch pulse will be sent, 18us later the pulse signal will 
	 *toggle with every 6us. the negative edge of the pulse will be used to latch the data.
	 *
	 */
	always@(posedge count)
	begin
//			if (count < 1200)
			if (count < 600)
			begin
				latch <= 1'b1;
				pulse <= 1'b1;
			end
			
//			else if ((count >= 1200) && (count < 1800))
			else if ((count >= 600) && (count < 900))
			begin
			latch <= 1'b0;	
			pulse <= 1'b0;
			end
			
//			else if ((count >= 1800) && (count < 2400))
			else if ((count >= 900) && (count < 1200))
			begin
			latch <= 1'b0;
         pulse <= 1'b1;
			end
			
//			else if ((count >= 2400) && (count < 3000))
			else if ((count >= 1200) && (count < 1500))
			begin	
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
//			else if ((count >= 3000) && (count < 3600))
			else if ((count >= 1500) && (count < 1800))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
//			else if ((count >= 3600) && (count < 4200))
			else if ((count >= 1800) && (count < 2100))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
//			else if ((count >= 4200) && (count < 4800))
			else if ((count >= 2100) && (count < 2400))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
//			else if ((count >= 4800) && (count < 5400))
			else if ((count >= 2400) && (count < 2700))
			begin

			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
//			else if ((count >= 5400) && (count < 6000))
			else if ((count >= 2700) && (count < 3000))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
//			else if ((count >= 6000) && (count < 6600))
			else if ((count >= 3000) && (count < 3300))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;	
			end
			
//			else if ((count >= 6600) && (count < 7200))
			else if ((count >= 3300) && (count < 3600))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;			
			end
			
//			else if ((count >= 7200) && (count < 7800))
			else if ((count >= 3600) && (count < 3900))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
//			else if ((count >= 7800) && (count < 8400))
			else if ((count >= 3900) && (count < 4200))
			begin
			latch <= 1'b0;		
			pulse <= 1'b1;	
			end
			
//			else if ((count >= 8400) && (count < 9000))
			else if ((count >= 4200) && (count < 4500))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
//			else if ((count >= 9000) && (count < 9600))
			else if ((count >= 4500) && (count < 4800))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
//			else if ((count >= 9600) && (count < 10200))
			else if ((count >= 4800) && (count < 5100))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else
			begin
				latch <= 1'b0;
				pulse <= 1'b1;
			end
	end // end of always block


/*This always block will capture the data sent from the controller on the negative edge of the pulse, the controller by nature
 *is active low so the data will be inverted and stored into an output register
 *
 */
always@(negedge pulse)
begin
		//Capture A
//   if ((count >= 1200) && (count < 1800))
		if ((count >= 600) && (count < 900))
		controller_data[7] = ~data;
		//Capture B
//	else if((count >= 2400) && (count < 3000))
	else if((count >= 1200) && (count < 1500))
		controller_data[6] = ~data;
		//Caputre Select
//	else if((count >= 3600) && (count < 4200))
	else if((count >= 1800) && (count < 2100))
		controller_data[5] = ~data;	
	//Caputre Start
//	else if((count >= 4800) && (count <5400))
	else if((count >= 2400) && (count <2700))
		controller_data[4] = ~data;
	//Caputre Up			
//	else if((count >= 6000) && (count < 6600))
	else if((count >= 3000) && (count < 3300))
		controller_data[3] = ~data;
	//Caputre Down
//	else if((count >= 7200) && (count < 7800))
	else if((count >= 3600) && (count < 3900))
		controller_data[2] = ~data;	
	//Caputre Left
//	else if((count >= 8400) && (count < 9000))
	else if((count >= 4200) && (count < 4500))
		controller_data[1] = ~data;	
	//Caputre Right
//	else if((count >= 9600) &&(count < 10200))
	else if((count >= 4800) &&(count < 5100))
		controller_data[0] = ~data;
end



/*This always block will take care of the counter that will be used to control.
 *
 */
always@(posedge clock)
begin
	//If a reset occurs reset the counter.
	if(reset)
//		count <= 21'd1200;
		count <= 20'd0;
	//Else if the counter has reached the maximum value, reset the counter
//	else if(count == 21'd1666667)
	else if(count == 20'd833333)
//		count<= 21'b0;
		count<= 20'b0;
	//Else increase the counter.
	else
		count <= count + 1;
end

endmodule

