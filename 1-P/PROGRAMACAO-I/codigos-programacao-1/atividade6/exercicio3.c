#include <stdio.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int prodAB = a*b;
    int prodCD = c*d;
    printf("DIFERENCA = %d\n", (prodAB - prodCD));
    return 0;
}