#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/*
João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>".
Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão se formar.
Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados.
O primeiro é retirado de <..>, resultando  .<...<>....>....>>>. Em seguida o segundo diamante é retirado, restando .<.......>....>>>.
O terceiro diamante é então retirado, restando no final .....>>>., sem possibilidade de extração de novo diamante.

Entrada
Deve ser lido um valor inteiro N que representa a quantidade de casos de teste.
Cada linha a seguir é um caso de teste que contém até 1000 caracteres, incluindo "<,>, ."

Saída
Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.
*/




int main() {
  int casos_testes;
  scanf("%d", &casos_testes);
  for(int n = 0; n < casos_testes ; n++){
    char palavra[1000];
    scanf("%s", palavra);
    int abre = 0;
    int diamantes = 0;
    for(int indice = 0; indice !=  strlen(palavra);  indice++) {
        if(palavra[indice] == '<') {
            abre++;
        }
        if(palavra[indice] == '>'){
            if(abre >0 ) {
                abre--;
                diamantes++;
            }
        }
    }
    printf("%d\n", diamantes);
  }
  return 0;
}