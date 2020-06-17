#include <stdio.h>
int main() {
  int ar[1000];
  int n, max, min, i, sum = 0, temp;
  for (i = 0; i <= (n - 1); i++) {
    scanf("%d", &ar[i]);
    sum = sum + ar[i];
  }
  for (i = 0; i < (n - 1); i++) {
    temp = sum - ar[i];
    max = min = ar[i];
    if (temp > max) {
      max = temp;
    } else if (temp < min) {
      min = temp;
    }
  }
  printf("%d %d", max, min);
  return 0;
}
