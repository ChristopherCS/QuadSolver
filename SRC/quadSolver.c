/*
* Authors:
*		Mariam Ghali
*		Chris Carlson
*		Oscar Vanderhorst
*
* Purpose:
*		This program will return the X Values (Roots) of the quadratic equation given a proper input of a, b & c.
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

	if((ret = solve(result[0], result[1], result[2], &nRoots,roots))){
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
			printf("\tX1: %8g\n\t*Only One Root\n", roots[1]);
				break;
			default:
			printf("\tX1: %8g\n\tX2: %8g\n", roots[0], roots[1]);
		}
	}
	//Exit program (Free pointers/Close files)

	return 0;
}


