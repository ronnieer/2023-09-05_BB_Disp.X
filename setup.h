/* 
 * File: SETUPS.h
 * Author:  Ronnie Eriksson
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef SETUP_H
#define	SETUP_H

/*
 * File:   SETUPS.h
 * Author: Ronnie Eriksson
 *
 * Created on den 14 augusti 2023, 12:57
 */

//
//
//  BUGFIX 2021-11-19 V 1.000   :   TAPE_POWER_ON OUTPUT DID CLEAR AT RETURN FROM CONTROLL_FUNCTION BACK TO POVER_FUNCTION. NOW IT DOES NOT
//  UPDATE 2021-11-19 V 1.001   :   VARIABLES MOVED TO THEIR FUNCTIONS
//  UPDATE 2021-11-20 V 1.010   :   NEW SATELITE BOARD DRIVER THAT REPLACES THE OLD ONES. CODE CLEANED FROM OLD KOMMENTED CODE
//  UPDATE 2021-11-26 V 2.000   :   CLOCK AUTO ADJUST
//  UPDATE 2021-11-26 V 2.000   :   AMP_PROPERTIES AS IT'S OWN MODULE
//  UPDATE 2021-11-28 V 2.100   :   MAIN SPLITTED INTO SEVERAL MODULES
//  UPDATE 2021-11-28 V 2.100   :   TIME ADJUSTMENT CHANGED FROM 44 SECONDS AT 03:00 TO 11 SECONDS AT 03:00; 09:00; 15;00 AND 21:00
//  BUGFIX 2021-11-28 V 2.100   :   CLEANER STAND BY AND POWER ON LOOPS
//  BUGFIX 2021-12-03 V 2.200   :   INTERRUPTS_INIT AND INTERRUPTS_ON UPPDATED WITH NEW INTERRUPT SETTINGS
//  UPDATE 2021-12-03 V 2.200   :   FUNCTIONS DECLARARATIONS AND VARIABLE DECLARATIONS REMOVED FROM FILES NOT NEEDED
//  BUGFIX 2021-12-04 V 2.300   :   ATTEMT MADE TO GETT INTERRUPTS RUNNING BY PASSING A 500 uS DELAY AFTER INTERRUPT_ON IN STAND_BY_LOOP
//  BUGFIX 2021-12-06 V 2.300   :   DELAYS PUT IN BETWEEN EACH BYTE WRITTEN AND READ AT CALENDAR IC
//  BUGFIX 2021-12-22 V 2.350   :   NEW ATTEMTS TO SOLVE FREEZING LCD. NEW PROGRAM FLOW. NEW REMOTECONTROL ROTINE.
//  UPDATE 2022-02-27 V 3.000   :   NEW LCD WITH I2C INTERFACE. ABILITY TO CHANGE LCD FONTS THROUGH MENUE SYSTEM.
//  UPDATE 2022-02-27 V 3.100   :   BLUETOOTH ADAPTER CARD IMPLEMENTED WITH NEW DRIVER
//  UPDATE 2022-03-03 V 3.200   :   BLUETOOTH WORKING. PAIRING TIMING IMPLEMENTED
//  UPDATE 2022-03-09 V 3.300   :   SCREEN UPDATING IMPROVED. NEW FONTS: TECTA_2, TECTA_3, TECTA_4
//  UPDATE 2022-03-27 V 4.000   :   BROWNOUT DETECT (2,85 V). A MAXIMUM OF TEN SCREEN CHARACTERS SET FOR TECTA FONT. TIME-CALENDAR VALUES LIMITED SO HEXADEC VALUES AREN'T DISPLAYED AT LCD.
//                                  DOUBLE REMOTE COMMANDS FOR ENTERING TIME SET MODE IS REVOKED. ACTUAL TIME IS DISPLAYED BEFORE REENTERING POWER ON MOD EXITING TIME SET MODE.
//  UPDATE 2222-08-29 V 5.000   :   FAN START LEVEL INCREASED TO 36 C IN STAND BY USED TO BE 27 C.
//                              :   TIME CORRECTION FOR TIME CALENDAR IC DS1307 SET TO -15 S EACH DAY BUT MONAY, AND -20 S EAACH MONDAY.
//                              :   DIAGNOSTIC, TIME AND FONT MENUS CAN BE ENTERED FROM STANDBY
//                              :   MENU TIMEOUT SET TO ABOUT 15 S TO REENTER STAND BY OR AMP POWER ON SCREENS
// BUGFIX 2022-08-29 V 5.001    :   27 C AND 36 C FAN START LEVELS SWAPPED 
// BUGFIX 2022-09-09 V 5.002    :   NIGHTSCREEN TIME COMPARE AND DAWN- AND SET COMPARE VALUES SET FROM HEX TO DEC. TIME COMPARE IS CALCUATED FROM TIME_X_H AND TIME_X_LOW RATHER THAN FROM TIME_X
// BUGFIX 2022-XX-XX V 5.003    :
// BUGFIX 2022-11-05 V 5.004    :   IF BLUETOOTH IS POWERED OF IN RX MODE, INPUT IS SET TO CD; IF BLUETOOTH IS POWERED OF IN TX MODE INPUT MODE REMAINS
// BUGFIX 2022-11-06 V 5.005    :   INPUTS_LOCKOUT_DATA OPERATION CHANGED, OLD_INPUTS_LOCKOUT_DATA IS TAKEN OUT OF S/W, THERE IS A MESSAGE AT STARTING BT RX/ TX MODULES UP PROHIBITING SR CHANGES AT THE TIME
// UPDATE 2023-01-10 V 6.000    :   BASS TONE FREQUENCY IS SHOWN AT LINE 1 RATHER THAN LINE 4



