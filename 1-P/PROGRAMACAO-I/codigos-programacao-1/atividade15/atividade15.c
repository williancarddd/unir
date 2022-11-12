#include <stdio.h>;
#include <stdlib.h>;

void viewArrayLoaded(FILE *fileContent)
{
  char nome[20];
  float nota1, nota2, nota3, nota4;
  while (!feof(fileContent))
  {
    fscanf(fileContent, "%s %f %f %f %f", nome, &nota1, &nota2, &nota3, &nota4);
    printf("%s {%2.f, %2.f, %2.f, %2.f}\n", nome, nota1, nota2, nota3, nota4);
  }
  printf("\n");
}

void viewAproved(FILE *fileContent ) {
  char nome[20];
  float nota1, nota2, nota3;
  float average = 0;
  while (!feof(fileContent))
  {
    fscanf(fileContent, "%s %f %f %f %f", nome, &nota1, &nota2, &nota3);
    average = (nota1 + nota2 + nota3) / 3;
    if(average >= 6) {
      printf("%s aprovado, nota:  %2.f\n", nome, average);
    }
  }
  printf("\n");
}

void main()
{
  int option;
  FILE *file;
  while (option != 6)
  {

    printf("1 - LEITURA DO ARQ TEXTO E CARREGAR AS NOTAS \n");
    printf("2 - EXIBIR O VETOR CARREGADO \n");
    printf("3 - EXIBIR TODOS OS APROVADOS \n");
    printf("4 - INSERIR NOVO ALUNO \n");
    printf("5 - GRAVAR VETOR NO ARQUIVO \n");
    printf("6 - SAIR \n");
    scanf("%d", &option);
    printf("\n");

    switch (option)
    {
    case 1:
      file = fopen("notas.txt", "r");
      if (!file)
      {
        printf("Erro ao abrir arquivo");
        exit(1);
      }
      break;
    case 2:
      viewArrayLoaded(file);
      break;
    case 3:
      viewAproved(file);
      break;
    case 4:
      /* code */
      break;
    case 5:
      /* code */
      break;
    case 6:
      printf("Saindo...\n");
      exit(0);
      break;
    default:
      break;
      fclose(file);
    }
  }
}