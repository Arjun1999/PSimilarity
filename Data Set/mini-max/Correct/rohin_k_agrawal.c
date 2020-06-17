#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    unsigned long int amax=0, amin=0; 
    int max=0,min=0,i=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    for (i=0;i<5;i++)
    {
        if (arr[max]>arr[i])
        {
            max=i;
        }
        if (arr[min]<arr[i])
        {
            min=i;
        }
    }
    for (i=0;i<5;i++)
    {
        if (i==max)
        {}
        else
        {
            amin=amin+arr[i];
        }
    }

    for (i=0;i<5;i++)
    {
        if (i==min)
        {}
        else
        {
            amax=amax+arr[i];
        }
    }
    printf("%lu %lu",amax,amin);
    return 0;
}