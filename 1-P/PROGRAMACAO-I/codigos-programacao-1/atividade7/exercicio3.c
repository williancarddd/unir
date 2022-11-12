#include <stdlib.h>;
#include <stdio.h>;

void main() {

  float nota;
  for(int qtd = 0; qtd < 10; qtd++) {
  printf("Digite a nota: ");
  scanf("%f", &nota);
  if(nota >= 6) {
    printf("Aprovado\n");
  } else {
    printf("Reprovado\n");
  }
  }
}