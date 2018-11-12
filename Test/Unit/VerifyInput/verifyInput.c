// Verfies the Input and the Validate functions of the code
// By Chris Carlson, Oct, 2018

// NOTE: Compiling this test will cause a Divide By Zero Warning. I am generating a 
// NAN by dividing by zero. Please ignore this warning as it is necesarry to test that
// the program checks for NAN.
#include "verifyInput.h"

int main(void){
	int ret = 0;
	

	printf("\t***About to test input.\n");
	// Run input tests
	ret += testInputCommandLine();
	printf("\t***Finished Testing Input.\n\n");

	printf("\t***About to test validation\n");
	// Run validation tests
	ret += testValidation();
	printf("\t***Finished Testing Validation\n\n");
	return(ret);

}


int testInputCommandLine(){
	int ret = 0;
	char *result = (char *)calloc(sizeof(char), 256);	
	int retval, i;
	cunit_init();
	// Test input on command line for: 
		// too few strings -- should return error.
		char *tooFew[3] = {"/input", "2", "3"};
		retval = input(3, tooFew, result);
		assert_eq("Too Few Strings", retval, 1);
		// too many strings -- should return error.
		char *tooMany[5] = {"/input", "2.0", "3.0", "4.0", "5.0"};
		retval = input(5, tooMany, result);
		assert_eq("Too Many Strings", retval, 1);
		// correct number of strings should return one string equivalent to the three strings entered only with spaces between them
		char *correctNStrings[4] = {"/input", "2.0", "3.0", "4.0"};
		char *correctResult = (char *)calloc(sizeof(char), 256);
		for(i=1; i<4; i++){
			strncat(correctResult, correctNStrings[i] , 80);    //80?! make it less, or whatever num it will be, it is still limited to the if condition
        strncat(correctResult, " ", 1);
		}
		retval = input(4, 	correctNStrings, result);
		assert_streq("Correct Number Strings Given", correctResult, result);
	free(correctResult);
	free(result);
	return(ret);
}

int testValidation(){
	int ret = 0;
	double vals[3] = {0};
	double *values = vals;
	char *valuesString = (char *)calloc(sizeof(char), 128);
	int retval;
	// Test non-numerical value -- should return error
	sprintf(valuesString,"%f %f %s", 1.2, 3.2, "Beans");
	retval = validate(valuesString, values);
	assert_neq("Passed Non-Numerical Value", retval, 0);
	// Test non-numerical value -- should return error
	sprintf(valuesString,"%f %s %f", 1.2, "Beans", 3.2);
	retval = validate(valuesString, values);
	assert_neq("Passed Non-Numerical Value", retval, 0);
	// Test non-numerical value -- should return error
	sprintf(valuesString,"%s %f %f", "Beans", 3.2, 2.5);
	retval = validate(valuesString, values);
	assert_neq("Passed Non-Numerical Value", retval, 0);

	// Test NAN -- should fail
	sprintf(valuesString,"%f %f %f", 1.2, 3.2, 10.0/0.0);
	retval = validate(valuesString, values);
	assert_neq("Passed \"NAN\"", retval, 0);
	// Test NAN -- should fail
	sprintf(valuesString,"%f %f %f", 1.2, 10.0/0.0, 3.0);
	retval = validate(valuesString, values);
	assert_neq("Passed \"NAN\"", retval, 0);
	// Test NAN -- should fail
	sprintf(valuesString,"%f %f %f", 10.0/0.0, 3.0, 8.0);
	retval = validate(valuesString, values);
	assert_neq("Passed \"NAN\"", retval, 0);
	
	

	// Test +INF -- should fail
	sprintf(valuesString,"%f %f %f", 1.2, 3.2, INFINITY);
	retval = validate(valuesString, values);
	assert_neq("Passed \"INFINITY\"", retval, 0);
	// Test -INF -- should fail
	sprintf(valuesString,"%f %f %f", 1.2, 3.2, -INFINITY);
	retval = validate(valuesString, values);
	assert_neq("Passed \"-INFINITY\"", retval, 0);
	
	// Test three good floats -- Should return success.
	sprintf(valuesString,"%f %f %f", 2.0, 4.0, 8.0);
	retval = validate(valuesString, values);
	assert_feq("Passed a good double", values[0], 2.0);
	assert_feq("Passed a good double", values[1], 4.0);
	assert_feq("Passed a good double", values[2], 8.0);	
	
	free(valuesString);
	return(ret);
}


