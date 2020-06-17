#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    long sum = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum = sum + arr[arr_i];
    }
    long min;
    long max;
    long result = 0;
    for(int i = 0; i < 5; i++){
        result = sum - arr[i];
        if (i == 0){
            max = result;
            min = result;
        }
        if (result > max) max = result;
        if (result < min) min = result;
    }    
    printf("%ld %ld",min,max);
    return 0;
}
