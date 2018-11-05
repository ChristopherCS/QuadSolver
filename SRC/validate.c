#include <stdio.h>
#include <string.h>
#include "quadSolver.h"
// to validate the values from the user input

int validate (char *val, double *res){
  double a, b, c =0.0;
  if(sscanf(val, "%lf %lf %lf", &a, &b, &c) != 3){
    return 1;
  }
  res[0] = a;
  res[1] = b;
  res[3] = c;
  printf("A is: %f\n", a);
  printf("B is: %f\n", b);
  printf("C is: %f\n", c);
  return 0;

}
