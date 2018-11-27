#include <stdio.h>
#include <math.h>
int absolute_error(double a, double b, double aerr){
	//printf("%lf", fabs(a-b));
	if( fabs(a - b) > aerr ) {
	    printf("Absolute error\n");
  	}else {
  		printf("No Absolute error\n");
  	}
	return 0;

}
int main(void){
	
	absolute_error(0.0000001, 0.000002, 0.0000001);
	absolute_error(0.0000001, 0.000002, 0.0000053);
	absolute_error(50.0, 49.9 , 0.100000);
	absolute_error(50.0 , 48, 2.000000);

}