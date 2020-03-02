/*
 * MemoryStackAttempt_2.c
 *
 * Created: 2/15/2020 1:24:37 PM
 *  Author: youse
 */ 

#include "avr/io.h"
#include "External_EEPROM.h"
#include "Emulator.h"
int main(void)
{
	unsigned char val = 0;
	//unsigned char a[2];
	// Init EEPROM
	EEPROM_Init();
	EEPROM_Virtual(1,1,1,10);
	//EEPROM_Write_Byte(0x0311, 0x0F); // Write 0xFF in the external EEPROM
	_delay_ms(10);
	//EEPROM_Read_Byte(0x0311, &val); // Read 0xFF from the external EEPROM

	EEPROM_Virtual(1,0,1,0);
	while(1)
	{
		if(data== 10){
			DDRD=0xFF;
			PORTD=0xFF;
		}
	}
	return 0;
}