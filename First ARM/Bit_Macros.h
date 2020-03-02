

#define Set_Bit(reg,num) reg |= (1<<num)
#define Clr_Bit(reg,num) reg &=~(1<<num)
#define Read_Bit(reg,num) ((reg>>num)&1)