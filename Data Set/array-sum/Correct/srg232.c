#include <stdio.h>
#include <stdlib.h>

int main()
{
  int len, i, sum;
  int a[1000];

  scanf("%d", &len);
  sum = 0;
  for (i = 0; i < len; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  
  printf("%d\n", sum);
}
