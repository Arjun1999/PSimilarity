#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int64_t *sum = malloc(sizeof(int) * 5);
    int64_t max, min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    for(int i = 0; i < 5; ++i){
        sum[i] = 0;
        for(int k = 0; k < 5; ++k){
            sum[i] += arr[k];
        }
        sum[i] -= arr[i];
    }

    max = sum[0];
    min = sum[0];

    for(int j = 0; j < 5; ++j){
        if(sum[j]>max){
            max = sum[j];
        } else if(sum[j]<min){
            min = sum[j];
        }
    }

    printf("%ld %ld\n", min, max);

    return 0;
}
