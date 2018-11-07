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
	double roots[2];
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
		ret += solve(result[0], result[1], result[2], &nRoots,(double **) &roots);
	}
	//Output X's (If No Errors)
	if(ret == 0){
		if(nRoots == 1){
			printf("There is 1 Root. It is %7f\n", roots[1]);
		}else{
			printf("The Roots are:\n\t%f\n\t%f\n", roots[1], roots[2]);
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


