//wcb
#include <stdio.h>;
#include <stdlib.h>;

void calc_determinante_2x2(int matriz[2][2], int *determinante)
{
  *determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

void calc_determinante_3x3(int matriz[3][3], int *determinante) {

  *determinante = ( (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][3]*matriz[1][0]*matriz[2][1]) ) -
                  ((matriz[0][2]*matriz[1][1]*matriz[2][0]) + (matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][2]*matriz[1][2]*matriz[2][1]) );

}

void criar_matriz(int *matriz, int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &matriz[i]);
  }
}

void main()
{
  int opcao;
  int determinante;
  int *pDeterminante = &determinante;
  
  printf("tipo de matriz: \n");
  printf("1 - matriz 2x2 \n");
  printf("2 - matriz 3x3 \n");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    printf("matriz 2x2: \n");
    int matriz[2][2];
    criar_matriz(matriz, 4);
    calc_determinante_2x2(matriz, pDeterminante);
  }
  if (opcao == 2) {
    printf("matriz 3x3: \n");
    int matriz[3][3];
    criar_matriz(matriz, 9);
    calc_determinante_3x3(matriz, pDeterminante);
  }

  printf("%i\n", determinante);
}