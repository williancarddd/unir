#include <stdio.h>;

int main() {
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  if (B < A && C >= B) {
    printf(":)");
  } else if (B > A && C <= B) {
    printf(":(");
  } else if (B > A && C > B && (C - B) < (B - A)) {
      printf(":(");
  } else if (B > A && C > B && (C - B) >= (B - A)){
    printf(":)");
  }else if (B < A && C < B && (B - C) < (A - B)){
    printf(":)");
  } else if (B < A && C < B && (B - C) >= (A - B)) {
      printf(":(");
  } else if (B == A && C > B){
    printf(":)");
  }
  else if (B == A && C < B) {
    printf(":(");
  }
  return 0;
}