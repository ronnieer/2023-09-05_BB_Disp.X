/* 
 * File: VARIABLES_AND_CONST.h
 * Author: Ronnie Eriksson
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  

#ifndef VARIABLES_AND_CONST_H
#define	VARIABLES_AND_CONST_H


// #############################################################################
// #################### CONSTANTS ##############################################
// #############################################################################

const unsigned char C_EE_INPUTS = 0x00;
const unsigned char C_EE_LINES = 0x01;
const unsigned char C_EE_OUTPUTS = 0x02;
const unsigned char C_EE_FONTS = 0x03;
//const unsigned char C_EE_BLUETOOTH = 0x04;
const unsigned char C_EE_FONT_INVERSE = 0x05;

const unsigned char C_EE_SAT_BLUETOOTH = 0x03;
const unsigned char C_EE_SAT_INPUTS = 0x04;
const unsigned char C_EE_SAT_OUTPUTS = 0x05;
const unsigned char C_EE_SAT_BALANCE = 0x06;
const unsigned char C_EE_SAT_TON_VOL = 0x07;

const unsigned char C_LINE_1 = 0;
const unsigned char C_LINE_2 = 1;
const unsigned char C_LINE_3 = 2;
const unsigned char C_LINE_4 = 3;
const unsigned char C_LINE_5 = 4;
const unsigned char C_LINE_6 = 5;

typedef enum{
    black,
    red,
    green,
    yellow,
    blue,
    magenta,
    cyan,
    white
}DISPLAY_COLOR;

typedef enum{
    line1,
    line2,
    line3,
    line4
}ENUM_DISP_LINE;

extern ENUM_DISP_LINE ledDisplayLineNo;

// #############################################################################
// #################### VARIABLES ##############################################
// #############################################################################

/*
================================================================================
===================  TIME VARIABLES  ===========================================
================================================================================ 
*/

unsigned char TIME_0;
unsigned char TIME_1;
unsigned char TIME_2;
unsigned char TIME_3;
unsigned char TIME_4;
unsigned char TIME_5;
unsigned char TIME_6;
unsigned char TIME_7;
unsigned char TIME_0_L;
unsigned char TIME_0_H;
unsigned char TIME_1_L;
unsigned char TIME_1_H;
unsigned char TIME_2_L;
unsigned char TIME_2_H;
unsigned char TIME_3_L;
unsigned char TIME_3_H;
unsigned char TIME_4_L;
unsigned char TIME_4_H;
unsigned char TIME_5_L;
unsigned char TIME_5_H;
unsigned char TIME_6_L;
unsigned char TIME_6_H;

unsigned char TIME_CONTROL;
unsigned char LINES_DATA;
unsigned int AMP_TIMER_TIME;
unsigned int TAPE_TIMER_TIME;
unsigned char FORCE_SHOW_CLOCK_AT_LINE_4;
unsigned int APA_CNT = 0;

unsigned int AMP_HOUR;
unsigned int AMP_MINUTE;
unsigned int AMP_SECOND;
unsigned int AMP_TIMER_SECONDS_REMAINING_;
char AMP_HOUR_H;
char AMP_HOUR_L;
char AMP_MINUTE_H;
char AMP_MINUTE_L;
char AMP_SECOND_H;
char AMP_SECOND_L;

/*
================================================================================
===================  VARIABLES  ================================================
================================================================================ 
*/

unsigned char INPUT;
unsigned char MEMORY_ADRESS;
unsigned char BT_INPUTS_DATA;
unsigned char BLUETOOTH_INPUTS_DATA;
unsigned char BT_TX;
unsigned char BT_PWR;
unsigned char UART_EXIT;

/*
================================================================================
===================  CONTROL VARIABLES  ========================================
================================================================================ 
*/

unsigned char ROW_4_BUSY;
unsigned char ALPHA_NUM = 1;
unsigned char ENTER_STAND_BY;
unsigned char ENTER_POWER_ON;

/*
================================================================================
===================  REMOTE CONTROL VARIABLES  =================================
================================================================================ 
*/

unsigned char RS_FUNC_CODE;
unsigned char INPUTS_LOCKOUT_DATA = 0;
unsigned char INT_TST;
unsigned int REMOTE_CODE_HI = 0;
unsigned int REMOTE_CODE_LO = 0;
unsigned char BIT_COUNT = 0;

/*
================================================================================
===================  DISPLAY CONTROL VARIABLES  ================================
================================================================================ 
*/

char linePositions[4][11];
char LCD_STRING[11];
char LCD_STRING_BF[5];
unsigned char FONT_CONTROL = 1;

unsigned char LINE_NO;
unsigned char FONT_TYPE;
unsigned char FONT_TYPE_INVERSE;
unsigned char FONT_ROW_SCALE;
unsigned char FONT_COL_OFFSET;  
unsigned char FONT_X_SCALE;
unsigned char FONT_Y_SCALE;
unsigned char FONT_ROW_OFFSET;

uint8_t ledColor = 7;

/*
================================================================================
===================  PWM CONTROL VARIABLES  ====================================
================================================================================ 
*/

unsigned char PWM_TEMP;
unsigned char TEMP;





#endif	/* XC_HEADER_TEMPLATE_H */

