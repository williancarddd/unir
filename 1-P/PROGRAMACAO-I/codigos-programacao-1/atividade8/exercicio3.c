#include <stdlib.h>;
#include <stdio.h>;

int main(){
  int c1, c2,c3,c4;
  scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
  if(c1 == 1){
    printf("%d\n", 1);
  } else if(c2 == 1){
    printf("%d\n", 2);
  } else if(c3 == 1){
    printf("%d\n", 3);
  } else if(c4 == 1){
    printf("%d\n", 4);
  }

  return 0;
}