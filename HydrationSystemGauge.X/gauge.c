#include "mcc_generated_files/mcc.h"
#include "gauge.h"

volatile uint16_t u16aMeas[12];
volatile uint8_t u8MeasL;
volatile uint8_t u8MeasH;

static void GAUGE_AllLow(void);
static void GAUGE_AllHigh(void);
static void GAUGE_MeasL0(void);
static void GAUGE_MeasL1(void);
static void GAUGE_MeasL2(void);
static void GAUGE_MeasL3(void);
static void GAUGE_MeasL4(void);
static void GAUGE_MeasL5(void);
static void GAUGE_MeasL6(void);
static void GAUGE_MeasL7(void);
static void GAUGE_MeasL8(void);
static void GAUGE_MeasL9(void);
static void GAUGE_MeasL10(void);
static void GAUGE_MeasL11(void);

/**
 * Initialize the module
 */
void GAUGE_Init()
{
    GAUGE_AllHigh();
    CCP1CONbits.CCP1M = 0b0100; // Capture mode: every falling edge
    T1CONbits.TMR1CS = 0b01;    // Timer1 clock source is system clock (F OSC )
    T1CONbits.T1CKPS = 0;       // No prescaler
    T1CONbits.TMR1ON = 0;       // Disable timer
    
    OPA1CONbits.OPA1PCH = 0b100;// Non-inverting input connects to DAC1_output
    OPA1CONbits.OPA1SP = 1;     // High GBWP mode
    OPA1CONbits.OPA1EN = 1;     // Enable
    
    DAC1CON0bits.DAC1EN = 1;    // Enable
    DAC1CON1 = 0x40;            // 0x40 = 1,25V
}   


static void GAUGE_AllLow()
{
    IO_L0_SetLow();
    IO_L1_SetLow();
    IO_L2_SetLow();
    IO_L3_SetLow();
    IO_L4_SetLow();
    IO_L5_SetLow();
    IO_L6_SetLow();
    IO_L7_SetLow();
    IO_L8_SetLow();
    IO_L9_SetLow();
    IO_L10_SetLow();
    IO_L11_SetLow();
}

static void GAUGE_AllHigh()
{
    IO_L0_SetHigh();
    IO_L1_SetHigh();
    IO_L2_SetHigh();
    IO_L3_SetHigh();
    IO_L4_SetHigh();
    IO_L5_SetHigh();
    IO_L6_SetHigh();
    IO_L7_SetHigh();
    IO_L8_SetHigh();
    IO_L9_SetHigh();
    IO_L10_SetHigh();
    IO_L11_SetHigh();
}

static void GAUGE_MeasL0()  {T1CONbits.TMR1ON = 1;IO_L0_SetLow();}
static void GAUGE_MeasL1()  {T1CONbits.TMR1ON = 1;IO_L1_SetLow();}
static void GAUGE_MeasL2()  {T1CONbits.TMR1ON = 1;IO_L2_SetLow();}
static void GAUGE_MeasL3()  {T1CONbits.TMR1ON = 1;IO_L3_SetLow();}
static void GAUGE_MeasL4()  {T1CONbits.TMR1ON = 1;IO_L4_SetLow();}
static void GAUGE_MeasL5()  {T1CONbits.TMR1ON = 1;IO_L5_SetLow();}
static void GAUGE_MeasL6()  {T1CONbits.TMR1ON = 1;IO_L6_SetLow();}
static void GAUGE_MeasL7()  {T1CONbits.TMR1ON = 1;IO_L7_SetLow();}
static void GAUGE_MeasL8()  {T1CONbits.TMR1ON = 1;IO_L8_SetLow();}
static void GAUGE_MeasL9()  {T1CONbits.TMR1ON = 1;IO_L9_SetLow();}
static void GAUGE_MeasL10() {T1CONbits.TMR1ON = 1;IO_L10_SetLow();}
static void GAUGE_MeasL11() {T1CONbits.TMR1ON = 1;IO_L11_SetLow();}


/**
 * Measure the water level
 */
uint8_t GAUGE_Measure()
{
    int8_t i;
    uint16_t u16MaxVal;
    uint16_t u16Threshold;
    uint8_t u8Level;
    
    
    for (i=0; i<12; i++)
    {
        // Reset timer
        T1CONbits.TMR1ON = 0;   // Stop timer
        TMR1 = 0;
        CCPR1 = 0;
        switch (i)
        {
            case 0: GAUGE_MeasL0(); break;
            case 1: GAUGE_MeasL1(); break;
            case 2: GAUGE_MeasL2(); break;
            case 3: GAUGE_MeasL3(); break;
            case 4: GAUGE_MeasL4(); break;
            case 5: GAUGE_MeasL5(); break;
            case 6: GAUGE_MeasL6(); break;
            case 7: GAUGE_MeasL7(); break;
            case 8: GAUGE_MeasL8(); break;
            case 9: GAUGE_MeasL9(); break;
            case 10: GAUGE_MeasL10(); break;
            case 11: GAUGE_MeasL11(); break;
        }
        T1CONbits.TMR1ON = 1;
        __delay_ms(1);    // Wait until the event has been occurred
        u16aMeas[i] = CCPR1;    // Read the capture registers
    }
    
    GAUGE_AllHigh();
    
    // Search for the maximum value
    u16MaxVal = 0;
    for (i=0; i<12; i++)
    {
        if (u16aMeas[i] > u16MaxVal)
        {
            u16MaxVal = u16aMeas[i];
        }
    }
    
    // Threshold is 50% of the maximum value
    u16Threshold = u16MaxVal / 2;
    
    u8Level = 0;
    for (i=11; i>0 && u8Level == 0; i--)
    {
        if (u16aMeas[i] > u16Threshold)
        {
            u8Level = (uint8_t)i;
        }
    }
   
    return u8Level+1;
}