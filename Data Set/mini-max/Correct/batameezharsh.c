#include <stdio.h>
int main()
{
int a[5];
unsigned long long i;
for (i=0;i<5;i++)
scanf("%d",&a[i]);
unsigned long long s=a[0],g=a[0],sum=a[0];
for (i=1;i<5;i++)
{
sum=sum+a[i];
if (s>a[i])
s=a[i];
if (g<a[i])
g=a[i];
}
printf("%lld %lld",(sum-g),(sum-s));
return 0;
}
