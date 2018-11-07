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
	if ((ret = input(argc, argv, values))){
		switch (ret){
			case 2:
				errors("Invalid input.\nPlease restrain to 256 character input.\n");
			case 1:
				errors("Invalid input.\nUsage: './qs <float> <float> <float>' or './qs'\n");
		}
	}
	//Validate Input
	if (validate(values, result))
	 	errors("Entered invalid values. Please provide 3 valid floating numbers.\n");
	//Calculate X's (If there haven't been any errors yet)
	if((ret = solve(result[0], result[1], result[2], &nRoots,(double **) &roots))){
		//Error
		switch(ret){
			case 1:	
				printf("The result is imaginary.\n");
				break;
			default:
				errors("An Unknown Error Occured During Calculation. \n");
		}
	}
	else {
		switch(nRoots){
			case 1:
				printf("There is 1 Root. It is %7f\n", roots[1]);
				break;
			default:
				printf("The Roots are:\n\t%f\n\t%f\n", roots[1], roots[2]);
		}
	}
	//Exit program (Free pointers/Close files)

	return 0;
}


