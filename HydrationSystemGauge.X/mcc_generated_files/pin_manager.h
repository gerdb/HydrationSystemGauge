/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1788
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_PIEZO_A aliases
#define IO_PIEZO_A_TRIS                 TRISAbits.TRISA6
#define IO_PIEZO_A_LAT                  LATAbits.LATA6
#define IO_PIEZO_A_PORT                 PORTAbits.RA6
#define IO_PIEZO_A_WPU                  WPUAbits.WPUA6
#define IO_PIEZO_A_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_PIEZO_A_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_PIEZO_A_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_PIEZO_A_GetValue()           PORTAbits.RA6
#define IO_PIEZO_A_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_PIEZO_A_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_PIEZO_A_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_PIEZO_A_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)

// get/set IO_PIEZO_B aliases
#define IO_PIEZO_B_TRIS                 TRISAbits.TRISA7
#define IO_PIEZO_B_LAT                  LATAbits.LATA7
#define IO_PIEZO_B_PORT                 PORTAbits.RA7
#define IO_PIEZO_B_WPU                  WPUAbits.WPUA7
#define IO_PIEZO_B_ANS                  ANSELAbits.ANSA7
#define IO_PIEZO_B_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_PIEZO_B_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_PIEZO_B_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_PIEZO_B_GetValue()           PORTAbits.RA7
#define IO_PIEZO_B_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_PIEZO_B_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_PIEZO_B_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_PIEZO_B_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_PIEZO_B_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_PIEZO_B_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_L7 aliases
#define IO_L7_TRIS                 TRISBbits.TRISB0
#define IO_L7_LAT                  LATBbits.LATB0
#define IO_L7_PORT                 PORTBbits.RB0
#define IO_L7_WPU                  WPUBbits.WPUB0
#define IO_L7_ANS                  ANSELBbits.ANSB0
#define IO_L7_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_L7_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_L7_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_L7_GetValue()           PORTBbits.RB0
#define IO_L7_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_L7_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_L7_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_L7_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_L7_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_L7_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_L8 aliases
#define IO_L8_TRIS                 TRISBbits.TRISB1
#define IO_L8_LAT                  LATBbits.LATB1
#define IO_L8_PORT                 PORTBbits.RB1
#define IO_L8_WPU                  WPUBbits.WPUB1
#define IO_L8_ANS                  ANSELBbits.ANSB1
#define IO_L8_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_L8_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_L8_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_L8_GetValue()           PORTBbits.RB1
#define IO_L8_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_L8_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_L8_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_L8_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_L8_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_L8_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_L9 aliases
#define IO_L9_TRIS                 TRISBbits.TRISB2
#define IO_L9_LAT                  LATBbits.LATB2
#define IO_L9_PORT                 PORTBbits.RB2
#define IO_L9_WPU                  WPUBbits.WPUB2
#define IO_L9_ANS                  ANSELBbits.ANSB2
#define IO_L9_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_L9_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_L9_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_L9_GetValue()           PORTBbits.RB2
#define IO_L9_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_L9_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_L9_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_L9_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_L9_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_L9_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IO_L10 aliases
#define IO_L10_TRIS                 TRISBbits.TRISB3
#define IO_L10_LAT                  LATBbits.LATB3
#define IO_L10_PORT                 PORTBbits.RB3
#define IO_L10_WPU                  WPUBbits.WPUB3
#define IO_L10_ANS                  ANSELBbits.ANSB3
#define IO_L10_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_L10_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_L10_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_L10_GetValue()           PORTBbits.RB3
#define IO_L10_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_L10_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_L10_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_L10_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_L10_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_L10_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_L11 aliases
#define IO_L11_TRIS                 TRISBbits.TRISB4
#define IO_L11_LAT                  LATBbits.LATB4
#define IO_L11_PORT                 PORTBbits.RB4
#define IO_L11_WPU                  WPUBbits.WPUB4
#define IO_L11_ANS                  ANSELBbits.ANSB4
#define IO_L11_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_L11_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_L11_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_L11_GetValue()           PORTBbits.RB4
#define IO_L11_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_L11_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_L11_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_L11_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_L11_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_L11_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_L0 aliases
#define IO_L0_TRIS                 TRISCbits.TRISC0
#define IO_L0_LAT                  LATCbits.LATC0
#define IO_L0_PORT                 PORTCbits.RC0
#define IO_L0_WPU                  WPUCbits.WPUC0
#define IO_L0_ANS                  ANSELCbits.ANSC0
#define IO_L0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_L0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_L0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_L0_GetValue()           PORTCbits.RC0
#define IO_L0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_L0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_L0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_L0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_L0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_L0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_L1 aliases
#define IO_L1_TRIS                 TRISCbits.TRISC1
#define IO_L1_LAT                  LATCbits.LATC1
#define IO_L1_PORT                 PORTCbits.RC1
#define IO_L1_WPU                  WPUCbits.WPUC1
#define IO_L1_ANS                  ANSELCbits.ANSC1
#define IO_L1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_L1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_L1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_L1_GetValue()           PORTCbits.RC1
#define IO_L1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_L1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_L1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_L1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_L1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_L1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_SENSE aliases
#define IO_SENSE_TRIS                 TRISCbits.TRISC2
#define IO_SENSE_LAT                  LATCbits.LATC2
#define IO_SENSE_PORT                 PORTCbits.RC2
#define IO_SENSE_WPU                  WPUCbits.WPUC2
#define IO_SENSE_ANS                  ANSELCbits.ANSC2
#define IO_SENSE_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_SENSE_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_SENSE_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_SENSE_GetValue()           PORTCbits.RC2
#define IO_SENSE_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_SENSE_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_SENSE_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_SENSE_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_SENSE_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_SENSE_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_L2 aliases
#define IO_L2_TRIS                 TRISCbits.TRISC3
#define IO_L2_LAT                  LATCbits.LATC3
#define IO_L2_PORT                 PORTCbits.RC3
#define IO_L2_WPU                  WPUCbits.WPUC3
#define IO_L2_ANS                  ANSELCbits.ANSC3
#define IO_L2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_L2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_L2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_L2_GetValue()           PORTCbits.RC3
#define IO_L2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_L2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_L2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_L2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_L2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_L2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_L3 aliases
#define IO_L3_TRIS                 TRISCbits.TRISC4
#define IO_L3_LAT                  LATCbits.LATC4
#define IO_L3_PORT                 PORTCbits.RC4
#define IO_L3_WPU                  WPUCbits.WPUC4
#define IO_L3_ANS                  ANSELCbits.ANSC4
#define IO_L3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_L3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_L3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_L3_GetValue()           PORTCbits.RC4
#define IO_L3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_L3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_L3_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_L3_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_L3_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_L3_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_L4 aliases
#define IO_L4_TRIS                 TRISCbits.TRISC5
#define IO_L4_LAT                  LATCbits.LATC5
#define IO_L4_PORT                 PORTCbits.RC5
#define IO_L4_WPU                  WPUCbits.WPUC5
#define IO_L4_ANS                  ANSELCbits.ANSC5
#define IO_L4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_L4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_L4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_L4_GetValue()           PORTCbits.RC5
#define IO_L4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_L4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_L4_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_L4_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_L4_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_L4_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO_L5 aliases
#define IO_L5_TRIS                 TRISCbits.TRISC6
#define IO_L5_LAT                  LATCbits.LATC6
#define IO_L5_PORT                 PORTCbits.RC6
#define IO_L5_WPU                  WPUCbits.WPUC6
#define IO_L5_ANS                  ANSELCbits.ANSC6
#define IO_L5_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_L5_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_L5_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_L5_GetValue()           PORTCbits.RC6
#define IO_L5_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_L5_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_L5_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_L5_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_L5_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_L5_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_L6 aliases
#define IO_L6_TRIS                 TRISCbits.TRISC7
#define IO_L6_LAT                  LATCbits.LATC7
#define IO_L6_PORT                 PORTCbits.RC7
#define IO_L6_WPU                  WPUCbits.WPUC7
#define IO_L6_ANS                  ANSELCbits.ANSC7
#define IO_L6_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_L6_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_L6_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_L6_GetValue()           PORTCbits.RC7
#define IO_L6_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_L6_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_L6_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_L6_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_L6_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_L6_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/