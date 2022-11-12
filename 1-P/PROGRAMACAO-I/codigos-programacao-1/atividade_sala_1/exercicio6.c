#include <stdio.h>;
#include <stdlib.h>;

void main()
{
  float soma, num, operacao;
  operacao = 1;
  num = 485;
  soma = 0;
  for (float deno = 10; deno <= 30; deno++)
  {
    float calc = (num / deno) * operacao;
    printf("%0.2f/%0.2f\n", num, deno);
    operacao += -1;
    num = num - 10;
    soma += calc;
  }
  printf("%0.2f", soma);
}