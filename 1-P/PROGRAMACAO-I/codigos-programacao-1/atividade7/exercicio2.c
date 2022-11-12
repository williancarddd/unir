#include <stdlib.h>;
#include <stdio.h>;

void main()
{
  int positivo, negativo, nulo, impar, par;
  positivo = negativo = nulo = impar = par = 0;

  int num;
  while (num != 9999)
  {
    scanf("%d", &num);
    if (num > 0)
    {
      positivo++;
    }
    else if (num < 0)
    {
      negativo++;
    }
    else
    {
      nulo++;
    }
    if (num % 2 == 0)
    {
      par++;
    }
    else
    {
      impar++;
    }
  }

  printf("positivos %d\n", positivo);
  printf("negativos %d\n", negativo);
  printf("nulos %d\n", nulo);
  printf("pares %d\n", par);
  printf("impares %d\n", impar);
}