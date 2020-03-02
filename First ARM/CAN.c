


#include <TM4C123GH6PM.h>
#include "Channels.h"
#include "PORT_Config.h"

void CAN_Init(void){
	SYSCTL->RCGC0=0x0000003F;
	GPIOB->DIR |= (1<<5);
	GPIOB->DIR &=~(1<<4);
	//
	CAN0->MSG1VAL = 0x00;
	
	
	
}