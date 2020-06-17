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
    int n,i,sum1=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {  scanf("%d",&arr[i]);}
    int max=arr[0],min=arr[0];
    for(i=1;i<n;i++)
    {if(arr[i]>=max)
        max=arr[i];
     if(arr[i]<=min)
         min=arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum1=sum1+arr[i];
    }
    printf("%d %d",sum1-max,sum1-min);
    return 0;
}