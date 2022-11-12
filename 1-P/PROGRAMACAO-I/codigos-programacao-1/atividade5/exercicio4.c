#include <stdlib.h>;
#include <stdio.h>;

void main()
{
  int num;
  printf("digite um numero decimal: ");
  scanf("%d", &num);

  printf("%d em hexadecimal e %x", num, num);
  printf("%d em octal  e %o", num, num);
}