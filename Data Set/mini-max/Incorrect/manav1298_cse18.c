#include<stdio.h>
int main()
{
    int i,n,ar[100],a=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n-1)
        {
            a=a+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i>0 && i<n)
        {
            m=m+ar[i];
        }
    }
    printf("%d %d",a,m);
    return 0;
}
