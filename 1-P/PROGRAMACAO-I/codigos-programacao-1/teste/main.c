#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h>   //time()
#define TAMANHO_PALAVRA 6
#define NOME_ARQUIVO "teste.txt"

int sortear_numero(int min, int max)
{
    srand(time(NULL));
    return rand() % (max + 1 - min) + min;
} 

int contar_quantidade_palavra_arquivo()
{
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    int nPalavras = 0;
    char palavra[TAMANHO_PALAVRA];
    while (fscanf(arquivo, "%s", palavra) != EOF)
    {
        nPalavras++;
    }
    return nPalavras;
} 

void gerarPalavraAleatoria(char palavraJogo[])
{
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    int quantidade_palavras_arquivo = contar_quantidade_palavra_arquivo();
    int numero_aleatorio = sortear_numero(1, quantidade_palavras_arquivo);
    rewind(arquivo);
    for (int i = 0; i < numero_aleatorio; i++)
    {
        fscanf(arquivo, "%s", palavraJogo);
    }
    fclose(arquivo);
    return 0;
}

int main()
{
    char palavraJogo[TAMANHO_PALAVRA];
    char *palavraJogoP = &palavraJogo;
    gerarPalavraAleatoria(palavraJogoP);
    printf("%s", palavraJogo);
}
