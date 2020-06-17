#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int i, min = 1, max = 1, sum = 0;
    for (i = 0; i < arr_size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
        sum += *(arr + i);
    }
    printf("%d %d\n", (sum - max), (sum - min));
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
