#ifndef QUAD_SOLVER_HEADER
#define QUAD_SOLVER_HEADER
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int mySquareRoot(double input, double *output); 
int solve(float a, float b, float c);
void initLogfile(void);
void logMessage(char *message);



#endif