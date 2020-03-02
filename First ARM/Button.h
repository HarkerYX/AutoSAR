
#include <TM4C123GH6PM.h>

#define PORT_Type GPIOA_Type
unsigned char Button_Read(PORT_Type *PORT,unsigned char channel);
void Button_Init(PORT_Type *PORT,unsigned char channel);
