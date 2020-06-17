#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

const int size = 5;

long long sum_excluding(int *arr, int n) {
  long long sum = 0;
  for (int i=0; i < size; i++) {
    if (i != n) sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[size];
  for (int i=0; i < size; i++) scanf("%d", &arr[i]);
  long long min, max;
  int first = 1;

  for (int i=0; i < size; i++) {
    long long sum = sum_excluding(arr, i);
    if (first) {
      min = max = sum;
      first = 0;
    }
    else {
      if (sum > max) max = sum;
      if (sum < min) min = sum;
    }
  }
  printf("%lld %lld\n", min, max);

  return 0;
}
