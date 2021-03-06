#ifndef QUAD_SOLVER_HEADER
#define QUAD_SOLVER_HEADER
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int logging;

int mySquareRoot(double input, double *output); 
int solve(double a, double b, double c, int * nroots, double *result); // The Result of this 
void initLogfile(void);
void logMessage(char *message);
int validate(char *valuesString, double *result);
int input(int argc, char *argv[], char *values);
void errors(char *message);


#endif