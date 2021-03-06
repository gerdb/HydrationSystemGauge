/*
 *  Project:      HydrationSystemGauge
 *  File:         gauge.h
 *  Author:       Gerd Bartelt - www.sebulli.com
 *
 *  Description:  HEader file for gauge.c
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

#ifndef GAUGE_H
#define	GAUGE_H

#ifdef	__cplusplus
extern "C" {
#endif

#define GAUGE_MIN_VAL 0x0020
    
//  Function prototypes
void GAUGE_Init(void);
void GAUGE_DeInit(void);
uint8_t GAUGE_Measure(void);

#ifdef	__cplusplus
}
#endif

#endif	/* GAUGE_H */

