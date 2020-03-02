#include <TM4C123GH6PM.h>
#define Internal_Address_Length unsigned long
void GPIO_Init(void);
void GPIO_Channels_Init(void);
void GPIO_Write_Channel(GPIOA_Type *GPIO_PORT , unsigned char channel , unsigned char value);
unsigned char GPIO_Read_Channel(GPIOA_Type *GPIO_PORT,unsigned char channel);
