#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int min=0, max=0;
    long long int sum=0, minSum, maxSum;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       
       sum += arr[arr_i];
       if( arr_i == 0 ) {
           min = arr[arr_i];
           max = arr[arr_i];
       } else {
           if(arr[arr_i] < min) {
               min = arr[arr_i];
           }
           
           if(arr[arr_i] > max) {
               max = arr[arr_i];
           }
       }
    }
    
    minSum = sum-max;
    maxSum = sum-min;
    
    printf("%lld %lld", minSum, maxSum);

    return 0;
}
