## make finding rule: 
1. GNUmakefile 
2. makeifle
3. Makefile    

(target) : (dependencies)
	(command1)
	(command2) 
		...

target can be 
1. *.o
2. *.exe
3. A label (like "all" or "main")

use "\" for the command which not finished
like :  
    gcc -o main main.o 1.o 2.o 3.o 4.o\(<--No space here)
    5.o 6.o

