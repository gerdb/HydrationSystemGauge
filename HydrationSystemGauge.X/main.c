/*
 *  Project:      HydrationSystemGauge
 *  File:         main.c
 *  Author:       Gerd Bartelt - www.sebulli.com
 *
 *  Description:  Main
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "mcc_generated_files/mcc.h"
#include "project.h"
#include "sound.h"
#include "gauge.h"

uint8_t u8Gauge;
uint8_t u8RunsCnt = 0;
uint8_t u8Runs = 1; // Start with a 1min cycle

/**
 * Main application
 * 
 */
void main(void)
{
    // Initialize the system
    SYSTEM_Initialize();
    VREGCONbits.VREGPM = 1;     // Low Power Sleep
    
    while (1)
    {
        // Current consumption during active phase (8s): 550µA
        if (u8RunsCnt == 0)
        {
            // Initialize the modules
            SOUND_Init();
            GAUGE_Init();
            u8Gauge = GAUGE_Measure();
#ifndef AMP_TEST    
            GAUGE_DeInit();
            SOUND_Beep(u8Gauge);
#endif
            SOUND_DeInit();
        }
#ifndef AMP_TEST    
        // Current consumption during sleep: 7.8µA
        // Sleep for 67s (1min) (=WDT period)
        SLEEP();
        u8RunsCnt ++;
        if (u8RunsCnt >= u8Runs)
        {
            // first 1min cycle then 10min
            u8Runs = 10;
            // This triggers a new measurement
            u8RunsCnt = 0;
        }
#endif
    }
}
