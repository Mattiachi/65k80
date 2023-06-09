/******************************************************************************
  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager_lora_addons.h

  @Summary:
    This is the Pin Manager LoRa Addons header file which serves as an extension for Pin Manager
    module files generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides LoRa-specific defines for pin APIs for all used pins.
    Copyright (c) 2013 - 2016 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *************************************************************************
 *                           pin_manager_lora_addons.h
 *
 * Pin Manager LoRa addons header file
 *
 ******************************************************************************/


#ifndef PIN_MANAGER_LORA_IF_H
#define PIN_MANAGER_LORA_IF_H

#ifdef    __cplusplus
extern "C" {
#endif

#include "../pin_manager.h"

// get/set RADIO_DIO0 aliases
#define RADIO_DIO0_TRIS                     TRISB1
#define RADIO_DIO0_LAT                      LATB1
#define RADIO_DIO0_PORT                     RB1
#define RADIO_DIO0_WPU                      WPUB1
#define RADIO_DIO0_ANS                      ANSB1
#define RADIO_DIO0_SetHigh()                do { LATB1 = 1; } while(0)
#define RADIO_DIO0_SetLow()                 do { LATB1 = 0; } while(0)
#define RADIO_DIO0_Toggle()                 do { LATB1 = ~LATB1; } while(0)
#define RADIO_DIO0_GetValue()               PORTBbits.RB1
#define RADIO_DIO0_SetDigitalInput()        do { TRISB1 = 1; } while(0)
#define RADIO_DIO0_SetDigitalOutput()       do { TRISB1 = 0; } while(0)
#define RADIO_DIO0_SetPullup()              do { WPUB1 = 1; } while(0)
#define RADIO_DIO0_ResetPullup()            do { WPUB1 = 0; } while(0)
#define RADIO_DIO0_SetAnalogMode()          do { ANSB1 = 1; } while(0)
#define RADIO_DIO0_SetDigitalMode()         do { ANSB1 = 0; } while(0)

// get/set RADIO_DIO1 aliases
#define RADIO_DIO1_TRIS                     TRISB2
#define RADIO_DIO1_LAT                      LATB2
#define RADIO_DIO1_PORT                     RB2
#define RADIO_DIO1_WPU                      WPUB2
#define RADIO_DIO1_ANS                      ANSB2
#define RADIO_DIO1_SetHigh()                do { LATB2 = 1; } while(0)
#define RADIO_DIO1_SetLow()                 do { LATB2 = 0; } while(0)
#define RADIO_DIO1_Toggle()                 do { LATB2 = ~LATB2; } while(0)
#define RADIO_DIO1_GetValue()               PORTBbits.RB2
#define RADIO_DIO1_SetDigitalInput()        do { TRISB2 = 1; } while(0)
#define RADIO_DIO1_SetDigitalOutput()       do { TRISB2 = 0; } while(0)
#define RADIO_DIO1_SetPullup()              do { WPUB2 = 1; } while(0)
#define RADIO_DIO1_ResetPullup()            do { WPUB2 = 0; } while(0)
#define RADIO_DIO1_SetAnalogMode()          do { ANSB2 = 1; } while(0)
#define RADIO_DIO1_SetDigitalMode()         do { ANSB2 = 0; } while(0)

// get/set RADIO_DIO2 aliases
#define RADIO_DIO2_TRIS                     TRISB4
#define RADIO_DIO2_LAT                      LATB4
#define RADIO_DIO2_PORT                     RB4
#define RADIO_DIO2_WPU                      WPUB4
#define RADIO_DIO2_ANS                      ANSB4
#define RADIO_DIO2_SetHigh()                do { LATB4 = 1; } while(0)
#define RADIO_DIO2_SetLow()                 do { LATB4 = 0; } while(0)
#define RADIO_DIO2_Toggle()                 do { LATB4 = ~LATB4; } while(0)
#define RADIO_DIO2_GetValue()               PORTBbits.RB4
#define RADIO_DIO2_SetDigitalInput()        do { TRISB4 = 1; } while(0)
#define RADIO_DIO2_SetDigitalOutput()       do { TRISB4 = 0; } while(0)
#define RADIO_DIO2_SetPullup()              do { WPUB4 = 1; } while(0)
#define RADIO_DIO2_ResetPullup()            do { WPUB4 = 0; } while(0)
#define RADIO_DIO2_SetAnalogMode()          do { ANSB4 = 1; } while(0)
#define RADIO_DIO2_SetDigitalMode()         do { ANSB4 = 0; } while(0)



// get/set RADIO_DIO5 aliases
#define RADIO_DIO5_TRIS                     TRISB0
#define RADIO_DIO5_LAT                      LATB0
#define RADIO_DIO5_PORT                     RB0
#define RADIO_DIO5_WPU                      WPUB0
#define RADIO_DIO5_ANS                      ANSB0
#define RADIO_DIO5_SetHigh()                do { LATB0 = 1; } while(0)
#define RADIO_DIO5_SetLow()                 do { LATB0 = 0; } while(0)
#define RADIO_DIO5_Toggle()                 do { LATB0 = ~LATB0; } while(0)
#define RADIO_DIO5_GetValue()               PORTBbits.RB0
#define RADIO_DIO5_SetDigitalInput()        do { TRISB0 = 1; } while(0)
#define RADIO_DIO5_SetDigitalOutput()       do { TRISB0 = 0; } while(0)
#define RADIO_DIO5_SetPullup()              do { WPUB0 = 1; } while(0)
#define RADIO_DIO5_ResetPullup()            do { WPUB0 = 0; } while(0)
#define RADIO_DIO5_SetAnalogMode()          do { ANSB0 = 1; } while(0)
#define RADIO_DIO5_SetDigitalMode()         do { ANSB0 = 0; } while(0)    


// get/set RADIO_nReset aliases
#define RADIO_nReset_TRIS                   TRISC2
#define RADIO_nReset_LAT                    LATC2
#define RADIO_nReset_PORT                   RC2
#define RADIO_nReset_WPU                    WPUC2
#define RADIO_nReset_ANS                    ANSC2
#define RADIO_nReset_SetHigh()              do { LATC2 = 1; } while(0)
#define RADIO_nReset_SetLow()               do { LATC2 = 0; } while(0)
#define RADIO_nReset_Toggle()               do { LATC2 = ~LATC2; } while(0)
#define RADIO_nReset_GetValue()             PORTCbits.RC2
#define RADIO_nReset_SetDigitalInput()      do { TRISC2 = 1; } while(0)
#define RADIO_nReset_SetDigitalOutput()     do { TRISC2 = 0; } while(0)
#define RADIO_nReset_SetPullup()            do { WPUC2 = 1; } while(0)
#define RADIO_nReset_ResetPullup()          do { WPUC2 = 0; } while(0)
#define RADIO_nReset_SetAnalogMode()        do { ANSC2 = 1; } while(0)
#define RADIO_nReset_SetDigitalMode()       do { ANSC2 = 0; } while(0)        

// get/set SCK2 aliases
#define SCK2_TRIS                           TRISC3
#define SCK2_LAT                            LATC3
#define SCK2_PORT                           RC3
#define SCK2_WPU                            WPUC3
#define SCK2_ANS                            ANSC3
#define SCK2_SetHigh()                      do { LATC3 = 1; } while(0)
#define SCK2_SetLow()                       do { LATC3 = 0; } while(0)
#define SCK2_Toggle()                       do { LATC3 = ~LATC3; } while(0)
#define SCK2_GetValue()                     PORTCbits.RC3
#define SCK2_SetDigitalInput()              do { TRISC3 = 1; } while(0)
#define SCK2_SetDigitalOutput()             do { TRISC3 = 0; } while(0)
#define SCK2_SetPullup()                    do { WPUC3 = 1; } while(0)
#define SCK2_ResetPullup()                  do { WPUC3 = 0; } while(0)
#define SCK2_SetAnalogMode()                do { ANSC3 = 1; } while(0)
#define SCK2_SetDigitalMode()               do { ANSC3 = 0; } while(0)        

// get/set SDI2 aliases
#define SDI2_TRIS                           TRISC4
#define SDI2_LAT                            LATC4
#define SDI2_PORT                           RC4
#define SDI2_WPU                            WPUC4
#define SDI2_ANS                            ANSC4
#define SDI2_SetHigh()                      do { LATC4 = 1; } while(0)
#define SDI2_SetLow()                       do { LATC4 = 0; } while(0)
#define SDI2_Toggle()                       do { LATC4 = ~LATC4; } while(0)
#define SDI2_GetValue()                     PORTCbits.RC4
#define SDI2_SetDigitalInput()              do { TRISC4 = 1; } while(0)
#define SDI2_SetDigitalOutput()             do { TRISC4 = 0; } while(0)
#define SDI2_SetPullup()                    do { WPUC4 = 1; } while(0)
#define SDI2_ResetPullup()                  do { WPUC4 = 0; } while(0)
#define SDI2_SetAnalogMode()                do { ANSC4 = 1; } while(0)
#define SDI2_SetDigitalMode()               do { ANSC4 = 0; } while(0)        

// get/set RADIO_nCS aliases
#define RADIO_nCS_TRIS                      TRISD3
#define RADIO_nCS_LAT                       LATD3
#define RADIO_nCS_PORT                      RD3
#define RADIO_nCS_WPU                       WPUD3
#define RADIO_nCS_ANS                       ANSD3
#define RADIO_nCS_SetHigh()                 do { LATD3 = 1; } while(0)
#define RADIO_nCS_SetLow()                  do { LATD3 = 0; } while(0)
#define RADIO_nCS_Toggle()                  do { LATD3 = ~LATD3; } while(0)
#define RADIO_nCS_GetValue()                PORTDbits.RD3
#define RADIO_nCS_SetDigitalInput()         do { TRISD3 = 1; } while(0)
#define RADIO_nCS_SetDigitalOutput()        do { TRISD3 = 0; } while(0)
#define RADIO_nCS_SetPullup()               do { WPUD3 = 1; } while(0)
#define RADIO_nCS_ResetPullup()             do { WPUD3 = 0; } while(0)
#define RADIO_nCS_SetAnalogMode()           do { ANSD3 = 1; } while(0)
#define RADIO_nCS_SetDigitalMode()          do { ANSD3 = 0; } while(0)        

// get/set SDO2 aliases
#define SDO2_TRIS                           TRISC5
#define SDO2_LAT                            LATC5
#define SDO2_PORT                           RC5
#define SDO2_WPU                            WPUC5
#define SDO2_ANS                            ANSC5
#define SDO2_SetHigh()                      do { LATC5 = 1; } while(0)
#define SDO2_SetLow()                       do { LATC5 = 0; } while(0)
#define SDO2_Toggle()                       do { LATC5 = ~LATC5; } while(0)
#define SDO2_GetValue()                     PORTCbits.RC5
#define SDO2_SetDigitalInput()              do { TRISC5 = 1; } while(0)
#define SDO2_SetDigitalOutput()             do { TRISC5 = 0; } while(0)
#define SDO2_SetPullup()                    do { WPUC5 = 1; } while(0)
#define SDO2_ResetPullup()                  do { WPUC5 = 0; } while(0)
#define SDO2_SetAnalogMode()                do { ANSC5 = 1; } while(0)
#define SDO2_SetDigitalMode()               do { ANSC5 = 0; } while(0)        

#ifdef    __cplusplus
}
#endif

#endif    /* PIN_MANAGER_LORA_IF_H */

/**
 End of File
*/