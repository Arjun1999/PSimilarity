#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, j, k, sum1 = 0, sum2 = 0;
  int x, y, round, temp, z;
  int A[10];
 /* printf("how many numbers you want:");
  scanf("%d", &x);
  printf("enter numbers:");
  for (i = 0; i < x; i++)
    scanf("%d", &A[i]);*/
 /* for (round = 1; round < x - 1; round++) {
    for (i = 0; i < x - 1; i++) {
      if (A[i] > A[i + 1]) {
        temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
      }
    }
  }
  /*printf("sorted array values are:");*/
  for (i = 0; i < x; i++) {
    printf("%d", A[i]);
    printf("\n");
  }
  for (i = 0; i < x - 1; i++) {
    sum1 = sum1 + A[i];
  }
  for (i = 1; i < x; i++) {
    sum2 = sum2 + A[i];
  }
  printf("%d %d", sum1, sum2);
  return 0;
}
