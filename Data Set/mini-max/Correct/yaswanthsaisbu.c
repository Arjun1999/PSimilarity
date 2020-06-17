#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  long i,a[10000],b,c,sum=0,max=a[0];
    
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    } 
   long min=a[0];
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    b=sum-max;
    c=sum-min;
    printf("%ld %ld",b,c);
    
    return 0;
}
