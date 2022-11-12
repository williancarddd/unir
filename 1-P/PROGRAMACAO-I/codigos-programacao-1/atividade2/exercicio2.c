#include <stdio.h>
#include <stdlib.h>

int main() 
{
  printf("%d\n", (2 < 5) && ((15/3) == 5));
  printf("%d\n", (5 < 5) && ((15/3) == 4));
  printf("%d\n", (5 < 3) && ((15/3) == 4));
  printf("%d\n", (5 < 2) && ((15/3) == 5));
  return 0;
}