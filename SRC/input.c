#include <stdio.h>
#include <string.h>
#include "quadSolver.h"

// to validate the values from the user input
//int validate (char val[], double result[]);



int input(int argc, char *argv[], char *values) //char *result)
{
   int argc_counter;
   
   if (argc == 4 || (argc == 5 && !strcmp(argv[4],"l"))){
    
    if(!strcmp(argv[4], "l")) logging = 1;

    for (argc_counter = 1; argc_counter < argc;argc_counter++){ 
      if (strlen(values) + strlen(argv[argc_counter]) > 256){
        return 2;            //overflow error
      }else{
        strncat(values, argv[argc_counter], 80);    //80?! make it less, or whatever num it will be, it is still limited to the if condition
        strncat(values, " ", 1);
      }
    } 
    return 0;
    //printf("The values are in input: %s\n", values); 
   }else if(argc == 1){
      printf("Enter the values for A, B, C:\n" );
      scanf("%[^\n]%*c",values);  // or we can use fgets, difference between value , &value
      //printf("The values are: %s\n", values);
      return 0;
    }//

    //printf("Wrong amount of arguments. Expecting 3 floating numbers.");
   
   return 1;

}