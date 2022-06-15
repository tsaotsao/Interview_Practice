main: fib_MatMultiple.o fib.o
	gcc fib_MatMultiple.o fib.o -o main
fib_MatMultiple.o: fib_MatMultiple.c
	gcc -c fib_MatMultiple.c -o fib_MatMultiple.o
fib.o: fib.c
	gcc -c fib.c -o fib.o
.PHONY = clean
clean:
	rm -f *.o
	rm -f main