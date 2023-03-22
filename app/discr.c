#include<stdio.h>
#include<math.h>
#include "discr.h"

int discr(double a, double b, double c)
{
    double D,x;
    D=b*b-4*a*c;
 
if (D>0)
{
    x1=(-b+sqrt(D))/(2*a);
    printf("X1=%f \n", x);
    x2=(-b-sqrt(D))/(2*a);
    printf("X2=%f \n", x);
 
}
else if (D < 0)
{
    printf("No Result\n");

}
else
{ 

    x = b*(-1)/2*a;
    printf("x=%f\n",x);
}
    
return 0;
}
