#ifndef task_definitions_h
#define task_definitions_h

// P2P TASK POINTS -> Cspace
double random0[nDoF] = {0, 0, 0, 0};
double random1[nDoF] = {0.5708, 0.7856, 0.7554, 0.7454};
double random2[nDoF] = {-1.5708, 0.7854, -0.189, 1.15};
double random3[nDoF] = {1, -0.5, 0.356, -0.7854};


double texec0 = 3.0;
double texec1 = 2.0;
double texec2 = 4.0;
double texec3 = 3.0;

const int p2pPoints = 4;
double * p2p_list[p2pPoints]   = {random0, random1, random2, random3};
double p2p_dur[p2pPoints]      = {texec0,texec1,texec2,texec3};

// TRAJECTORY TASK POINTS -> Cspace POINTS + Texec
const int numTaskPoints = 2;
double * traj1[numTaskPoints]   = {random1, random2};
double traj1_dur[numTaskPoints] = {texec1,texec2};

#endif
