#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long sum = 0;
    long long min;
    long long max;
    long long test_sum;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum += arr[arr_i];
    }
    // initialize min, max to sum excluding 1st array element
    min = max = sum - arr[0];
    // now check min/max excluding other array elements
    for(int arr_i = 1; arr_i < 5; arr_i++){
        test_sum = sum - arr[arr_i];
        if (test_sum < min)
            min = test_sum;
        if (test_sum > max)
            max = test_sum;
    }
    printf("%lld %lld", min, max);
    return 0;
}
