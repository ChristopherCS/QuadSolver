CC = gcc
CFLAGS = -g -Wall -pedantic
LIBS = -lm

quadSolver : quadSolver.o mySquareRoot.o solver.o logger.o input.o validate.o
	${CC} ${CFLAGS} -o qs quadSolver.o mySquareRoot.o input.o validate.o solver.o logger.o ${LIBS}

quadSolver.o : mySquareRoot.o logger.o solver.o input.o validate.o

mySquareRoot.o : quadSolver.h

solver.o : quadSolver.h

logger.o : quadSolver.h

input.o : quadSolver.h

validate.o : quadSolver.h


.PHONY : clean remake t1


clean: 
	rm -f *.o core schedulerSim *.log

remake :
	make clean
	make

t1 : 
	./qs 2 5 -3 
	echo "Should Have Given (-3, 0.5)"
	./qs 2 4 2
	echo "Should Have Given -1"