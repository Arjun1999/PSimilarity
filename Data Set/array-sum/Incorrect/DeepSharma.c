#include<stdio.h>
#include<math.h>
int main()
{
int a[15],i,sum=0,n;

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
    printf("%d",sum);
}