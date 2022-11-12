#include <stdio.h>
#include <stdlib.h>

int main()
{
  char teste[2][100] = {"dasdsad"};
  printf("%s\n", teste[0]);
  printf("%d\n", (2 < 5) ^ ((15 / 3) == 5));
  printf("%d\n", (7 < 5) ^ ((15 / 3) == 4));
  printf("%d\n", (2 < 5) ^ ((15 / 3) == 4));
  printf("%d\n", (7 < 5) ^ ((15 / 3) == 5));
  printf("%.2f", 2.3213);
  return 0;
}