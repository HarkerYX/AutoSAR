/*
 * Emulator.c
 *
 * Created: 2/15/2020 12:45:42 PM
 *  Author: youse
 */ 
#include "Emulator.h"


	
void EEPROM_Virtual(unsigned long Sector,unsigned long Operation,unsigned long num, unsigned char Value){
	if(Sector == Sector_One_Flag){
		if(Operation == Write){
			//EEProm_Write((/*Enter*/Sector*Sector_Length)+ num ,Value);
		}
		else {
			EEProm_Write((/*Enter*/Sector*Sector_Length)+ num ,Value);
		}
	}
	else if(Sector == Sector_Two_Flag){
		if(Operation == Write){
			EEProm_Write((/*Enter*/Sector*Sector_Length)+ num ,Value);
		}
		else {
			EEProm_Write((/*Enter*/Sector*Sector_Length)+ num ,Value);
		}
	}
	}


void EEPROM_Just_Enter(unsigned char data_pushed){
	//volatile unsigned Temp;
	/*First Bit Equals Sector 1 , Second bit equals Sector 2 ... etc*/
	volatile static unsigned short Sector_Check;
	
	if( (1&(Sector_Check>>0)) == 1){
		if((1&(Sector_Check>>0)) == 1){
			/*See What's Wrong or continue Sectors*/
		}
		//Temp=EEPROM_Read(Sector_One_Start);
		//EEPROM_Write(Temp,data_pushed);
	}
}