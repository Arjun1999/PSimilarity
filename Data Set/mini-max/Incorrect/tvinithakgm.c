#include<stdio.h>
int main()
{
    int n=5,a[10],max,min,t,sum,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        t=sum-a[i];
    }
    for(i=0;i<n;i++)
    {
    a[0]=max=min;
    if(min<a[i])
        min=a[i];
     if(max>a[i])
        max=a[i];
    }
printf("%d\n%d",sum-min,sum-max);
   return 0;
}