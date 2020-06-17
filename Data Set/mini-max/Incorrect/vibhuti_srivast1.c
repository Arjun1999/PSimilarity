#include <stdio.h>
int main() 
{
  int temp, a[100], i, j, n, min = 0, max = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n - 1; i++)
  for (j = 0; j < n - 1 - i; j++) 
  {
      if (a[j] > a[j + 1]) 
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
  }
 for (i = 0; i < n - 1; i++) 
 {
    min = min + a[i];
 }
  printf("%d", min);
  for (i = 1; i < n; i++) 
  {
    max = max + a[i];
  }
  printf("%d", max);
  return 0;
}
