# makefile 
# Chris Carlson, Fall 2018
# Unit Testing for the input and verify methods



CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= -lm


verifyInput : verifyInput.o 
	${CC} ${CFLAGS} -o verifyInput cunit.o input.o validate.o verifyInput.o ${LIBS}

verifyInput.o : verifyInput.h cunit.o input.o validate.o

cunit.o : cunit.h

input.o : quadSolver.h

validate.o : quadSolver.h


test : verifyInput.o 
	./verifyInput verifyInput.log 
	

.PHONY : prepTest clean

clean : 
	rm *.o verifyInput

prepTest :
	cp ../../../SRC/input.c ../../../SRC/validate.c ../../../SRC/quadSolver.h ./
	make verifyInput