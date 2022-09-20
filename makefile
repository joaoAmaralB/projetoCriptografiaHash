OBJ = search.o writing.o read.o error.o

main: $(OBJ)
	cc main.c $(OBJ) -o main

main.o: main.c
	cc -c main.c

search.o: search.h search.c
	cc -c search.c

writing.o: writing.h writing.c
	cc -c writing.c

read.o: read.h read.c
	cc -c read.c

error.o: error.h error.c
	cc -c error.c

clean:
	rm main $(OBJ)