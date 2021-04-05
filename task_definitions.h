#ifndef task_definitions_h
#define task_definitions_h

#include <avr/pgmspace.h>

// P2P TASK POINTS -> Cspace
const PROGMEM float random0[nDoF] = {0      , 0     , 0     , 0};
const PROGMEM float random1[nDoF] = {0.5708 , 0.7856, 0.7554, 0.7454};
const PROGMEM float random2[nDoF] = {-1.5708, 0.7854, -0.189, 1.15};
const PROGMEM float random3[nDoF] = {0.7854 , -0.5  , 0.356 , -0.7854};
const PROGMEM float random4[nDoF] = {0.7854 , -0.5  , 0.356 , -0.7854};
const PROGMEM float random5[nDoF] = {0.1454 , 0.375  , -0.156 , 0.4554};
const PROGMEM float random6[nDoF] = {-0.7854 , -1.12  , 0.756 , 1.000};
const PROGMEM float random7[nDoF] = {1.574 , 1.000  , -0.4567 , -0.9854};

const PROGMEM float texec0 = 6.0;
const PROGMEM float texec1 = 3.0;
const PROGMEM float texec2 = 3.0;
const PROGMEM float texec3 = 2.5;
const PROGMEM float texec4 = 5.0;
const PROGMEM float texec5 = 2.0;
const PROGMEM float texec6 = 4.0;
const PROGMEM float texec7 = 1.5;

const PROGMEM int p2pPoints = 8;
const float * p2p_list[p2pPoints]   = {random0, random1, random2, random3, random4, random5, random6, random7};		// same as below but not in PROGMEM
//float * const p2p_list[p2pPoints] PROGMEM  = {random0, random1, random2, random3};           // accepted in MEGA not DUE
const PROGMEM float p2p_dur[p2pPoints]      = {texec0, texec1, texec2, texec3, texec4, texec5, texec6, texec7};
 
// TRAJECTORY TASK POINTS -> Cspace POINTS + Texec
//const PROGMEM const int numTaskPoints = 2;
//const PROGMEM float * traj1[numTaskPoints]   = {random1, random2};
//const PROGMEM float traj1_dur[numTaskPoints] = {texec1,texec2};

#endif
