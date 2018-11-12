# Makefile 
# Chris Carlson, Fall 2018
# Unit Testing for the quadSolver "solver" function



CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= -lm
SRCCODE= ../../../SRC
TESTINGSRC= ..


verifySolver : verifySolver.o 
	${CC} ${CFLAGS} -o t1 ${TESTINGSRC}/cunit.o ${SRCCODE}/solver.o verifySolver.o ${SRCCODE}/logger.o ${SRCCODE}/mySquareRoot.o ${LIBS}

verifySolver.o : verifySolver.h ${TESTINGSRC}/cunit.o ${SRCCODE}/solver.o ${SRCCODE}/logger.o ${SRCCODE}/mySquareRoot.o

cunit.o : ${TESTINGSRC}/cunit.h

solver.o : ${SRCCODE}/quadSolver.h

logger.o : ${SRCCODE}/quadSolver.h

mySquareRoot.o : ${SRCCODE}/quadSolver.h


test : verifyInput.o 
	./t1
	

.PHONY : clean

clean : 
	rm *.o t1

