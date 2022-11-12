#include <stdlib.h>;
#include <stdio.h>;

void main()
{

  int num;
  printf("digite um numero: ");
  scanf("%d", &num);

  if (num > 10)
  {
    printf("esse numero e maior que 10. %d", num);
  }
  else
  {
    printf("esse numero nao e maior que 10.");
  }
}