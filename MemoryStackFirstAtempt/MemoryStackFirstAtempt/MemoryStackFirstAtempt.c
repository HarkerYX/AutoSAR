/*
 * MemoryStackFirstAtempt.c
 *
 * Created: 2/15/2020 12:35:40 PM
 *  Author: youse
 */ 


#include <avr/io.h>
#include "External_EEPROM.h"
int main(void)
{
	volatile	uint8 val = 0;
	DDRC=0xff;
	DDRD  = 0xFF;
	PORTD = 0x00;

	// Init EEPROM
	EEPROM_Init();
	EEPROM_WriteByte(0x0002, 0xF0); // Write 0xFF in the external EEPROM
	_delay_ms(10);
	EEPROM_ReadByte(0x0002, &val); // Read 0xFF from the external EEPROM
	while(1)
	{
		PORTD=val;
		//PORTD = val; // out the read value from the external EEPROM
		if(val==0xF0){
			DDRD=0xFF;
			PORTC=0xFF;
		}
	}
	return 0;
}