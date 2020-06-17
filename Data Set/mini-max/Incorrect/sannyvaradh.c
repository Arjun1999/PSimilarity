#include<stdio.h>
int main()
{
    int n=5,a[10],sum=0,c,i,max,min;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        c=sum-a[i];
    }
    max=min=a[0];
    if(min<a[i])
        min=a[i];
    if(max>a[i])
        max=a[i];
    printf("%d %d",sum-max,sum-min);
    return 0;
}