

//GPIO PORT
#define LCD_PORT_RS GPIOB->DATA //channels | Dio_Channel_B0
//GPIO Channel
#define LCD_DATA_RS 0

#define LCD_PORT_RW GPIOB->DATA
#define LCD_DATA_RW 1

#define LCD_PORT_EN GPIOB->DATA
#define LCD_DATA_EN 2
#define LCD	GPIOB
//======================
#define LCD_PORT_DATA_0 GPIOB->DATA
#define LCD_PORT_DIR_0 GPIOB->DIR
#define LCD_PORT_DEN_0 GPIOB->DEN

#define LCD_PORT_DATA_1 GPIOB->DATA
#define LCD_PORT_DIR_1 GPIOB->DIR
#define LCD_PORT_DEN_1 GPIOB->DEN

#define LCD_PORT_DATA_2 GPIOB->DATA
#define LCD_PORT_DIR_2 GPIOB->DIR
#define LCD_PORT_DEN_2 GPIOB->DEN


#define LCD_PORT_DATA_3 GPIOB->DATA
#define LCD_PORT_DIR_3 GPIOB->DIR
#define LCD_PORT_DEN_3 GPIOB->DEN

#define LCD_PORT_DATA_4 GPIOB->DATA
#define LCD_PORT_DIR_4 GPIOB->DIR
#define LCD_PORT_DEN_4 GPIOB->DEN

#define LCD_PORT_DATA_5 GPIOB->DATA
#define LCD_PORT_DIR_5 GPIOB->DIR
#define LCD_PORT_DEN_5 GPIOB->DEN

#define LCD_PORT_DATA_6 GPIOB->DATA
#define LCD_PORT_DIR_6 GPIOB->DIR
#define LCD_PORT_DEN_6 GPIOB->DEN

#define LCD_PORT_DATA_7 GPIOB->DATA
#define LCD_PORT_DIR_7 GPIOB->DIR
#define LCD_PORT_DEN_7 GPIOB->DEN




#define LCD_Data_Pin0 0

#define LCD_Data_Pin0_PORT LCD_PORT_DATA_0
#define LCD_DIR_Pin0_PORT LCD_PORT_DATA_0

#define LCD_Data_Pin1 1
#define LCD_Data_Pin1_PORT LCD_PORT_DATA_1
#define LCD_DIR_Pin1_PORT LCD_PORT_DIR_1
#define LCD_Data_Pin2 2
#define LCD_Data_Pin2_PORT LCD_PORT-DATA_2
#define LCD_DIR_Pin2_PORT LCD_PORT_DIR_2
#define LCD_Data_Pin3 3
#define LCD_Data_Pin3_PORT LCD_PORT-DATA_3
#define LCD_DIR_Pin3_PORT LCD_PORT_DIR_3
#define LCD_Data_Pin4 4
#define LCD_Data_Pin4_PORT LCD_PORT-DATA_4
#define LCD_DIR_Pin4_PORT LCD_PORT_DIR_4
#define LCD_Data_Pin5 5
#define LCD_Data_Pin5_PORT LCD_PORT-DATA_5
#define LCD_DIR_Pin5_PORT LCD_PORT_DIR_5
#define LCD_Data_Pin6 6
#define LCD_Data_Pin6_PORT LCD_PORT-DATA_6
#define LCD_DIR_Pin6_PORT LCD_PORT_DIR_6
#define LCD_Data_Pin7 7
#define LCD_Data_Pin7_PORT LCD_PORT-DATA_7
#define LCD_DIR_Pin7_PORT LCD_PORT_DIR_7





//======================
//lcd prototypes
void LCD_Init();
void LCD4bits(unsigned char data,unsigned char control);
void LCD4bits_cmd(unsigned char cmd);
void LCD4bits_data(unsigned char data);
void LCD_String (char *str);
void LCD_Screen(void);
void delayMs(int n);
void delayUs(int n);
void LCD_Init();
