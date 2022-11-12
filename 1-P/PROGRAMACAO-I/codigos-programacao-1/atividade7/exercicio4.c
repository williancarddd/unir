#include <stdlib.h>;
#include <stdio.h>;

void main() {
  float aprovados, reprovados;
  aprovados = reprovados = 0;
  float nota, somaNotas, maiorNota;
  maiorNota = 0;
  while (1)
  {
    printf("Digite a nota: ");
    scanf("%f", &nota);
    if (nota == -1){
      break;
    }
    if (nota >= 6)
    {
      printf("Aprovado\n");
      aprovados += 1;
    }
    else
    {
      printf("Reprovado\n");
      reprovados += 1;
    }
    somaNotas += nota;
    if (nota > maiorNota)
    {
      maiorNota = nota;
    }
  }
  
  printf("\n%0.f aprovados\n", aprovados);
  printf("%0.f reprovados\n", reprovados);
  printf("%.2f media\n", somaNotas / (aprovados + reprovados));
  printf("%.2f maior nota\n", maiorNota);
}