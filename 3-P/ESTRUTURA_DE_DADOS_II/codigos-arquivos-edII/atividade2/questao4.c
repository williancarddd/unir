#include <stdlib.h>
#include <stdio.h>


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char endereco[100];
    char curso[100];
} Aluno;

void carregarArquivo() {
    FILE *arquivo = fopen("entrada.txt", "r");
    FILE *arquivo2 = fopen("saida2.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo saida1.txt");
        exit(1);
    }

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo saida2.txt");
        exit(1);
    }

    int i = 0;
    char nome[100];
    char endereco[100];
    char curso[100];
    while (!feof(arquivo)) {
        fscanf(arquivo, "%[^;];%[^;];%[^\n]\n" , nome, endereco, curso);
        fprintf(arquivo2, "%s|%s|%s\n" , nome, endereco, curso);
        i++;
    }
    fclose(arquivo);
    fclose(arquivo2);

}

void formatoComMarcadores() {
    FILE *arquivo = fopen("saida2.txt", "r");
    FILE *arquivo2 = fopen("saida3.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo saida1.txt");
        exit(1);
    }

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo saida2.txt");
        exit(1);
    }

    int i = 0;
    char nome[100];
    char endereco[100];
    char curso[100];
    while (!feof(arquivo)) {
        fscanf(arquivo, "%[^|]|%[^|]|%[^\n]\n" , nome, endereco, curso);
        fprintf(arquivo2, "nome=%s|endereco=%s|curso=%s\n" , nome, endereco, curso);
        i++;
    }
    fclose(arquivo);
    fclose(arquivo2);

}

int main() {
    formatoComMarcadores();
    return 0;
}