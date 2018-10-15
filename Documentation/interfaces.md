# Interfaces Specifications
This document specifies the interfaces (inputs and ouputs) of the functions of the quad solver program.

### Program Input Prompt & Data Gathering
The program should check for input on the command line. If inputs come from the command line, then skip prompts and run the quad solver. Prints the results. Otherwise, it prompts for input. It should request all three values on a single line. 

### Input Validation & Processing
The input validation function should check the data given. If data is given on the Command line, the validator should check that there are in fact three variables given, and then it should check that each of them is an IEEE single precision floating point number. If the data is from the prompt, then this should split the data into three variables, and it should check that each of these variables is an IEEE single precision floating point number.

### My Square Root Function
The My Square Root function is a function that computes the square root of some value. This function should log that a "Square Root" has been requested. It should log that it has been called. It should return the square root of the value passed.

### Solve the Quadratic Equation
Given three IEEE single precision floating point numbers, this module should return the solution to the quadratic equation. The result should be returned as a char *, (string), with either the solution or "Non Real Solution" if the solution would be non-real.

### Automate the Testing
Testing for the program should be automated. At a minimum there should be program tests that run the program with bad input and good input. The bad input should return an expected error message, the good input should return a known good result. Additionally, it might be good to test the functionality of sub-functions within the program. 

### Create the Logger
The program should have a logging function that can be called to log status to a log file. The logging function should initialize (reinitialize) the logFile when the program runs. Calling the function should be done with a string, and that string should be appended to a log file Possibly with a time stamp. 