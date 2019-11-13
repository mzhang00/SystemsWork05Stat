all: statTest.o
	gcc -o program statTest.o

statTest.o: statTest.c
	gcc -c statTest.c

run:
	./program
