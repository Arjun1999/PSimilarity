#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i, j;
    int key;
    unsigned long long int sum1 = 0, sum2 = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (j = 1; j < 5; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
    for (i = 0; i < 4; i++)
         sum1 += arr[i];
    for (i = 1; i < 5; i++)
         sum2 += arr[i];
    printf("%lld %lld\n", sum1, sum2);
    return 0;
}
