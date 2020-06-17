#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct sums {
    long max;
    long min;
};

struct sums max_min_sums(int *arr, int size) {
    if(size < 1 || NULL == arr) {
        struct sums ret;
        ret.max = 0;
        ret.min=0;
        return ret;
    }
    long totalSum = arr[0];
    int max = arr[0], min = arr[0];
    for(int i = 1; i < size; i++) {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
        totalSum += arr[i];
    }
    struct sums ret;
    ret.max = totalSum - min;
    ret.min = totalSum - max;
    return ret;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    struct sums result = max_min_sums(arr, 5);
    printf("%ld %ld\n", result.min, result.max);
    return 0;
}
