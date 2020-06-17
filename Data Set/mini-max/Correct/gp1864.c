#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long ttlSum = 0;
    int minIx, maxIx;

    minIx = maxIx = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       if ( arr[minIx] > arr[arr_i] ) minIx = arr_i;
       if ( arr[maxIx] < arr[arr_i] ) maxIx = arr_i;
       ttlSum += arr[arr_i];
    }
    printf("%lld %lld\n", ttlSum - arr[maxIx], ttlSum - arr[minIx]);
    return 0;
}
