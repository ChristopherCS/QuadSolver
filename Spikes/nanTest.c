// This spike demonstrates how to test for NAN in c
// By Chris Carlson

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	double nan;
	int ret = 0;
	printf("Setting a double called 'nan' to the value 10.0/0\n");
	nan = 10.0/0;

	printf("Testing with the statement 'if(nan != nan)'\n This will only evaluate true if nan actually holds an NAN\n");
	if(nan != nan){
		printf("It worked. nan != nan\n");
	}

	return(ret);
}

