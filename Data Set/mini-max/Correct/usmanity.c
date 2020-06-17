#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long long min = 0;
    long long max = 0;
    for (int i = 0; i < 5; i++) {
        long long num = 0;
        for (int j = 0; j < 5; j++) {
            num += arr[j];
        }
        num = num - arr[i];
        if (min == 0) {
            min = num;
        }
        if (max == 0) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    printf("%lld %lld\n", min, max);
    return 0;
}
