/* 
 * File: FUNCTIONS.h
 * Author: Ronnie Eriksson
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef FUNCTIONS_H
#define	FUNCTIONS_H


// #############################################################################
// #################### FUNCTIONS ##############################################
// #############################################################################

/*
================================================================================
===================  BLUETOOTH FUNCTIONS  ======================================
================================================================================ 
*/

void BLUETOOTH_RX(void);
void BLUETOOTH_TX(void);
void BLUETOOTH_BW(void);
void BLUETOOTH_FW(void);
void BLUETOOTH_PWR(void);
void BLUETOOTH_PAIRING(void);
void BLUETOOTH_ON_OFF(void);
void BLUETOOTH_POW_OFF(void);
void BLUETOOTH_PLAY_PAUSE(void);
void BLUETOOTH_CLEAR(void);

/*
================================================================================
===================  REMOTE CONBTROL FUNCTION  =================================
================================================================================ 
*/

void READ_REMOTE_CONTROL(void);

/*
================================================================================
===================  PORTS SETUP  ==============================================
================================================================================ 
*/

void PORTS(void);

/*
================================================================================
===================  RS232 MAIN FUNCTION SETUP  ================================
================================================================================ 
*/

void RS232(void);
void EUSART1_Initialize(void);
void UART(void);

/*
================================================================================
===================  ADC MAIN FUNCTION SETUP  ==================================
================================================================================ 
*/

void ADC(void);

/*
================================================================================
===================  INTERRUPTS MAIN FUNCTION SETUP  ===========================
================================================================================ 
*/

void INTERRUPTS_INIT(void);
void INTERRUPTS_OFF(void);
void INTERRUPTS_ON(void);
void INTERRUPTS_COMPARATOR(void);

/*
================================================================================
===================  BATTERY READING FUNCTIONS  ================================
================================================================================ 
*/

void ADC_Bat_Voltage(void);
void INIT_BATTERY_TEST(void);
void Battery_Relay_On(void);
void Battery_Relay_Off(void);

/*
================================================================================
===================  TEMPERATURE READING FUNCTIONS  ============================
================================================================================ 
*/

void Init_Temperature(void);
void DISPLAY_TEMPERATURE(void);

/*
================================================================================
===================  FAN CONTROL FUNCTIONS  ====================================
================================================================================ 
*/

void Init_Fan(void);                                                            // SET FAN PWM MODULE UP
void Fan_PWM_CONTROL(unsigned char PWM_BYTE);                                   // SETS PWM RATIOINIT
void FAN_PWM_PROPERTIES(void);  
unsigned char CALC_PWM(unsigned char TEMP_HI);                                  // CALCULATE PWM BYTE FOR FAN PWM MODULE
      

/*
================================================================================
===================  I2C DRIVER FUNCTIONS  =====================================
================================================================================ 
*/

void Calendar_CMD_Wr(void);
void Calendar_Wr(void);
void CALENDAR_RE(void);
void START_I2C(void);
void STOP_I2C(void);

void INIT_I2C(void);

void NACK(void);
void S_ACK(void);
void ACK(void);

void HIGH_SDA(void);
void LOW_SDA(void);
void HIGH_SCL(void);
void LOW_SCL(void);
void CLOCK_PULSE(void);

void I2C_BUFFER_WR(int I2C_W_BUFFER);
unsigned char I2C_BUFFER_READ(void);

unsigned char EEPROM_R(unsigned char MEMORY_ADRESS);
void EEPROM_WR(unsigned char MEMORY_ADRESS, unsigned char INPUT);

unsigned char Read_Temperature(void);


/*
================================================================================
===================  INPUT BOARD DRIVER FUNCTIONS  =============================
================================================================================ 
*/

void PHONO(void);
void TUNER(void);
void CD(void);
void BLUETOOTH(void);
void LINE_1(void);
void LINE_2(void);
void LINE_3(void);
void TAPE(void);

void LINE_1_AMPLIFIER(void);

void LINE_1_POWER_ON(void);

/*
================================================================================
===================  SATELITE BOARDS DRIVER FUNCTION  ==========================
================================================================================ 
*/

void SATELITE_BOARD_WR(unsigned char EE_SATELITE, unsigned char SATELITE_DATA);
void BLUETOOTH_POW_ON(void);

/*
================================================================================
===================  EEPROM READ AND WRITE FUNCTIONS  ==========================
================================================================================ 
*/




/*
================================================================================
===================  LINE 4 INTERRUPT FUNCTIONS  ===============================
================================================================================ 
*/

void LINE_4_AMP_TIMER(unsigned char AMP_HOUR_H, unsigned char AMP_HOUR_L, unsigned char AMP_MINUTE_H, unsigned char AMP_MINUTE_L, unsigned char AMP_SECOND_H, unsigned char AMP_SECOND_L);
void LINE_4_POS_CONTROL(void);
void LINE_4_NEG_CONTROL(void);
void LINE_1_REQUEST(void);
void LINE_2_DENIED(void);
void LINE_4_BASS_F_LO(void); 
void LINE_4_BASS_F_HI(void); 
                                                                                // SET FAN PWM MODULE UP
