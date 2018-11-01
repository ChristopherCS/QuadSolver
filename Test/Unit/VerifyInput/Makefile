# makefile 
# Chris Carlson, Fall 2018
# Unit Testing for the input and verify methods



CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= 


verifyInput : verifyInput.o 
	${CC} ${CFLAGS} -o verifyInput cunit.o input.o verify.o verifyInput.o ${LIBS}

verifyInput.o : verifyInput.h cunit.o input.o verify.o

cunit.o : cunit.h

input.o : quadSolver.h

verify.o : quadSolver.h


test : verifyInput.o 
	./verifyInput verifyInput.log 
	

.PHONY : prepTest clean

clean : 
	rm *.o core verifyInput *.log

prepTest :
	cp ../../../SRC/input.c ../../../SRC/verify.c ../../../SRC/quadSolver.h ./
	make verifyInput