#include <stdlib.h>;
#include <stdio.h>;

void main() {
  int num;
  printf("digite um numero: ");
  scanf("%d", &num);
  
  if(num == 0){
    printf("nao consigo calcular o triplo de 0.");
  } else if(num > 0) {
    printf("o triplo de %d e %d", num, num*3);
  } else {
    printf("o dobro de %d e %d.", num, num*2);
  }
}