#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5],i,max,min;
    long int sum=0;
    max=a[0];
    min=a[0];

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
        max=a[i];
    if(a[i]<min)
        min=a[i];
    }

        sum=sum+a[i];

    printf("%ld  %ld",sum-max,sum-min);
}