#include <TM4C123GH6PM.h>
//C6 Microcontroller ports - Chip the world
#include "Channels.h"
#include "LCD.h"
#include "Button.h"
int main(){
		
	GPIO_Init();
	
	GPIOF->PUR=0x11;
//LCD_Screen("Welcome","Screen");
	LCD_Init();
	LCD4bits_cmd(0x01);
	LCD4bits_cmd(0x80);
	delayMs(500);
	LCD_String("HEY");;
	LCD4bits_cmd(0xC0);
	LCD_String("Youssef");
	/*The main Frame*/
	while(1){
		
	}
	return 0;
}
	