#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min = pow(10, 9)+1;
    long sum = 0;
    int max = -1;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum += arr[arr_i];
        if(max<arr[arr_i])
            max=arr[arr_i];
        if(min>arr[arr_i])
            min=arr[arr_i];
    }
    printf("%lu %lu", sum-max, sum-min);
    return 0;
}
