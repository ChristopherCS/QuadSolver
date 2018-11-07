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

	//  A bad unit tet
	input = 4.0;
	int ret = mySquareRoot(input, &output);
	assert_eq("ret",ret,0);
	assert_feq("sqrt",output, 2.0);

	exit(0);
}