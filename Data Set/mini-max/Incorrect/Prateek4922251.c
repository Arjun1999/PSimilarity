#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,a[10],sum=0,max=a[0],min=a[0],maxsum,minsum;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    minsum=sum-max;
    maxsum=sum-min;
    printf("%d\t%d",minsum,maxsum);
    return 0;
}
