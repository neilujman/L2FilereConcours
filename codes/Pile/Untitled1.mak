
pile: pile.o main.o
    gcc -o pile pile.o main.o

pile.o: pile.c
    gcc -o pile.o -c pile.c -W -Wall -ansi -pedantic

main.o: main.c pile.h
    gcc -o main.o -c main.c -W -Wall -ansi -pedantic
