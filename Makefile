# Makefile for Senior Design ODP
# written by Anthony - Feb 3

CC = g++;

CFLAGS = -g -Wall

LBIS =

OBJS = bash.o#.o files

all: bash

bash: bash.cpp $(OBJS)
    $(CC) $(CFLAGS) -o bash bash.cpp $(OBJS)

.cpp.o:
    $(CC) $(CFLAGS) $< -o $@ $(LIBS)

cleano:
    rm -f *.o

clean:
    rm -f bash *.o