#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum = sum + arr[arr_i];
    }
    long min = sum;
    long max = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
        long x = sum - arr[arr_i];
        if (max < x)
            {
            max = x;
        }
         if (x<min)
            {
            min = x;
        }
    }
    printf("%ld %ld", min, max);
    return 0;
}
