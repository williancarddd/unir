#include <stdlib.h>;
#include <stdio.h>;

void main() {
    int a, b, c, menor, maior;

    printf("num 1: ");
    scanf("%d", &a);
    printf("num 2: ");
    scanf("%d", &b);
    printf("num 3: ");
    scanf("%d", &c);

    menor = a; // iniciando com pelo menos um numero
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    printf("Maior = %d, menor = %d\n", maior, menor);
}