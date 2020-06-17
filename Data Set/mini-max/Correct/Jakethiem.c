#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int min(long long int* arr, int arr_size) {
    long long int min = LONG_MAX;
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
}

long long int max(long long int* arr, int arr_size) {
    long long int max = LONG_MIN;
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    int arrays[5][4];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0, x = 0; j < 5; j++) {
            if (j != i){
                arrays[i][x++] = arr[j];
            }
        }
    }
    
    long long int sums[5] = {0};
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            sums[i]+=(long long int)arrays[i][j];
        }
    }
    
    printf("%lld %lld", min(&sums[0], 5), max(&sums[0], 5));
    
    return 0;
}
