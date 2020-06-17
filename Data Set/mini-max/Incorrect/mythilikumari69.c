#include<stdio.h>
int main()
{
    int i,n,a[40],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    printf("%d ",sum);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d ",sum);
}
