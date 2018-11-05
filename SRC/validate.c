#include <stdio.h>
#include <string.h>
#include "quadSolver.h"
// to validate the values from the user input

int validate (char *val, double *res){
  double a, b, c =0.0;
  printf("%s\n",val);
  if(sscanf(val, "%lf %lf %lf", &a, &b, &c) != 3){
    return 1;
  }
  res[0] = a;
  res[1] = b;
  res[3] = c;
  printf("%f\n", a);
  printf("%f\n", b);
  printf("%f\n", c);
  return 0;

}
