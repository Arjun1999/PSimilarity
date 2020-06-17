#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min_s = 0, max_s = 0, sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < 5; arr_i++){
       sum += arr[arr_i];
    }
    min_s = max_s = sum - arr[0];
    for(int arr_i = 1; arr_i < 5; arr_i++){
    if(min_s > sum - arr[arr_i])
        min_s = sum - arr[arr_i];
    
    if(max_s < sum - arr[arr_i])
        max_s = sum - arr[arr_i];
    }
    printf("%ld %ld",min_s, max_s);
    return 0;
}
