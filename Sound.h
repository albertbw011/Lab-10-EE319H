// wave.h
// Lab 6 Extra credit 2) 
// playing wav files.
//
// For use with the TM4C123
// Sounds for ECE319K Lab 10
// Program written by: put your names here
// 1/2/23
#ifndef __SOUND_h
#define __SOUND_h
#include <stdint.h>
// initialize Wave functionality
void Wave_Init(void);

//******* Wave_Start ************
// These functions do not output to the DAC. 
// Rather, they set a pointer and counter, and then enables the timer interrupt.
// It starts the sound, and the timer ISR does the output
// feel free to change the parameters
// Input: pt is a pointer to an array of DAC outputs
//        count is the length of the array
// Output: none
// special cases: as you wish to implement
void Wave_Start(const uint8_t *pt, uint32_t count);
// stop wave output
void Wave_Stop(void);
void Wave_Death(void);
void Wave_bExplosion(void);
void Wave_Complete(void);
#endif

