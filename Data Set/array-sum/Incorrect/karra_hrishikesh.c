#include <stdio.h>
int main() {
  int i,n,k=0;
  scanf("%d",&n);
  char a[n];
  for (i = 0; i < n; i++)
    {scanf("%d", &a[i]);
    k=k+a[i];}
  printf("%d", k);
}