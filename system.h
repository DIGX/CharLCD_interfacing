/*
 * File:   system.h
 * Author: Shamnad.T
 * Ver: 1.0
 * Created on Oct 8, 2014
 */

#ifndef SYSTEM_H
#define	SYSTEM_H

#include <htc.h>

#define _XTAL_FREQ 8000000

// Specific definitions for our custom framework
#define ON                  1
#define OFF                 0
#define IN                  1
#define OUT                 0
#define INTERNAL            1
#define EXTERNAL            0
#define PULLUP_ENABLE       nRBPU = 0
#define PULLUP_DISABLE      nRBPU = 1

// Function prototypes
void Osc_Setup (unsigned char); // INTERNAL/EXTERNAL Oscillator
void System_Setup (void);

#endif	/* SYSTEM_H */

