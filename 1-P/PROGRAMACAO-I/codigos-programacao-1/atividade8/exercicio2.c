#include <stdlib.h>;
#include <stdio.h>;

int main() {
  float km, tempo;
  scanf("%f", &km);
  tempo = (km / 30)*60;
  printf("%.0f minutos\n", tempo);
  return 0;
}