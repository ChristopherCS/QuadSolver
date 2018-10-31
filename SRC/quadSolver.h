#ifndef QUAD_SOLVER_HEADER
#define QUAD_SOLVER_HEADER
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int mySquareRoot(double input, double *output); 
int solve(float a, float b, float c, int * nroots, float *result[2]); // The Result of this 
void initLogfile(void);
void logMessage(char *message);
int validate(char *valuesString, double *values[3]);
int input(int argc, char *argv[], char *result);


#endif