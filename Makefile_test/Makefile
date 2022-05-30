objects = main.o add.o
exe = main
CC = gcc

all: ${objects}
	${CC} -o ${exe} ${objects}
main.o: main.c 
	${CC} -c main.c 
add.o: add.c 
	${CC} -c add.c
.PHONY: clean
clean:
	rm -f *.o
	rm -f main
	rm -f *.out