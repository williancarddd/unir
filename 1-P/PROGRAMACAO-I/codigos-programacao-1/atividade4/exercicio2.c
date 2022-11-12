#include <stdlib.h>;
#include <stdio.h>;

int main()
{
  int idade;
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  if (idade >= 6 && idade < 15)
  {
    printf("crianca");
  }
  if (idade >= 15 && idade < 18)
  {
    printf("adolescente");
  }
  if (idade >= 18)
  {
    printf("adulto");
  }
  return 0;
}