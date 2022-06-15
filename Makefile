main: 
	gcc BST/tree.c test.c -o test.o
.PHONY=clean
clean:
	rm -f *.o