void FAN_PWM_PROPERTIES(void);                                                  // READS FAN PWM PROPERIES FOR SHOW AT LCD

/*
================================================================================
===================  DISPLAY ROTINES  ==========================================
================================================================================ 
*/

void CLOCK_R(void);
void POWER_R(void);
void CONTROLS(void);
void ledWrite(uint8_t ledColor);
void TIMES(void);
void LCD_CLR(void);
void setFontsColorMenu(void);
void SPI1_Initialize(void);
/*
================================================================================
===================  DISPLAY TEXTBLOCKS  =======================================
================================================================================ 
*/

void LINE_1_NEW_TIME(void);
void LINE_1_SET_DIAGNOSE(void);
void LINE_1_DIAGNOSE(void);
void LINE_1_SET_TECTA_2(void);
void LINE_1_TECTA_2(void);
void LINE_1_CLR(void);
void LINE_1_PHONO(void);
void LINE_1_TUNER(void);
void LINE_1_CD(void);
void LINE_1_BLUETOOTH(void);
void LINE_1_LINE_1(void);
void LINE_1_LINE_2(void);
void LINE_1_LINE_3(void);
void LINE_1_SET_BASS(void);
void LINE_1_BASS(void);
void LINE_1_AMPLIFIER(void);
void LINE_1_SET_BLUET_VOL(void);
void LINE_1_POWER_ON(void);
void LINE_1_STAND_BY(void);
void LINE_1_PAIRING(void);
void LINE_1_REQUEST(void);

void LINE_2_CLR(void);
void LINE_2_TIME(void);
void LINE_2_STAND_BY(void);
void LINE_2_SET_TIME(void);
void LINE_2_DAY_OF_WEEK(int DOW_LCD);
void LINE_2_SET_TECTA_3(void);
void LINE_2_TECTA_3(void);
void LINE_2_WARMING_UP(void);
void LINE_2_CLEAR(void);
void LINE_2_TAPE(void);
void LINE_2_TREBLE(void);
void LINE_2_DENIED(void);
void line2FontColorExample(void);


void LINE_3_SET_DATE(unsigned char YY_LCD, unsigned char MM_LCD, unsigned char DD_LCD, unsigned char DATE_TIME_LEVEL);
void LINE_3_SET_FONT(void);
void LINE_3_FONT(void);
void LINE_3_CLR(void);
void LINE_3_STAND_BY(void);
void LINE_3_SET_TECTA_4(void);
void LINE_3_TECTA_4(void);
void LINE_3_SET_BALANCE(void);
void LINE_3_BALANCE(void);
void LINE_3_VOLUME(void);
void LINE_3_BT_BW(void);
void LINE_3_BT_FW(void);
void LINE_3_BT_PLAY_PAUSE(void);
void LINE_2_BLUETOOTH(void);
void LINE_3_BLUETOOTH(void);

void LINE_4_CLR(void);
void LINE_4_STAND_BY(void);
void LINE_4_SET_TIME(unsigned char HOUR_LCD, unsigned char MIN_LCD, unsigned char SEC_LCD, unsigned char DATE_TIME_LEVEL);
void LINE_4_SET_SETTINGS(void);
void LINE_4_SETTINGS(void);
void LINE_4_BASS_F_LO(void);
void LINE_4_BASS_F_HI(void);
void LINE_4_AMP_TIMER(unsigned char AMP_HOUR_H, unsigned char AMP_HOUR_L, unsigned char AMP_MINUTE_H, unsigned char AMP_MINUTE_L, unsigned char AMP_SECOND_H, unsigned char AMP_SECOND_L);
void LINE_4_BLUETOOTH_INIT(void);

/*
================================================================================
===================  TIMER ROTINES  ============================================
================================================================================ 
*/

void TIMER_1_SETUP(void);
void SET_TIMER_1(void);
void DISABLE_TIMER_1(void);
void TIMER_3_SETUP(void);
void SET_TIMER_3(void);
void DISABLE_TIMER_3(void);
void TIMER_5_SETUP(void);
void SET_TIMER_5(void);
void DISABLE_TIMER_5(void);

void delayHalfus(void);

/*
================================================================================
===================  INTERRUPT ROTINES  ========================================
================================================================================ 
*/

unsigned char READ_COM(void);
unsigned char SUB_READ_COM(void);
void INTERRUPTS_OFF(void);
void INTERRUPTS_ON(void);

/*
================================================================================
===================  AMPLIFIER PROPERTIES ROTINES  =============================
================================================================================ 
*/

void AMP_PROPERIES(void);
void PERFORM_AMP_DIAGNOSE(void);
void LINE_1_SET_BASS(void);
void LINE_1_BASS(void);
void LINE_2_SET_TREBLE(void);
void LINE_3_SET_BALANCE(void);
void LINE_2_TREBLE(void);
void LINE_3_BALANCE(void);  

/*
================================================================================
===================  TIME CALENDAR ROTINES  ====================================
================================================================================ 
*/

void CALENDAR_TIME_CORRECTION(void);




void __interrupt(high_priority) HiIsr(void);
void __interrupt(low_priority) LowIsr(void);

#endif	/* XC_HEADER_TEMPLATE_H */

