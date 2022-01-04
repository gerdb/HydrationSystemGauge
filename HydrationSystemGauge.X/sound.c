#include "mcc_generated_files/mcc.h"
#include "sound.h"


static void SOUND_BeepLow();
static void SOUND_BeepHigh();
static void SOUND_Chirp();
static void SOUND_BeepSingle(uint8_t vierteles);

/**
 * Initialize the module
 */
void SOUND_Init()
{
    IO_PIEZO_A_SetLow();
    IO_PIEZO_B_SetLow();
    __delay_ms(3000);
}

/**
 * Generate a beep
 */
static void SOUND_BeepLow()
{
    volatile uint16_t i;
    volatile uint8_t ii;
    
    for (ii=0; ii<250; ii++)
    {
        IO_PIEZO_A_SetHigh();
        IO_PIEZO_B_SetLow();
        for (i=0; i< 60; i++);
        IO_PIEZO_A_SetLow();
        IO_PIEZO_B_SetHigh();
        for (i=0; i< 60; i++);
    }
    IO_PIEZO_A_SetLow();
    IO_PIEZO_B_SetLow();
    __delay_ms(500);
}

/**
 * Generate a beep
 */
static void SOUND_BeepHigh()
{
    volatile uint16_t i;
    volatile uint8_t ii;
    
    for (ii=0; ii<250; ii++)
    {
        IO_PIEZO_A_SetHigh();
        IO_PIEZO_B_SetLow();
        for (i=0; i< 40; i++);
        IO_PIEZO_A_SetLow();
        IO_PIEZO_B_SetHigh();
        for (i=0; i< 40; i++);
    }
    IO_PIEZO_A_SetLow();
    IO_PIEZO_B_SetLow();
    __delay_ms(500);
}

/**
 * Generate a chirp sound
 */
static void SOUND_Chirp()
{
    volatile uint8_t i;
    uint8_t ii, iii;
    uint8_t l1,l2;
  
    for (l1=0; l1<2; l1++)
    {
        for (l2=0; l2<2; l2++)
        {
            iii = 150;
            for (ii=0; ii<145; ii++)
            {
                iii --; 
                IO_PIEZO_A_SetHigh();
                IO_PIEZO_B_SetLow();
                for (i=0; i< iii; i+=3);
                IO_PIEZO_A_SetLow();
                IO_PIEZO_B_SetHigh();
                for (i=0; i< iii; i+=3);
            }
        }
        IO_PIEZO_A_SetLow();
        IO_PIEZO_B_SetLow();
    __delay_ms(100);
    }
    __delay_ms(2000);
}


static void SOUND_BeepSingle(uint8_t vierteles)
{
    uint8_t lows;
    uint8_t highs;
    uint8_t i;
    
    lows = vierteles / 4;
    highs = vierteles % 4;
    
    for (i=0; i<lows; i++)
    {
        SOUND_BeepLow();
    }
    
    __delay_ms(1000);

    for (i=0; i<highs; i++)
    {
        SOUND_BeepHigh();
    }
    
    __delay_ms(4000);
}

/**
 * Generate a beep
 */
void SOUND_Beep(uint8_t vierteles)
{
    SOUND_Chirp();
    SOUND_Chirp();
    __delay_ms(2000);
    
    SOUND_BeepSingle(vierteles);
}