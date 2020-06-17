#include<stdio.h>
int main()
{
    int a[10],n,i,min=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=min+a[i];
    }
    for(i=1;i<n;i++)
    {
        max=max+a[i];
    }
    printf("%d %d",min,max);
}
