
#include <stdio.h>
#include <string.h>
#include "quadSolver.h"
// to validate the values from the user input

int validate (char *val, double *res){
  double a, b, c;
  int i, ret = 0;
  if(sscanf(val, "%lf %lf %lf", &a, &b, &c) != 3){
    ret = 1;
  }
  res[0] = a;
  res[1] = b;
  res[2] = c;

  for(i=0; i<3; i++){
    // Test for NAN
    if(res[i] != res[i]){
      ret = 1;
    }
    // Test for Infinity
    if(res[i] == INFINITY){
      ret = 1;
    }
    // Test for Negative Infinity
    if(res[i] == -INFINITY){
      ret = 1;
    }
  }
  // printf("A is: %f\n", a);
  // printf("B is: %f\n", b);
  // printf("C is: %f\n", c);
  return(ret);

}
