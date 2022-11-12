#include <stdlib.h>;
#include <stdio.h>;
#define tf 5

void leitura(int vetor[]){
  int i;
  for(i=0; i< tf; i++){
    printf("digite o numero da posicao [%d]\n", i);
    scanf("%d", &vetor[i]);
  }
}

void exibe(int vetor[]){
  int i;
  for(i = 0; i < tf; i++){
    printf("%d\n", vetor[i]);
  }
}

void calculaMediaSoma(int vetor[]) {
  int i;
  float media = 0,  soma = 0;
  for(i =0 ; i < tf; i++){
    soma  = soma + vetor[i];
  }
  media = soma / tf;
  printf("A media dos numeros e' %2.f\n", media);
  printf("A soma dos numeros e' %2.f\n", soma);
}

void main() {
  int vetor[tf], option = 0;
  while (option != 4)
  {
    printf("\n 1-Leitura");
    printf("\n 2-exibe o vetor");
    printf("\n 3-calcula a soma e a media");
    printf("\n 4-sair\n");
    printf("opcao?\n");
    scanf("%d", &option);
    switch (option)
    {
      case 1:
        leitura(vetor);
        break;
      case 2:
        exibe(vetor);
        break;
      case 3:
        calculaMediaSoma(vetor);
        break;
      case 4:
        printf("\n sair");
        break;
      default:
        printf("\n opcao invalida");
        break;
    }
  }
  
  return;
}