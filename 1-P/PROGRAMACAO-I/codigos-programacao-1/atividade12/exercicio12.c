// WCB
#include <stdio.h>;
#include <stdlib.h>;

void calc_determinante_2x2(int matriz[2][2])
{
  int determinante = 0;
  //hardcode
  determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
  printf("%d\n", determinante);
}

int main()
{
  int matriz[2][2] = {{1, 5}, {2, 3}};
  calc_determinante_2x2(matriz);
}