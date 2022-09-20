OBJ = maze.o print.o read.o error.o

main: $(OBJ)
	cc main.c $(OBJ) -o main

main.o: main.c
	cc -c main.c

maze.o: maze.h maze.c
	cc -c maze.c

print.o: print.h print.c
	cc -c print.c

read.o: read.h read.c
	cc -c read.c

error.o: error.h error.c
	cc -c error.c

clean:
	rm main $(OBJ)