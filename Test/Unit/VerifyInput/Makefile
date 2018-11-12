# makefile 
# Chris Carlson, Fall 2018
# Unit Testing for the input and verify methods



CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= -lm
SRCCODE= ../../../SRC
TESTINGSRC= ..


verifyInput : verifyInput.o 
	${CC} ${CFLAGS} -o t1 ${TESTINGSRC}/cunit.o ${SRCCODE}/input.o ${SRCCODE}/validate.o verifyInput.o ${LIBS}

verifyInput.o : verifyInput.h ${TESTINGSRC}/cunit.o ${SRCCODE}/input.o ${SRCCODE}/validate.o

cunit.o : ${TESTINGSRC}/cunit.h

input.o : ${SRCCODE}/quadSolver.h

validate.o : ${SRCCODE}/quadSolver.h


test : verifyInput.o 
	./t1
	

.PHONY : clean

clean : 
	rm *.o t1

