CC = gcc
CFLAGS = -g -Wall -pedantic

quadSolver : quadSolver.o mySquareRoot.o 
	${CC} ${CFLAGS} -o qs quadSolver.o mySquareRoot.o -lm

quadSolver.o : mySquareRoot.o

mySquareRoot.o : quadSolver.h


.PHONY : clean remake


clean: 
	rm -f *.o core schedulerSim *.log

remake :
	make clean
	make