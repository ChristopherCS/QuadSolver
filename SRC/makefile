CC = gcc
CFLAGS = -g -Wall -pedantic
LIBS = -lm

quadSolver : quadSolver.o mySquareRoot.o solver.o logger.o
	${CC} ${CFLAGS} -o qs quadSolver.o mySquareRoot.o solver.o logger.o ${LIBS}

quadSolver.o : mySquareRoot.o logger.o solver.o

mySquareRoot.o : quadSolver.h

solver.o : quadSolver.h

logger.o : quadSolver.h


.PHONY : clean remake


clean: 
	rm -f *.o core schedulerSim *.log

remake :
	make clean
	make