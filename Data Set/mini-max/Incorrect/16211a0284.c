#include<stdio.h>
int main()
{
    int a[10000],n,i,sum=0,min,max,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i]; 
    }
   // printf("%d",sum)
    a[max]=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    a[min]=0;
    for(i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    printf("%d",sum1);
}
