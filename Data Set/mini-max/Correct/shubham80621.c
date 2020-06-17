#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min,max;
    long min_s,max_s;
    long sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    max=arr[0];
    min=max;
     for(int arr_i = 0; arr_i < 5; arr_i++)
     {
        if(min>arr[arr_i]) 
            min=arr[arr_i];
           
        if(max<arr[arr_i])
            max=arr[arr_i];
         
    }
    
    min_s=sum-max;
    max_s=sum-min;
    printf("%lu %lu",min_s,max_s);
    return 0;
}
