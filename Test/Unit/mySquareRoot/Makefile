## Makefile for mySquareRoot test

CFLAGS= -Wall -pedantic -std=c99
CC= gcc

SRC= ../../../SRC
cunitSRC=..

tests: t1

t1: t1.o ${SRC}/mySquareRoot.o ${cunitSRC}/cunit.o
	${CC} ${CFLAGS} -o t1 t1.o ${SRC}/mySquareRoot.o ${cunitSRC}/cunit.o -lm

## Dependencies for the Object files used on Unit testing
cunit.o: ${cunitSRC}/cunit.h
t1.o: ${cunitSRC}/cunit.h ${SRC}/quadSolver.h

${SRC}/quadSolver.o: ${SRC}/mySquareRoot.o
${SRC}/mySquareRoot.o: ${SRC}/quadSolver.h

clean:
	-rm -f ${EXES} core *.log *.o *.exe
	-rm t1