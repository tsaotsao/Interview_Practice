CC:=gcc
exe:=main
obj = main.o Node.o 
all: main.o Node.o
	${CC} -o ${exe} main.o Node.o
main.o: main.c 
	${CC} -c main.c
Node.o: Node.c 
	${CC} -c Node.c

.PHONY:clean
clean:
	rm -f *.out
	rm -f *.o
	rm -f main