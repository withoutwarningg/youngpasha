#include<stdio.h>
#include<math.h>
#include "discr.h"

int discr(double a, double b, double c)
{
    double D,x1,x2;
    D=b*b-4*a*c;
 
if (D>0)
{
    x1=(-b+sqrt(D))/(2*a);

    x2=(-b-sqrt(D))/(2*a);

 
}
else if (D < 0)
{
    printf("No Result\n");

}
else
{ 

    x1 = b*(-1)/2*a;
    printf("x=%f\n",x1);
}
    
return 0;
}
