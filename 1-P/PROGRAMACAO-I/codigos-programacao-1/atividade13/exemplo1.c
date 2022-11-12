#include <stdio.h>;
#include <stdlib.h>;

// algoritm ordenate array
void ordenate(int *array, int sizeArray)
{ 
  int i, j;
  for (i = 0; i < sizeArray - 1; i++)
  {
    for (j = 0; j < sizeArray - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        int aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

void main()
{
  int arrayy[5] = {};
  int y;
  for (y = 0; y < 5; y++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arrayy[y]);
  }

  ordenate(&arrayy, 5);

  int i;
  for (i = 0; i < 5; i++)
  {
    printf("[%d] =  %d\n", i, arrayy[i]);
  }
}