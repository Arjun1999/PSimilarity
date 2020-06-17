#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    long long int *sums = malloc(sizeof(long long int) * 5);
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lli",&arr[arr_i]);
    }
    
    sums[0] = arr[1] +arr[2] +arr[3] +arr[4];
    sums[1] = arr[0] +arr[2] +arr[3] +arr[4];
    sums[2] = arr[0] +arr[1] +arr[3] +arr[4];
    sums[3] = arr[0] +arr[1] +arr[2] +arr[4];
    sums[4] = arr[0] +arr[1] +arr[2] +arr[3];

    long long int minSum = sums[0];
    long long int maxSum = sums[0];
    
    for(int index = 0; index < 5; index++){
        minSum = minSum > sums[index]? sums[index] : minSum;
        maxSum = maxSum < sums[index]? sums[index] : maxSum;
    }
    
    printf("%lli %lli", minSum, maxSum);
    return 0;
}