// PIC18F47K40 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1L
#pragma config FEXTOSC = HS    // External Oscillator mode Selection bits (Oscillator not enabled)
#pragma config RSTOSC = HFINTOSC_64MHZ// EXTOSC// Power-up default value for COSC bits (HFINTOSC with HFFRQ = 64 MHz and CDIV = 1:1)


// CONFIG1H
#pragma config CLKOUTEN = OFF   // Clock Out Enable bit (CLKOUT function is disabled)
#pragma config CSWEN = ON       // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)

// CONFIG2L
#pragma config MCLRE = EXTMCLR  // Master Clear Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power up timer disabled)
#pragma config LPBOREN = OFF    // Low-power BOR enable bit (ULPBOR disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bits (Brown-out Reset disabled)

// CONFIG2H
#pragma config BORV = VBOR_285  // Brown Out Reset Voltage selection bits (Brown-out Reset Voltage (VBOR) set to 2.85V)
#pragma config ZCD = OFF        // ZCD Disable bit (ZCD disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
#pragma config PPS1WAY = OFF    // PPSLOCK bit One-Way Set Enable bit (PPSLOCK bit can be set and cleared repeatedly (subject to the unlock sequence))
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will not cause Reset)
#pragma config DEBUG = OFF      // Debugger Enable bit (Background debugger disabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

// CONFIG3L
#pragma config WDTCPS = WDTCPS_12// WDT Period Select bits (Divider ratio 1:131072)
#pragma config WDTE = OFF        // WDT operating mode (WDT enabled regardless of sleep)

// CONFIG3H
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = LFINTOSC    //SC      //LFINTOSC      //LFINTOSC// WDT input clock selector (WDT reference clock is the 31.0 kHz LFINTOSC)

// CONFIG4L
#pragma config WRT0 = OFF       // Write Protection Block 0 (Block 0 (000800-003FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection Block 1 (Block 1 (004000-007FFFh) not write-protected)
#pragma config WRT2 = OFF       // Write Protection Block 2 (Block 2 (008000-00BFFFh) not write-protected)
#pragma config WRT3 = OFF       // Write Protection Block 3 (Block 3 (00C000-00FFFFh) not write-protected)
#pragma config WRT4 = OFF       // Write Protection Block 3 (Block 4 (010000-013FFFh) not write-protected)
#pragma config WRT5 = OFF       // Write Protection Block 3 (Block 5 (014000-017FFFh) not write-protected)
#pragma config WRT6 = OFF       // Write Protection Block 3 (Block 6 (018000-01BFFFh) not write-protected)
#pragma config WRT7 = OFF       // Write Protection Block 3 (Block 7 (01C000-01FFFFh) not write-protected)

// CONFIG4H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-30000Bh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)
#pragma config SCANE = ON       // Scanner Enable bit (Scanner module is available for use, SCANMD bit can control the module)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)

// CONFIG5L
#pragma config CP = OFF         // UserNVM Program Memory Code Protection bit (UserNVM code protection disabled)
#pragma config CPD = OFF        // DataNVM Memory Code Protection bit (DataNVM code protection disabled)

// CONFIG5H

// CONFIG6L
#pragma config EBTR0 = OFF      // Table Read Protection Block 0 (Block 0 (000800-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection Block 1 (Block 1 (004000-007FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection Block 2 (Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection Block 3 (Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks)
#pragma config EBTR4 = OFF      // Table Read Protection Block 4 (Block 4 (010000-013FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR5 = OFF      // Table Read Protection Block 5 (Block 5 (014000-017FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR6 = OFF      // Table Read Protection Block 6 (Block 6 (018000-01BFFFh) not protected from table reads executed in other blocks)
#pragma config EBTR7 = OFF      // Table Read Protection Block 7 (Block 7 (01C000-01FFFFh) not protected from table reads executed in other blocks)

// CONFIG6H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0007FFh) not protected from table reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#include <pic18f47k40.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

#include "functions.h"
#include "variables_and_constants.h"

#define _XTAL_FREQ 64000000

//  ------------------- BIT DEFENITIONS ----------------------------------------

#define SCL LATCbits.LC3
#define SDA LATCbits.LC4
#define T_SCL TRISCbits.TRISC3
#define T_SDA TRISCbits.TRISC4

#define SR PORTAbits.RA4

#define TIME_SYNC PORTAbits.RA5

#define FAN_PULSES PORTAbits.RA3

#define ADC_GO ADCON0bits.GO

#define LINE_1_INPUT_RELAY 0x01
#define LINE_2_INPUT_RELAY 0x02
#define LINE_3_INPUT_RELAY 0x04
#define TAPE_INPUT_RELAY 0x08
#define PHONO_INPUT_RELAY 0x10
#define TUNER_INPUT_RELAY 0x20
#define CD_INPUT_RELAY 0x40
#define BLUETOOTH_INPUT_RELAY 0x80

#define LCD_BACK_LITE PORTCbits.RC0

#define SPI_CS LATC2
#define SPI_BF SSP1STATbits.BF

#endif	/* XC_HEADER_TEMPLATE_H */

