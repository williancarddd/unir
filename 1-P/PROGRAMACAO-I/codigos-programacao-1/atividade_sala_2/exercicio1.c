#include <stdlib.h>;
#include <stdio.h>;

int main() {
  float tempF, tempC;
  printf("entre com a temperatura em Ferenheit: ");
  scanf("%f", &tempF);
  tempC = (tempF - 32) * 5 / 9;
  
  printf("a temperatura em Celsius e': %.2f C\n", tempC);
  return 0;
}