CC = gcc
CFLAGS = -Wall -pedantic -std=c99
LIBS = -lm

all : nanTest infTest


nanTest : nanTest.o
	${CC} ${CFLAGS} -o nanTest nanTest.c ${LIBS}

infTest : infTest.o
	${CC} ${CFLAGS} -o infTest infTest.c ${LIBS}


.PHONY : clean


clean : 
	rm *.o nanTest infTest