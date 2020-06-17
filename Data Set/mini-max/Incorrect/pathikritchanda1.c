#include <stdio.h>
int main() {
  int ar1[100], ar2[100];
  int i, j, t, n, sum = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &ar1[i]);
  for (i = 0; i < n; i++)
    sum += ar1[i];
  for (i = 0; i < n; i++)
    ar2[i] = sum - ar1[i];
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (ar2[j] > ar2[i]) {
        t = ar2[i];
        ar2[i] = ar2[j];
        ar2[j] = t;
      }
    }
  }
  printf("%d %d ", ar2[n - 1], ar2[0]);
}
