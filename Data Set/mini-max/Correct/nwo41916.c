#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long minx=1e9+1;
    long maxx=0;
    long sum=0;
    for(int i=0;i<5;i++)
        {
        if(arr[i]<minx)
            minx=arr[i];
        if(arr[i]>maxx)
            maxx=arr[i];
        sum+=arr[i];
            
    }
      printf("%lu %lu",sum-maxx,sum-minx);
    return 0;
}
