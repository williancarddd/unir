#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float a, b, c, delta, x1, x2;
  printf("A:");
  scanf("%f", &a);
  printf("B:");
  scanf("%f", &b);
  printf("C:");
  scanf("%f", &c);
  printf("Esses sao os valores => A:%f, B: %f, C: %f\n", a, b, c);

  delta = pow(b, 2) - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  printf("x1: %.2f, x2: %.2f", x1, x2);
  return 0;
}