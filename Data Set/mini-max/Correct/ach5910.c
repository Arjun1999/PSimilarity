#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long sum;
    int max;
    int min;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum = 0;
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < 5;i++){
        if(arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
        sum += arr[i];
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
