#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);long min=0,max=0,sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);sum+=arr[arr_i];
    }min=arr[0],max=arr[0];
    for(int arr_i=0;arr_i<5;arr_i++)
    {
       if(min>arr[arr_i])
           min=arr[arr_i];
        if(max<arr[arr_i])
            max=arr[arr_i];
    }
   long prmin=sum-max,prmax=sum-min;
    printf("%lu %lu",prmin,prmax);
    return 0;
}
