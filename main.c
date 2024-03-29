/* Author:  Chiappalone Mattia
 * Date:    March 2023
 * Version: v1.0. 
 * 
 * IDE:         MPLAB X IDE v3.40 (native)
 *              MPLAB X IDE v3.55 (compatible as well)
 * 
 * COMPILER:    XC8 v1.38 PRO  (native)
 *              XC8 v1.41 PRO (compatible as well)
 * 
 * MCU: PIC18LF65K80    Current in deep sleep as low as 13nA @1.8V Vdd
 * 
 * Watch Out: Due to limited program memory (only 32KB) it is necessary to 
 * compile the program with a PRO version of XC8! 
 * 
 * 
 * Description:
 * The led is lit until the Radio module Olimex is not configured properly.
 * Once it turns off they microcontroller sends once every ten seconds a packet
 * in queue to be uploaded to the LoRaWAN Chirpstack Application having the 
 * keys set in this program (Basic ABP Join: Class A device). 
 * When the packet is sent in queue the led will flash
 * 
 * Tested:
 * 1) Join LoRaWAN Network sending a string 
 * 2) 1) Blink LED on PortRC7 (1)
 * 
 * 
 * To test:
 * 1) Blink LED on PortRC7 (1)
 * 2) EUSART Communication
 * 2) Join LoRaWAN Network sending a string       
 * 3) Do the same implementing the sleep
 * 4) Add ADC capability
 * 
 *  PIC connection respect to Olimex Radio Module:
 *  RB0 (13) -> DIO5    
 *  RB1 (14) -> DIO0    
 *  RB2 (15) -> DIO1    
 *  RB4 (20) -> DIO2    
 *  RC2 (50) -> NRESET  
 *  RD3 (59) -> NSS
 *  
 *  RC3 (51) -> SCK
 *  RC4 (62) -> SDI or MISO
 *  RC5 (63) -> SDO or MOSI
*/

#include "mcc_generated_files/mcc.h"
#define myLED_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define myLED_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define myLED_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)

// my functions
void sendPacket(void);
void flash(void);

// Variables
int portNumber = 2;
uint16_t payload[1];
uint8_t JoinedServer = 0;
int count = 1;          // Number of packets sent

// Premade functions for LoRaWAN & variables
uint8_t nwkSKey[16] = {0x3C, 0xA0, 0xD6, 0x06, 0x60, 0x6E, 0x12, 0xD5, 0xDA, 0xA8, 0x15, 0x79, 0xE3, 0x70, 0x99, 0x68};
uint8_t appSKey[16] = {0x42, 0x04, 0x91, 0x09, 0x13, 0x54, 0x4A, 0x49, 0xCE, 0xA4, 0x01, 0xF6, 0x39, 0x27, 0xA4, 0x93};
uint32_t devAddr = 0x00006580;
void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status);
void RxJoinResponse(bool status);

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    TRISCbits.TRISC7 = 0; // Setting the pin C7 as output
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    myLED_SetHigh();                // Custom function written by MCC
    
    LORAWAN_Init(RxDataDone, RxJoinResponse);
    LORAWAN_SetNetworkSessionKey(nwkSKey);
    LORAWAN_SetApplicationSessionKey(appSKey);
    LORAWAN_SetDeviceAddress(devAddr);
    LORAWAN_Join(ABP);
    
       while(JoinedServer == 0){   // While the network isnt joined do nothing...
        LORAWAN_Mainloop();
        myLED_SetLow();
    }
    
    int flag = 5;   // When flag reaches 10 it can send a message

    while (1)
    {   
        LORAWAN_Mainloop();
        flag++;
        
        if(flag > 10){
            flag = 0;
            flash();
            sendPacket();
        }
     for(int x = 0; x < 1000; x++) __delay_ms(1);   // delay of one second
     
    } // End of while
} // End of main

void sendPacket(void){
    //myLED_SetHigh();
    payload[0] = 0xFF00;
    LORAWAN_Send(UNCNF, portNumber, &payload, sizeof(payload)); 
    //printf("Packet #%d sent: temperature value: %d\n\r", count, payload[0]);
    count++;
    //myLED_SetLow();
}

void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status)
{
}

void RxJoinResponse(bool status)
{    
    JoinedServer = 1;
}

void flash(void){
    for(uint8_t x = 0; x < 10; x++){
        myLED_Toggle();
        __delay_ms(25);
        __delay_ms(25);
    }
    myLED_SetLow();
}
