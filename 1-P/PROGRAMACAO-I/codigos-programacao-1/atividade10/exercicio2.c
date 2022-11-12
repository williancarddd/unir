#include <stdlib.h>;
#include <stdio.h>;
#define vmax 15

int lerTamanhoVetor(int tf){
  printf("digite o tamanho do vetor, nao pode ser maior que 15.\n");
  scanf("%d", &tf);
  if(tf > vmax){
    printf("tamanho maximo excedido\n");
    exit(0);
  }
  return tf;
}

void leitura(int vetor[], int tf){
  int i;
  for(i=0; i< tf; i++){
    printf("digite o numero da posicao [%d]\n", i);
    scanf("%d", &vetor[i]);
  }
}

void exibe(int vetor[], int tf){
  int i;
  for(i = 0; i < tf; i++){
    printf("%d\n", vetor[i]);
  }
}

void calculaMediaSoma(int vetor[], int tf) {
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
  int tf;
  tf = lerTamanhoVetor(tf);

  int vetor[tf], option = 0;
  while (option != 4)
  {
    printf("\n 1-Leitura dos numeros");
    printf("\n 2-exibe o vetor");
    printf("\n 3-calcula a soma e a media");
    printf("\n 4-sair\n");
    printf("opcao?\n");
    scanf("%d", &option);
    printf("\n");
    switch (option)
    {
      case 1:
        leitura(vetor, tf);
        break;
      case 2:
        exibe(vetor, tf);
        break;
      case 3:
        calculaMediaSoma(vetor, tf);
        break;
      case 4:
        printf("saindo...\n");
        break;
      default:
        printf("opcao invalida\n");
        break;
    }
  }
  
  return;
}