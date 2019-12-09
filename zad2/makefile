#Makefile
all: zad2

zad2: main.o funkcja.o rozwiazanie.o
	clang -o zad2 main.o funkcja.o rozwiazanie.o -lm
main.o: main.c
		clang -c main.c
funkcja.o: funkcja.c
		clang -c funkcja.c
rozwiazanie.o: rozwiazanie.c
		clang -c rozwiazanie.c
clean:
	rm-fmain*.o*~				
