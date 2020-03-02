#include <TM4C123GH6PM.h>
#include "LCD.h"
#include "Bit_Macros.h"

void delayMs(int n){
	int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<3180;y++){}
		}
}

void delayUs(int n){
	int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<3;y++){}
		}
}
void LCD_Init(){
	/*Set_Bit(LCD_PORT_DATA_0,LCD_Data_Pin0);
	Set_Bit(LCD_PORT_DATA_1,LCD_Data_Pin1);
	Set_Bit(LCD_PORT_DATA_2,LCD_Data_Pin2);
	Set_Bit(LCD_PORT_DATA_3,LCD_Data_Pin3);
	Set_Bit(LCD_PORT_DATA_4,LCD_Data_Pin4);
	Set_Bit(LCD_PORT_DATA_5,LCD_Data_Pin5);
	Set_Bit(LCD_PORT_DATA_6,LCD_Data_Pin6);
	Set_Bit(LCD_PORT_DATA_7,LCD_Data_Pin7);
	*/
	
	Set_Bit(LCD_PORT_DIR_0,LCD_Data_Pin0);
	Set_Bit(LCD_PORT_DIR_1,LCD_Data_Pin1);
	Set_Bit(LCD_PORT_DIR_2,LCD_Data_Pin2);
	Set_Bit(LCD_PORT_DIR_3,LCD_Data_Pin3);
	Set_Bit(LCD_PORT_DIR_4,LCD_Data_Pin4);
	Set_Bit(LCD_PORT_DIR_5,LCD_Data_Pin5);
	Set_Bit(LCD_PORT_DIR_6,LCD_Data_Pin6);
	Set_Bit(LCD_PORT_DIR_7,LCD_Data_Pin7);
	
	Set_Bit(LCD_PORT_DEN_0,LCD_Data_Pin0);
	Set_Bit(LCD_PORT_DEN_1,LCD_Data_Pin1);
	Set_Bit(LCD_PORT_DEN_2,LCD_Data_Pin2);
	Set_Bit(LCD_PORT_DEN_3,LCD_Data_Pin3);
	Set_Bit(LCD_PORT_DEN_4,LCD_Data_Pin4);
	Set_Bit(LCD_PORT_DEN_5,LCD_Data_Pin5);
	Set_Bit(LCD_PORT_DEN_6,LCD_Data_Pin6);
	Set_Bit(LCD_PORT_DEN_7,LCD_Data_Pin7);
	
	
	//LCD->DIR=0xFF;
	//LCD->DEN=0xFF;
	// LCD4bits_cmd(0x33); 
	// LCD4bits_cmd(0x32);
	LCD4bits_cmd(0x28);
	LCD4bits_cmd(0x06);
	LCD4bits_cmd(0x01);
	LCD4bits_cmd(0x0F);

}


/*
*/
void LCD4bits_cmd(unsigned char cmd){
	LCD4bits(cmd&0xF0,0);
	LCD4bits(cmd<<4,0);

	if(cmd<4)
		delayMs(4);
	else
			delayUs(80);
}
/*
*/
void LCD4bits_data(unsigned char data){
	LCD4bits(data&0xF0,1);
	LCD4bits(data<<4,1);
	delayUs(80);
}

/*
*/
#define LCD_PORT_DATA GPIOB->DATA
#define RW 2
#define EN 4
void LCD4bits(unsigned char data,unsigned char control){
	/*LCD_PORT_DATA&=~(1<<RW);
	data &=0xF0;
	control&=0x0F;
	LCD_PORT_DATA=data|control;
	LCD_PORT_DATA=data|control | EN;
	delayUs(0);
	LCD_PORT_DATA=data;*/
	
	
	LCD_PORT_RW &=~(1<<LCD_DATA_RW);
	data &=0xF0;
	control&=0x0F;
	LCD->DATA=data|control;
	LCD->DATA=data|control |EN;
	delayUs(0);
	LCD_PORT_DATA_1=data;
	if((1&(data>>LCD_Data_Pin0)) == 1){
		Set_Bit(LCD_PORT_DATA_0,LCD_Data_Pin0);
	}
	else if((1&(data>>LCD_Data_Pin0)) == 0){
		Clr_Bit(LCD_PORT_DATA_0,LCD_Data_Pin0);
	}
	//------
	
	if((1&(data>>LCD_Data_Pin1)) == 1){
		Set_Bit(LCD_PORT_DATA_1,LCD_Data_Pin1);
	}
	else if((1&(data>>LCD_Data_Pin1)) == 0){
		Clr_Bit(LCD_PORT_DATA_1,LCD_Data_Pin1);
	}
	//-------
	if((1&(data>>LCD_Data_Pin2)) == 1){
		Set_Bit(LCD_PORT_DATA_2,LCD_Data_Pin2);
	}
	else if((1&(data>>LCD_Data_Pin2)) == 0){
		Clr_Bit(LCD_PORT_DATA_2,LCD_Data_Pin2);
	}
	
	if((1&(data>>LCD_Data_Pin3)) == 1){
		Set_Bit(LCD_PORT_DATA_3,LCD_Data_Pin3);
	}
	else if((1&(data>>LCD_Data_Pin3)) == 0){
		Clr_Bit(LCD_PORT_DATA_3,LCD_Data_Pin3);
	}
	if((1&(data>>LCD_Data_Pin4)) == 1){
		Set_Bit(LCD_PORT_DATA_4,LCD_Data_Pin4);
	}
	else if((1&(data>>LCD_Data_Pin4)) == 0){
		Clr_Bit(LCD_PORT_DATA_4,LCD_Data_Pin4);
	}
	if((1&(data>>LCD_Data_Pin5)) == 1){
		Set_Bit(LCD_PORT_DATA_5,LCD_Data_Pin5);
	}
	else if((1&(data>>LCD_Data_Pin5)) == 0){
		Clr_Bit(LCD_PORT_DATA_5,LCD_Data_Pin5);
	}
	if((1&(data>>LCD_Data_Pin6)) == 1){
		Set_Bit(LCD_PORT_DATA_6,LCD_Data_Pin6);
	}
	else if((1&(data>>LCD_Data_Pin6)) == 0){
		Clr_Bit(LCD_PORT_DATA_6,LCD_Data_Pin6);
	}
	if((1&(data>>LCD_Data_Pin7)) == 1){
		Set_Bit(LCD_PORT_DATA_7,LCD_Data_Pin7);
	}
	else if((1&(data>>LCD_Data_Pin7)) == 0){
		Clr_Bit(LCD_PORT_DATA_7,LCD_Data_Pin7);
	}
	
}
/*
*/

void LCD_String (char *str)		/* Send string to LCD function */
{
	int i;
	for(i=0;str[i]!=0;i++)		/* Send each char of string till the NULL */
	{
		LCD4bits_data(str[i]);
	}
}

void LCD_Screen( void){
LCD_Init();
	LCD4bits_cmd(0x01);
	LCD4bits_cmd(0x80);
	delayMs(500);
	LCD_String("Welcome");;
	LCD4bits_cmd(0xC0);
	LCD_String("Screen");
}