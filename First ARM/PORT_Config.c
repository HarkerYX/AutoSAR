	
#include "PORT_config.h"
#include <TM4C123GH6PM.h>
//Structure that defines each Data in each register of a PORT
typedef struct {
		uint32_t LOCK;
		uint8_t CR;
		uint8_t AMSEL;
		uint32_t PCTL;
	  uint8_t AFSEL;
		uint8_t PUR;
		uint8_t DIR;
		uint8_t DEN;
		uint8_t Data;
	}config;
	
	void GPIO_Init(void){
		/*Temporary Values To assign You Can Just Delete the Structure and assign Directly*/
		
		config Px[6];
		volatile unsigned long delay;
		//Allowing System Clock
   	SYSCTL->RCGC2=0x0000003F;
	  delay=SYSCTL->RCGC2;
		/*-------------------------------*/
		//Disabling LOCK Bit Control
		Px[PORTA_F].LOCK=PORTA_LOCK;
		Px[PORTA_F].CR=PORTA_CR;
		Px[PORTA_F].AMSEL=PORTA_AMSEL;
		//Choosing Alternative functions or GPIO
		Px[PORTA_F].AFSEL=PORTA_AFSEL;
		//Pull up resistance config
		Px[PORTA_F].PUR=PORTA_PUR;
		//Direction of the pin INPUT or OUTPUT
		Px[PORTA_F].DIR=PORTA_DIR;
		//Enabling Digital Clock
		Px[PORTA_F].DEN=PORTA_DEN;
		//Data Init
		Px[PORTA_F].Data=PORTA_Data;
		
		Px[PORTA_F].PCTL=PORTA_PCTL;
		/*-------------------------------*/
		Px[PORTB_F].LOCK=PORTB_LOCK;
		Px[PORTB_F].CR=PORTB_CR;
		Px[PORTB_F].AMSEL=PORTB_AMSEL;
		Px[PORTB_F].AFSEL=PORTB_AFSEL;
		Px[PORTB_F].PUR=PORTB_PUR;
		Px[PORTB_F].DIR=PORTB_DIR;
		Px[PORTB_F].DEN=PORTB_DEN;
		Px[PORTB_F].Data=PORTB_Data;
		Px[PORTB_F].PCTL=PORTB_PCTL;
		/*-------------------------------*/
		Px[PORTC_F].LOCK=PORTC_LOCK;
		Px[PORTC_F].CR=PORTC_CR;
		Px[PORTC_F].AMSEL=PORTC_AMSEL;
		Px[PORTC_F].AFSEL=PORTC_AFSEL;
		Px[PORTC_F].PUR=PORTC_PUR;
		Px[PORTC_F].DIR=PORTC_DIR;
		Px[PORTC_F].DEN=PORTC_DEN;
		Px[PORTC_F].Data=PORTC_Data;
		Px[PORTC_F].PCTL=PORTC_PCTL;
		/*-------------------------------*/
		Px[PORTD_F].LOCK=PORTD_LOCK;
		Px[PORTD_F].CR=PORTD_CR;
		Px[PORTD_F].AMSEL=PORTD_AMSEL;
		Px[PORTD_F].AFSEL=PORTD_AFSEL;
		Px[PORTD_F].PUR=PORTD_PUR;
		Px[PORTD_F].DIR=PORTD_DIR;
		Px[PORTD_F].DEN=PORTD_DEN;
		Px[PORTD_F].Data=PORTD_Data;
		Px[PORTD_F].PCTL=PORTD_PCTL;
		/*-------------------------------*/
		Px[PORTE_F].LOCK=PORTE_LOCK;
		Px[PORTE_F].CR=PORTE_CR;
		Px[PORTE_F].AMSEL=PORTE_AMSEL;
		Px[PORTE_F].AFSEL=PORTE_AFSEL;
		Px[PORTE_F].PUR=PORTE_PUR;
		Px[PORTE_F].DIR=PORTE_DIR;
		Px[PORTE_F].DEN=PORTE_DEN;
		Px[PORTE_F].Data=PORTE_Data;
		Px[PORTE_F].PCTL=PORTE_PCTL;
		/*-------------------------------*/
		Px[PORTF_F].LOCK=PORTF_LOCK;
		Px[PORTF_F].CR=PORTF_CR;
		Px[PORTF_F].AMSEL=PORTF_AMSEL;
		Px[PORTF_F].AFSEL=PORTF_AFSEL;
		Px[PORTF_F].PUR=PORTF_PUR;
		Px[PORTF_F].DIR=PORTF_DIR;
		Px[PORTF_F].DEN=PORTF_DEN;
		Px[PORTF_F].Data=PORTF_Data;
		Px[PORTF_F].PCTL=PORTF_PCTL;
		/*-------------------------------*/
		/*Assigning To Hardware Physical Address*/
		GPIOA->LOCK = Px[PORTA_F].LOCK;
		GPIOA->CR = Px[PORTA_F].CR;
		GPIOA->AMSEL  = Px[PORTA_F].AMSEL;
		GPIOA->AFSEL  = Px[PORTA_F].AFSEL;
		GPIOA->PUR    = Px[PORTA_F].PUR;
		GPIOA->DIR    = Px[PORTA_F].DIR;
		GPIOA->DEN    = Px[PORTA_F].DEN;
		GPIOA->DATA   = Px[PORTA_F].Data;
		GPIOA->PCTL   = Px[PORTA_F].PCTL;
		/*-------------------------------*/
		GPIOB->LOCK = Px[PORTB_F].LOCK;
		GPIOB->CR = Px[PORTB_F].CR;
		GPIOB->AMSEL  = Px[PORTB_F].AMSEL;
		GPIOB->AFSEL  = Px[PORTB_F].AFSEL;
		GPIOB->PUR    = Px[PORTB_F].PUR;
		GPIOB->DIR    = Px[PORTB_F].DIR;
		GPIOB->DEN    = Px[PORTB_F].DEN;
		GPIOB->DATA   = Px[PORTB_F].Data;
		GPIOB->PCTL   = Px[PORTB_F].PCTL;
		/*-------------------------------*/
		/*GPIOC->LOCK = Px[PORTC_F].LOCK;
		GPIOC->CR = Px[PORTC_F].CR;
		GPIOC->AMSEL  = Px[PORTC_F].AMSEL;
		GPIOC->AFSEL  = Px[PORTC_F].AFSEL;
		GPIOC->PUR    = Px[PORTC_F].PUR;
		GPIOC->DIR    = Px[PORTC_F].DIR;
		GPIOC->DEN    = Px[PORTC_F].DEN;
		GPIOC->DATA   = Px[PORTC_F].Data;
		GPIOC->PCTL   = Px[PORTC_F].PCTL;*/
		/*-------------------------------*/
		GPIOD->LOCK = Px[PORTD_F].LOCK;
		GPIOD->CR = Px[PORTD_F].CR;
		GPIOD->AMSEL  = Px[PORTD_F].AMSEL;
		GPIOD->AFSEL  = Px[PORTD_F].AFSEL;
		GPIOD->PUR    = Px[PORTD_F].PUR;
		GPIOD->DIR    = Px[PORTD_F].DIR;
		GPIOD->DEN    = Px[PORTD_F].DEN;
		GPIOD->DATA   = Px[PORTD_F].Data;
		GPIOD->PCTL   = Px[PORTD_F].PCTL;
		/*-------------------------------*/
		GPIOE->LOCK = Px[PORTE_F].LOCK;
		GPIOE->CR = Px[PORTE_F].CR;
		GPIOE->AMSEL  = Px[PORTE_F].AMSEL;
		GPIOE->AFSEL  = Px[PORTE_F].AFSEL;
		GPIOE->PUR    = Px[PORTE_F].PUR;
		GPIOE->DIR    = Px[PORTE_F].DIR;
		GPIOE->DEN    = Px[PORTE_F].DEN;
		GPIOE->DATA   = Px[PORTE_F].Data;
		GPIOE->PCTL   = Px[PORTE_F].PCTL;
		/*-------------------------------*/
		GPIOF->LOCK = Px[PORTF_F].LOCK;
		GPIOF->CR = Px[PORTF_F].CR;
		GPIOF->AMSEL  = Px[PORTF_F].AMSEL;
		GPIOF->AFSEL  = Px[PORTF_F].AFSEL;
		GPIOF->PUR    = Px[PORTF_F].PUR;
		GPIOF->DIR    = Px[PORTF_F].DIR;
		GPIOF->DEN    = Px[PORTF_F].DEN;
		//GPIOF->DATA   = Px[PORTF_F].Data;
		GPIOF->PCTL   = Px[PORTF_F].PCTL;
	}