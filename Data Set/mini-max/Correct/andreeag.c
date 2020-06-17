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
    int pos_min = 0, pos_max = 0;
    long sum_min = 0, sum_max = 0;
    for(int arr_i = 1; arr_i < 5; arr_i++){
        if(arr[arr_i] < arr[pos_min]) pos_min = arr_i;
        if(arr[arr_i] > arr[pos_max]) pos_max = arr_i;
    }
    for(int arr_i = 0; arr_i < 5; arr_i ++){
        if(arr_i != pos_min) sum_max += arr[arr_i];
        if(arr_i != pos_max) sum_min += arr[arr_i];
    }
    printf("%ld %ld", sum_min, sum_max);
    return 0;
}
