#include <stdio.h>
#include "func.h"

int main ()

{
	double a, b, c, x1 = 0, x2 = 0;
	int r;
    printf ("Enter a, b, c:");
    scanf ("%lf%lf%lf", &a, &b, &c);
    
    r = func(a, b, c, &x1, &x2);
	if (r == NOROOTS)
		printf("\nNo roots");
	if (r == BAD_ARG)
		printf("\nInvalid arguments");
	if (r == ONEROOT)
		printf("\nx = %2.lf", x1);
	if (r == TWOROOTS)
		printf("\nx1 = %2.lf, x2 = %2.lf", x1, x2);
	return 0;
}