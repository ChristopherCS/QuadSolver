/*
* test.c
* Unit tests for mySquareRoot()
* Computes the Square root of given input
* Utilizing system sqrt()
*/
#include <stdlib.h>
#include "../cunit.h"
#include "../../../SRC/quadSolver.h"

int main() {

	double input;
	double output;

	// initialize the unit testing framework
	cunit_init();

	printf("\t***About to test mySquareRoot.\n");
	

	
	// Test a good square root
	input = 4.0;
	int ret = mySquareRoot(input, &output);
	assert_eq("ret",ret,0); // Test correct return value
	assert_feq("sqrt",output, 2.0); // Test correct value returned (sqrt(4.0)==2.0)

	printf("\t***Finished Testing mySquareRoot.\n\n");


	exit(0);
}