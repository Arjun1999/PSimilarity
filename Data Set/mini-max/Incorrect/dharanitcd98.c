#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, N, j = 0;
  scanf("%d", &N);
  int a[N];
  int s[N];
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < N; i++) {
    s[i] = 0;
    for (j = 0; j < N; j++) {
      if (a[i] != a[j]) {
        s[i] = s[i] + a[j];
      }
    }
    
  }
  int min = s[0];
  int max = s[0];
  for (i = 0; i < N; i++) {
    if (min > s[i]) {
      min = s[i];
    }
    if (max < s[i]) {
      max = s[i];
    }
  }
  printf("%d %d", min, max);
  return 0;
}
