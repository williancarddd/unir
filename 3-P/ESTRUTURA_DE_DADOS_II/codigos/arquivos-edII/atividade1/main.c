#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 10
/**
 * Escrever um programa em C que

  Declare uma estrutura com o nome e a nota de um aluno
  Leia do usuário os nomes e as notas de uma turma de graduação com 10 alunos (assuma que cada aluno tem um número identificador de 1 a 10)
  Escreva em um arquivo todos os dados lidos
  Escreva em um segundo arquivo todos os dados lidos, porém, ordenado pelos nomes
  Recupere o nome e a nota de um aluno de número especificado pelo usuário
*/

typedef struct Aluno {
  char nome[50];
  float nota;
} Aluno;

Aluno criarAluno() {
  Aluno aluno;
  printf("Digite o nome do aluno: ");
  scanf("%s", aluno.nome);
  printf("Digite a nota do aluno: ");
  scanf("%f", &aluno.nota);
  return aluno;
}

void lerAlunos(Aluno *alunos[]) {
  for (int i = 0; i < MAX; i++) {
    printf("aluno %d \r \n", i + 1);
    alunos[i] = (Aluno *) malloc(sizeof(Aluno));
    *alunos[i] = criarAluno();
    printf("\r \n");
  }
}

void escreverAlunos(Aluno *alunos[]) {
  FILE *arquivo;
  arquivo = fopen("alunos.txt", "w");
  for (int i = 0; i < MAX; i++) {
    fprintf(arquivo, "%s %f \n", alunos[i]->nome, alunos[i]->nota);
  }
  fclose(arquivo);
}

void escreverAlunosOrdenados(Aluno *alunos[]) {
  FILE *arquivo;
  arquivo = fopen("alunosOrdenados.txt", "w");
  Aluno *aux;
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      if (strcmp(alunos[i]->nome, alunos[j]->nome) < 0) {
        aux = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = aux;
      }
    }
  }
  for (int i = 0; i < MAX; i++) {
    fprintf(arquivo, "%s %f ", alunos[i]->nome, alunos[i]->nota);
  }
  fclose(arquivo);
}



Aluno recuperarAlunoPeloNome(Aluno *alunos[], char nome[]) {
  for (int i = 0; i < MAX; i++) {
    if (strcmp(alunos[i]->nome, nome) == 0) {
      return *alunos[i];
    }
  }

  Aluno aluno;
  strcpy(aluno.nome, "Aluno não encontrado");
  aluno.nota = 0;
  return aluno;
}

void carregarAlunos(Aluno *alunos[]) {
  FILE *arquivo;
  arquivo = fopen("alunos.txt", "r");
  char nome[50];
  float nota;
  int i = 0;
  while (!feof(arquivo)) {
    fscanf(arquivo, "%s %f", nome, &nota);
    alunos[i] = (Aluno *) malloc(sizeof(Aluno));
    strcpy(alunos[i]->nome, nome);
    alunos[i]->nota = nota;
    i++;
  }
  fclose(arquivo);
}

void mostrarAluno(Aluno *aluno) {
  printf("\n--------------------");
  printf("Nome: %s Nota: %f ", aluno->nome, aluno->nota);
  printf("\n--------------------");
}


int main() {
  Aluno *alunos[MAX];
  int opcao;
  do { 
    printf("1 - Ler alunos \n");
    printf("2 - Escrever alunos \n");
    printf("3 - Escrever alunos ordenados \n");
    printf("4 - Carregar alunos \n");
    printf("5- Recuperar aluno pelo nome \n");
    printf("6 - Sair \n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        lerAlunos(alunos);
        break;
      case 2:
        escreverAlunos(alunos);
        break;
      case 3:
        escreverAlunosOrdenados(alunos);
        break;
      case 4: {
        carregarAlunos(alunos);
        break;
      }
      case 5: {
        char nome[50];
        printf("Digite o nome do aluno: ");
        scanf("%s", nome);
        Aluno aluno = recuperarAlunoPeloNome(alunos, nome);
        mostrarAluno( & aluno);
        break;
      }
      
      case 6:
        break;
      default:
        printf("opcao invalida \n");
    }
  } while  (opcao != 6);
  return 0;
}