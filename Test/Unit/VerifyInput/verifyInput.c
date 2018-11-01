// Verfies the Input and the Validate functions of the code
// By Chris Carlson, Oct, 2018
#include "verifyInput.h"

int main(void){
	int ret = 0;
	
	// Run input tests
	ret += testInputCommandLine();
	// Run validation tests
	ret += testValidation();

	return(ret);

}


int testInputCommandLine(){
	int ret = 0;
	char *result = (char *)calloc(sizeof(char), 128);	
	int retval;
	// Test input on command line for: 
		// too few strings -- should return error.
		char tooFew[3] = {"/input", "2", "3"};
		retval = input(3, tooFew, result);
		assert_eq("Too Few Strings", retval, 1);
		// too many strings -- should return error.
		char tooMany[5] = {"/input", "2", "3", "4", "5"};
		retval = input(5, tooMany, result);
		assert_eq("Too Many Strings", retval, 1);
		// correct number of strings should return one string equivalent to the three strings entered only with spaces between them
		char correctNStrings[4] = {"/input", "2", "3", "4"};
		retval = input(4, correctNStrings, result);
		assert_streq("Correct Number Strings Given", "2 3 4", result);

	free(result);
	return(ret);
}

int testValidation(){
	int ret = 0;
	double values[3];
	char *valuesString = (char *)calloc(sizeof(char), 128);
	int retval;
	// Test non-numerical value -- should return error
	valuesString = "1.2 3.5 Beans";
	retval = validate(valuesString, &values);
	assert_neq("Passed Non-Numerical Value", retval, 0);
	// Test NAN -- should fail
	valuesString = "1.2 3.5 NAN";
	retval = validate(valuesString, &values);
	assert_neq("Passed \"NAN\"", retval, 0);
	// Test +INF -- should fail
	valuesString = "1.2 3.5 INFINITY";
	retval = validate(valuesString, &values);
	assert_neq("Passed \"INFINITY\"", retval, 0);
	// Test -INF -- should fail
	valuesString = "1.2 3.5 -INFINITY";
	retval = validate(valuesString, &values);
	assert_neq("Passed \"-INFINITY\"", retval, 0);
	// Test three good floats -- Should return success.
	valuesString = "2.0 4.0 8.0";
	retval = validate(valuesString, &values);
	assert_feq("Passed a good double", values[0], 2.0);
	assert_feq("Passed a good double", values[1], 4.0);
	assert_feq("Passed a good double", values[2], 8.0);	
	
	free(valuesString);
	return(ret);
}


