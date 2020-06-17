#include<stdio.h>
#include<stdlib.h>
int main()
{
long int a[5];
for(int i=0;i<5;i++)
{
scanf("%ld",&a[i]);
}
long int sum=a[1]+a[2]+a[3]+a[4];
long int min=sum;
long int max=sum;
for(int j=1;j<5;j++)
{
sum=a[0]+a[1]+a[2]+a[3]+a[4]-a[j];
if(sum<min)
{
min=sum;
}
if(sum>max)
{
max=sum;
}
}
printf("%ld %ld ",min,max);
}
