#include <stdio.h>;
#include <stdlib.h>;
#include <math.h>;

void main()
{
  //A
  /*

  float n, impar;
  n = 1;
  impar = 1;
  float soma = 0;
  for(int x = 1; x<= 50; x++){
    float c = impar/ n;
    printf("%0.f/%0.f = %f\n", impar, n, c);
    soma = soma + c;
    impar +=2;
    n += 1;
  }
  printf("%f", soma);
  */
 //B
  /*
 float n = 37;
 float m = 38;
 float soma = 0;
 for(float x = 1; x<= 37; x++){
   float cal =  (n*m)/x;
   printf("%0.fx%0.f / %0.f = %0.f\n", n,m, x, cal);
   n--;
   m--;
   soma += cal;
 }
 printf("%f", soma);
 */

  //D
  /*
  float soma = 0;
  for (float x = 1; x <= 10; x++)
  {
    float cal = x / pow(x, 2);
    soma += cal;
    printf("%0.f/ %0.f = %0.4f\n", x, pow(x,2), cal);
  }
  printf("%f", soma);
  */
}