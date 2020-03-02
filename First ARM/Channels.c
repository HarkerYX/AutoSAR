#include "Channels.h"
#include "Bit_Macros.h"



/*To Read channel Data*/

unsigned char GPIO_Read_Channel(GPIOA_Type *GPIO_PORT,unsigned char channel){
	return (1&(GPIO_PORT->DATA>>channel));
}


/*To assign channel data */
void GPIO_Write_Channel(GPIOA_Type *GPIO_PORT , unsigned char channel , unsigned char value){
	if(GPIO_PORT==GPIOA){
		if(value == 0){
			Clr_Bit(GPIOA->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOA->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
	else if(GPIO_PORT==GPIOB){
		if(value == 0){
			Clr_Bit(GPIOB->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOB->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
	else if(GPIO_PORT==GPIOC){
		if(value == 0){
			Clr_Bit(GPIOC->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOC->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
	else if(GPIO_PORT==GPIOD){
		if(value == 0){
			Clr_Bit(GPIOD->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOD->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
	else if(GPIO_PORT==GPIOE){
		if(value == 0){
			Clr_Bit(GPIOE->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOE->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
	else if(GPIO_PORT==GPIOF){
		if(value == 0){
			Clr_Bit(GPIOF->DATA,channel);
		}
			else if(value==1){
				Set_Bit(GPIOF->DATA,channel);
			}
				else{/*Do Nothing*/}
	}
}