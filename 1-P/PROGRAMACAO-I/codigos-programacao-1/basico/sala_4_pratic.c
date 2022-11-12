#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a = 50, b = 20;
  int x, y;
  float z, u;

  x = a + b;
  y = a * b;
  z = a / b;
  u = 50 % b;

  printf("o valor de x e: %d\nO valor de y e: %d\nvalor de z e: %f", x, y, z);
  printf("\no valor de u e: %f\n", u);
}