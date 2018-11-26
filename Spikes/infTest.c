// This spike demonstrates how to test for INF in c
// By Oscar Vanderhorst

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int testInf(double val, char * type) {
	if (isinf(val)) 
		printf("%s is inf\n", type);
	else 
		printf("%s is NOT inf\n", type);

	return 0;
}

int main(void){
	double inf;

	printf("Testing Infinity from various sources.\nIncluded are negative infinity and square root of infinity\n");

	inf = INFINITY;
	testInf(inf, "INFINITY");

	inf = inf * -1;
	testInf(inf, "Negative Infinity");

	inf = pow(222, 2222222);
	testInf(inf, "Power Infinity");

	inf = sqrt(inf);
	testInf(inf, "Square Root Infinity");

	return 0;
}

