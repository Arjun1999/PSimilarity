#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int min_index(int *arr,  int N) {
    int min = 0;
    for (int j = 1; j < N; ++j)
        if (arr[j] < arr[min])
            min = j;
    return min;
}

int max_index(int *arr,  int N) {
    int max = 0;
    for (int j = 1; j < N; ++j)
        if (arr[j] > arr[max])
            max = j;
    return max;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long long max = 0;
    long long min = 0;
    
    int max_i = max_index(arr, 5);
    int min_i = min_index(arr, 5);
    
    for (int i = 0; i < 5; ++i) {
        if (i == max_i)
            continue;
        max += arr[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (i == min_i)
            continue;
        min += arr[i];
    }
    
    printf("%lld %lld", max, min);

    return 0;
}
