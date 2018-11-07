/*
* Authors:
*		Mariam Ghali
*		Chris Carlson
*		Oscar Vanderhorst
*
* Purpose:
*		This program will return the X values of the quadratic equation 
*		given a proper input of a, b & c.
*
*/

#include "quadSolver.h"


int main(int argc, char *argv[]){
	int ret = 0;
	char values [256] = "";
 	double result [3];
	double roots[2] = {0, 0};
	int nRoots;

	//Get Input
	ret += input(argc, argv, values );
	// test ret for failure
	if(ret == 0){
	//Validate Input
	 ret += validate(values, result);
	}
	if(ret != 0){
	 	printf("Entered invalid values. Exiting \n" );
	}
	//Calculate X's (If there haven't been any errors yet)
	if(ret == 0){
		ret += solve(result[0], result[1], result[2], &nRoots,(double *)roots);
	}
	//Output X's (If No Errors)
	if(ret == 0){
		if(nRoots == 1){
			printf("\tX1: %8g\n\t*Only One Root\n", roots[1]);
		}else{
			printf("\tX1: %8g\n\tX2: %8g\n", roots[0], roots[1]);
		}
	}else if(ret == 1) // Result is imaginary
	{
		printf("The result is imaginary.\n");
	}else{
		printf("An Unknown Error Occurred During Calculation.\n");
	}
	//Exit program (Free pointers/Close files)

	return 0;
}


