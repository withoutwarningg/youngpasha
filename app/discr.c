
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "discr.h"

/* функция подсчёта корней квадратного уравнения(a,b,c - коэффициенты, х1, х2 - корни)*/
int qvadr(float a, float b, float c, float* x1, float* x2, int* flag) {
  float d;
  *flag = 0;

  // Discriminant
  d = b*b - 4*a*c;

  // если первый коэф. == 0
  if (a == 0) {
      if (b != 0) {
        *x1 = *x2 = -c/b;
      }
      else {
        *flag = 1;
      }
    return 0;
  }

  // если дискр. > 0
  if (d>0) {
      *x1 = (-b + sqrt(d)) / (2*a);
      *x2 = (-b - sqrt(d)) / (2*a);
  }
  else
    if (d == 0) {
        *x1 = -b/(2*a);
        *x2 = -b/(2*a);
     }
    else
        *flag = 1;

  return 0;
}

