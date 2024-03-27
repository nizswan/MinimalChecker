// Cristian McGee COT3100C Minimal Combination
#include <stdio.h>

int main(void) {
  int lowesti = 0;
  int lowestj = 0;
  int k = 100000;
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 229; j++) {
      if ((19 * i) + (8 * j) == 1908) {
        printf("i = %d, j = %d, %d is the sum\n", i, j, i + j);
        if (i + j < k) {
          k = i + j;
          lowesti = i;
          lowestj = j;
        }
      }
    }
  }
  printf("The smallest combination is %d + %d = %d\n", lowesti, lowestj, k);
  return 0;
}
