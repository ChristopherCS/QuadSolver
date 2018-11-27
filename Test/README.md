# Testing

This program has functional tests and unit tests. Unit tests test individual "units" of code individually, functional tests test the whole system.

## Functional Tests
To run the functional tests, navigate to the "Functional" sub-folder and enter the command "./FuncTest.sh". This will run a series of tests. If any one of these tests fails, information about the expected output and the actual output will print to the screen.

## Unit Tests
To run unit tests navigate to the "Unit" sub-folder and enter the command "make". This will create all the tests. Then enter the command "make runTest". This will run all the tests. If everything is working you will see only that each test was run. If there is an error you will see output about where that error occurred. 