#include<stdio.h>
int main()
{
  int i,n,x,a[1001];
  x=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf(" %d ",&a[i]);
    x+=a[i];
  }
  printf("%d",x);
}