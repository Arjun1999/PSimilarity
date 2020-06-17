#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long int min = 999999999999, max = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (int y = 0; y < 5; y++) {
        long long int sum = 0;
        for (int x = 0; x < 5; x++) {
            if(x != y) sum += arr[x];
        }
        if(sum < min) min = sum;
        if(sum > max) max = sum;
    }
    free(arr);
    printf("%lld %lld\n", min, max);
    return 0;
}
