#include <stdlib.h>;
#include <stdio.h>;

void main() {
  int positivo, negativo, nulo, impares, pares;
  positivo = negativo = nulo = impares = pares = 0;
  int num;
  for (int x = 0; x < 10; x++) {
    scanf("%d", &num);
    if (num > 0) {
      positivo++;
    } else if (num < 0) {
      negativo++;
    } else {
      nulo++;
    }
    if (num % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
  }
    printf("positivos %d\n", positivo);
    printf("negativos %d\n", negativo);
    printf("nulos %d\n", nulo);
    printf("pares %d\n", pares);
    printf("impares %d\n", impares);
}