CC = gcc
CFLAGS = -Wall -pedantic -std=c99
LIBS = -lm

all : nanTest infTest valTest absTest relTest


nanTest : nanTest.o
	${CC} ${CFLAGS} -o nanTest nanTest.c ${LIBS}

valTest : validateTest.o
	${CC} ${CFLAGS} -o valTest validateTest.c ${LIBS}

infTest : infTest.o
	${CC} ${CFLAGS} -o infTest infTest.c ${LIBS}

absTest : absoluteTest.o
	${CC} ${CFLAGS} -o absTest absoluteTest.c ${LIBS}

relTest : relativeTest.o
	${CC} ${CFLAGS} -o relTest relativeTest.c ${LIBS}


.PHONY : clean


clean : 
	rm *.o nanTest infTest valTest absTest relTest