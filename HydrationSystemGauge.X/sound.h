/*
 *  Project:      HydrationSystemGauge
 *  File:         sound.h
 *  Author:       Gerd Bartelt - www.sebulli.com
 *
 *  Description:  Header file for sound.c
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

#ifndef SOUND_H
#define	SOUND_H

#ifdef	__cplusplus
extern "C" {
#endif

//  Function prototypes
void SOUND_Init(void);
void SOUND_DeInit(void);
void SOUND_Beep(uint8_t vierteles);




#ifdef	__cplusplus
}
#endif

#endif	/* SOUND_H */

