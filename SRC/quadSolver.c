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
	int ret;
	char values [256] = "";
   	//int validation = 0;
   	double result [3];
	//Get Input
	ret = input(argc, argv, values );
	// test ret for failure
	if(ret != 0){
	 	printf("Please enter 3 inputs for A B C \n" );
	}
	//Validate Input
	ret = validate(values, result);
	if(ret != 0){
	 	printf("Please enter valid values \n" );
	}
	//Calculate X's

	//Output X's

	//Exit program (Free pointers/Close files)

	return 0;
}


