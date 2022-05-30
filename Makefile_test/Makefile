all: main.o add.o
	gcc -o main main.o add.o
main.o: main.c add.h
	gcc -c main.c 
add.o: add.c add.h
	gcc -c add.c

clean:
	rm -f *.o
	rm -f main