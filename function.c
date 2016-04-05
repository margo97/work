#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dis(int a, int b, int c)
{
    int D, x1, x2, x;
     D=b*b-4*a*c;
            if(D>0)
            {
                x1=(-b + sqrt(D)) / (2 * a);
                x2=(-b - sqrt(D)) / (2 * a);
                printf("%d %d\n", x1, x2);
            }
             else if(D==0)
            {
                x=(-b/2*a);
                printf ("%d\n", x);
            }
            else
            printf("no roots\n");
            }
            return 0;

}
