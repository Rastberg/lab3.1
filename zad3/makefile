#Makefile
all: zad3

zad3: main.o phi.o nwd.o
	clang -o zad3 main.o phi.o nwd.o -lm
main.o: main.c
		clang -c main.c
phi.o: phi.c
		clang -c phi.c
nwd.o: nwd.c
		clang -c nwd.c
clean:
	rm -f main *.o *~				
