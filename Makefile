

# _*_ Makefile _*_

CC=gcc
FLAGS= -Wall -g

all:  mainsort.o maintext.o optionsAB.o arrays.o txtfind isort 

mainsort.o: mainsort.c arrays.h
	$(CC) $(FLAGS) -c mainsort.c
arrays.o:  arrays.h arrays.c
	$(CC) $(FLAGS) -c arrays.c
isort: mainsort.o  arrays.o
	$(CC) $(FLAGS) mainsort.o arrays.o -o isort   


maintext.o: maintext.c optionsAB.h
	$(CC) $(FLAGS) -c maintext.c
optionsAB.o:  optionsAB.h optionsAB.c
	$(CC) $(FLAGS) -c optionsAB.c
txtfind: maintext.o  optionsAB.o
	$(CC) $(FLAGS) maintext.o  optionsAB.o -o txtfind


.PHONY: clean all

clean:
	 rm -f *.o isort txtfind







