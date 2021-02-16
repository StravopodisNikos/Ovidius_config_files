#ifndef led_indicators_h
#define led_indicators_h

#include <avr/pgmspace.h>

//                    INDICATOR NAME		   RGB VALUE		   COLOR
const PROGMEM unsigned  char completed_move_indicator[] = {244, 164, 96};      // sandybrown
const PROGMEM unsigned char torque_off_indicator[]     = {148, 0, 211};       // dark violet
const PROGMEM unsigned char motors_homed_indicator[]   = {255, 140, 0};       // orange
const PROGMEM unsigned char motors_moving_indicator[]  = {135, 206, 235};     // skyblue
const PROGMEM unsigned  char turn_off_led[]             = {0, 0, 0};

#endif
