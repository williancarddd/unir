#include  <stdlib.h>;
#include <stdio.h>;

void main() {
  float num;
  printf("digite um numero: ");
  scanf("%f", &num);

  printf("%.0f em notacao cientifica e %e.\n", num, num);
  printf("%.0f em notacao ponto flutuante e %.2f.", num, num);
}