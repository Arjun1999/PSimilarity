#include<stdio.h>
int mani()
{
    int a[4],i,j,max=0,b[4],min=0,sum=0;
    for(i=1;i<=4;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=4;i++)
    {
    for(j=1;j<=4;j++)
    {
        if(j==i)
        {
            continue;
        }
        else
        {
            sum=sum+a[j];
        }
    }
    b[i]=sum;
    }
    for(i=1;i<=4;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    min=max;
    for(i=1;i<=4;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}