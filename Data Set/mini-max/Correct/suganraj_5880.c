#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
  long int a[5],i,j,sum[5],min,max;
    
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
        sum[i]=0;
    }
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            if(i!=j)
                sum[i]=sum[i]+a[j];
        }
    min=sum[0];
    max=sum[0];
    for(i=0;i<5;i++)
    {
        if(sum[i]<min)
            min=sum[i];
        if(sum[i]>max)
            max=sum[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
