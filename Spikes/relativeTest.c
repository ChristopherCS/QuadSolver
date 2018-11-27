#include <stdio.h>
#include <math.h>

int relative_error(double a, double b, double rerr){
	if( fabs(a - b)/(fabs(a) + fabs(b)) > rerr ) { 
		printf("relative error\n");
  	}else {
  		printf("No Relative Error\n");
  	} 
	return 0;
}
int main(void){
	
	relative_error(0.0000001, 0.000002, 0.0000001/0.0000001);
	relative_error(0.00001, 0.00000236, 0.0000001/0.00001);
	relative_error(50.0 , 49.9, .1/50.0);
	relative_error(50.0, 48.0 , 0.2000/50.0);
}