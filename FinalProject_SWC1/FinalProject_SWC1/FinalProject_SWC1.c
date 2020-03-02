/*
 * FinalProject_SWC1.c
 *
 * Created: 2/21/2020 1:28:53 PM
 *  Author: youse
 */ 


#include <avr/io.h>
#include "RTE_TemperatureRanging_Connection.h"
#include "Rte.h"


int main(void)
{
	unsigned short x;
	struct message M;
    while(1)
    {
		Pointer_Name=RTE_ReadTemp;
        //TODO:: Please write your application code 
		//CAN_Send_Temp_String(Temperature_Message_Def())
		//read temperature
		
		//interpret state action
		//construct frame
		RTE_WriteTemp(50);
		M=Temperature_Message_Def();
				
		//RTE_SendFrame(M.Buff);
		if(M.temperature == 50){
			DDRD=0xFF;
			PORTD=0xFF;
		}
		
		
    }
}