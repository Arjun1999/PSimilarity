#include <stdio.h>
int main() 
{
  int n, i, min = 0, max = 0;
  scanf("%d", &n);
  int a[100];
  for (i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
   {
    min =min+ a[i];
  }
  min = min - a[n-1];
  for (i = 0; i < n; i++)
   {
    max =max + a[i];
  }
  max = max - a[0];
  printf("%d %d", min, max);
  return 0;
}

