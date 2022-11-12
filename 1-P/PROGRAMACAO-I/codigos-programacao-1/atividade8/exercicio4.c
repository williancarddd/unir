#include <stdlib.h>;

int main() {
  float d_t_palatir, palatir_1_d, palatir_2_d, icm;
  scanf("%f %f %f", &d_t_palatir, &palatir_1_d, &palatir_2_d);
  icm = d_t_palatir / (palatir_1_d + palatir_2_d);
  printf("%.2f\n", icm);
  return 0;
}