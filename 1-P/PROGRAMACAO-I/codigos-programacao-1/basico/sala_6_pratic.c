#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  bool a = true;
  bool b = true;
  bool c = false; 
  printf("%d\n", (a || b) && (b^a) && !b );
  return 0;
}