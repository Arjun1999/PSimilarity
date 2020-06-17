#include<stdio.h>
int main()
{
    int i,j,n,t;
    int max=0,min=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    i=1;
    while(i<n)
    {
        max=max+a[i];
        i++;
    }
    i=0;
    while(i<(n-1))
    {
        min=min+a[i];
        i++;
    }
    printf("%ld   %ld",min,max);
    return 0;
}