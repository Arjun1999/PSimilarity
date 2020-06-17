#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,j,sum,sum1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    
    for(j=1;j<n;j++)
    {
        sum1=sum1+a[j];
    }
    printf("%d %d",sum,sum1);
    return 0;
}