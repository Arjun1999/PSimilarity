#include<stdio.h>
int main()
{
    int a[5],i,sum=0,sum1,sum2;
    int s,t;
    printf("Enter five number:\n");
    for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
}
s=a[0];
for(i=1;i<=4;i++)
{
    if(s<a[i])
    s=a[i];
}
t=a[0];
for(i=1;i<=4;i++)
{
    if(t>a[i])
    t=a[i];
}
for(i=0;i<=4;i++)
{
    sum=sum+a[i];
}
sum1=sum-s;
sum2=sum-t;
printf("your minimum sum is %d\n",sum1);
printf("your maximum sum is %d\n",sum2);
}