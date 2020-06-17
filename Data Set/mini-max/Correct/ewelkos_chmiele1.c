#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min = 0, max = 0, arr_i = 0, i = 0;
    long int sum_min = 0, sum_max = 0;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i] < arr[min]) min = arr_i;
       if(arr[arr_i] > arr[max]) max = arr_i;
    }
    
    for(i = 0 ; i < 5 ; i++)
    {
        if(i != max)
            sum_min += arr[i];
        if(i != min)
            sum_max += arr[i];
    }
    
    printf("%ld %ld\n", sum_min, sum_max);
    return 0;
}
