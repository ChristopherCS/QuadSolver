#include "quadSolver.h"


// Solves the Quadratic Equation given inputs (as floats) a, b, c
// Prints the result to screen. 
// Returns 0 when no issues. Returns 1 when result is imaginary.
// Returns 2 for any other issues.
int solve(float a, float b, float c){
	int ret = 0;
// Solving -b+-sqrt(b^2-4ac)/2a
	double A = (double)a, B = (double)b, C = (double)c, R1 = 0.0, R2 = 0.0;
	double discriminant = (B*B) - 4*A*C;
	double sqroot = 0.0;
	char *logString = calloc(sizeof(char), 256);

	if(discriminant < 0){
		printf("Result is non-real");
		ret = 1;
	}else{
		// If True, there was an error. Otherwise the
		// Result of the square root function is in sqroot.
		if(mySquareRoot(discriminant, &sqroot)){
			printf("Unknown Error Occurred.");
			ret = 2;
		}else{
			R1 = -B + sqroot / 2*A;
			R2 = -B - sqroot / 2*A;
			sprintf(logString, "Roots are: %.8f, %.8f\n", (float)R1, (float)R2);
			printf(logString);
		}
	}

	free(logString);
	return(ret);
}