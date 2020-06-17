#include <stdio.h>

int main() {
  int n, i, sum = 0;
  int a[5];
  for (i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 1; i < 5; i++) {
    sum = a[i] + a[i];
  }
  printf("%d ", sum);

  for (i = 2; i <= 5; i++) {
    sum = a[i] + a[i];
  }
  sum = sum - 6;
  printf("%d", sum);
}
