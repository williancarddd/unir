#include <stdlib.h>;
#include <stdio.h>;

void main() {
  int  num;
  printf("digite um numero: ");
  scanf("%d", &num);

  for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", num, i , num*i);
  }
}