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
    unsigned long long min = 1ull<<63;
    unsigned long long max = 0;
    for (int skip = 0; skip < 5; ++skip) {
        unsigned long long sum = 0;
        for (int pos = 0; pos < 5; ++pos) {
            if (pos == skip) { continue; }
            sum += arr[pos];
        }
        if (sum < min) { min = sum; }
        if (sum > max) { max = sum; }
    }
    printf("%llu %llu", min, max);
    return 0;
}
