#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
long long int a[n],i,sum=0;
for(i=0;i<n;i++)
{
          scanf("%lld",&a[i]);
          sum=sum+a[i];
}
printf("%lld",sum);
return 0;
}
