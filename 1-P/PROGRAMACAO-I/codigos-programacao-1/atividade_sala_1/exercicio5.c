#include <stdlib.h>;
#include <stdio.h>;

void main(){
  float  num,  operacao, soma;
  num = 1000;
  soma = 0;
  operacao = 1;
 for(float term = 1; term <= 20; term++){
   float calc = (num/term)*operacao;
   num = num - 3;
   operacao *= -1;
   soma  += calc;
 }
 printf("%0.2f", soma);
}