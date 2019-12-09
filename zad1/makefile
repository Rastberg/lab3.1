#Makefile

all: main

main: main.o polindrom.o
	clang -o main main.o polindrom.o -lm

main.o: main.c
		clang -c main.c
polindrom.o: polindrom.c
		clang -c polindrom.c

clean:
	rm -f main *.o *~	
			
	
	
