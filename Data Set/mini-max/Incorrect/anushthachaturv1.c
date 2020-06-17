#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
int main()
{
  int a[100], n, sum1=0,sum2=0, i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d ", &a[i]);
  }
  for (i = 0; i < n - 1; i++) {
    int min = i;
    for (j = i + 1; j < n; j++) {
      if (a[min] > a[j]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
  for(i=0;i<n-1;i++)
  {
       sum1=sum1+a[i];
  }
  for(i=1;i<n;i++)
  {
       sum2=sum2+a[i];
  }
  printf("%d %d",sum1,sum2);
}