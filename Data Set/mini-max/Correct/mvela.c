#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long min_sum = LLONG_MAX, max_sum = LLONG_MIN;
    for (int arr_i = 0; arr_i < 5; arr_i++) {
        scanf("%d",&arr[arr_i]);
    }
    for (int excluded = 0; excluded < 5; excluded++) {
        long long sum = 0;
        for (int arr_i = 0; arr_i < 5; arr_i++)
            if (arr_i != excluded)
                sum += arr[arr_i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > max_sum)
            max_sum = sum;
    }
    printf("%lld %lld\n", min_sum, max_sum);
    return 0;
}
