dis: cvad.o function.o
	gcc -Wall -o dis cvad.o function.o -lm

cvad.o: cvad.c
	gcc -c cvad.c

function.o: function.c
	gcc -c function.c

.PHONY: clean
clean:
	rm -f dis *.o