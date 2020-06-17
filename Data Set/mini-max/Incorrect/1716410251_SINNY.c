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
    int arr[100],i,sum1=0,sum2=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(i>1)
    {
    for(i=1;i<5;i++)
    {
        sum1=sum1+arr[i];
    }
    }
    else
        sum2=sum2+arr[i];
    return 0;
}