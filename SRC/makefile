CC = gcc
CFLAGS = -g -Wall -pedantic
LIBS = -lm

quadSolver : quadSolver.o mySquareRoot.o solver.o logger.o input.o validate.o errors.o
	${CC} ${CFLAGS} -o qs quadSolver.o mySquareRoot.o input.o validate.o solver.o logger.o errors.o ${LIBS}

quadSolver.o : mySquareRoot.o logger.o solver.o input.o validate.o errors.o

mySquareRoot.o : quadSolver.h

solver.o : quadSolver.h

logger.o : quadSolver.h

input.o : quadSolver.h

validate.o : quadSolver.h

errors.o : errors.c


.PHONY : clean remake


clean: 
	rm -f *.o core schedulerSim *.log

remake :
	make clean
	make