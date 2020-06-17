#include<stdio.h>
#include<conio.h>
void main()
{
  longlong int a[5],min,max,sum=0;
  int i
    scanf("%lld",&a[0]);
  max=a[0];min=a[0];sum=a[0]+sum;
  for(1=1;i<5;i++)
  {
    scanf("%lld",&a[i]);
    if (max<a[i])
      max=a[i];
    if (min>a(i))
      min=a[i];
    sum=sum+a[i];
  }
  printf("%lld %lld",max,min,sum);
  return 0
}