#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define IDX_MIN 0
#define IDX_MAX 1

void solver(int* array, long int* result) {
    
    for (int i = 0; i < 5; i++) {
        long int sum = 0;
        // sum everything except i
        for (int j = 0; j < 5; j++) {
            if (j != i) {
                sum += array[j];
            }
        }
        // init
        if (0 == i) {
            result[IDX_MIN] = result[IDX_MAX] = sum;
        } else {
            if (sum < result[IDX_MIN]) {
                result[IDX_MIN] = sum;
            }
            if (sum > result[IDX_MAX]) {
                result[IDX_MAX] = sum;
            }
        }
    }
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int *res = malloc(sizeof(long int) * 2);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    solver(arr, res);
    printf("%ld %ld", res[0], res[1]);
    return 0;
}
