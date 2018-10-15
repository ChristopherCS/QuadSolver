# Stories

## Quadratic Solver
We will create a quadratic solver for engineers to use whereby, the engineer can provide three 32 bit IEEE single precision floating point numbers as input, and the program will return the respective "x" values which are the solutions for the Quadratic formula. (Quadratic formula being x = -b +- sqrt(b^2 -4ac)/2a)

### Input Prompt and Gathering
The program will propt the user to input 3 32 bit IEEE floating point numbers, and it read user input into the program from the command line. 

### Input Validation
The Program will verify that the input is 3 32 bit IEEE floating point numbers. The program will ensure that none of the values passed are "NAN" or "INF" (positive or negative).

### My Square Root
The program will implement it's own square root function which documents/reports every call to the square root function.

### Solve the Quadratic Equation
This function of the program takes the already verified input from the program and calculates the result for the quadratic equation. It is important to check, before computing, that the discriminant is not negative. If the discriminant is negative the program must report, "Result is Non-Real". Otherwise the result of the calculation is returned as a 32 bit IEEE single precision floating point value.

### Testing
The programs output needs to be verified. Given some known inputs, the outputs must be checked against known good ouptut. This testing should comply with the testing standards specified.

### Logger
This program should have a logging feature, ideally enabled with a command line option "-l or -log". When logging is enabled, the program should produce a log file which logs the progress and state of the program as it runs. Each function should be able to call a log function to log status updates to the log file. 

