#include <stdio.h>
#include <math.h>
int validate (char *val){
  double a, b, c;
  if(sscanf(val, "%lf %lf %lf", &a, &b, &c) != 3){
    printf("String %s is NOT valid\n", val);
  }
  else{
  	printf("String %s is valid\n", val);
  }

  return 0;
}

int main(void){

	
	validate("2.9 23.3 23.2");
	validate("sdasdasdasd");
	validate("uh 1.2 0");
	validate("INFINITE INFINITE INFINITE");
	validate("NAN ");
	validate("-INFINITE NAN INFINITE");
}