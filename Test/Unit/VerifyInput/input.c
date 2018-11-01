#include <stdio.h>
#include <string.h>
// to validate the values from the user input
int validate (char val[]);

int main(int argc, char *argv[])
{
   
   int argc_counter;
   char values [256] = "";
   int validation;
  
   if (argc == 4){
   
   	for (argc_counter = 1; argc_counter < argc;argc_counter++){ 
   		if (strlen(values) + strlen(argv[argc_counter]) > 256){
   			return 1;            //overflow error
   		}else{
	   		strncat(values, argv[argc_counter], 80);		//80?! make it less, or whatever num it will be, it is still limited to the if condition
	   		strncat(values, " ", 1);
		}
  	}	

   	printf("%s\n",values);
   	validation = validate(values);
   	
   }else{
    	printf("Enter the values for A, B, C:\n" );
   		scanf("%[^\n]%*c",&values);  // or we can use fgets
   		//printf("The values are: %s\n", values);
   		validation = validate(values);
   		//printf("%d\n",validation);
    }
   
   return 0;

}

// to validate the values from the user input
int validate (char val[]){
	printf("%s\n",val);
	char *token;
	const char s[2] = " ";
	token = strtok(val, s);
	// printf("%s\n",val);
	while(token != NULL){		
		printf("%s\n", token);
		token = strtok(val, s);
	}
	return 0;

}