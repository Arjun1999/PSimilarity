#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

    long int a[100],i,j,b,max=0,sum=0,sum1,min=0,sum2;
    label: for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<=0)
        {
            goto label;
        }

    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
        min=max;
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(j=0;j<5;j++)
    {
        sum=sum+a[j];
    }
    sum1=sum-max;
    sum2=sum-min;
    printf("%ld %ld",sum1,sum2);
}

