#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int min_buff,max_buff,arr_i,arr_j;
    unsigned long int sum;
    int arr_size = 5;
    int *arr = malloc(sizeof(int) * arr_size);
    for(arr_i = 0; arr_i < arr_size; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    min_buff = arr[0];
    max_buff = arr[0];
    sum = arr[0];
    for (arr_j = 1;arr_j < (arr_size);arr_j++)
    {
        if (arr[arr_j] > max_buff)
           max_buff = arr[arr_j];
        if (arr[arr_j] < min_buff)
           min_buff = arr[arr_j];

        sum = sum+arr[arr_j];
    }

    printf("%lu %lu\n",(sum - max_buff),(sum-min_buff));
    return 0;
}
