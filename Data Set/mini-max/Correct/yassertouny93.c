#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int max_ind,max=0, min_ind,min=2147483646;
    long sum_max=0,sum_min=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i] > max)
        {
          max =  arr[arr_i];
          max_ind=arr_i;
        }
        
        if(arr[arr_i] < min)
        {
          min =  arr[arr_i];
          min_ind=arr_i;
        }
        
    }
    
    for (int i=0 ; i< 5 ; i++)
    {
        if(i != max_ind) sum_min+=arr[i];
        
        if(i != min_ind) sum_max+=arr[i];

    }
    
    printf("%ld %ld",sum_min,sum_max);
    return 0;
}
