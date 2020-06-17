#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min=9999,max=0;
    long int min_sum=0,max_sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(min>arr[arr_i])
            min=arr[arr_i];
        if(max<arr[arr_i])
            max=arr[arr_i];
    }
    for(int arr_i=0;arr_i<5;arr_i++)
    {
        if(arr[arr_i]!=min)
            max_sum+=arr[arr_i];
        if(arr[arr_i]!=max)
            min_sum+=arr[arr_i];
    }
    printf("%ld %ld",min_sum,max_sum);
    
    return 0;
}
