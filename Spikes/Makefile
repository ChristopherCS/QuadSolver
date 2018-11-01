CC = gcc
CFLAGS = -Wall -pedantic -std=c99
LIBS = -lm

nanTest : nanTest.o
	${CC} ${CFLAGS} -o nanTest nanTest.c ${LIBS}



.PHONY : clean


clean : 
	rm *.o nanTest