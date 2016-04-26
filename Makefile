dis: cvad.o function.o
	gcc -Wall -o dis cvad.o function.o

cvad.o: cvad.c
	gcc -c cvad.c

function.o: function.c
	gcc -c function.c