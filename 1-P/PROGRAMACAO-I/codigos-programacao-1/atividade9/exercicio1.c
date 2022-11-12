#include <stdio.h>
#include <string.h>

int main()
{
    int entradas = 0;
    int contadorEntradas = 1;
    scanf("%d", &entradas);
    while (entradas > contadorEntradas)
    {
        printf("%d\n", entradas);
        contadorEntradas++;
    }
    return 0;
}