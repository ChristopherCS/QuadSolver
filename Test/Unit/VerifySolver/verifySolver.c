// Verfies the Quadratic Equation Solver "solver" function of the code
// By Chris Carlson, Nov, 2018


#include "verifySolver.h"

int main(void){
	int ret = 0;
	

	printf("\t***About to test Solver.\n");
	// Run input tests
	ret = testSolver();
	printf("\t***Finished Testing Solver.\n\n");

	return(ret);

}


int testSolver(){
	int ret = 0;
	int retVal;
	int nRoots;
	double Results[2] = {0};
	double *results = Results;

	// Test for imaginary roots (A=2, B=5, C=7)
	retVal = solve(2.0, 5.0, 7.0, &nRoots, results);
	assert_eq("Testing for Imaginary Result", retVal, 1);
	// Test for one root (A=2, B=4, C=2), Root = -1
	retVal = solve(2.0, 4.0, 2.0, &nRoots, results);
	assert_eq("Testing for One Root Return Value of 0", 0, retVal);
	assert_eq("Testing that 1 root is indicated", nRoots, 1);
	assert_feqrerr("Testing a good root.", Results[0], -1.0, cunit_dmacheps*10);
	// Test two roots (A=2, B=5, C=-3), Roots = (-3, 0.5)
	retVal = solve(2.0, 5.0, -3.0, &nRoots, results);
	assert_eq("Testing for two roots, Return Value of 0", 0, retVal);
	assert_eq("Testing that 2 roots are indicated", nRoots, 2);
	assert_feqrerr("Testing a good root.", Results[0], -3.0, cunit_dmacheps*10);
	assert_feqrerr("Testing a good root.", Results[1], 0.5, cunit_dmacheps*10);
	// Test roots that have many decimal place answers (A=2, B=4, C=-2) Roots = (-2.414213,0.4142135)
	retVal = solve(2.0, 4.0, -2.0, &nRoots, results);
	assert_eq("Testing for two roots, Return Value of 0", 0, retVal);
	assert_eq("Testing that 2 roots are indicated", nRoots, 2);
	// assert_feqrerr("Testing a good root.", -2.414213, Results[0], cunit_dmacheps*10);
	//assert_feqrerr("Testing a good root.", Results[1], 0.41421, cunit_dmacheps*10);
	
	return(ret);
}
