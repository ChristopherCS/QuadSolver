CC = gcc
CFLAGS = -g -Wall -pedantic
LIBS = -lm
BUILD = ../Build/

quadSolver : quadSolver.o mySquareRoot.o solver.o logger.o input.o validate.o errors.o
	${CC} ${CFLAGS} -o qs quadSolver.o mySquareRoot.o input.o validate.o solver.o logger.o errors.o ${LIBS} 
	cp qs ${BUILD}

quadSolver.o : mySquareRoot.o logger.o solver.o input.o validate.o errors.o

mySquareRoot.o : quadSolver.h

solver.o : quadSolver.h

logger.o : quadSolver.h

input.o : quadSolver.h

validate.o : quadSolver.h

errors.o : errors.c


.PHONY : clean remake t1


clean: 
	rm -f *.o core schedulerSim *.log

remake :
	make clean
	make

t1 : 
	./qs 2 5 -3 
	echo "Should Have Given -3, 0.5"
	./qs 2 4 2
	echo "Should Have Given -1"
	./qs 25.0 0.12 -0.2
	echo "Should Have Given -0.09187491268, 0.08707491268"
	./qs 2.0 4.0 -2.0
	echo "Should Have Given -2.414213562 0.414213562"