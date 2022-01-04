/* 
 * File:   gauge.h
 * Author: gerd
 *
 * Created on 4. Januar 2022, 10:27
 */

#ifndef GAUGE_H
#define	GAUGE_H

#ifdef	__cplusplus
extern "C" {
#endif

//  Function prototypes
void GAUGE_Init(void);
uint8_t GAUGE_Measure(void);

#ifdef	__cplusplus
}
#endif

#endif	/* GAUGE_H */

