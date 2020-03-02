/*
 * Emulator.c
 *
 * Created: 2/15/2020 12:45:42 PM
 *  Author: youse
 */ 
#include "Emulator.h"
#include "External_EEPROM.h"

	
void EEPROM_Virtual(/*Sectoring EEPROM*/unsigned long Sector,/*Read adn write*/unsigned long Operation,unsigned long Address, unsigned char Value){
	if(Sector == Sector_One_Flag){
		if(Operation == Write){
			if(Address <= Sector_One_Length)
			EEPROM_Write_Byte(Sector_One_Start + Address , Value);
			else{}
			/*DoNothing*/
		}
		else {
			if(Address <= Sector_One_Length)
			EEPROM_Read_Byte(Sector_One_Start + Address ,&data);
			else {}
			/*DoNothing*/
		}
		}		
	
	else if(Sector == Sector_Two_Flag){
		if(Operation == Write){
			if(Address <= Sector_Two_Length)
			EEPROM_Write_Byte(Sector_Two_Start + Address , Value);
			else{}
			/*Do Nothing*/
		}
		else {
			if(Address <= Sector_Two_Length)
			EEPROM_Read_Byte(Sector_Two_Start + Address ,&Value);
			else {}
			/*Do Nothing*/
		}
		}		
		}	
		}		
	
	