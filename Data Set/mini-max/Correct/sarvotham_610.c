#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int min,max,i;
    long int minsum=0,maxsum=0;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=1;i<5;i++)
    {
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
    }
   /* for(i=0;i<5;i++)
    {
         if(arr[i]!=min)
         {
             maxsum+=arr[i];
         }
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]!=max)
        {
            minsum+=arr[i];
        }
    }*/
    for(i=0;i<5;i++)
    {
        minsum+=arr[i];
        maxsum+=arr[i];
    }
    minsum-=max;
    maxsum-=min;
    printf("%ld %ld\n",minsum,maxsum);
    
    return 0;
}
