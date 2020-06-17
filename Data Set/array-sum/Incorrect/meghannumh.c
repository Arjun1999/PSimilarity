#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Complete the simpleArraySum function below.
 */

int sum(int arr[], int n) {
  int sum = 0; // initialize sum

  // Iterate through all elements
  // and add them to sum
  for (int i = 0; i < n; i++)
    sum += arr[i];

  return sum;
}

int main() {
  int arr[] = {338,65,713,595,428,610,728,573,871,868};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("%d", sum(arr, n));
  return 0;
}
