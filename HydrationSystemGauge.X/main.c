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
#include "sound.h"
#include "gauge.h"

uint8_t gauge;


/**
 * Main application
 * 
 */
void main(void)
{
    // Initialize the system
    SYSTEM_Initialize();
    // Initialize the modules
    SOUND_Init();
    GAUGE_Init();
 
    while (1)
    {
        gauge = GAUGE_Measure();
        SOUND_Beep(gauge);
    }
}
