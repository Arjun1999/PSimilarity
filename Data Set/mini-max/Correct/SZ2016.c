#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum = 0;
    int min,max;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr_i == 0){
           min=arr[arr_i];
           max=min;
       }
       min=min>arr[arr_i]? arr[arr_i]:min;
       max=max<arr[arr_i]? arr[arr_i]:max;
       sum+=arr[arr_i];
    }
    printf("%ld %ld",sum-max,sum-min);
    
    return 0;
}
