#include "quadSolver.h"

// Computes the Square Root of input, and places that value into output. Returns 0 on success or 1 on failer.
// When Called, mySquareRoot Logs that the square root function has been called. 
int mySquareRoot(double input, double *output){
	int ret = 0;
	char *logString = (char *)calloc(sizeof(char), 256);

	if(input < 0){
		ret = 1;
	}else{
		*output = sqrt(input);

		//Creates the Log Message with sprintf.
		sprintf(logString, "Function \"mySquareRoot\" Called with input: %f, and output: %f", input, *output);
		logMessage(logString);
	}

	free(logString);
	return(ret);
}