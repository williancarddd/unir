#include <stdio.h>;
#include <stdlib.h>;

int main() {
  printf("%d\n", (2 < 5) || ((15/3) == 5));
  printf("%d\n", (2 < 1) || ((15/3) == 1));
  printf("%d\n", (2 < 5) || ((15/3) == 4));
  printf("%d\n", (27 < 5) || ((15/3) == 5));
  return 0;
}