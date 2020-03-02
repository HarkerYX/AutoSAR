/*
 * IncFile1.h
 *
 * Created: 2/15/2020 12:48:19 PM
 *  Author: youse
 */ 

unsigned char data;

#ifndef INCFILE1_H_
#define INCFILE1_H_
#define Read 0
#define Write 1
#define Sector_One_Length 100
#define Sector_Two_Length 100
#define Start_Address 0 
#define End_Address 16000
#define Sector_One_Flag 1
#define Sector_One_Start 0x0311
#define Sector_one_End ((0x311)+100)
#define Sector_Two_Flag 2
#define Sector_Two_Start (Sector_one_End + 1)
#define Sector_Two_End (Sector_Two_Start + 100)
	
void EEPROM_Virtual(/*Sectoring EEPROM*/unsigned long Sector,/*Read adn write*/unsigned long Operation,unsigned long Address, unsigned char Value){

#endif /* INCFILE1_H_ */