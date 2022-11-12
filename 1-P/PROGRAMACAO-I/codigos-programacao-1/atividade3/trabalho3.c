#include <stdio.h>;
#include <stdio.h>;


void main() {
  printf("\nexercicio 1 \n");
  char expressoes_1[6][50] = {"(2 == 3)", "(5 < 5)", "(7 <= 7)", "(9 >= 9)", "(2 * 3 != 6)", "(10 != 5)"};
  int  resultado_expressoes_1[6][1] = {(2 == 3), (5 < 5), (7 <= 7), (9 >= 9), (2 * 3 != 6), (10 != 5)};

  // tentei criar uma função para generalizar esse processo, mas não obtive sucesso, pois não conheço nada da linguagem C.
  for (int i = 0; i < 6; i++)
  {
    if (resultado_expressoes_1[i][0])
    {
      printf("o resultado da expressao %s e' verdadeiro\n", expressoes_1[i]);
    }
    else
    {
      printf("o resultado da expressao %s e' falso\n", expressoes_1[i]);
    }
  }

  printf("\nexercicio 2 \n");
  char expressoes_2[4][50] = {" (2 < 5) && ((15/3) == 5)", "(5 < 5) && ((15/3) == 4)", "(5 < 3) && ((15/3) == 4)", "(5 < 2) && ((15/3) == 5)"};
  int resultado_expressoes_2[4][1] = {(2 < 5) && ((15 / 3) == 5), (5 < 5) && ((15 / 3) == 4), (5 < 3) && ((15 / 3) == 4), (5 < 2) && ((15 / 3) == 5)};
  for (int i = 0; i < 4; i++)
  {
    if (resultado_expressoes_2[i][0])
    {
      printf("o resultado da expressao %s e' verdadeiro\n", expressoes_2[i]);
    }
    else
    {
      printf("o resultado da expressao %s e' falso\n", expressoes_2[i]);
    }
  }
  printf("\nexercicio 3 \n");
  char expressoes_3[4][50] = {"(2 < 5) || ((15/3) == 5)", "(2 < 1) || ((15/3) == 1)", "(2 < 5) || ((15/3) == 4)", "(27 < 5) || ((15/3) == 5)"};
  int resultado_expressoes_3[4][1] = {(2 < 5) || ((15 / 3) == 5), (2 < 1) || ((15 / 3) == 1), (2 < 5) || ((15 / 3) == 4), (27 < 5) || ((15 / 3) == 5)};
  for (int i = 0; i < 4; i++)
  {
    if (resultado_expressoes_3[i][0])
    {
      printf("o resultado da expressao %s e' verdadeiro\n", expressoes_3[i]);
    }
    else
    {
      printf("o resultado da expressao %s e' falso\n", expressoes_3[i]);
    }
  }
  printf("\n exercicio 4 \n");

  char expressoes_4[4][50] = {"(2 < 5) ^ ((15/3) == 5)", "(7 < 5) ^ ((15 / 3) == 4)", "(2 < 5) ^ ((15 / 3) == 4)", "(7 < 5) ^ ((15 / 3) == 5)"};
  int resultado_expressoes_4[4][1] = {(2 < 5) ^ ((15 / 3) == 5), (7 < 5) ^ ((15 / 3) == 4), (2 < 5) ^ ((15 / 3) == 4), (7 < 5) ^ ((15 / 3) == 5)};
  for (int i = 0; i < 4; i++) {
    if (resultado_expressoes_4[i][0]){
      printf("o resultado da expressao %s e' verdadeiro\n", expressoes_4[i]);
    }
    else {
      printf("o resultado da expressao %s e' falso\n", expressoes_4[i]);
    }
  }
}