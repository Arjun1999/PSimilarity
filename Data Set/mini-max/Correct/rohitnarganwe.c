#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long max,min,sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    max=arr[0];
    min=arr[0];
    for(int arr_i = 0; arr_i < 5; arr_i++){
        if(max<arr[arr_i])
            max=arr[arr_i];
        if(min>arr[arr_i])
            min=arr[arr_i];
    }
    for(int arr_i = 0; arr_i < 5; arr_i++){
    sum=sum+arr[arr_i];
    }
    printf("%ld %ld",sum-max,sum-min);
    
    return 0;
}
