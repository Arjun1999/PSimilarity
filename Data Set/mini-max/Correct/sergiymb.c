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
    int max = 0, min = INT_MAX;
    long long sum = 0;
    for (int iter = 0; iter < 5; iter++)
    {
        sum += arr[iter];
        if (arr[iter] > max)
        {
            max = arr[iter];
        }
        if (arr[iter] < min)
        {
            min = arr[iter];
        }
    }
    printf("%lld %lld\n", sum - max, sum - min);
    return 0;
}
