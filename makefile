work8: work8.o main.o
	gcc -o work8 work8.o main.o
work8.o: work8.c
	gcc -c work8.c
main.o: main.c
	gcc -c main.c