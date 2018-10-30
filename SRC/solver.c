#include "quadSolver.h"


double computeDMachEps(void);
// Solves the Quadratic Equation given inputs (as floats) a, b, c
// Prints the result to screen. 
// Returns 0 when no issues. Returns 1 when result is imaginary.
// Returns 2 for any other issues.
int solve(float a, float b, float c, int *nRoots, float *result[2]){
	int ret = 0;
// Solving -b+-sqrt(b^2-4ac)/2a
	double A = (double)a, B = (double)b, C = (double)c, R1 = 0.0, R2 = 0.0;
	double discriminant = (B*B) - 4*A*C;
	double sqroot = 0.0;
	char *logString = calloc(sizeof(char), 256);
	double dmacheps = computeDMachEps(); // Used to calculate relative error between computed roots.
	float temp; // Used to swap roots so that the most negative value is always the first value in the return array.


	// If the result is non-real, we simply return and report that with the result value.
	if(discriminant < 0){
		logMessage("Result is non-real");
		ret = 1;

		// else we complete the calculation.
	}else{
		// If True, there was an error. Otherwise the
		// Result of the square root function is in sqroot.
		if(mySquareRoot(discriminant, &sqroot)){
			logMessage("Unknown Error Occurred.");
			ret = 2;
		}else{
			*result[0] = (float)(-B - sqroot / 2*A);
			*result[1] = (float)(-B + sqroot / 2*A);


		//Test if the two roots are within rounding error of each other. If so, only one root. Otherwise two roots.
		if(fabs(*result[0] - *result[1])/ (fabs(*result[0])+fabs(*result[1])) < 10*dmacheps){
			*result[0] = *result[1];
			*nRoots = 1;
		}else *nRoots = 2;
			sprintf(logString, "Roots are: %.8f, %.8f\n", (float)R1, (float)R2);
			logMessage(logString);
		}

		// Now ensure that the most negative value is the first value in the array. 
		if(*result[0] > *result[1]){
			temp = *result[0];
			*result[0] = *result[1];
			*result[1] = temp;
		}
	}

	free(logString);
	return(ret);
}


// This Method of Finding The Machine Epsilon Delta is only slightly modified
// from the original version which was written by John Kapenga. That original code
// Can be found in this program at: Test->cunit->cunit.c line:12. 
double computeDMachEps(void){
	double dm, dmacheps = 0.5;
	
	while( (1.0 + (dm = dmacheps/2.0) ) != 1.0  ) {
   dmacheps = dm;
	}

	return(dmacheps);
}