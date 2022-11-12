#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[100];
    char endereco[100];
    char curso[100];
} Aluno;

void carregarMock(Aluno *alunos) {
    FILE *arquivo = fopen("mock.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo mock.txt");
        exit(1);
    }
    int i = 0;
    while (!feof(arquivo)) {
        fscanf(arquivo, "%[^;];%[^;];%[^\n]" , alunos[i].nome, alunos[i].endereco, alunos[i].curso);
        i++;
    }
    fclose(arquivo);
}

void escreverArquivo(Aluno *alunos) {
    FILE *arquivo = fopen("entrada.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo entrada.txt");
        exit(1);
    }
    for (int i = 0; i < 7; i++) {
        fprintf(arquivo, "%s;%s;%s\n" , alunos[i].nome, alunos[i].endereco, alunos[i].curso);
    }
    fclose(arquivo);
}

void lerArquivo(Aluno *alunos) {
    FILE *arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo entrada.txt");
        exit(1);
    }
    int i = 0;
    while (!feof(arquivo)) {
        fscanf(arquivo, "%[^;];%[^;];%[^\n]" , alunos[i].nome, alunos[i].endereco, alunos[i].curso);
        i++;
    }
    fclose(arquivo);
}

void formatoTamanhoDinamico(){
    FILE *arquivo = fopen("entrada.txt", "r");
    FILE *arquivo2 = fopen("saida1.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo entrada.txt");
        exit(1);
    }
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo saida1.txt");
        exit(1);
    }
    int i = 0;
    char nome[100];
    char endereco[100];
    char curso[100];
    while (!feof(arquivo)) {
        fscanf(arquivo, "%[^;];%[^;];%[^\n]\n" , nome, endereco, curso);
        fprintf(arquivo2, "%d%s%d%s%d%s\n", strlen(nome), nome, strlen(endereco), endereco, strlen(curso), curso);
    }
    fclose(arquivo);
    fclose(arquivo2);
    
}

void imprimirArquivo(Aluno *alunos) {
    for (int i = 0; i < 7; i++) {
        printf("\n------------------------");
        printf("\nNome:%s\nEndereco: %s\nCurso: %s " , alunos[i].nome, alunos[i].endereco, alunos[i].curso);
        printf("\n------------------------\n");
    }
}

int main() {
    Aluno alunos[7];
    carregarMock(alunos);
    escreverArquivo(alunos);
    lerArquivo(alunos);
    imprimirArquivo(alunos);
    formatoTamanhoDinamico();
    return 0;
}