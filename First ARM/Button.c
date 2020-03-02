

#include "Button.h"
#include "Bit_Macros.h"

//Getting button Pin Ready
void Button_Init(PORT_Type *PORT,unsigned char channel){
	Clr_Bit(PORT->DIR,channel);
	Clr_Bit(PORT->DATA,channel);
}
//Getting Value of button
unsigned char Button_Read(PORT_Type *PORT,unsigned char channel){
	return Read_Bit(PORT->DATA,channel);
}