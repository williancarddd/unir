#include <stdio.h>;

void main() {
  // listar possibilidades mega sena
  // cada dezena tem que ser

  int c = 0;
  for(int d1 = 1; d1 <= 60; d1++) {
    for(int d2 = d1 + 1; d2 <= 60; d2++) {
      for(int d3 = d2 + 1; d3 <= 60; d3++) {
        for(int d4 = d3 + 1; d4 <= 60; d4++) {
          for(int d5 = d4 + 1; d5 <= 60; d5++) {
            for(int d6 = d5 + 1; d6 <= 60; d6++) {
              //printf("%d %d %d %d %d %d\n", d1, d2, d3, d4, d5, d6);
              c++;
            }
          }
        }
      }
    }
  }
  printf("%d\n", c);  
}
